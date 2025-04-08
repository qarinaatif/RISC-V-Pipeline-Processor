package pipeline
import chisel3._
import chisel3.util._

class HazardUnit extends Module {
  val io = IO(new Bundle {
    val Instruction = Input(UInt(32.W))
    val IFID_Rs1 = Input(UInt(5.W))
    val IFID_Rs2 = Input(UInt(5.W))
    val IDEX_MemRead = Input(Bool())
    val IDEX_RD = Input(UInt(5.W))
    val Immediate = Input(SInt(32.W))
    val Rs1 = Input(UInt(5.W))
    val sb = Input(UInt(1.W))
    val jal = Input(UInt(1.W))
    val jalr = Input(UInt(1.W)) 
    val PC = Input(SInt(32.W))
    val br_taken = Input(UInt(1.W)) 
    val HazardDetect = Output(Bool())
    val PC_Write = Output(UInt(2.W))
    val PC_In = Output(SInt(32.W))
    val Stall = Output(UInt(1.W))
  })

  when(( io.br_taken === 1.U | io.sb === 1.U )){
    io.PC_Write := "b01".U 
    io.PC_In := io.PC + io.Immediate.asSInt
    io.Stall := "b1".U
    io.HazardDetect := true.B
  }.elsewhen(io. jal === 1.U | io.Instruction(6,0) === "b1101111".U){
    io.PC_Write := "b01".U 
    io.PC_In := io.PC + io.Immediate.asSInt
    io.Stall := "b1".U
    io.HazardDetect := true.B
  }.elsewhen ( io.jalr === 1.U){
    io.PC_Write := "b10".U
    io.PC_In := io.PC + io.Rs1.asSInt
    io.Stall := "b0".U
    io.HazardDetect := true.B
  }.elsewhen (io.IDEX_MemRead === 1.B && ((io.IDEX_RD === io.IFID_Rs1) || (io.IDEX_RD === io.IFID_Rs2))){
    io.PC_Write := "b00".U
    io.PC_In := io.PC
    io.Stall := "b1".U
    io.HazardDetect := true.B
  }.otherwise {
    io.PC_Write := "b11".U 
    io.PC_In := io.PC
    io.Stall := "b0".U
    io.HazardDetect := false.B
  }
}


