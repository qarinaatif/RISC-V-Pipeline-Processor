package pipeline
import chisel3._
import chisel3.util._

class Forward extends Module {
  val io = IO(new Bundle {
    val RS1 = Input(UInt(5.W))
    val RS2 = Input(UInt(5.W))
    val MEMWB_RegWrite = Input(Bool())
    val MEMWB_RD = Input(UInt(5.W))
    val RS1OUT = Output(Bool())
    val RS2OUT = Output(Bool())
  })
  when(io.MEMWB_RegWrite && io.MEMWB_RD === io.RS1) {io.RS1OUT := true.B
  }.otherwise {io.RS1OUT := false.B
  }
  when(io.MEMWB_RegWrite && io.MEMWB_RD === io.RS2) {io.RS2OUT := true.B
  }.otherwise {io.RS2OUT := false.B
  }
}