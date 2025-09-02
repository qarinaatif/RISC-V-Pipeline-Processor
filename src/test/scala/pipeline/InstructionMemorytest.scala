// package pipeline
// import chisel3._
// import chiseltest._
// import org.scalatest.freespec.AnyFreeSpec
// import chisel3.util.experimental.loadMemoryFromFile

// class InstructionMemorytest extends AnyFreeSpec with ChiselScalatestTester {
//   "InstructionMemory should load instructions correctly from file" in {
//     val testFile = "src/test/scala/pipeline/instructionmemory.txt"
//     test(new InstructionMemory(Some(testFile))) { c =>
//       c.io.readadress.poke(0.U)
//       c.clock.step()
//       c.io.readdata.expect("h00200293".U)
//       c.io.readadress.poke(1.U)
//       c.clock.step()
//       c.io.readdata.expect("h00a00213".U)
//     }
//   }
// }
