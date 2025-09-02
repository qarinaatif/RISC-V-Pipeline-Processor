package pipeline
import chisel3._
import chisel3.util._

class Alucontrol extends Module {
    val io = IO(new Bundle{
        val Aluop = Input(UInt(3.W))
        val func7 = Input(UInt(7.W))
        val func3 = Input(UInt(3.W))
        val aluctrl = Output(UInt(5.W))
    })
    io.aluctrl := 0.U 

    when (io.Aluop === "b000".U){
        io.aluctrl := Cat("b0".U,io.func7,io.func3)
        }.elsewhen(io.Aluop === "b001".U){
            io.aluctrl := Cat("b00".U,io.func3)
        }.elsewhen(io.Aluop === "b101".U || io.Aluop === "b100".U){
            io.aluctrl := "b00000".U
        }.elsewhen(io.Aluop === "b011".U){
            io.aluctrl := "b11111".U
        }.elsewhen(io.Aluop === "b010".U){
            io.aluctrl := Cat("b10".U,io.func3)
        }.elsewhen(io.Aluop === "b110".U){
            io.aluctrl := "b00000".U}     
}

