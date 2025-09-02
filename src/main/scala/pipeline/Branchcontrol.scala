package pipeline
import chisel3._
import chisel3.util._

class Branchcontrol extends Module {
  val io = IO(new Bundle {
    val RS1 = Input(SInt(32.W))
    val RS2 = Input(SInt(32.W))
    val func3 = Input(UInt(3.W))
    val branchctrl = Output(Bool())
  })
  io.branchctrl := false.B

  when(io.func3 === "b000".U) {
    when(io.RS1 === io.RS2) {
      io.branchctrl := 1.B
    }
    }.elsewhen(io.func3 === "b001".U) {
        when(io.RS1 =/= io.RS2) {
            io.branchctrl := 1.B
        }
    }.elsewhen(io.func3 === "b100".U) {
        when(io.RS1 < io.RS2) {
            io.branchctrl := 1.B
        }
    }.elsewhen(io.func3 === "b101".U) {
        when(io.RS1 >= io.RS2) {
            io.branchctrl := 1.B
        }
    }.elsewhen(io.func3 === "b110".U) {
        when(io.RS1.asUInt < io.RS2.asUInt) {
            io.branchctrl := 1.B
        }
    }.elsewhen(io.func3 === "b111".U) {
        when(io.RS1.asUInt >= io.RS2.asUInt) {
            io.branchctrl := 1.B
        }
    }.otherwise {
        io.branchctrl := 0.B

    }
}