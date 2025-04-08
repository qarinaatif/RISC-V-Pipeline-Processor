package pipeline
import chisel3._
import chisel3.util._

class IFID extends Module {
  val io = IO(new Bundle {
    val Instr = Input(UInt(32.W))
    val PCout = Input(UInt(32.W))
    val Stall = Input(UInt(1.W))

    val InstrD = Output(UInt(32.W))
    val PCoutD = Output(UInt(32.W))
  })

  val Instr_reg = RegNext(io.Instr,0.U(32.W))
  val PCout_reg = RegNext(io.PCout,0.U(32.W))
  when (io.Stall === "b0".U){
    io.InstrD := Instr_reg
    io.PCoutD := PCout_reg
  }.elsewhen(io.Stall === "b1".U){
    io.InstrD := 0.U
    io.PCoutD := 0.U
  }.otherwise{
    io.InstrD := 0.U
    io.PCoutD := 0.U
  }
}



