package pipeline
import chisel3._
import chisel3.util._

class Forward extends Module {
  val io = IO(new Bundle {
    val RS1 = Input(UInt(5.W))
    val RS2 = Input(UInt(5.W))
    val MEMWB_RegWrite = Input(Bool())
    val MEMWB_RD = Input(UInt(5.W))
    val RS1OUT = Output(UInt(1.W))
    val RS2OUT = Output(UInt(1.W))
  })
  when(io.MEMWB_RegWrite && io.MEMWB_RD === io.RS1) {
    io.RS1OUT := 1.U
  }.otherwise {
    io.RS1OUT := 0.U
  }
  when(io.MEMWB_RegWrite && io.MEMWB_RD === io.RS2) {
    io.RS2OUT := 1.U
  }.otherwise {
    io.RS2OUT := 0.U
  }
}