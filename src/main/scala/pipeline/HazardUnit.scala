package pipeline
import chisel3._
import chisel3.util._

class HazardUnit extends Module {
  val io = IO(new Bundle {
    val IFID_Instruction = Input(UInt(32.W))//
    val IDEX_MemRead = Input(UInt(1.W))//
    val IDEX_RD = Input(UInt(5.W))//
    val PC_In = Input(SInt(32.W))//
    val Current_PC = Input(SInt(32.W))//
    val Instruction_forward = Output(UInt(1.W))//
    val PC_forward = Output(UInt(1.W))//
    val Ctrl_forward = Output(UInt(1.W))
    val PC_OUT = Output(SInt(32.W))//
    val Current_PC_OUT = Output(SInt(32.W))//
    val Instruction_OUT = Output(UInt(32.W))
    // val br_taken = Input(UInt(1.W))
    // val MEMWB_MemRead = Input(Bool())
    // val MEMWB_RD = Input(UInt(5.W))
    // val Immediate = Input(SInt(32.W))
    // val Rs1 = Input(UInt(5.W))
    // val sb = Input(UInt(1.W))
    // val jal = Input(UInt(1.W))
    // val jalr = Input(UInt(1.W))  
    // val IFID_Rs1 = Input(UInt(5.W))
    // val IFID_Rs2 = Input(UInt(5.W))
    // val HazardDetect = Output(Bool())
    // val PC_Write = Output(UInt(2.W))
    // val PC_In = Output(SInt(32.W))
    //val Stall = Output(UInt(2.W))

  })
  val RS1 = io.IFID_Instruction(19,15)
  val RS2 = io.IFID_Instruction(24,20)

  when(io.IDEX_MemRead === "b1".U 
    && ((io.IDEX_RD === RS1) || (io.IDEX_RD === RS2))) {
      io.Instruction_forward := 1.U
      io.PC_forward := 1.U
      io.Ctrl_forward := 1.U
      io.Instruction_OUT := io.IFID_Instruction
      io.PC_OUT := io.PC_In
      io.Current_PC_OUT := io.Current_PC
  }.otherwise {
    io.Instruction_forward := 0.U
    io.PC_forward := 0.U
    io.Ctrl_forward := 0.U
    io.Instruction_OUT := io.IFID_Instruction  
    io.PC_OUT := io.PC_In     
    io.Current_PC_OUT := io.Current_PC
  }
}



