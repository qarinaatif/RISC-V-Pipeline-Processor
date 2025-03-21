package pipeline
import chisel3._
import chisel3.util._

class ForwwardingUnit extends Module {
  val io = IO(new Bundle {
    val RegWriteMEM = Input(Bool())
    val RegWriteWB = Input(Bool())
    val RD_EX = Input(UInt(5.W))
    val RD_ME = Input(UInt(5.W))
    val Rs1_EX = Input(UInt(5.W))
    val Rs2_EX = Input(UInt(5.W))
    val ForwardA = Output(UInt(2.W))
    val ForwardB = Output(UInt(2.W))
  })

  io.ForwardA := MuxCase(0.U, Seq(
    (io.RegWriteMEM && (io.RD_EX =/= 0.U) && (io.RD_EX === io.Rs1_EX)) -> 2.U,
    (io.RegWriteWB && (io.RD_MEM =/= 0.U) && (io.RD_MEM === io.Rs1_EX)) -> 1.U
  ))

  io.ForwardB := MuxCase(0.U, Seq(
    (io.RegWriteMEM && (io.RD_EX =/= 0.U) && (io.RD_EX === io.Rs2_EX)) -> 2.U,
    (io.RegWriteWB && (io.RD_MEM =/= 0.U) && (io.RD_MEM === io.Rs2_EX)) -> 1.U
  ))
}