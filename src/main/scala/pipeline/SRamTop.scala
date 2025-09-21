package pipeline

import chisel3._
import chisel3.util._
import chisel3.experimental._
import chisel3.util.experimental._

class SRamTop(val programFile:Option[String]) extends Module {
    val io = IO(new Bundle {
        val req = Flipped(Decoupled(new MemRequestIO))
        val rsp = Decoupled(new MemResponseIO)
    })
    
    val state_reg = dontTouch(RegInit(0.U))
    state_reg := MuxCase(state_reg, Vector(
      (state_reg === 0.U) || ((state_reg === 2.U) && io.rsp.ready),  // ready
      (state_reg === 1.U) && io.req.valid  // valid
    ).zipWithIndex.map(
      s => s._1 -> (s._2 + 1).U
    ))
    io.rsp.valid := state_reg === 2.U
    io.req.ready := state_reg === 1.U

    val rdata = Wire(UInt(32.W))

    //Memory
    val sram = Module(new sram_top(programFile))

    val clk = WireInit(clock.asUInt)
    val rst = Wire(Bool())
    rst := reset.asBool

    sram.io.clk := clk
    sram.io.reset := rst
    sram.io.we := false.B
    sram.io.wmask := 0.U
    sram.io.addr := 0.U
    sram.io.data_i := 0.U


   // rdata := sram.io.data_o

        dontTouch(io.req.valid)
        dontTouch(io.req.bits.isWrite)
        when(io.req.valid && !io.req.bits.isWrite) {
            // READ
            sram.io.we := false.B
            sram.io.addr := io.req.bits.addrRequest
            rdata := sram.io.data_o
        }.elsewhen(io.req.valid && io.req.bits.isWrite) {
            // WRITE
            sram.io.we := true.B
            sram.io.wmask := io.req.bits.activeByteLane
            sram.io.addr := io.req.bits.addrRequest
            sram.io.data_i := io.req.bits.dataRequest
            rdata := 0.U
        }.otherwise {
            rdata := 0.U
        }
    io.rsp.bits.dataResponse := sram.io.data_o
}

class SRAMIO extends Bundle {
    val clk = Input(Bool())
    val reset = Input(Bool())
    val we = Input(Bool())
    val addr = Input(UInt(28.W))
    val data_i = Input(UInt(32.W))
    val wmask = Input(UInt(4.W))
    val data_o = Output(UInt(32.W))
}

class sram_top(programFile:Option[String] ) extends BlackBox(
    Map("IFILE" -> {if (programFile.isDefined) programFile.get else ""})
) with HasBlackBoxResource {
    println(programFile.isDefined)
    println(programFile.get)
    val io = IO(new SRAMIO)
    addResource("/sram_top.v")
}
