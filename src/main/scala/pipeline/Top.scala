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
    val branch_module = Module( new BranchControl)
    val idex_module = Module(new IDEX)
    val alucontrol_module = Module(new Alucontrol)
    val alu_module = Module(new Alu)
    val exmem_module = Module(new EXMEM)
    val datamemory_module = Module(new Datamemory)
    val memwb_module = Module(new MEMWB)
    val Forwarding = Module(new ForwardingUnit)
    val HazardDetect = Module(new HazardUnit)
    val Branch_Forward = Module(new BranchForwardingUnit)
    val Forward = Module(new Forward)

        
    //Fetch
    val pcout = MuxLookup (HazardDetect.io.HazardDetect,0.S, Array (
        (0.U) -> pc_module.io.pc4.asSInt,
        (1.U) -> HazardDetect.io.PC_In.asSInt))
    pc_module.io.in := pcout.asSInt 
    insmemory_module.io.readadress := pc_module.io.pcout(25,2)

    //IFID
    ifid_module.io.PCout := pc_module.io.pcout.asUInt   
    ifid_module.io.Instr := insmemory_module.io.readdata
    val stall_reg = RegInit(false.B)
    stall_reg := HazardDetect.io.Stall
    ifid_module.io.Stall := stall_reg


    //DECODE
    isntdecoder_module.io.instruction := ifid_module.io.InstrD 
    immgen_module.io.pcin := ifid_module.io.PCoutD
    immgen_module.io.instruction := ifid_module.io.InstrD
    typeDecoder_module.io.opcode := isntdecoder_module.io.opcode 
    typeDecoder_module.io.func3 := isntdecoder_module.io.func3

    regfile_module.io.regWrite := typeDecoder_module.io.r_out | typeDecoder_module.io.i_out | typeDecoder_module.io.jal_out | typeDecoder_module.io.jalr_out | typeDecoder_module.io.lui_out | typeDecoder_module.io.load_out 
    Forward.io.RS1 := isntdecoder_module.io.rs1
    Forward.io.RS2 := isntdecoder_module.io.rs2
    Forward.io.MEMWB_RegWrite := memwb_module.io.RegWriteS
    Forward.io.MEMWB_RD := memwb_module.io.RDD
   
    val Forward_rs1 = Wire(SInt(32.W)) 
    val Forward_rs2 = Wire(SInt(32.W))

    when (Forward.io.RS1OUT === 0.U) {
      Forward_rs1 := regfile_module.io.writeregester1.asSInt
    }.elsewhen (Forward.io.RS1OUT === 1.U) {
      Forward_rs1 := regfile_module.io.writeData.asSInt
   // }.elsewhen(regfile_module.io.rd =/= "b00".U (regfile_module.io.rs1 === regfile_module.io.rd)) {
           // Forward_rs1 := memwb_module.io.ALUresWB.asSInt
    }.otherwise {
      Forward_rs1 := 0.S 
    }
    // rs2_data
   when (Forward.io.RS2OUT === 0.U) {
      Forward_rs2 := regfile_module.io.writeregester2.asSInt
    }.elsewhen (Forward.io.RS2OUT === 1.U) {
      Forward_rs2 := regfile_module.io.writeData.asSInt
    }.otherwise {
      Forward_rs2 := 0.S 
    }
    regfile_module.io.rs1 := isntdecoder_module.io.rs1
    regfile_module.io.rs2 := isntdecoder_module.io.rs2
    regfile_module.io.rd := memwb_module.io.RDD
    regfile_module.io.regWrite := memwb_module.io.RegWriteS
    
    idex_module.io.MemWrite := typeDecoder_module.io.store_out
    idex_module.io.MemRead := typeDecoder_module.io.load_out
    idex_module.io.MemtoReg := typeDecoder_module.io.load_out
    idex_module.io.RegWrite := typeDecoder_module.io.r_out | typeDecoder_module.io.i_out | typeDecoder_module.io.jal_out | typeDecoder_module.io.jalr_out | typeDecoder_module.io.lui_out | typeDecoder_module.io.load_out  | (ifid_module.io.InstrD(6,0) ==="b1101111".U)
    idex_module.io.ALUOp := typeDecoder_module.io.aluop
    idex_module.io.AluSrc := typeDecoder_module.io.i_out | typeDecoder_module.io.lui_out
    idex_module.io.Branch := typeDecoder_module.io.sb_out | (ifid_module.io.InstrD(6,0) === "b1100011".U)
    idex_module.io.Nextpc := 0.U

    HazardDetect.io.IFID_Rs1 := isntdecoder_module.io.rs1
    HazardDetect.io.IFID_Rs2 := isntdecoder_module.io.rs2
    HazardDetect.io.IDEX_MemRead := idex_module.io.MemReadS
    HazardDetect.io.IDEX_RD := idex_module.io.RDD
    HazardDetect.io.PC := ifid_module.io.PCoutD.asSInt
    HazardDetect.io.Immediate := immgen_module.io.immd_se
    HazardDetect.io.Rs1 := isntdecoder_module.io.rs1
    HazardDetect.io.sb := typeDecoder_module.io.sb_out  
    HazardDetect.io.br_taken := branch_module.io.br_taken 
    HazardDetect.io.jal := typeDecoder_module.io.jal_out  
    HazardDetect.io.jalr := typeDecoder_module.io.jalr_out  
    HazardDetect.io.Instruction :=ifid_module.io.InstrD

    Branch_Forward.io.IDEX_RD := idex_module.io.RDD
    Branch_Forward.io.EXMEM_RD := exmem_module.io.RDD 
    Branch_Forward.io.MEMWB_RD := memwb_module.io.RDD
    Branch_Forward.io.IDEX_MemRead := idex_module.io.MemReadS
    Branch_Forward.io.EXMEM_MemRead := exmem_module.io.MemReadS
    Branch_Forward.io.MEMWB_MemRead := memwb_module.io.MemReadS
    Branch_Forward.io.RS1 := isntdecoder_module.io.rs1
    Branch_Forward.io.RS2 := isntdecoder_module.io.rs2
    Branch_Forward.io.Branch := (ifid_module.io.InstrD(6,0) === "b1100011".U)
    branch_module.io.arg_x := MuxLookup (Branch_Forward.io.forward_rs1, 0.S, Array (
        (0.U) -> regfile_module.io.writeregester1.asSInt,
        (1.U) -> alu_module.io.aluout.asSInt, 
        (2.U) -> exmem_module.io.ALUresMEM.asSInt, 
        (3.U) -> regfile_module.io.writeData.asSInt, 
        (4.U) -> datamemory_module.io.memout.asSInt, 
        (5.U) -> regfile_module.io.writeData.asSInt,
        (6.U) -> regfile_module.io.writeregester1.asSInt,
        (7.U) -> regfile_module.io.writeregester1.asSInt,
        (8.U) -> regfile_module.io.writeregester1.asSInt,
        (9.U) -> regfile_module.io.writeregester1.asSInt,
        (10.U) -> regfile_module.io.writeregester1.asSInt))
   val rdata1 = MuxLookup(Branch_Forward.io.forward_rs1, 0.U, Array(
        (0.U) -> regfile_module.io.writeregester1.asUInt,
        (1.U) -> regfile_module.io.writeregester1.asUInt,
        (2.U) -> regfile_module.io.writeregester1.asUInt,
        (3.U) -> regfile_module.io.writeregester1.asUInt,
        (4.U) -> regfile_module.io.writeregester1.asUInt,
        (5.U) -> regfile_module.io.writeregester1.asUInt,
        (6.U) -> alu_module.io.aluout,
        (7.U) -> exmem_module.io.ALUresMEM.asUInt,
        (8.U) -> regfile_module.io.writeData.asUInt,
        (9.U) -> datamemory_module.io.memout.asUInt,
        (10.U) -> regfile_module.io.writeData))

    val JALR =  (immgen_module.io.immd_se.asUInt + rdata1) & "hFFFFFFFE".U
    branch_module.io.arg_y := MuxLookup (Branch_Forward.io.forward_rs2, 0.S, Array (
        (0.U) -> regfile_module.io.writeregester2.asSInt,
        (1.U) -> alu_module.io.aluout.asSInt, 
        (2.U) -> exmem_module.io.ALUresMEM.asSInt, 
        (3.U) -> regfile_module.io.writeData.asSInt, 
        (4.U) -> datamemory_module.io.memout.asSInt, 
        (5.U) -> regfile_module.io.writeData.asSInt))
    
    branch_module.io.fnct3 := isntdecoder_module.io.func3     
    branch_module.io.opcode := isntdecoder_module.io.opcode

    //IDEX
  
    idex_module.io.PC := ifid_module.io.PCoutD
    when(regfile_module.io.rd =/= "b00".U &(regfile_module.io.rs1 === regfile_module.io.rd)) {
           idex_module.io.Read1 := memwb_module.io.ALUresWB
    }.otherwise{idex_module.io.Read1 := regfile_module.io.writeregester1}
     when(regfile_module.io.rd =/= "b00".U &(regfile_module.io.rs2 === regfile_module.io.rd)) {
           idex_module.io.Read2 := memwb_module.io.ALUresWB
    }.otherwise{idex_module.io.Read2 := regfile_module.io.writeregester2}
    idex_module.io.Immd := immgen_module.io.immd_se.asUInt
    idex_module.io.RD := isntdecoder_module.io.rd
    idex_module.io.RS1 := isntdecoder_module.io.rs1
    idex_module.io.RS2 := isntdecoder_module.io.rs2
    idex_module.io.INSTR := ifid_module.io.Instr 
    idex_module.io.jal := ifid_module.io.InstrD(6,0) ==="b1101111".U
    idex_module.io.sig := typeDecoder_module.io.i_out | typeDecoder_module.io.load_out|typeDecoder_module.io.store_out
    idex_module.io.muxsign := typeDecoder_module.io.load_out|typeDecoder_module.io.store_out
    idex_module.io.jalr_sign := typeDecoder_module.io.jalr_out


    val t = idex_module.io.RS2

    //Forwarding
    Forwarding.io.IDEX_RS1 := idex_module.io.RS1EX
    Forwarding.io.IDEX_RS2 := idex_module.io.RS2EX
    Forwarding.io.EXMEM_RD := exmem_module.io.RDD
    Forwarding.io.EXMEM_RegWrite := exmem_module.io.RegWriteS
    Forwarding.io.MEMWB_RD := memwb_module.io.RDD
    Forwarding.io.MEMWB_RegWrite := memwb_module.io.RegWriteS

    //Execute
    val reg = Wire(SInt(32.W))
    when(idex_module.io.jalr_signout === "b1".U) {
        alu_module.io.op1 := idex_module.io.PCEX.asUInt
    }.otherwise {
        when(Forwarding.io.ForwardA === "b00".U) {
            alu_module.io.op1 := idex_module.io.Read1EX
        }.elsewhen(Forwarding.io.ForwardA === "b01".U) {
            alu_module.io.op1 := reg.asUInt
        }.elsewhen(Forwarding.io.ForwardA === "b10".U) {
            alu_module.io.op1 := memwb_module.io.ALUres
        }.otherwise {
            alu_module.io.op1 := idex_module.io.Read1EX
        }
      }
    val reg2 = Wire(SInt(32.W)) 
    when (Forwarding.io.ForwardB === 0.U) {
      reg2 := idex_module.io.Read2EX.asSInt
    }.elsewhen (Forwarding.io.ForwardB === 1.U) {
      reg2 := reg
    }.elsewhen (Forwarding.io.ForwardB === 2.U) {
      reg2 := exmem_module.io.ALUresMEM.asSInt
    }.otherwise {
      reg2 := 0.S
    }
    when (idex_module.io.sign === 1.U) {
      alu_module.io.op2 := idex_module.io.ImmdDEX
      exmem_module.io.ReadData2 := reg2.asUInt
    }.otherwise {
      alu_module.io.op2 := reg2.asUInt
      exmem_module.io.ReadData2 := idex_module.io.Read2EX
    }

    alucontrol_module.io.aluop := idex_module.io.ALUOpS
    alucontrol_module.io.opcode := isntdecoder_module.io.opcode
    alucontrol_module.io.func7 := isntdecoder_module.io.func7
    alucontrol_module.io.func3 := isntdecoder_module.io.func3

    alu_module.io.aluctrl := alucontrol_module.io.aluctrl.asUInt
    alu_module.io.fnct3 := isntdecoder_module.io.func3
    alu_module.io.branch := typeDecoder_module.io.sb_out
   
    //EXMEM
    exmem_module.io.PC := idex_module.io.PCEX
    exmem_module.io.Jump := idex_module.io.jal_out
    exmem_module.io.sig := idex_module.io.sign
    exmem_module.io.RS1 := idex_module.io.RS1EX
    exmem_module.io.Immd := idex_module.io.ImmdDEX
    exmem_module.io.Zero := alu_module.io.zero
    when(exmem_module.io.Jump === 1.U){ exmem_module.io.ALUres := exmem_module.io.PCEX + 8.U
    }.otherwise{
    exmem_module.io.ALUres := alu_module.io.aluout}
    exmem_module.io.ReadData1 := idex_module.io.Read1EX

    exmem_module.io.RD := idex_module.io.RDD
    exmem_module.io.Branch := idex_module.io.BranchS
    exmem_module.io.MemRead := idex_module.io.MemReadS
    exmem_module.io.MemtoReg := idex_module.io.MemtoRegS
    exmem_module.io.MemWrite := idex_module.io.MemWriteS
    exmem_module.io.RegWrite := idex_module.io.RegWriteS
    exmem_module.io.muxsign := idex_module.io.muxsign_out

    //Memory
    datamemory_module.io.memwrite := exmem_module.io.MemWriteS
    datamemory_module.io.memread := exmem_module.io.MemReadS
    //val added = exmem_module.io.ImmdMEM + exmem_module.io.ReadData1MEM
    val muxsign1 = exmem_module.io.muxsign_out
    val mux1 = Mux(muxsign1 === 0.U, exmem_module.io.ALUresMEM, exmem_module.io.ALUresMEM)//added)
    datamemory_module.io.memaddress := mux1
    datamemory_module.io.memdata := exmem_module.io.ReadData2MEM.asSInt   

    
    //MEMWB
    
    memwb_module.io.ReadData := datamemory_module.io.memout.asUInt   
    memwb_module.io.ALUres := exmem_module.io.ALUresMEM
    memwb_module.io.RD := exmem_module.io.RDD
    memwb_module.io.MemtoReg := exmem_module.io.MemtoRegS
    memwb_module.io.RegWrite := exmem_module.io.RegWriteS
    memwb_module.io.MemRead := exmem_module.io.MemReadS
     
    //Writeback
    when (memwb_module.io.MemtoRegS === 0.U) {reg := memwb_module.io.ALUresWB.asSInt        
    }.elsewhen (memwb_module.io.MemtoRegS === 1.U) {reg := memwb_module.io.ReadDataWB.asSInt  
    }.otherwise {reg := 0.S
}
    //val B := memwb_module.io.ReadDataWB.asSInt  
     regfile_module.io.writeData := reg.asUInt  

    io.Output1 := alu_module.io.aluout
    io.datamemOut := datamemory_module.io.memout
    io.Address := exmem_module.io.ALUresMEM
    io.write := typeDecoder_module.io.r_out | typeDecoder_module.io.i_out | typeDecoder_module.io.jal_out | typeDecoder_module.io.jalr_out | typeDecoder_module.io.lui_out | typeDecoder_module.io.load_out 
}