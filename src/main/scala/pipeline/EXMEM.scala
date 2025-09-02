package pipeline
import chisel3._
import chisel3.util._

class EXMEM extends Module {
  val io = IO(new Bundle {
    val ALUres = Input(UInt(32.W))//
    val ReadData2 = Input(UInt(32.W))//
    //val ReadData1 = Input(UInt(32.W))//
    val RD = Input(UInt(5.W))//
    val MemRead = Input(Bool())//
    val MemtoReg = Input(Bool())//
    val MemWrite = Input(Bool())//
    val RegWrite = Input(Bool())//
    val func3 = Input(UInt(3.W))
    val Instr = Input(UInt(32.W))
    val PC4 = Input(UInt(32.W))
    val PC = Input(UInt(32.W))

    // val Immd = Input(UInt(32.W))
    // val Inst = Input(UInt(32.W))
    // val RS1 = Input(UInt(5.W))
    // val RS2 = Input(UInt(5.W))
    // val muxsign = Input(UInt(1.W))
    // val sig = Input(UInt(32.W))
    // val PC = Input(UInt(32.W))
    // val Branch = Input(Bool())
    // val Zero = Input(Bool())
    // val Jump = Input(UInt(32.W))

    val PC4_EXMEM = Output(UInt(32.W))
    val ALUresMEM = Output(UInt(32.W))
    val ReadData2MEM = Output(UInt(32.W))
    //val ReadData1MEM = Output(UInt(32.W))
    val RDD = Output(UInt(5.W))
    val MemReadS = Output(Bool())
    val MemtoRegS = Output(Bool())
    val MemWriteS = Output(Bool())
    val RegWriteS = Output(Bool())
    val func3_EXMEM = Output(UInt(3.W))
    val Instr_EXMEM = Output(UInt(32.W))
    val PC_EXMEM = Output(UInt(32.W))
    


    // val BranchS = Output(Bool())
    // val muxsign_out = Output(UInt(1.W))
    // val ZeroMEM = Output(Bool())
    // val InstrD = Output(UInt(32.W))
    // val ImmdMEM = Output(UInt(32.W))
    // val JumpMEM = Output(UInt(32.W))
    // val PCEX = Output(UInt(32.W))
    // val sign = Output(UInt(32.W))
    // val RS1MEM = Output(UInt(5.W))
    // val RS2MEM = Output(UInt(5.W))
})

  //val sign_reg = RegNext(io.sig,0.U(32.W))
  //val Jump_reg = RegNext(io.Jump,0.U(32.W))
  val ALUres_reg = RegNext(io.ALUres, 0.U(32.W))
  val ReadData2_reg = RegNext(io.ReadData2, 0.U(32.W))
  //val ReadData1_reg = RegNext(io.ReadData1, 0.U(32.W))
  val RD_reg = RegNext(io.RD, 0.U(5.W))
  val MemRead_reg = RegNext(io.MemRead, false.B)
  val MemtoReg_reg = RegNext(io.MemtoReg, false.B)
  val MemWrite_reg = RegNext(io.MemWrite, false.B)
  val RegWrite_reg = RegNext(io.RegWrite, false.B)
  val func3_REG = RegNext(io.func3, 0.U)
  val Instr_reg = RegNext(io.Instr,0.U(32.W))
  val PC4_REG = RegNext(io.PC4, 0.U)
  val PC_REG  = RegNext(io.PC, 0.U)

    
  io.ALUresMEM := ALUres_reg
  io.PC4_EXMEM := PC4_REG
  io.ReadData2MEM := ReadData2_reg
  //io.ReadData1MEM := ReadData1_reg
  io.RDD := RD_reg
  io.MemReadS := MemRead_reg
  io.MemtoRegS := MemtoReg_reg
  io.MemWriteS := MemWrite_reg
  io.RegWriteS := RegWrite_reg
  io.func3_EXMEM := func3_REG
  io.Instr_EXMEM := Instr_reg
  io.PC_EXMEM := PC_REG
  
}



