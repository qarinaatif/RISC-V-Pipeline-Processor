package pipeline
import chisel3._
import chisel3.util._

class ImmediateGen extends Module {
  val io = IO(new Bundle {
    val instruction = Input(UInt(32.W))
    val pc          = Input(UInt(32.W))
    val imm_out     = Output(SInt(32.W))
  })

  val opcode = io.instruction(6, 0)

  // Immediate extractions
  val i_imm  = Cat(Fill(20, io.instruction(31)), io.instruction(31,20)).asSInt
  val s_imm  = Cat(Fill(20, io.instruction(31)), io.instruction(31,25), io.instruction(11,7)).asSInt
  val sb_imm = (Cat(Fill(19, io.instruction(31)),
                   io.instruction(31),
                   io.instruction(7),
                   io.instruction(30,25),
                   io.instruction(11,8),
                   0.U(1.W)).asSInt + io.pc.asSInt)
  // val u_imm  = (Cat(Fill(12, io.instruction(31)), io.instruction(31,12)) << 12).asSInt
  val u_imm = Cat(io.instruction(31, 12).asSInt,0.U(12.W)).asSInt
  // AUIPC adds PC
  val auipc_imm = (u_imm + io.pc.asSInt).asSInt
  
  val uj_imm = (Cat(Fill(12, io.instruction(31)),
                   io.instruction(31),
                   io.instruction(19,12),
                   io.instruction(20),
                   io.instruction(30,21),
                   0.U(1.W)).asSInt + io.pc.asSInt)

  // Default
  io.imm_out := 0.S

  switch(opcode) {
    is("b0000011".U) { io.imm_out := i_imm }   // Load
    is("b0010011".U) { io.imm_out := i_imm }   // ALU Imm
    is("b1100111".U) { io.imm_out := i_imm }   // JALR
    is("b0100011".U) { io.imm_out := s_imm }   // Store
    is("b1100011".U) { io.imm_out := sb_imm }  // Branch
    is("b0110111".U) { io.imm_out := u_imm }   // LUI
    is("b0010111".U) { io.imm_out := auipc_imm }   // AUIPC
    is("b1101111".U) { io.imm_out := uj_imm }  // JAL
  }
}


// package pipeline
// import chisel3._
// import chisel3.util._

// class ImmediateGen extends Module {
//   val io = IO(new Bundle {
//     val instruction = Input(UInt(32.W))
//     val pc = Input(UInt(32.W))
//     val imm_out = Output(SInt(32.W))
//   })

//   val opcode = io.instruction(6, 0)
//   val imm_out = Wire(SInt(32.W))
  
//   val s_imm_ = Cat (io.instruction(31,25),io.instruction(11,7))
//   io.s_imm := (Cat(Fill(20,s_imm_(11)),s_imm_)).asSInt
//   val sb_imm_ = Cat (io.instruction(31),io.instruction(7),io.instruction(30,25),io.instruction(11,8),"b0".U)
//   io.sb_imm := ((Cat(Fill(19,sb_imm_(12)),sb_imm_)) + io.pc).asSInt
//   val uj_imm_ = Cat (io.instruction(31),io.instruction(19,12),io.instruction(20),io.instruction(30,21),"b0".U)
//   io.uj_imm := ((Cat(Fill(12,uj_imm_(20)),uj_imm_)) + io.pc).asSInt
//   io.u_imm := (((Cat(Fill(12,io.instruction(31)),io.instruction(31,12))) << 12)).asSInt
//   io.i_imm := (Cat(Fill(20,io.instruction(31)),io.instruction(31,20))).asSInt
        
//   switch(opcode) {
//     is("b0000011".U) { imm_out := i_imm }
//     is("b0010011".U) { imm_out := i_imm }
//     is("b1100111".U) { imm_out := i_imm }
//     is("b0100011".U) { imm_out := s_imm_ }
//     is("b1100011".U) { imm_out := sb_imm }
//     is("b0110111".U) { imm_out := u_imm }
//     is("b0010111".U) { imm_out := u_imm }
//     is("b1101111".U) { imm_out := uj_imm }
//   }
//   io.imm_out := imm_out
// }
