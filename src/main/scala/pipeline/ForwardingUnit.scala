package pipeline
import chisel3._
import chisel3.util._

class ForwardingUnit extends Module {
    val io = IO(new Bundle {
        val IDEX_RS1 = Input(UInt(5.W))
        val IDEX_RS2 = Input(UInt(5.W))
        val EXMEM_RD = Input(UInt(5.W))
        val MEMWB_RD = Input(UInt(5.W))
        val EXMEM_RegWrite = Input(UInt(1.W))
        val MEMWB_RegWrite = Input(UInt(1.W))
        val ForwardA = Output(UInt(2.W))
        val ForwardB = Output(UInt(2.W))
    })

    io.ForwardA := "b00".U
    io.ForwardB := "b00".U
    when(io.EXMEM_RegWrite === "b1".U && io.EXMEM_RD =/= "b00000".U && 
            (io.EXMEM_RD === io.IDEX_RS1.asUInt) && (io.EXMEM_RD === io.IDEX_RS2)){
        io.ForwardA := "b10".U
        io.ForwardB := "b10".U
    }.elsewhen(io.EXMEM_RegWrite === "b1".U && io.EXMEM_RD =/= "b00000".U 
      && (io.EXMEM_RD === io.IDEX_RS2)){    
        io.ForwardB := "b10".U
    
    }.elsewhen(io.EXMEM_RegWrite === "b1".U && io.EXMEM_RD =/= "b00000".U 
      && (io.EXMEM_RD === io.IDEX_RS1)){    
        io.ForwardA := "b10".U
    }
    when((io.MEMWB_RegWrite === "b1".U) && (io.MEMWB_RD =/= "b00000".U) 
      && (io.MEMWB_RD === io.IDEX_RS1) && (io.MEMWB_RD === io.IDEX_RS2) 
      && ~(io.EXMEM_RegWrite === "b1".U && io.EXMEM_RD =/= "b00000".U 
      && (io.EXMEM_RD === io.IDEX_RS1) && (io.EXMEM_RD === io.IDEX_RS2))) {
        io.ForwardA := "b01".U
        io.ForwardB := "b01".U
    }.elsewhen((io.MEMWB_RegWrite === "b1".U) && (io.MEMWB_RD =/= "b00000".U) 
      && (io.MEMWB_RD === io.IDEX_RS2) && ~(io.EXMEM_RegWrite === "b1".U 
      && io.EXMEM_RD =/= "b00000".U && (io.EXMEM_RD === io.IDEX_RS2))){
        io.ForwardB := "b01".U
    }.elsewhen((io.MEMWB_RegWrite === "b1".U) && (io.MEMWB_RD =/= "b00000".U) 
      && (io.MEMWB_RD === io.IDEX_RS1) && ~(io.EXMEM_RegWrite === "b1".U 
      && io.EXMEM_RD =/= "b00000".U && (io.EXMEM_RD === io.IDEX_RS1))){
        io.ForwardA := "b01".U
  }
}