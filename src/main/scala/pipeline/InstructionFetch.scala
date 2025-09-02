package pipeline
import chisel3._
import chisel3.util._ 


class InstructionFetch extends Module {
  val io = IO(new Bundle {
    val address = Input(UInt(32.W))
    val instruction = Output(UInt(32.W))
    val stall = Input(Bool())
    val coreInstrReq = Decoupled(new MemRequestIO)
    val coreInstrResp = Flipped(Decoupled(new MemResponseIO))
  })

    when (io.stall) {
      io.coreInstrResp.ready := 0.U 
      io.coreInstrReq.valid := 0.U 
      io.coreInstrReq.bits.activeByteLane := "b0000".U
      io.coreInstrReq.bits.isWrite := false.B
      dontTouch(io.coreInstrReq.bits.isWrite)
      io.coreInstrReq.bits.dataRequest := DontCare
      io.coreInstrReq.bits.addrRequest := 0.U
      io.instruction := 0.U
    }.otherwise {
      io.coreInstrResp.ready := 1.B 
      io.coreInstrReq.valid := 1.B 
      io.coreInstrReq.bits.activeByteLane := "b1111".U
      io.coreInstrReq.bits.isWrite := false.B
      dontTouch(io.coreInstrReq.bits.isWrite)
      io.coreInstrReq.bits.dataRequest := DontCare
      io.coreInstrReq.bits.addrRequest := io.address
      io.instruction := io.coreInstrResp.bits.dataResponse
    }
    
}