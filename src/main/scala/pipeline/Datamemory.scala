// package pipeline
// import chisel3._
// import chisel3.util._
// import chisel3.util.experimental.loadMemoryFromFile
// import scala.io.Source

// class Datamemory(InitFile: Option[String]) extends Module {
//   val io = IO(new Bundle {
//     val Alures = Input(UInt(32.W))    
//     val WriteData = Input(UInt(32.W))    
//     val WriteEnable = Input(Bool())
//     val ReadEnable = Input(Bool())
//     val func3 = Input(UInt(3.W))
//     val memaddress = Input(UInt(24.W))    
//     val ReadData = Output(UInt(32.W))
//     val memout = Output(UInt(32.W))
//     val wmask = Output(UInt(4.W))
//   })

//   val mem = Mem(8192, Vec(4, UInt(8.W)))
//   val offset = io.Alures(1, 0)
//   val wdata = Wire(Vec(4, UInt(8.W)))
//   val rdata = Wire(Vec(4, UInt(8.W)))

//   if (InitFile.isDefined) {
//     loadMemoryFromFile(mem, InitFile.get)
//   }
//   wdata := VecInit(Seq(
//     io.WriteData(7, 0),
//     io.WriteData(15, 8),
//     io.WriteData(23, 16),
//     io.WriteData(31, 24)
//   ))
//   rdata := mem.read(io.memaddress)

//   io.wmask := 0.U
//   when(io.WriteEnable) {
//     switch(io.func3) {
//       is("b000".U) { // SB
//         io.wmask := (1.U << offset).asUInt
//       }
//       is("b001".U) { // SH
//         io.wmask := ("b0011".U << offset).asUInt
//       }
//       is("b010".U) { // SW
//         io.wmask := "b1111".U
//       }
//     }
//     mem.write(io.memaddress, wdata, io.wmask.asBools)
//   }
//   io.ReadData := 0.U
//   io.memout := 0.U
//   when(io.ReadEnable) {
//     val word = Cat(rdata.reverse) 
//     switch(io.func3) {
//       is("b000".U) { // LB
//         io.ReadData := Cat(Fill(24, rdata(offset)(7)), rdata(offset))
//         io.memout := Cat(Fill(24, rdata(offset)(7)), rdata(offset))
//       }
//       is("b100".U) { // LBU
//         io.ReadData := Cat(Fill(24, 0.U), rdata(offset))
//         io.memout := Cat(Fill(24, 0.U), rdata(offset))
//       }
//       is("b001".U) { // LH
//         val half = Cat(rdata(offset + 1.U), rdata(offset))
//         io.ReadData := Cat(Fill(16, half(15)), half)
//         io.memout := Cat(Fill(16, half(15)), half)
//       }
//       is("b101".U) { // LHU
//         val half = Cat(rdata(offset + 1.U), rdata(offset))
//         io.ReadData := Cat(Fill(16, 0.U), half)
//         io.memout := Cat(Fill(16, 0.U), half)
//       }
//       is("b010".U) { // LW
//         io.ReadData := word
//         io.memout := word
//       }
//     }
//   }
// }
