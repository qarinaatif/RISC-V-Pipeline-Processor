package pipeline
import chisel3._
import chisel3.util._

class RegisterFile extends Module {
  val io = IO(new Bundle {
    val RegWrite = Input(UInt(1.W))
    val rs1 = Input(UInt(5.W))
    val rs2 = Input(UInt(5.W))
    val rd = Input(UInt(5.W))
    val instruction = Input(UInt(32.W))
    val writeData = Input(UInt(32.W))
    val readData1 = Output(UInt(32.W))
    val readData2 = Output(UInt(32.W))
  })
  val reg = RegInit(VecInit(Seq.fill(32)(0.U(32.W))))
  val Rs1 = io.instruction(19,15)
  val Rs2 = io.instruction(24,20)

  io.readData1 := Mux(Rs1 =/= 0.U, reg(Rs1), 0.U)
  io.readData2 := Mux(Rs2 =/= 0.U, reg(Rs2), 0.U)

  when(io.RegWrite === 1.U && io.rd =/= 0.U) {
    reg(io.rd) := io.writeData
  }
}