// package pipeline
// import chisel3._
// import chisel3.util._
// import chiseltest._
// import org.scalatest._

// class Datamemorytest(InitFile : Option[String]) extends FreeSpec with ChiselScalatestTester{
//     "Datamemory Test" in {
//         test(new Datamemory(InitFile)) { c =>
//             c.io.memwrite.poke(0.B)
//             c.io.memread.poke(1.B)
//             c.io.memaddress.poke(1.U)
//             c.clock.step(1)
//             c.io.memout.expect(0.U)

//             c.io.memwrite.poke(1.B)
//             c.io.memread.poke(0.B)
//             c.io.memaddress.poke(1.U)
//             c.io.memdata.poke(100101795.U)
//             c.clock.step(1)
//             c.io.memout.expect(0.U)

//             c.io.memwrite.poke(0.B)
//             c.io.memread.poke(1.B)
//             c.io.memaddress.poke(1.U)
//             c.clock.step(1)
//             c.io.memout.expect(100101795.U)
//     }}
// }