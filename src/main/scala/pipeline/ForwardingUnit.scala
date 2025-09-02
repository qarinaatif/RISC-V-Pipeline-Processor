// package pipeline
// import chisel3._
// import chisel3.util._

// class ForwardingUnit extends Module {
//     val io = IO(new Bundle {
//         val IDEX_RS1 = Input(UInt(5.W))//
//         val IDEX_RS2 = Input(UInt(5.W))//
//         val IDEX_RD = Input(UInt(5.W))//
//         val EXMEM_RD = Input(UInt(5.W))//
//         val MEMWB_RD = Input(UInt(5.W))//
//         val EXMEM_RegWrite = Input(UInt(1.W))//
//         val MEMWB_RegWrite = Input(UInt(1.W))//
//         val ForwardA = Output(UInt(2.W))//
//         val ForwardB = Output(UInt(2.W))//
//     })

//     io.ForwardA := "b00".U
//     io.ForwardB := "b00".U
//     when(io.EXMEM_RegWrite === "b1".U && io.EXMEM_RD =/= "b00000".U && 
//             (io.EXMEM_RD === io.IDEX_RS1.asUInt) && (io.EXMEM_RD === io.IDEX_RS2)){
//         io.ForwardA := "b01".U
//         io.ForwardB := "b01".U
//     }.elsewhen(io.EXMEM_RegWrite === "b1".U && io.EXMEM_RD =/= "b00000".U 
//       && (io.EXMEM_RD === io.IDEX_RS2)){    
//         io.ForwardB := "b01".U
//     }.elsewhen(io.EXMEM_RegWrite === "b1".U && io.EXMEM_RD =/= "b00000".U 
//       && (io.EXMEM_RD === io.IDEX_RS1)){    
//         io.ForwardA := "b01".U
//     }

//     when(io.MEMWB_RegWrite === "b1".U && io.MEMWB_RD =/= "b00000".U 
//         && ~((io.EXMEM_RegWrite === "b1".U) && (io.EXMEM_RD =/= "b00000".U) 
//         && (io.EXMEM_RD === io.IDEX_RS1) && (io.EXMEM_RD === io.IDEX_RS2)) 
//         && (io.MEMWB_RD=== io.IDEX_RS1) && (io.MEMWB_RD === io.IDEX_RS2)) {
//             io.ForwardA := "b10".U
//             io.ForwardB := "b10".U
//       } .elsewhen(io.MEMWB_RegWrite === 1.B && io.MEMWB_RD =/= "b00000".U 
//       && ~((io.EXMEM_RegWrite === 1.B) && (io.EXMEM_RD =/= "b00000".U) && 
//         (io.EXMEM_RD === io.IDEX_RS2)) && (io.MEMWB_RD === io.IDEX_RS2)) {
//             io.ForwardB := "b10".U
//       } .elsewhen(io.MEMWB_RegWrite === 1.B && io.MEMWB_RD =/= "b00000".U 
//       && ~((io.EXMEM_RegWrite ===1.B) && (io.EXMEM_RD =/= "b00000".U) 
//       && (io.EXMEM_RD === io.IDEX_RS2))  &&  (io.MEMWB_RD === io.IDEX_RS2)) {
//             io.ForwardA := "b10".U
// 	  // }.otherwise{
//     //   io.ForwardA := "b11".U
//      }
//   //     when(io.EXMEM_RegWrite === 1.B && io.EXMEM_RD =/= "b00000".U 
//   //      && ( io.IDEX_RS1 === io.EXMEM_RD ) && (io.MEMWB_RD =/= io.IDEX_RS1) && (io.MEMWB_RD =/= io.IDEX_RD)){
//   //        io.ForwardA := "b10".U
 
//   // }  //   when((io.MEMWB_RegWrite === "b1".U) && (io.MEMWB_RD =/= "b00000".U) 
//   //     && (io.MEMWB_RD === io.IDEX_RS1) && (io.MEMWB_RD === io.IDEX_RS2) 
//   //     && ~(io.EXMEM_RegWrite === "b1".U && io.EXMEM_RD =/= "b00000".U 
//   //     && (io.EXMEM_RD === io.IDEX_RS1) && (io.EXMEM_RD === io.IDEX_RS2))) {
//   //       io.ForwardA := "b01".U
//   //       io.ForwardB := "b01".U
//   //   }.elsewhen((io.MEMWB_RegWrite === "b1".U) && (io.MEMWB_RD =/= "b00000".U) 
//   //     && (io.MEMWB_RD === io.IDEX_RS2) && ~(io.EXMEM_RegWrite === "b1".U 
//   //     && io.EXMEM_RD =/= "b00000".U && (io.EXMEM_RD === io.IDEX_RS2))){
//   //       io.ForwardB := "b01".U
//   //   }.elsewhen((io.MEMWB_RegWrite === "b1".U) && (io.MEMWB_RD =/= "b00000".U) 
//   //     && (io.MEMWB_RD === io.IDEX_RS1) && ~(io.EXMEM_RegWrite === "b1".U 
//   //     && io.EXMEM_RD =/= "b00000".U && (io.EXMEM_RD === io.IDEX_RS1))){
//   //      io.ForwardA := "b01".U
//   // }
// }

package pipeline
import chisel3._
import chisel3.util._

class ForwardingUnit extends Module {
  val io = IO(new Bundle {
    val IDEX_RS1 = Input(UInt(5.W))
    val IDEX_RS2 = Input(UInt(5.W))
    val EXMEM_RD = Input(UInt(5.W))
    val MEMWB_RD = Input(UInt(5.W))
    val EXMEM_RegWrite = Input(Bool())
    val MEMWB_RegWrite = Input(Bool())
    val ForwardA = Output(UInt(2.W)) // 00 = no forwarding, 01 = EX/MEM, 10 = MEM/WB
    val ForwardB = Output(UInt(2.W))
  })

  // Default: no forwarding
  io.ForwardA := 0.U
  io.ForwardB := 0.U

  // ===== Forwarding for RS1 =====
  when(io.EXMEM_RegWrite && (io.EXMEM_RD =/= 0.U) && (io.EXMEM_RD === io.IDEX_RS1)) {
    io.ForwardA := 1.U   // Forward from EX/MEM
  }.elsewhen(io.MEMWB_RegWrite && (io.MEMWB_RD =/= 0.U) &&
             (io.MEMWB_RD === io.IDEX_RS1) &&
             !(io.EXMEM_RegWrite && (io.EXMEM_RD =/= 0.U) && (io.EXMEM_RD === io.IDEX_RS1))) {
    io.ForwardA := 2.U   // Forward from MEM/WB
  }

  // ===== Forwarding for RS2 =====
  when(io.EXMEM_RegWrite && (io.EXMEM_RD =/= 0.U) && (io.EXMEM_RD === io.IDEX_RS2)) {
    io.ForwardB := 1.U   // Forward from EX/MEM
  }.elsewhen(io.MEMWB_RegWrite && (io.MEMWB_RD =/= 0.U) &&
             (io.MEMWB_RD === io.IDEX_RS2) &&
             !(io.EXMEM_RegWrite && (io.EXMEM_RD =/= 0.U) && (io.EXMEM_RD === io.IDEX_RS2))) {
    io.ForwardB := 2.U   // Forward from MEM/WB
  }
}

