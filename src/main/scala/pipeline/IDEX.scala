package pipeline
import chisel3._
import chisel3.util._

class IDEX extends Module {
  val io = IO(new Bundle {
    val PC = Input(UInt(32.W))
    val PC4 = Input(UInt(32.W))
    val OpA_s = Input(UInt(2.W))
    val OpB_s = Input(Bool())
    val func3 = Input(UInt(3.W))
    val func7 = Input(UInt(1.W))
    val Nextpc = Input(Bool())
    val Read1 = Input(UInt(32.W))
    val Read2 = Input(UInt(32.W))
    val Immd = Input(UInt(32.W))
    val RD = Input(UInt(5.W))
    val Branch = Input(Bool())
    val MemRead = Input(Bool())
    val MemtoReg = Input(Bool())
    val ALUOp = Input(UInt(3.W))
    val MemWrite = Input(Bool())
    val RegWrite = Input(Bool())
    val RS1_S = Input(UInt(5.W))
    val RS2_S = Input(UInt(5.W))
    val Instr = Input(UInt(32.W))
    val operandA = Input(UInt(32.W))
    val operandAsel = Input(Bool())

    val PC_IDEX = Output(UInt(32.W))
    val PC4_IDEX = Output(UInt(32.W))
    val OpA_s_IDEX = Output(UInt(2.W))
    val OpB_s_IDEX = Output(Bool())
    val func3_IDEX = Output(UInt(3.W))
    val func7_IDEX = Output(UInt(1.W))
    val Nextpc_IDEX = Output(Bool())
    val Read1_IDEX = Output(UInt(32.W))
    val Read2_IDEX = Output(UInt(32.W))
    val Immd_IDEX = Output(UInt(32.W))
    val RD_IDEX = Output(UInt(5.W))
    val Branch_IDEX = Output(Bool())
    val MemRead_IDEX = Output(Bool())
    val MemtoReg_IDEX = Output(Bool())
    val ALUOp_IDEX = Output(UInt(3.W))
    val MemWrite_IDEX = Output(Bool())
    val RegWrite_IDEX = Output(Bool())
    val RS1_S_IDEX = Output(UInt(5.W))
    val RS2_S_IDEX = Output(UInt(5.W))
    val Instr_IDEX = Output(UInt(32.W))
    val operandAout = Output(UInt(32.W))
    val operandAselout = Output(Bool())
  })

  val PC_REG  = RegNext(io.PC, 0.U)
  val PC4_REG = RegNext(io.PC4, 0.U)
  val OpA_s_REG = RegNext(io.OpA_s, 0.U)
  val OpB_s_REG = RegNext(io.OpB_s, false.B)
  val func3_REG = RegNext(io.func3, 0.U)
  val func7_REG = RegNext(io.func7, 0.U)
  val Nextpc_REG = RegNext(io.Nextpc, false.B)
  val Read1_REG = RegNext(io.Read1, 0.U)
  val Read2_REG = RegNext(io.Read2, 0.U)
  val Immd_REG = RegNext(io.Immd, 0.U)
  val RD_REG = RegNext(io.RD, 0.U)
  val Branch_REG = RegNext(io.Branch, false.B)
  val MemRead_REG = RegNext(io.MemRead, false.B)
  val MemtoReg_REG = RegNext(io.MemtoReg, false.B)
  val ALUOp_REG = RegNext(io.ALUOp, 0.U)
  val MemWrite_REG = RegNext(io.MemWrite, false.B)
  val RegWrite_REG = RegNext(io.RegWrite, false.B)
  val RS1_S_REG = RegNext(io.RS1_S, 0.U)
  val RS2_S_REG = RegNext(io.RS2_S, 0.U)
  val Instr_reg = RegNext(io.Instr,0.U(32.W))
  val operandA_reg = RegNext(io.operandA,0.U(32.W))
  val operandAsel_reg = RegNext(io.operandAsel, false.B)

  io.PC_IDEX := PC_REG
  io.PC4_IDEX := PC4_REG
  io.OpA_s_IDEX := OpA_s_REG
  io.OpB_s_IDEX := OpB_s_REG
  io.func3_IDEX := func3_REG
  io.func7_IDEX := func7_REG
  io.Nextpc_IDEX := Nextpc_REG
  io.Read1_IDEX := Read1_REG
  io.Read2_IDEX := Read2_REG
  io.Immd_IDEX := Immd_REG
  io.RD_IDEX := RD_REG
  io.Branch_IDEX := Branch_REG
  io.MemRead_IDEX := MemRead_REG
  io.MemtoReg_IDEX := MemtoReg_REG
  io.ALUOp_IDEX := ALUOp_REG
  io.MemWrite_IDEX := MemWrite_REG
  io.RegWrite_IDEX := RegWrite_REG
  io.RS1_S_IDEX := RS1_S_REG
  io.RS2_S_IDEX := RS2_S_REG
  io.Instr_IDEX := Instr_reg
  io.operandAout := operandA_reg
  io.operandAselout := operandAsel_reg
}

// class IDEX extends Module {
//   val io = IO(new Bundle {
//     val PC = Input(UInt(32.W))//
//     val PC4 = Input(UInt(32.W))//
//     val OpA_s = Input(UInt(2.W))
// 	  val OpB_s = Input(Bool())
//     val func3 = Input(UInt(3.W))
// 	  val func7 = Input(UInt(1.W))
//     val Nextpc = Input(Bool())//
//     val Read1 = Input(UInt(32.W))//
//     val Read2 = Input(UInt(32.W))//
//     val Immd = Input(UInt(32.W))//
//     val RD = Input(UInt(5.W))//
//     val Branch = Input(Bool())//
//     val MemRead = Input(Bool())//
//     val MemtoReg = Input(Bool())//
//     val ALUOp = Input(UInt(3.W))//
//     val MemWrite = Input(Bool())//
//     val RegWrite = Input(Bool())//
//     val RS1_S = Input(UInt(5.W))//
//     val RS2_S = Input(UInt(5.W))//
//     //val muxsign = Input(UInt(1.W))
//     //val sig = Input(UInt(32.W))
//     //val jalr_sign = Input(UInt(1.W))
//     //val jal = Input(UInt(1.W))
//     //val AluSrc = Input(Bool())
//     //val INSTR = Input(UInt(32.W))

//     val PC_IDEX = Output(UInt(32.W))//
//     val PC4_IDEX = Output(UInt(32.W))//
//     val OpA_s_IDEX = Output(UInt(2.W))
// 	  val OpB_s_IDEX = Output(Bool())
//     val func3_IDEX = Output(UInt(3.W))
// 	  val func7_IDEX = Output(UInt(1.W))
//     val Nextpc_IDEX = Output(Bool())//
//     val Read1_IDEX = Output(UInt(32.W))//
//     val Read2_IDEX = Output(UInt(32.W))//
//     val Immd_IDEX = Output(UInt(32.W))//
//     val RD_IDEX = Output(UInt(5.W))//
//     val Branch_IDEX = Output(Bool())//
//     val MemRead_IDEX = Output(Bool())//
//     val MemtoReg_IDEX = Output(Bool())//
//     val ALUOp_IDEX = Output(UInt(3.W))//
//     val MemWrite_IDEX = Output(Bool())//
//     val RegWrite_IDEX = Output(Bool())//
//     val RS1_S_IDEX = Output(UInt(5.W))//
//     val RS2_S_IDEX = Output(UInt(5.W))//
//     //val muxsign_out = Output(UInt(1.W))
//     //val jal_out = Output(UInt(1.W))
//     //val jalr_signout = Output(UInt(1.W))
//     //val INSTREX = Output(UInt(32.W))
//     //val AluSrcS = Output(Bool())
//     //val sign = Output(UInt(32.W))

//   })

 
//   val PC_reg = RegNext(io.PC,0.U(32.W))
//   val Read1_reg = RegNext(io.Read1,0.U(32.W))
//   val Read2_reg = RegNext(io.Read2,0.U(32.W))
//   val Immd_reg = RegNext(io.Immd,0.U(32.W))
//   val RD_reg = RegNext(io.RD,0.U(32.W))
//   val Branch_reg = RegNext(io.Branch,false.B )
//   val MemRead_reg = RegNext(io.MemRead,false.B )
//   val MemtoReg_reg = RegNext(io.MemtoReg,false.B )
//   val ALUOp_reg = RegNext(io.ALUOp,false.B )
//   val MemWrite_reg = RegNext(io.MemWrite,false.B )
//   val RegWrite_reg = RegNext(io.RegWrite,false.B )
//   val RS1_reg = RegNext(io.RS1,0.U(32.W))
//   val RS2_reg = RegNext(io.RS2,0.U(32.W))
//   val Nextpc_reg = RegNext(io.Nextpc,false.B )
//   //val jal_reg = RegNext(io.jal,0.U(32.W))
//   //val jalr_reg = RegNext(io.jalr_sign,false.B )
//   //val AluSrc_reg = RegNext(io.AluSrc,false.B )
//   //val sign_reg = RegNext(io.sig,0.U(32.W))
//   //val muxsign_reg = RegNext(io.muxsign,false.B)
//   //val INSTREX_reg = RegNext(io.INSTR,0.U(32.W))
  

//  /*when(io.Stall === "b01".U){
//     io.jal_out := 0.U  
//     io.jalr_signout := 0.U 
//     io.sign := 0.U
//     io.muxsign_out := 0.U
//     io.PCEX := 0.U
//     io.Read1EX := 0.U
//     io.Read2EX := 0.U
//     io.ImmdDEX := 0.U
//     io.RDD := 0.U
//     io.INSTREX := 0.U
//     io.BranchS := false.B 
//     io.MemReadS := false.B 
//     io.MemtoRegS := false.B 
//     io.ALUOpS := false.B  
//     io.MemWriteS := false.B 
//     io.AluSrcS := false.B
//     io.RegWriteS := false.B
//     io.RS1EX := 0.U
//     io.RS2EX := 0.U
//   }.otherwise{*/
//   //io.jal_out := jal_reg
//   //io.jalr_signout := jalr_reg
//   //io.AluSrcS := AluSrc_reg  
//   //io.INSTREX := INSTREX_reg
//   //io.sign := sign_reg
//   //io.muxsign_out := muxsign_reg 
//   io.PCEX := PC_reg
//   io.Read1EX := Read1_reg
//   io.Read2EX := Read2_reg
//   io.ImmdDEX := Immd_reg
//   io.RDD := RD_reg
//   io.BranchS := Branch_reg 
//   io.MemReadS := MemRead_reg 
//   io.MemtoRegS := MemtoReg_reg  
//   io.ALUOpS := ALUOp_reg  
//   io.MemWriteS := MemWrite_reg  
//   io.RegWriteS := RegWrite_reg  
//   io.RS1EX := RS1_reg
//   io.RS2EX := RS2_reg
//   //}
//   io.Nextpc_out := Nextpc_reg
  
// }