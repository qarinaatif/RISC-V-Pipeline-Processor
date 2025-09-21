package pipeline
import chisel3._
import chisel3.util._

class Branch extends Module {
  val io = IO(new Bundle {
    val arg_x = Input(SInt(32.W))
    val arg_y = Input(SInt(32.W))
    val func3 = Input(UInt(3.W))
    val branch = Input(Bool())//
    val br_taken= Output(Bool())//
  })

  io.br_taken := false.B

  when(io.func3 === "b000".U){when(io.arg_x === io.arg_y){
        io.br_taken := 1.B
    }
  }.elsewhen(io.func3 === "b001".U){when(io.arg_x =/= io.arg_y){
         io.br_taken := 1.B
    }
  }.elsewhen(io.func3 === "b100".U){when(io.arg_x < io.arg_y){
      io.br_taken := 1.B
    }
  }.elsewhen(io.func3 === "b101".U){when(io.arg_x >= io.arg_y){
        io.br_taken := 1.B
    }
  }.elsewhen(io.func3 === "b110".U){when(io.arg_x.asUInt < io.arg_y.asUInt){
        io.br_taken := 1.B
    }
  }.elsewhen(io.func3 === "b111".U){when(io.arg_x.asUInt >= io.arg_y.asUInt){
        io.br_taken := 1.B
    }
  }.otherwise {
    io.br_taken := 0.B
  }

}