package pipeline
import chisel3._
import chisel3.util._

class TypeDecoder extends Module{
    val io = IO(new Bundle{
        val opcode = Input(UInt(6.W))
        val r_out = Output(UInt(1.W))
        val load_out = Output(UInt(1.W))
        val store_out = Output(UInt(1.W))
        val sb_out = Output(UInt(1.W))
        val i_out = Output(UInt(1.W))
        val jal_out = Output(UInt(1.W))
        val jalr_out = Output(UInt(1.W))
        val lui_out = Output(UInt(1.W))
        val aluop = Output(UInt(2.W)) 
    })

    io.load_out := 0.U 
    io.r_out := 0.U
    io.sb_out := 0.U
    io.store_out := 0.U
    io.i_out := 0.U
    io.jal_out := 0.U
    io.lui_out := 0.U
    io.jalr_out := 0.U

    when(io.opcode === "b0000011".U){ 
        io.load_out := 1.U
    }.elsewhen(io.opcode === "b0001111".U | io.opcode === "b0010011".U | io.opcode === "b1110011".U ){
        io.i_out := 1.U
    }.elsewhen(io.opcode === "b1100111".U ){ 
        io.jalr_out := 1.U
    }.elsewhen(io.opcode === "b0100011".U ){ 
        io.store_out := 1.U
    }.elsewhen(io.opcode === "b0110011".U ){ 
        io.r_out := 1.U
    }.elsewhen(io.opcode === "b1100011".U ){ 
        io.sb_out := 1.U
    }.elsewhen(io.opcode === "b1101111".U ){ 
        io.jal_out := 1.U
    }.elsewhen(io.opcode === "b0110111".U ){ 
        io.lui_out := 1.U
    }   

    io.aluop := "b00".U   

    switch(io.opcode) {
        is("b0110011".U) {io.aluop := "b10".U } //R TYPE
        is("b0010011".U) {io.aluop := "b10".U } //I TYPE
        is("b1100011".U) {io.aluop := "b01".U } //BRANCH
        is("b0000011".U) {io.aluop := "b00".U } //LOAD
        is("b0100011".U) {io.aluop := "b00".U } //STORE
        is("b0010111".U) {io.aluop := "b11".U } //UJ TYPE
        is("b0110111".U) {io.aluop := "b11".U } //U TYPE
    }
}