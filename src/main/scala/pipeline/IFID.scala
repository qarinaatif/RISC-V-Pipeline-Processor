package pipeline
import chisel3._
import chisel3.util._

class IFID extends Module {
  val io = IO(new Bundle {
    val Instr       = Input(UInt(32.W))
    val PCout       = Input(UInt(32.W))
    val PC4out      = Input(UInt(32.W))
    val flush       = Input(Bool())
    val Instr_IFID  = Output(UInt(32.W))
    val PCout_IFID  = Output(UInt(32.W))
    val PC4out_IFID = Output(UInt(32.W))
  })
  val Instr_reg  = RegInit(0.U(32.W))
  val PCout_reg  = RegInit(0.U(32.W))
  val PC4out_reg = RegInit(0.U(32.W))

  when (io.flush) {
    Instr_reg  := 0.U
    PCout_reg  := 0.U
    PC4out_reg := 0.U
  }.otherwise {
    Instr_reg  := io.Instr
    PCout_reg  := io.PCout
    PC4out_reg := io.PC4out
  }

  io.Instr_IFID  := Instr_reg
  io.PCout_IFID  := PCout_reg
  io.PC4out_IFID := PC4out_reg
}



