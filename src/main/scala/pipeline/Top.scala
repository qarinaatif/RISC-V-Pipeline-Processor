package pipeline
import chisel3._
import chisel3.stage.ChiselStage
import tracer._

class Top(programFile:Option[String], dataFile:Option[String]) extends Module{

  val io = IO(new Bundle() {
    //val pin = Output(UInt(32.W))
    //val fcsr = Output(UInt(32.W))
    val rvfi = new TracerO
  })

  implicit val config:Configs = Configs(TRACE=true)

  val Core: Core = Module(new Core())
  val dmem = Module(new SRamTop(dataFile))
  val imem = Module(new SRamTop(programFile))

  /*  Imem Interceonnections  */
  Core.io.imemRsp <> imem.io.rsp
  imem.io.req <> Core.io.imemReq

  /*  Dmem Interconnections  */
  Core.io.dmemRsp <> dmem.io.rsp
  dmem.io.req <> Core.io.dmemReq

  if (config.TRACE) {
    val tracer = Module(new Tracer)
    tracer.rvfi_i <> Core.io.rvfi.get
    io.rvfi <> tracer.rvfi_o
  }
}

object NRVDriver {
  // generate verilog
  def main(args: Array[String]): Unit = {
      val IMem =  if (args.length > 0) args(0) else "program.hex"
      val DMem =  if (args.length > 1) args(1) else "dmem.hex"
      new ChiselStage().emitVerilog(new Top(Some(IMem), Some(DMem)), args)
  }
} 