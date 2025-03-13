package SingleCycle
import chisel3._
import chisel3.util._
import chisel3.util.experimental.loadMemoryFromFile
import scala.io.Source

class SingleCycle extends Module{
    val io = IO(new Bundle{
        val Output1 = Output(UInt(32.W))
        val datamemOut = Output(SInt(32.W))
        val Address = Output(UInt(24.W))
        val write = Output(UInt(1.W))
    })
    val pc_module = Module(new Programcounter)
    val insmemory_module = Module(new InstructionMemory("src/test/scala/SingleCycle/instructionmemory.txt"))
    val ifid_module = Module(new IFID)
    val immgen_module = Module(new ImmediateGeneration)
    val isntdecoder_module = Module(new InstructionDecoder)
    val typeDecoder_module =Module(new TypeDecoder)
    val regfile_module = Module(new RegisterFile)
    val idex_module = Module(new IDEX)
    val aluopgen_module = Module(new AluopGeneration)
    val alucontrol_module = Module(new Alucontrol)
    val alu_module = Module(new Alu)
    val exmem_module = Moduel(new EXMEM)
    val datamemory_module = Module(new Datamemory)
    val memwb_module = Module(new MEMWB)


    //FetchBranchS
    val muxsig = exmem_module.io.BranchS & exmem_module.io.ZeroMEM
    pc_module.io.in := MuxLookup (muxsig, 0.S, Array(
        (0.U) -> pc_module.io.pc4,
        (1.U) -> exmem_module.io.JumpMEM))
    insmemory_module.io.readadress := pc_module.io.out(25,2)

    //IFID
    ifid_module.io.PCout := pc_module.io.pcout 
    ifid_module.io.Instr := insmemory_module.io.readdata

    //IDEX
    idex_module.io.PC := ifid_module.io.PCout
       
      
    val Read1 = Input(UInt(32.W))
    val Read2 = Input(UInt(32.W))
    val Immd = Input(UInt(32.W))
    val RD = Input(UInt(5.W))
    val INSTR = Input(UInt(32.W))
    val Branch = Input(Bool())
    val MemRead = Input(Bool())
    val MemtoReg = Input(Bool())
    val ALUOp = Input(Bool())
    val MemWrite = Input(Bool())
    val AluSrc = Input(Bool())
    val RegWrite = Input(Bool())
    val RS1 = Input(UInt(32.W))
    val RS2 = Input(UInt(32.W))

    //Decode
    isntdecoder_module.io.instruction := ifid_module.io.Instr 
    immgen_module.io.instruction := ifid_module.io.Instr
    typeDecoder_module.io.opcode := isntdecoder_module.io.opcode 

    aluopgen_module.io.opcode := isntdecoder_module.io.opcode

    val regWrite = typeDecoder_module.io.r_out | typeDecoder_module.io.i_out | typeDecoder_module.io.jal_out | typeDecoder_module.io.jalr_out | typeDecoder_module.io.lui_out | typeDecoder_module.io.load_out 

    regfile_module.io.regWrite := memwb_module.io.RegWriteS
    regfile_module.io.rs1 := isntdecoder_module.io.rs1
    regfile_module.io.rs2 := isntdecoder_module.io.rs2
    regfile_module.io.rd := isntdecoder_module.io.rd
    regfile_module.io.writeData := MuxLookup(memwb_module.io.MemtoRegS,0.U,Array(
        (0.U) -> memwb_module.io.ALUresWB
        (1.U) -> memwb_module.io.ReadDataWB.asUInt  
    ) )
    
    //Execute
    alucontrol_module.io.aluop := aluopgen_module.io.aluop
    alucontrol_module.io.opcode := isntdecoder_module.io.opcode
    alucontrol_module.io.func7 := isntdecoder_module.io.func7
    alucontrol_module.io.func3 := isntdecoder_module.io.func3


    alu_module.io.op1 := regfile_module.io.writeregester1
    alu_module.io.op2 := MuxLookup (typeDecoder_module.io.i_out, 0.S, Array(
        (0.U) -> regfile_module.io.writeregester2,
        (1.U) -> immgen_module.io.immd_se))
    alu_module.io.aluctrl := alucontrol_module.io.aluctrl


    //Writeback
    val c = immgen_module.io.immd_se + regfile_module.io.writeregester1
    val d = c(23,0)
    val e = typeDecoder_module.io.load_out | typeDecoder_module.io.store_out
    val address = MuxLookup(e, 0.U, Seq(
    (0.U) -> 0.U,
    (1.U) -> d
    ))

    datamemory_module.io.memdata := regfile_module.io.writeregester2.asSInt
    datamemory_module.io.memaddress := address
    datamemory_module.io.memread := regWrite
    datamemory_module.io.memwrite := typeDecoder_module.io.store_out

    io.Output1 := alu_module.io.aluout
    io.datamemOut := datamemory_module.io.memout
    io.Address := address
    io.write := regWrite
}