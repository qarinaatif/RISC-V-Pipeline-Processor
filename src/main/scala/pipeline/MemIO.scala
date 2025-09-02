package pipeline

import chisel3._

class MemRequestIO extends Bundle {
  val addrRequest: UInt = Input(UInt(32.W))
  val dataRequest: UInt = Input(UInt(32.W))
  val activeByteLane: UInt = Input(UInt(4.W))
  val isWrite: Bool = Input(Bool())
  // println("here")
}

class MemResponseIO extends Bundle {
  val dataResponse: UInt = Input(UInt(32.W))
}
