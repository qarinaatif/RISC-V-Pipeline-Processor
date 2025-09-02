package pipeline

import chisel3._
import chisel3.util._

object ALUOP {
	val ALU_ADD = "b00000".U
    val ALU_ADDI = "b00000".U
    val ALU_SUB = "b01000".U
    val ALU_AND = "b00111".U
    val ALU_ANDI = "b00111".U
    val ALU_OR  = "b00110".U
    val ALU_ORI  = "b00110".U
    val ALU_XOR = "b00100".U
    val ALU_XORI = "b00100".U
    val ALU_SLT = "b00010".U
    val ALU_SLTI = "b00010".U
    val ALU_SLL = "b00001".U
    val ALU_SLLI = "b00001".U
    val ALU_SLTU= "b00011".U
    val ALU_SLTIU = "b00011".U
    val ALU_SRL = "b00101".U
     val ALU_SRLI = "b00101".U
    val ALU_SRA = "b01101".U
    val ALU_SRAI = "b00101".U
    val ALU_COPY_A = "b11111".U  
    val ALU_XXX = "b11110".U
}

import ALUOP._

class Alu extends Module {
    val io = IO(new Bundle {
        val op1 = Input(UInt(32.W))  
        val op2 = Input(UInt(32.W))
        val aluctrl = Input(UInt(5.W)) 
        val aluout = Output(UInt(32.W)) 
        //val zero = Output(Bool())
    })
    
    io.aluout := 0.U  

	when(io.aluctrl === ALU_ADD || io.aluctrl === ALU_ADDI ){ 								
		io.aluout := io.op1 + io.op2
    }.elsewhen(io.aluctrl === ALU_SUB){							
		io.aluout := io.op1 - io.op2
    }.elsewhen(io.aluctrl === ALU_AND || io.aluctrl === ALU_ANDI ){							
		io.aluout := io.op1 & io.op2
    }.elsewhen(io.aluctrl === ALU_OR || io.aluctrl === ALU_ORI ){							
		io.aluout := io.op1 | io.op2
    }.elsewhen(io.aluctrl === ALU_XOR ||io.aluctrl === ALU_XORI ){							
		io.aluout := io.op1 ^ io.op2
    }.elsewhen(io.aluctrl === ALU_SLT || io.aluctrl === ALU_SLTI ){							
		when(io.op1 < io.op2){
			io.aluout := 1.U
		}.otherwise{
			io.aluout := 0.U
		}
	}.elsewhen(io.aluctrl === ALU_SLL ||io.aluctrl === ALU_SLLI ){ 							
		io.aluout:= (io.op1 << io.op2(4,0))
	}.elsewhen(io.aluctrl === ALU_SLTU | io.aluctrl === ALU_SLTIU){			
		val op1 = io.op1.asUInt
		val op2 = io.op2.asUInt
		when(op1 < op2){
			io.aluout := 1.U
		}.otherwise{
			io.aluout := 0.U
		}
	}.elsewhen(io.aluctrl === ALU_SRL || io.aluctrl === ALU_SRLI ){							
		val shift = io.op1.asUInt >> (io.op2(4,0)).asUInt
		io.aluout := shift.asUInt
	}.elsewhen(io.aluctrl === ALU_SRA || io.aluctrl === ALU_SRAI){							
		io.aluout := (io.op1 >> io.op2(4,0)).asUInt
	}.elsewhen(io.aluctrl === ALU_COPY_A){							
		io.aluout := io.op1
	}
}