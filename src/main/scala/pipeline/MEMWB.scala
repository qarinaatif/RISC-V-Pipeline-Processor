package pipeline
import chisel3._
import chisel3.util._

class MEMWB extends Module {
  val io = IO(new Bundle {
    val ReadData = Input(UInt(32.W))
    val ALUres = Input(UInt(32.W))
    val RD = Input(UInt(5.W))
    val MemtoReg = Input(Bool())
    val RegWrite = Input(Bool())
    val MemRead = Input(Bool())
    val MemWrite = Input(Bool())
    val Instr = Input(UInt(32.W))
    val memaddress = Input(UInt(32.W))
    val memdata = Input(UInt(32.W))
    val mask = Input(UInt(4.W))
    val MemWritedata = Input(UInt(32.W))
    val PC = Input(UInt(32.W))

    val MemRead_MEMWB = Output(Bool())
    val ReadData_MEMWB = Output(UInt(32.W))
    val ALUres_MEMWB = Output(UInt(32.W))
    val RDD_MEMWB = Output(UInt(5.W))
    val MemtoReg_MEMWB = Output(Bool())
    val RegWrite_MEMWB = Output(Bool())
    val MemWrite_MEMWB = Output(Bool())
    val Instr_MEMWB = Output(UInt(32.W))
    val memaddressD = Output(UInt(32.W))
    val memdataD = Output(UInt(32.W))
    val mask_out = Output(UInt(4.W))
    val MemWritedata_out = Output(UInt(32.W))
    val PC_MEMWB = Output(UInt(32.W))

    
  })

  val MemRead_reg = RegNext(io.MemRead, false.B)
  val ReadData_reg = RegNext(io.ReadData, 0.U)
  val ALUres_reg = RegNext(io.ALUres, 0.U)
  val RD_reg = RegNext(io.RD, 0.U)
  val MemtoReg_reg = RegNext(io.MemtoReg, false.B)
  val RegWrite_reg = RegNext(io.RegWrite, false.B)
  val MemWrite_reg = RegNext(io.MemWrite, false.B)
  val Instr_reg = RegNext(io.Instr,0.U(32.W))
  val memaddress_reg = RegNext(io.memaddress,0.U(32.W))
  val memdata_reg = RegNext(io.memdata,0.U(32.W))
  val mask_reg  = RegNext(io.mask,0.U(4.W))
  val MemWritedata_reg = RegNext(io.MemWritedata,0.U(32.W))
  val PC_REG  = RegNext(io.PC, 0.U)
  

  io.MemRead_MEMWB := MemRead_reg
  io.ReadData_MEMWB := ReadData_reg
  io.ALUres_MEMWB := ALUres_reg
  io.RDD_MEMWB := RD_reg
  io.MemtoReg_MEMWB := MemtoReg_reg
  io.RegWrite_MEMWB := RegWrite_reg
  io.MemWrite_MEMWB := MemWrite_reg
  io.Instr_MEMWB := Instr_reg
  io.memaddressD := memaddress_reg
  io.memdataD := memdata_reg
  io.mask_out := mask_reg
  io.MemWritedata_out := MemWritedata_reg
  io.PC_MEMWB := PC_REG

}


