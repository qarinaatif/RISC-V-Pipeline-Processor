package pipeline
import chisel3._
import chisel3.util._

class BranchControl extends Module {
    val io = IO(new Bundle {
        val fnct3 = Input(UInt(3.W))
        val opcode = Input(UInt(7.W))
        val arg_x = Input(SInt(32.W))
        val arg_y = Input(SInt(32.W))
        val br_taken = Output(Bool())
        val branch = Output(Bool())
    })
    io.branch := false.B
    io.br_taken := false.B


    when(io.opcode === "b1100011".U) {
        io.branch := true.B
        when(io.fnct3 === 0.U) {when(io.arg_x === io.arg_y){
            io.br_taken := true.B
            }
        }
        .elsewhen(io.fnct3 === 1.U) {when(io.arg_x =/= io.arg_y){
            io.br_taken := true.B
            }
        }
        .elsewhen(io.fnct3 === 4.U) {when(io.arg_x < io.arg_y){
            io.br_taken := true.B
            }
        }
        .elsewhen(io.fnct3 === 5.U) {when(io.arg_x >= io.arg_y){
            io.br_taken := true.B
            }
        }
        .elsewhen(io.fnct3 === 6.U) {when(io.arg_x.asUInt < io.arg_y.asUInt){
            io.br_taken := true.B
            }
        }
        .elsewhen(io.fnct3 === 7.U) {when(io.arg_x.asUInt >= io.arg_y.asUInt){
            io.br_taken := true.B
            }
        }
    }
}