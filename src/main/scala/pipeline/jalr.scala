package pipeline
import chisel3._
import chisel3.util._

class jalr extends Module {
  val io = IO (new Bundle {
	val rs1 = Input(SInt(32.W))
	val imme = Input(SInt(32.W))
	val out = Output(SInt(32.W))
  })
	val pc = io.rs1 + io.imme
	io.out := pc & 4294967294L.S
}