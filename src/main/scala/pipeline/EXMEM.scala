package pipeline
import chisel3._
import chisel3.util._

class EXMEM extends Module {
  val io = IO(new Bundle {
    val Jump = Input(UInt(32.W))
    val Zero = Input(Bool())
    val ALUres = Input(UInt(32.W))
    val ReadData2 = Input(UInt(32.W))
    val ReadData1 = Input(UInt(32.W))
    val RD = Input(UInt(5.W))
    val Branch = Input(Bool())
    val MemRead = Input(Bool())
    val MemtoReg = Input(Bool())
    val MemWrite = Input(Bool())
    val RegWrite = Input(Bool())
    val Immd = Input(UInt(32.W))
    val RS1 = Input(UInt(5.W))
    val muxsign = Input(UInt(1.W))
    val sig = Input(UInt(32.W))
    val PC = Input(UInt(32.W))
    val PCEX = Output(UInt(32.W))
    val sign = Output(UInt(32.W))
    val JumpMEM = Output(UInt(32.W))
    val ZeroMEM = Output(Bool())
    val ALUresMEM = Output(UInt(32.W))
    val ReadData2MEM = Output(UInt(32.W))
    val ReadData1MEM = Output(UInt(32.W))
    val RDD = Output(UInt(5.W))
    val BranchS = Output(Bool())
    val MemReadS = Output(Bool())
    val MemtoRegS = Output(Bool())
    val MemWriteS = Output(Bool())
    val RegWriteS = Output(Bool())
    val ImmdMEM = Output(UInt(32.W))
    val RS1MEM = Output(UInt(5.W))
    val muxsign_out = Output(UInt(1.W))
})

  val sign_reg = RegNext(io.sig,0.U(32.W))
  val Jump_reg = RegNext(io.Jump,0.U(32.W))
  val Zero_reg = RegNext(io.Zero,0.U(32.W))
  val ALUres_reg = RegNext(io.ALUres,0.U(32.W))
  val ReadData2_reg = RegNext(io.ReadData2,0.U(32.W))
  val ReadData1_reg = RegNext(io.ReadData1,0.U(32.W))
  val RD_reg = RegNext(io.RD,0.U(32.W))
  val Branch_reg = RegNext(io.Branch,0.U(32.W))
  val MemRead_reg = RegNext(io.MemRead,0.U(32.W))
  val MemtoReg_reg = RegNext(io.MemtoReg,0.U(32.W))
  val MemWrite_reg = RegNext(io.MemWrite,0.U(32.W))
  val RegWrite_reg = RegNext(io.RegWrite,0.U(32.W))
  val Immd_reg = RegNext(io.Immd,0.U(32.W))
  val RS1_reg = RegNext(io.RS1,0.U(32.W))
  val muxsign_reg = RegNext(io.muxsign,0.U(32.W))
  val PC_reg = RegNext(io.PC,0.U(32.W))

  io.muxsign_out := muxsign_reg
  io.JumpMEM := Jump_reg
  io.ZeroMEM := Zero_reg
  io.ALUresMEM := ALUres_reg
  io.ReadData2MEM := ReadData2_reg
  io.ReadData1MEM := ReadData1_reg
  io.RDD := RD_reg
  io.BranchS := Branch_reg 
  io.MemReadS := MemRead_reg 
  io.MemtoRegS := MemtoReg_reg  
  io.MemWriteS := MemWrite_reg
  io.RegWriteS := RegWrite_reg  
  io.ImmdMEM := Immd_reg
  io.RS1MEM := RS1_reg
  io.sign := sign_reg
  io.PCEX := PC_reg

}


