// package pipeline
// import chisel3._
// import chisel3.util._
// import chiseltest._
// import org.scalatest._


// class ImmediateGenerationtest extends FreeSpec with ChiselScalatestTester {
//   "ImmediateGeneration Test" in {
//     test(new ImmediateGeneration) { c =>
//       //I-type 
//       c.io.instruction.poke("b00000000000000000000000000000011".U)  
//       c.clock.step(1) 
//       // S-type 
//       c.io.instruction.poke("b01000000000000000000000001000111".U)  
//       c.clock.step(1)
//       // SB-type
//       c.io.instruction.poke("b11000000000000000000000001000011".U)  
//       c.clock.step(1)
//       // U-type 
//       c.io.instruction.poke("b01101110000000000000000000000000".U)  
//       c.clock.step(1) 
//       // UJ-type 
//       c.io.instruction.poke("b11011110000000000000000000000001".U)  
//       c.clock.step(1)
//     }
//   }
// }
