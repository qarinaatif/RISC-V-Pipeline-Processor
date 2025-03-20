package pipeline
import chisel3._
import chisel3.util._
import chisel3.util.experimental.loadMemoryFromFile
import scala.io.Source

class Top extends Module{
    val io = IO(new Bundle{
        val Output1 = Output(UInt(32.W))
        val datamemOut = Output(SInt(32.W))
        val Address = Output(UInt(24.W))
        val write = Output(UInt(1.W))
    })
    val pc_module = Module(new Programcounter)
    val insmemory_module = Module(new InstructionMemory("src/test/scala/pipeline/instructionmemory.txt"))
    val ifid_module = Module(new IFID)
    val immgen_module = Module(new ImmediateGeneration)
    val isntdecoder_module = Module(new InstructionDecoder)
    val typeDecoder_module =Module(new TypeDecoder)
    val regfile_module = Module(new RegisterFile)
    val idex_module = Module(new IDEX)
    val alucontrol_module = Module(new Alucontrol)
    val alu_module = Module(new Alu)
    val exmem_module = Module(new EXMEM)
    val datamemory_module = Module(new Datamemory)
    val memwb_module = Module(new MEMWB)


    //Fetch
    val muxsig = exmem_module.io.sig|(exmem_module.io.BranchS & exmem_module.io.ZeroMEM)
    //pc_module.io.in := MuxLookup (muxsig, 0.U, Array(
        //(0.U) -> pc_module.io.pc4,
        //(1.U) -> exmem_module.io.JumpMEM))
    // Using Mux for simpler conditional selection
    // Cast UInt to SInt if needed
    val pcout = Mux(muxsig === 0.U, pc_module.io.pc4.asSInt, exmem_module.io.JumpMEM.asSInt)
    pc_module.io.in := pcout
    insmemory_module.io.readadress := pc_module.io.pcout(25,2)

    //IFID
    ifid_module.io.PCout := pc_module.io.pcout.asUInt
    ifid_module.io.Instr := insmemory_module.io.readdata

    //DECODE
    isntdecoder_module.io.instruction := ifid_module.io.InstrD 
    immgen_module.io.instruction := ifid_module.io.InstrD
    typeDecoder_module.io.opcode := isntdecoder_module.io.opcode 

    regfile_module.io.regWrite := memwb_module.io.RegWriteS
    regfile_module.io.rs1 := isntdecoder_module.io.rs1
    regfile_module.io.rs2 := isntdecoder_module.io.rs2
    regfile_module.io.rd := memwb_module.io.RDD
    //regfile_module.io.writeData := MuxLookup(memwb_module.io.MemtoRegS,0.U,Array(
        //(0.U) -> memwb_module.io.ALUresWB
        //(1.U) -> memwb_module.io.ReadDataWB
    when (memwb_module.io.MemtoRegS === 0.U) {
        regfile_module.io.writeData := memwb_module.io.ALUresWB
    } .elsewhen (memwb_module.io.MemtoRegS === 1.U) {
        regfile_module.io.writeData := memwb_module.io.ReadDataWB
    } .otherwise {
        regfile_module.io.writeData := 0.U
    }


    //IDEX
    idex_module.io.PC := ifid_module.io.PCoutD
    idex_module.io.Read1 := regfile_module.io.writeregester1
    idex_module.io.Read2 := regfile_module.io.writeregester2
    idex_module.io.Immd := immgen_module.io.immd_se
    idex_module.io.RD := isntdecoder_module.io.rd
    idex_module.io.RS1 := isntdecoder_module.io.rs1
    idex_module.io.INSTR := ifid_module.io.Instr 
    idex_module.io.Branch := typeDecoder_module.io.sb_out
    idex_module.io.MemRead := typeDecoder_module.io.load_out
    idex_module.io.MemtoReg := typeDecoder_module.io.load_out
    idex_module.io.ALUOp := typeDecoder_module.io.aluop//typeDecoder_module.io.r_out | typeDecoder_module.io.sb_out
    idex_module.io.MemWrite := typeDecoder_module.io.store_out
    idex_module.io.AluSrc := typeDecoder_module.io.i_out | typeDecoder_module.io.lui_out
    idex_module.io.RegWrite := typeDecoder_module.io.r_out | typeDecoder_module.io.i_out | typeDecoder_module.io.jal_out | typeDecoder_module.io.jalr_out | typeDecoder_module.io.lui_out | typeDecoder_module.io.load_out 
    idex_module.io.sig := typeDecoder_module.io.jalr_out|typeDecoder_module.io.jal_out
    idex_module.io.muxsign := typeDecoder_module.io.load_out|typeDecoder_module.io.store_out
    idex_module.io.jalr_sign := typeDecoder_module.io.jalr_out

    //Execute

    alucontrol_module.io.aluop := idex_module.io.ALUOpS
    alucontrol_module.io.opcode := isntdecoder_module.io.opcode
    alucontrol_module.io.func7 := isntdecoder_module.io.func7
    alucontrol_module.io.func3 := isntdecoder_module.io.func3
    
    alu_module.io.fnct3 := isntdecoder_module.io.func3
    alu_module.io.branch := typeDecoder_module.io.sb_out
    alu_module.io.op1 := idex_module.io.Read1EX
    alu_module.io.op2 := MuxLookup (idex_module.io.AluSrcS, 0.S, Array(
        (0.U) -> idex_module.io.Read2EX,
        (1.U) -> idex_module.io.ImmdDEX))
    alu_module.io.aluctrl := alucontrol_module.io.aluctrl
    val j = MuxLookup (idex_module.io.jalr_signout, 0.U, Array(
            (0.U) -> idex_module.io.ImmdDEX,
            (1.U) -> idex_module.io.RS1EX))        
    val sum = j + idex_module.io.PCEX

    //EXMEM
    exmem_module.io.sig := idex_module.io.sign
    exmem_module.io.RS1 := idex_module.io.RS1EX
    exmem_module.io.Immd := idex_module.io.ImmdDEX
    exmem_module.io.Jump := sum
    exmem_module.io.Zero := alu_module.io.zero
    exmem_module.io.ALUres := alu_module.io.aluout
    exmem_module.io.ReadData2 := idex_module.io.Read2EX
    exmem_module.io.RD := idex_module.io.RDD
    exmem_module.io.Branch := idex_module.io.BranchS
    exmem_module.io.MemRead := idex_module.io.MemReadS
    exmem_module.io.MemtoReg := idex_module.io.MemtoRegS
    exmem_module.io.MemWrite := idex_module.io.MemWriteS
    exmem_module.io.RegWrite := idex_module.io.RegWriteS
    exmem_module.io.muxsign := idex_module.io.muxsign_out

    //Memory
    //val Branch = exmem_module.io.BranchS & exmem_module.io.ZeroMEM
    datamemory_module.io.memwrite := exmem_module.io.MemWriteS
    datamemory_module.io.memread := exmem_module.io.MemReadS
    val added = exmem_module.io.ImmdMEM + exmem_module.io.RS1MEM
    val muxsign1 = exmem_module.io.muxsign_out
    val mux1 = Mux(muxsign1 === 0.U, exmem_module.io.ALUresMEM, added)
    datamemory_module.io.memaddress := mux1
    datamemory_module.io.memdata := exmem_module.io.ReadData2MEM.asSInt    
    
    //MEMWB
    memwb_module.io.ReadData := datamemory_module.io.memout.asUInt   
    memwb_module.io.ALUres := exmem_module.io.ALUresMEM
    memwb_module.io.RD := exmem_module.io.RDD
    memwb_module.io.MemtoReg := exmem_module.io.MemtoRegS
    memwb_module.io.RegWrite := exmem_module.io.RegWriteS

    //Writeback

    io.Output1 := alu_module.io.aluout
    io.datamemOut := datamemory_module.io.memout
    io.Address := exmem_module.io.ALUresMEM
    io.write := typeDecoder_module.io.r_out | typeDecoder_module.io.i_out | typeDecoder_module.io.jal_out | typeDecoder_module.io.jalr_out | typeDecoder_module.io.lui_out | typeDecoder_module.io.load_out 
}