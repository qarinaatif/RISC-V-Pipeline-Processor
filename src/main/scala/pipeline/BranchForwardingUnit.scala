package pipeline
import chisel3._
import chisel3.util._

class BranchForwardingUnit extends Module {
  val io = IO(new Bundle {
    val IDEX_RD  = Input(UInt(5.W))
    val EXMEM_RD = Input(UInt(5.W))
    val MEMWB_RD = Input(UInt(5.W))
    val IDEX_MemRead = Input(UInt(1.W))
    val EXMEM_MemRead = Input(UInt(1.W))
    val MEMWB_MemRead = Input(UInt(1.W))
    val RS1 = Input(UInt(5.W))
    val RS2 = Input(UInt(5.W))
    val Branch = Input(UInt(1.W))
    val forward_rs1 = Output(UInt(4.W))
    val forward_rs2 = Output(UInt(4.W))
  })
  
  io.forward_rs1 := "b0000".U
  io.forward_rs2 := "b0000".U

  when(io.Branch === 1.U) {
    when(io.IDEX_RD =/= 0.U && io.IDEX_MemRead =/= 1.U) {
      when(io.IDEX_RD === io.RS1 && io.IDEX_RD === io.RS2) {
         io.forward_rs1 := "b0001".U
         io.forward_rs2 := "b0001".U
      }.elsewhen(io.IDEX_RD === io.RS1) {io.forward_rs1 := "b0001".U
      }.elsewhen(io.IDEX_RD === io.RS2) {io.forward_rs2 := "b0001".U
      }
    }
    when(io.EXMEM_RD =/= 0.U && io.IDEX_MemRead =/= 1.U) {
      when(io.EXMEM_RD === io.RS1 && io.EXMEM_RD === io.RS2 && !(io.IDEX_RD =/= 0.U && io.IDEX_RD === io.RS1 && io.IDEX_RD === io.RS2)) {
        io.forward_rs1 := "b0010".U
        io.forward_rs2 := "b0010".U
      }.elsewhen(io.EXMEM_RD === io.RS1 && !(io.IDEX_RD =/= 0.U && io.IDEX_RD === io.RS1)) {io.forward_rs1:= "b0010".U
      }.elsewhen(io.EXMEM_RD === io.RS2 && !(io.IDEX_RD =/= 0.U && io.IDEX_RD === io.RS2)) {io.forward_rs2 := "b0010".U
      }
    }
    when(io.MEMWB_RD =/= 0.U && io.MEMWB_MemRead =/= 1.U) {
      when(io.MEMWB_RD === io.RS1 && io.MEMWB_RD === io.RS2 && !(io.IDEX_RD =/= 0.U && io.IDEX_RD === io.RS1 && io.IDEX_RD === io.RS2) && !(io.EXMEM_RD =/= 0.U && io.EXMEM_RD === io.RS1 && io.EXMEM_RD === io.RS2)) {
        io.forward_rs1 := "b0011".U
        io.forward_rs2 := "b0011".U
      }.elsewhen(io.MEMWB_RD === io.RS1 && !(io.IDEX_RD =/= 0.U && io.IDEX_RD === io.RS1) && !(io.EXMEM_RD =/= 0.U && io.EXMEM_RD === io.RS1)) {io.forward_rs1 := "b0011".U
      }.elsewhen(io.MEMWB_RD === io.RS2 && !(io.IDEX_RD =/= 0.U && io.IDEX_RD === io.RS2) && !(io.EXMEM_RD =/= 0.U && io.EXMEM_RD === io.RS2)) {io.forward_rs2 := "b0011".U
      }
    }
  }.elsewhen(io.Branch === 0.U) {
    when(io.IDEX_RD =/= 0.U && io.IDEX_MemRead =/= 1.U && io.IDEX_RD === io.RS1) {
      io.forward_rs1 := "b0110".U
    }.elsewhen(io.EXMEM_RD =/= 0.U && io.EXMEM_MemRead =/= 1.U && io.EXMEM_RD === io.RS1 && !(io.IDEX_RD =/= 0.U && io.IDEX_RD === io.RS1)) {
      io.forward_rs1 := "b0111".U
    }.elsewhen(io.EXMEM_RD =/= 0.U && io.EXMEM_MemRead === 1.U && io.EXMEM_RD === io.RS1 && !(io.IDEX_RD =/= 0.U && io.IDEX_RD === io.RS1)) {
      io.forward_rs1 := "b1001".U
    }.elsewhen(io.MEMWB_RD =/= 0.U && io.MEMWB_MemRead =/= 1.U && io.MEMWB_RD === io.RS1 && !(io.IDEX_RD =/= 0.U && io.IDEX_RD === io.RS1) && !(io.EXMEM_RD =/= 0.U && io.EXMEM_RD === io.RS1)) {
      io.forward_rs1 := "b1000".U
    }.elsewhen(io.MEMWB_RD =/= 0.U && io.MEMWB_MemRead === 1.U && io.MEMWB_RD === io.RS1 && !(io.IDEX_RD =/= 0.U && io.IDEX_RD === io.RS1) && !(io.EXMEM_RD =/= 0.U && io.EXMEM_RD === io.RS1)) {
      io.forward_rs1 := "b1010".U
    }
  }
}