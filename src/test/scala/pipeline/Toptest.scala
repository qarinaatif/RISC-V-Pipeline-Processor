package pipeline
import chisel3._
import chiseltest._
import org.scalatest._

class Toptest extends FreeSpec with ChiselScalatestTester {
  "Toptest" in {
    test(new Top) { c =>
      c.clock.step(80)

    }
  }
}