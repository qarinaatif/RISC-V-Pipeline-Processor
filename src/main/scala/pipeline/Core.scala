package pipeline
import chisel3._
import chisel3.util._
import chisel3.util.experimental.loadMemoryFromFile
import scala.io.Source
import tracer.{TracerI, delays}
import tracer._

class Core(implicit val config:Configs)extends Module{
  val TRACE  = config.TRACE
    val io = IO(new Bundle{
        
        val Instruction = Output(UInt(32.W))
        val Address = Output(UInt(24.W))
        val output = Output(UInt(32.W))

        val dmemReq = Decoupled(new MemRequestIO)
        val dmemRsp = Flipped(Decoupled(new MemResponseIO))

        val imemReq = Decoupled(new MemRequestIO)
        val imemRsp = Flipped(Decoupled(new MemResponseIO))
            
        val rvfi = if (TRACE) Some(Flipped(new TracerI)) else None
    })
    
    //initilize modules
    val pc_module = Module(new Programcounter) 
    val if_module = Module(new InstructionFetch).io
    val alu_module = Module(new Alu)
    val alucontrol_module = Module(new Alucontrol)
    val Branchcontrol_module = Module( new Branchcontrol)
    val BranchForward_module = Module(new BranchForwardingUnit)
    val ControlDecoder_module = Module(new ControlDecoder)
    val exmem_module = Module(new EXMEM)
    val Forward_module = Module(new Forward)
    val ForwardingUnit_module = Module(new ForwardingUnit)
    val HazardDetect_module = Module(new HazardUnit)
    val idex_module = Module(new IDEX)
    val ifid_module = Module(new IFID)
    val immgen_module = Module(new ImmediateGen)
    val jalr_module = Module(new jalr) 
    val memwb_module = Module(new MEMWB)
    val regfile_module = Module(new RegisterFile)
    val MEM = Module(new MemoryFetch(TRACE))

    //Fetch
    io.imemReq <> if_module.coreInstrReq
    if_module.coreInstrResp <> io.imemRsp
    
    pc_module.io.in := pc_module.io.pc4
    when( (ifid_module.io.Instr_IFID(6,0 ) === "b1101111".U)|| (ifid_module.io.Instr_IFID(6,0 ) === "b1100111".U)){
       pc_module.io.in := immgen_module.io.imm_out
    }.elsewhen((Branchcontrol_module.io.branchctrl === 1.U && ControlDecoder_module.io.Branch === 1.B) ){
        pc_module.io.in := (immgen_module.io.imm_out - 4.asSInt)
    }.elsewhen((ifid_module.io.Instr_IFID(6,0 ) === "b1100011".U) || (ifid_module.io.Instr_IFID(6,0 ) === "b0000011".U)){
        pc_module.io.in := (pc_module.io.pc4 - 8.asSInt)
    // }.elsewhen(ifid_module.io.Instr_IFID(6,0 ) === "b0000011".U){
    //     pc_module.io.in := (pc_module.io.pc4- 4.asSInt)
    }.otherwise{
        pc_module.io.in := pc_module.io.pc4
    }
    when(((ifid_module.io.Instr_IFID(6,0 ) === "b1101111".U)|| (ifid_module.io.Instr_IFID(6,0 ) === "b1100111".U)|| (ifid_module.io.Instr_IFID(6,0 ) === "b1100011".U)|| (idex_module.io.Instr_IDEX(6,0 ) === "b1100011".U)) ){
       if_module.stall := 1.B
    }.elsewhen(((ifid_module.io.Instr_IFID(6,0 ) === "b1101111".U)|| (ifid_module.io.Instr_IFID(6,0 ) === "b1100111".U)|| (ifid_module.io.Instr_IFID(6,0 ) === "b1100011".U)|| (idex_module.io.Instr_IDEX(6,0 ) === "b1100011".U)) || (ifid_module.io.Instr_IFID(6,0 ) === "b0000011".U) || (idex_module.io.Instr_IDEX(6,0 ) === "b0000011".U)){
       if_module.stall := 1.B
    // }.elsewhen(ifid_module.io.Instr_IFID(6,0 ) === "b0000011".U){
    //     pc_module.io.in := if_module.stall := 1.B
    }.otherwise{
        if_module.stall := 0.B
    }
    
    io.Address := pc_module.io.pcout(25,2)
    if_module.address := pc_module.io.pcout(25,2)
    val instruction = if_module.instruction
    io.Instruction := if_module.instruction

    //IFID
    ifid_module.io.PCout := pc_module.io.pcout.asUInt   
    ifid_module.io.PC4out := pc_module.io.pc4.asUInt   
    ifid_module.io.Instr := instruction
    when((ifid_module.io.Instr_IFID(6,0 ) === "b1101111".U)|| (ifid_module.io.Instr_IFID(6,0 ) === "b1100111".U)|| (ifid_module.io.Instr_IFID(6,0 ) === "b1100011".U)|| (idex_module.io.Instr_IDEX(6,0 ) === "b1100011".U) ||(ifid_module.io.Instr_IFID(6,0 ) === "b0000011".U) || (idex_module.io.Instr_IDEX(6,0 ) === "b0000011".U)){
       ifid_module.io.flush := true.B
    }.otherwise{
      ifid_module.io.flush := false.B
    }

    //DECODE
    ControlDecoder_module.io.opcode := ifid_module.io.Instr_IFID(6, 0)
    
    immgen_module.io.pc := ifid_module.io.PCout_IFID
    immgen_module.io.instruction := ifid_module.io.Instr_IFID

    regfile_module.io.RegWrite := ControlDecoder_module.io.RegWrite
    regfile_module.io.rs1 := ifid_module.io.Instr_IFID(19,15)
    regfile_module.io.rs2 := ifid_module.io.Instr_IFID(24,20)
    regfile_module.io.instruction := ifid_module.io.Instr_IFID


    idex_module.io.operandA    := 0.U
    idex_module.io.operandAsel := false.B


    // Decode-stage forwarding check
    when(ifid_module.io.Instr_IFID(19,15) =/= 0.U) {
      when(memwb_module.io.RegWrite_MEMWB === true.B && 
          memwb_module.io.RDD_MEMWB === ifid_module.io.Instr_IFID(19,15) &&
          idex_module.io.RD_IDEX =/= ifid_module.io.Instr_IFID(19,15) && 
          exmem_module.io.RDD =/= ifid_module.io.Instr_IFID(19,15)) 
      {
        idex_module.io.operandA := memwb_module.io.ALUres_MEMWB
        idex_module.io.operandAsel := true.B
      }
    } .otherwise {
      idex_module.io.operandA := 0.U
      idex_module.io.operandAsel := false.B
    }
    //BRANCH FORWARD
    BranchForward_module.io.IDEX_RD := idex_module.io.RD_IDEX
    BranchForward_module.io.IDEX_MemRead := idex_module.io.MemRead_IDEX
    BranchForward_module.io.EXMEM_RD := exmem_module.io.RDD
    BranchForward_module.io.MEMWB_RD := memwb_module.io.RDD_MEMWB
    BranchForward_module.io.EXMEM_MemRead := exmem_module.io.MemReadS
    BranchForward_module.io.MEMWB_MemRead := memwb_module.io.MemRead_MEMWB
    BranchForward_module.io.RS1 := ifid_module.io.Instr_IFID(19,15)
    BranchForward_module.io.RS2 := ifid_module.io.Instr_IFID(24, 20)
    BranchForward_module.io.Branch := ControlDecoder_module.io.Branch

    Branchcontrol_module.io.RS1 := regfile_module.io.readData1.asSInt
    Branchcontrol_module.io.RS2 := regfile_module.io.readData2.asSInt
    Branchcontrol_module.io.func3 := ifid_module.io.Instr_IFID(14,12)

    when(BranchForward_module.io.RS1 === "b0000".U) {
      Branchcontrol_module.io.RS1 := regfile_module.io.readData1.asSInt
      jalr_module.io.rs1 := regfile_module.io.readData1.asSInt
    }.elsewhen(BranchForward_module.io.RS1 === "b0001".U) {
      Branchcontrol_module.io.RS1 := alu_module.io.aluout.asSInt
      jalr_module.io.rs1:= regfile_module.io.readData1.asSInt
    }.elsewhen(BranchForward_module.io.RS1 === "b0010".U) {
      Branchcontrol_module.io.RS1 := exmem_module.io.ALUresMEM.asSInt
      jalr_module.io.rs1 := regfile_module.io.readData1.asSInt
    }.elsewhen(BranchForward_module.io.RS1 === "b0011".U) {
      Branchcontrol_module.io.RS1 := regfile_module.io.writeData.asSInt
      jalr_module.io.rs1 := regfile_module.io.readData1.asSInt
    }.elsewhen(BranchForward_module.io.RS1 === "b0100".U) {
      Branchcontrol_module.io.RS1 := MEM.io.readData.asSInt
      jalr_module.io.rs1 := regfile_module.io.readData1.asSInt
    }.elsewhen(BranchForward_module.io.RS1 === "b0101".U) {
      Branchcontrol_module.io.RS1:= regfile_module.io.writeData.asSInt
      jalr_module.io.rs1 := regfile_module.io.readData1.asSInt
    }.elsewhen(BranchForward_module.io.RS1 === "b0110".U) {
        jalr_module.io.rs1 := alu_module.io.aluout.asSInt
        Branchcontrol_module.io.RS1 := regfile_module.io.readData1.asSInt
    }.elsewhen(BranchForward_module.io.RS1 === "b0111".U) {
        jalr_module.io.rs1 := exmem_module.io.ALUresMEM.asSInt
        Branchcontrol_module.io.RS1 := regfile_module.io.readData1.asSInt
    }.elsewhen(BranchForward_module.io.RS1 === "b1000".U) {
        jalr_module.io.rs1 := regfile_module.io.writeData.asSInt
        Branchcontrol_module.io.RS1:= regfile_module.io.readData1.asSInt
    }.elsewhen(BranchForward_module.io.RS1 === "b1001".U) {
        jalr_module.io.rs1 := MEM.io.readData.asSInt
        Branchcontrol_module.io.RS1 := regfile_module.io.readData1.asSInt
    }.elsewhen(BranchForward_module.io.RS1 === "b1010".U) {
        jalr_module.io.rs1 := regfile_module.io.writeData.asSInt
        Branchcontrol_module.io.RS1 := regfile_module.io.readData1.asSInt
    }.otherwise{
        Branchcontrol_module.io.RS1 := regfile_module.io.readData1.asSInt
        jalr_module.io.rs1 := regfile_module.io.readData1.asSInt
    }
    when(BranchForward_module.io.RS2 === "b000".U) {
        Branchcontrol_module.io.RS2  := regfile_module.io.readData2.asSInt
    }.elsewhen(BranchForward_module.io.RS2 === "b001".U) {
        Branchcontrol_module.io.RS2  := alu_module.io.aluout.asSInt
    }.elsewhen(BranchForward_module.io.RS2 === "b010".U) {
        Branchcontrol_module.io.RS2  := exmem_module.io.ALUresMEM.asSInt
    }.elsewhen(BranchForward_module.io.RS2 === "b011".U) {
        Branchcontrol_module.io.RS2  := regfile_module.io.writeData.asSInt
    }.elsewhen(BranchForward_module.io.RS2 === "b100".U) {
        Branchcontrol_module.io.RS2 := MEM.io.readData.asSInt
    }.elsewhen(BranchForward_module.io.RS2 === "b101".U) {
        Branchcontrol_module.io.RS2  := regfile_module.io.writeData.asSInt
    }.otherwise {
        Branchcontrol_module.io.RS2  := regfile_module.io.readData2.asSInt
    }

    HazardDetect_module.io.IFID_Instruction := ifid_module.io.Instr_IFID
    HazardDetect_module.io.IDEX_MemRead := idex_module.io.MemRead_IDEX
    HazardDetect_module.io.IDEX_RD := idex_module.io.RD_IDEX
    HazardDetect_module.io.PC_In := ifid_module.io.PC4out_IFID.asSInt
    HazardDetect_module.io.Current_PC := ifid_module.io.PCout_IFID.asSInt

    // when(HazardDetect_module.io.Instruction_forward === "b1".U) {
    // ifid_module.io.Instr := HazardDetect_module.io.Instruction_OUT.asUInt
    // ifid_module.io.PCout := HazardDetect_module.io.Current_PC_OUT.asUInt}
    // .otherwise {
    //     ifid_module.io.Instr := if_module.instruction
    // }
    // when(HazardDetect_module.io.PC_forward === "b1".U) {
    //   pc_module.io.in := HazardDetect_module.io.PC_OUT
    // }.otherwise {
    //     when(ControlDecoder_module.io.nextPC === "b01".U) {
    //       when(Branchcontrol_module.io.branchctrl === 1.U && ControlDecoder_module.io.Branch === 1.B) {
    //         pc_module.io.in := immgen_module.io.imm_out 
    //         ifid_module.io.PCout := 0.U
    //         ifid_module.io.PC4out := 0.U
    //         ifid_module.io.Instr := 0.U
    //       } .otherwise {
    //         pc_module.io.in := pc_module.io.pc4
    //       }
    // }.elsewhen(ControlDecoder_module.io.nextPC === "b10".U) {
    //       pc_module.io.in := immgen_module.io.imm_out
    //       ifid_module.io.PCout := 0.U
    //       ifid_module.io.PC4out := 0.U
    //       ifid_module.io.Instr := 0.U
    //     }.elsewhen(ControlDecoder_module.io.nextPC === "b11".U) {
    //       pc_module.io.in := (jalr_module.io.out)
    //       ifid_module.io.PCout := 0.U
    //       ifid_module.io.PC4out := 0.U
    //       ifid_module.io.Instr := 0.U
    //     }.otherwise {
    //       pc_module.io.in := pc_module.io.pc4
    //     }
    // }
    

  
    //IDEX
    when(HazardDetect_module.io.Ctrl_forward === "b1".U) {
      idex_module.io.MemWrite := 0.U
      idex_module.io.MemRead := 0.U
      idex_module.io.Branch := 0.U
      idex_module.io.RegWrite := 0.U
      idex_module.io.MemtoReg:= 0.U
      idex_module.io.ALUOp := 0.U
      idex_module.io.OpA_s  := 0.U
      idex_module.io.OpB_s  := 0.U
      idex_module.io.Nextpc := 0.U
    }.otherwise {
      idex_module.io.MemWrite := ControlDecoder_module.io.MemWrite
      idex_module.io.MemRead := ControlDecoder_module.io.MemRead
      idex_module.io.Branch:= ControlDecoder_module.io.Branch
      idex_module.io.RegWrite  := ControlDecoder_module.io.RegWrite
      idex_module.io.MemtoReg := ControlDecoder_module.io.Mem2Reg
      idex_module.io.ALUOp := ControlDecoder_module.io.Aluop
      idex_module.io.OpA_s := ControlDecoder_module.io.opA
      idex_module.io.OpB_s := ControlDecoder_module.io.opB
      idex_module.io.Nextpc := ControlDecoder_module.io.nextPC
    }

    idex_module.io.PC := ifid_module.io.PCout_IFID
    idex_module.io.PC4 := ifid_module.io.PC4out_IFID
    idex_module.io.MemWrite:=ControlDecoder_module.io.MemWrite
    idex_module.io.Branch := ControlDecoder_module.io.Branch
    idex_module.io.MemRead := ControlDecoder_module.io.MemRead
    idex_module.io.RegWrite := ControlDecoder_module.io.RegWrite
    idex_module.io.MemtoReg := ControlDecoder_module.io.Mem2Reg
    idex_module.io.ALUOp := ControlDecoder_module.io.Aluop
    idex_module.io.OpA_s := ControlDecoder_module.io.opA
    idex_module.io.OpB_s := ControlDecoder_module.io.opB
    idex_module.io.Nextpc := ControlDecoder_module.io.nextPC
    idex_module.io.func3 := ifid_module.io.Instr_IFID(14,12)
    idex_module.io.func7 := ifid_module.io.Instr_IFID(30)
    idex_module.io.Read1 := regfile_module.io.readData1
    idex_module.io.Read2 := regfile_module.io.readData2
    idex_module.io.RS1_S := ifid_module.io.Instr_IFID(19, 15)
    idex_module.io.RS2_S := ifid_module.io.Instr_IFID(24, 20)
    idex_module.io.RD := ifid_module.io.Instr_IFID(11,7)
    idex_module.io.Instr := ifid_module.io.Instr_IFID

    //EXECUTE
    alucontrol_module.io.Aluop := idex_module.io.ALUOp_IDEX
    alucontrol_module.io.func7 := idex_module.io.func7_IDEX
    alucontrol_module.io.func3 := idex_module.io.func3_IDEX

    Forward_module.io.RS1 := ifid_module.io.Instr_IFID(19,15)
    Forward_module.io.RS2 := ifid_module.io.Instr_IFID(24,20)
    Forward_module.io.MEMWB_RegWrite := memwb_module.io.RegWrite_MEMWB
    Forward_module.io.MEMWB_RD := memwb_module.io.RDD_MEMWB

    when(Forward_module.io.RS1OUT === 1.U) {
        idex_module.io.Read1 := regfile_module.io.writeData
      }.otherwise {
        idex_module.io.Read1 := regfile_module.io.readData1
      }
      // FOR RS2
      when(Forward_module.io.RS2OUT === 1.U) {
        idex_module.io.Read2 := regfile_module.io.writeData
      }.otherwise {
        idex_module.io.Read2 := regfile_module.io.readData2
      }

    ///JALR
    jalr_module.io.rs1 := regfile_module.io.readData1.asSInt
    jalr_module.io.imme := immgen_module.io.imm_out
    
when(idex_module.io.Instr_IDEX(6,0 ) === "b0010111".U){
    alu_module.io.op1 := 0.U
}.otherwise{
    when(idex_module.io.operandAselout === true.B ){
       alu_module.io.op1 := idex_module.io.operandAout
    }.otherwise{
      when(idex_module.io.Instr_IDEX(19,15 ) === "b0".U){
        alu_module.io.op1 := 0.U
      }.otherwise{
        when(idex_module.io.Instr_IDEX(6,0 ) === "b0110111".U){
          alu_module.io.op1 := 0.U
        }.otherwise{
          when (idex_module.io.OpA_s_IDEX === "b10".U) {
              alu_module.io.op1 := idex_module.io.PC_IDEX
          }.otherwise{
            when(ForwardingUnit_module.io.ForwardA === "b00".U) {
              alu_module.io.op1  := idex_module.io.Read1_IDEX
            }.elsewhen(ForwardingUnit_module.io.ForwardA === "b01".U) {
              alu_module.io.op1  := exmem_module.io.ALUresMEM
            }.elsewhen(ForwardingUnit_module.io.ForwardA === "b10".U) {
              alu_module.io.op1 := regfile_module.io.writeData
            }.otherwise {
              alu_module.io.op1 := idex_module.io.Read1_IDEX
            }
          }
        } 
      }
    }  
  }  
    // when(ForwardingUnit_module.io.ForwardA === "b11".U) {
    //     idex_module.io.Read1 := regfile_module.io.writeData
    //  }

    when(ControlDecoder_module.io.Ex_sel === "b00".U){
        idex_module.io.Immd := immgen_module.io.imm_out.asUInt
    }.elsewhen(ControlDecoder_module.io.Ex_sel === "b01".U){
        idex_module.io.Immd := immgen_module.io.imm_out.asUInt
    }.elsewhen(ControlDecoder_module.io.Ex_sel === "b10".U){
        idex_module.io.Immd := immgen_module.io.imm_out.asUInt
    }.otherwise{
      idex_module.io.Immd := 0.U
    }

    alu_module.io.op2 := 0.U
    
    when(idex_module.io.OpB_s_IDEX === 1.B){
        alu_module.io.op2 := idex_module.io.Immd_IDEX
      when (ForwardingUnit_module.io.ForwardB === "b00".U){
        exmem_module.io.ReadData2 := idex_module.io.Read2_IDEX
      }.elsewhen ( ForwardingUnit_module.io.ForwardB === "b01".U  && exmem_module.io.MemtoRegS){
        exmem_module.io.ReadData2 := MEM.io.readData
      }.elsewhen ( ForwardingUnit_module.io.ForwardB === "b01".U ){
        exmem_module.io.ReadData2 := exmem_module.io.ALUresMEM
      }.elsewhen (ForwardingUnit_module.io.ForwardB === "b10".U){
        exmem_module.io.ReadData2 := regfile_module.io.writeData
      }.otherwise {
        exmem_module.io.ReadData2 := idex_module.io.Read2_IDEX
      }
    }.otherwise{
      when(ForwardingUnit_module.io.ForwardB === "b00".U) {
        alu_module.io.op2 := idex_module.io.Read2_IDEX
        exmem_module.io.ReadData2:= idex_module.io.Read2_IDEX
      }.elsewhen(ForwardingUnit_module.io.ForwardB === "b01".U) {
        alu_module.io.op2 := exmem_module.io.ALUresMEM
        exmem_module.io.ReadData2 := exmem_module.io.ALUresMEM
      }.elsewhen(ForwardingUnit_module.io.ForwardB === "b10".U) {
        alu_module.io.op2 := regfile_module.io.writeData 
        exmem_module.io.ReadData2 := regfile_module.io.writeData
      }.otherwise {
        alu_module.io.op2:= idex_module.io.Read2_IDEX
        exmem_module.io.ReadData2 := idex_module.io.Read2_IDEX
      }
    }
    alu_module.io.aluctrl := alucontrol_module.io.aluctrl

    //EXMEM

    exmem_module.io.MemWrite := idex_module.io.MemWrite_IDEX
    exmem_module.io.MemRead := idex_module.io.MemRead_IDEX
    exmem_module.io.Instr := idex_module.io.Instr_IDEX
    exmem_module.io.func3 := idex_module.io.func3_IDEX
    exmem_module.io.RegWrite := idex_module.io.RegWrite_IDEX
    exmem_module.io.MemtoReg := idex_module.io.MemtoReg_IDEX
   // exmem_module.io.ReadData2 := idex_module.io.Read2_IDEX
    exmem_module.io.ALUres := alu_module.io.aluout
    exmem_module.io.RD := idex_module.io.RD_IDEX
    exmem_module.io.PC4 := idex_module.io.PC4_IDEX
    exmem_module.io.PC := idex_module.io.PC_IDEX
  
    

    ForwardingUnit_module.io.EXMEM_RD := exmem_module.io.RDD
    ForwardingUnit_module.io.IDEX_RS1 := idex_module.io.RS1_S_IDEX
    ForwardingUnit_module.io.IDEX_RS2 := idex_module.io.RS2_S_IDEX
    //ForwardingUnit_module.io.IDEX_RD := idex_module.io.RD_IDEX
    ForwardingUnit_module.io.MEMWB_RD := memwb_module.io.RDD_MEMWB
    ForwardingUnit_module.io.MEMWB_RegWrite := memwb_module.io.RegWrite_MEMWB
    ForwardingUnit_module.io.EXMEM_RegWrite := exmem_module.io.RegWriteS

    //DATAMEM
    io.dmemReq <> MEM.io.dccmReq
    MEM.io.dccmRsp <> io.dmemRsp
    when(exmem_module.io.MemReadS || exmem_module.io.MemWriteS ){
      MEM.io.aluResultIn := exmem_module.io.ALUresMEM
    }.otherwise{
      MEM.io.aluResultIn := 0.U
    } 
    MEM.io.writeData := exmem_module.io.ReadData2MEM
    MEM.io.readEnable := exmem_module.io.MemReadS
    MEM.io.writeEnable := exmem_module.io.MemWriteS
    MEM.io.f3 := exmem_module.io.func3_EXMEM



    //MEMWB
    memwb_module.io.RegWrite := exmem_module.io.RegWriteS
    memwb_module.io.MemtoReg := exmem_module.io.MemtoRegS
    memwb_module.io.MemRead := exmem_module.io.MemReadS
    memwb_module.io.MemWrite := exmem_module.io.MemWriteS
    memwb_module.io.ReadData := MEM.io.readData
    when((exmem_module.io.Instr_EXMEM(6,0 ) === "b1101111".U)|| (exmem_module.io.Instr_EXMEM(6,0 ) === "b1100111".U)){
       memwb_module.io.ALUres := exmem_module.io.PC4_EXMEM
    }.otherwise{
      memwb_module.io.ALUres := exmem_module.io.ALUresMEM
    }
    memwb_module.io.ALUres := exmem_module.io.ALUresMEM
    memwb_module.io.RD := exmem_module.io.RDD
    memwb_module.io.Instr := exmem_module.io.Instr_EXMEM
    memwb_module.io.memaddress := (exmem_module.io.ALUresMEM).asUInt
    memwb_module.io.memdata := MEM.io.readData
    regfile_module.io.writeData := MuxCase ( 0.U , Array (
      (memwb_module.io.MemtoReg_MEMWB === 0.B ) -> memwb_module.io.ALUres_MEMWB.asUInt ,
      (memwb_module.io.MemtoReg_MEMWB === 1.B ) -> MEM.io.readData.asUInt)
    )
    regfile_module.io.RegWrite := memwb_module.io.RegWrite_MEMWB
    regfile_module.io.rd := memwb_module.io.RDD_MEMWB
    memwb_module.io.mask := MEM.io.maskout
    io.output := memwb_module.io.memdataD
    memwb_module.io.MemWritedata := exmem_module.io.ReadData2MEM
    memwb_module.io.PC := exmem_module.io.PC_EXMEM
    
    when((memwb_module.io.Instr_MEMWB(6,0 ) === "b0000011".U)){
      regfile_module.io.rd := memwb_module.io.RDD_MEMWB
      regfile_module.io.writeData := MEM.io.readData.asUInt//MEM.io.Data
      regfile_module.io.RegWrite := 1.U 
    }

  if (TRACE) {
      io.rvfi.get.bool := (memwb_module.io.Instr_MEMWB =/= 0.U) && !clock.asBool
      io.rvfi.get.uint2 := 3.U
      io.rvfi.get.uint4 := memwb_module.io.mask_out
    
      Vector(3, 3, 0).zipWithIndex.foreach(
        r => io.rvfi.get.uint5(r._2) := 0.U
      )
    


      Vector(
        memwb_module.io.Instr_MEMWB,
        0.U,
        0.U,
        0.U,
        memwb_module.io.PC_MEMWB,
        0.U,
        memwb_module.io.memaddressD,
        0.U,
        memwb_module.io.MemWritedata_out,
      ).zipWithIndex.foreach(
        r => io.rvfi.get.uint32(r._2) := r._1
      )
  }
}