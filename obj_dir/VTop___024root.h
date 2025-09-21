// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_rvfi_valid_0,0,0);
        VL_OUT8(io_rvfi_mode_0,1,0);
        VL_OUT8(io_rvfi_rs1_addr_0,4,0);
        VL_OUT8(io_rvfi_rs2_addr_0,4,0);
        VL_OUT8(io_rvfi_rd_addr_0,4,0);
        VL_OUT8(io_rvfi_mem_wmask_0,3,0);
        CData/*0:0*/ Top__DOT__Core__DOT__InstructionFetch_io_stall;
        CData/*0:0*/ Top__DOT__Core__DOT__ControlDecoder_module_io_MemRead;
        CData/*1:0*/ Top__DOT__Core__DOT__ControlDecoder_module_io_Ex_sel;
        CData/*0:0*/ Top__DOT__Core__DOT__Forward_module_io_RS1OUT;
        CData/*1:0*/ Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardA;
        CData/*1:0*/ Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardB;
        CData/*0:0*/ Top__DOT__Core__DOT__ifid_module_io_flush;
        CData/*0:0*/ Top__DOT__Core__DOT__regfile_module_io_RegWrite;
        CData/*0:0*/ Top__DOT__Core__DOT__MEM_io_dccmReq_valid;
        CData/*0:0*/ Top__DOT__Core__DOT___T_4;
        CData/*0:0*/ Top__DOT__Core__DOT___T_70;
        CData/*1:0*/ Top__DOT__Core__DOT__ControlDecoder_module__DOT___GEN_6;
        CData/*0:0*/ Top__DOT__Core__DOT__ControlDecoder_module__DOT___GEN_9;
        CData/*4:0*/ Top__DOT__Core__DOT__exmem_module__DOT__RD_reg;
        CData/*0:0*/ Top__DOT__Core__DOT__exmem_module__DOT__MemRead_reg;
        CData/*0:0*/ Top__DOT__Core__DOT__exmem_module__DOT__MemWrite_reg;
        CData/*0:0*/ Top__DOT__Core__DOT__exmem_module__DOT__RegWrite_reg;
        CData/*2:0*/ Top__DOT__Core__DOT__exmem_module__DOT__func3_REG;
        CData/*1:0*/ Top__DOT__Core__DOT__idex_module__DOT__OpA_s_REG;
        CData/*0:0*/ Top__DOT__Core__DOT__idex_module__DOT__OpB_s_REG;
        CData/*2:0*/ Top__DOT__Core__DOT__idex_module__DOT__func3_REG;
        CData/*0:0*/ Top__DOT__Core__DOT__idex_module__DOT__func7_REG;
        CData/*4:0*/ Top__DOT__Core__DOT__idex_module__DOT__RD_REG;
        CData/*0:0*/ Top__DOT__Core__DOT__idex_module__DOT__MemRead_REG;
        CData/*2:0*/ Top__DOT__Core__DOT__idex_module__DOT__ALUOp_REG;
        CData/*0:0*/ Top__DOT__Core__DOT__idex_module__DOT__MemWrite_REG;
        CData/*0:0*/ Top__DOT__Core__DOT__idex_module__DOT__RegWrite_REG;
        CData/*4:0*/ Top__DOT__Core__DOT__idex_module__DOT__RS1_S_REG;
        CData/*4:0*/ Top__DOT__Core__DOT__idex_module__DOT__RS2_S_REG;
        CData/*0:0*/ Top__DOT__Core__DOT__idex_module__DOT__operandAsel_reg;
        CData/*4:0*/ Top__DOT__Core__DOT__memwb_module__DOT__RD_reg;
        CData/*0:0*/ Top__DOT__Core__DOT__memwb_module__DOT__MemtoReg_reg;
        CData/*0:0*/ Top__DOT__Core__DOT__memwb_module__DOT__RegWrite_reg;
        CData/*3:0*/ Top__DOT__Core__DOT__memwb_module__DOT__mask_reg;
        CData/*1:0*/ Top__DOT__Core__DOT__MEM__DOT__offset;
        CData/*2:0*/ Top__DOT__Core__DOT__MEM__DOT__funct3;
        CData/*3:0*/ Top__DOT__Core__DOT__MEM__DOT___GEN_12;
        CData/*3:0*/ Top__DOT__Core__DOT__MEM__DOT___GEN_22;
        CData/*0:0*/ Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3;
        CData/*0:0*/ Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4;
        CData/*0:0*/ Top__DOT__dmem__DOT__sram_we;
        CData/*3:0*/ Top__DOT__dmem__DOT__sram_wmask;
        CData/*1:0*/ Top__DOT__dmem__DOT__state_reg;
        CData/*0:0*/ Top__DOT__dmem__DOT___state_reg_T_3;
        CData/*0:0*/ Top__DOT__dmem__DOT___state_reg_T_5;
        CData/*1:0*/ Top__DOT__imem__DOT__state_reg;
        CData/*0:0*/ Top__DOT__imem__DOT___state_reg_T_3;
        CData/*0:0*/ Top__DOT__imem__DOT___state_reg_T_5;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        SData/*10:0*/ Top__DOT__Core__DOT__alucontrol_module__DOT___GEN_5;
        VL_OUT(io_rvfi_insn_0,31,0);
        VL_OUT(io_rvfi_rs1_rdata_0,31,0);
        VL_OUT(io_rvfi_rs2_rdata_0,31,0);
    };
    struct {
        VL_OUT(io_rvfi_rd_wdata_0,31,0);
        VL_OUT(io_rvfi_pc_rdata_0,31,0);
        VL_OUT(io_rvfi_pc_wdata_0,31,0);
        VL_OUT(io_rvfi_mem_addr_0,31,0);
        VL_OUT(io_rvfi_mem_rdata_0,31,0);
        VL_OUT(io_rvfi_mem_wdata_0,31,0);
        IData/*31:0*/ Top__DOT__Core__DOT__alu_module_io_op1;
        IData/*31:0*/ Top__DOT__Core__DOT__alu_module_io_op2;
        IData/*31:0*/ Top__DOT__Core__DOT__Branchcontrol_module_io_RS1;
        IData/*31:0*/ Top__DOT__Core__DOT__Branchcontrol_module_io_RS2;
        IData/*31:0*/ Top__DOT__Core__DOT__memwb_module_io_ReadData;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module_io_writeData;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module_io_readData1;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module_io_readData2;
        IData/*31:0*/ Top__DOT__Core__DOT___GEN_0;
        IData/*31:0*/ Top__DOT__Core__DOT___GEN_61;
        IData/*31:0*/ Top__DOT__Core__DOT___GEN_66;
        IData/*31:0*/ Top__DOT__Core__DOT__pc_module__DOT__reg_;
        IData/*31:0*/ Top__DOT__Core__DOT__alu_module__DOT__shift;
        IData/*31:0*/ Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg;
        IData/*31:0*/ Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg;
        IData/*31:0*/ Top__DOT__Core__DOT__exmem_module__DOT__Instr_reg;
        IData/*31:0*/ Top__DOT__Core__DOT__exmem_module__DOT__PC_REG;
        IData/*31:0*/ Top__DOT__Core__DOT__idex_module__DOT__PC_REG;
        IData/*31:0*/ Top__DOT__Core__DOT__idex_module__DOT__Read1_REG;
        IData/*31:0*/ Top__DOT__Core__DOT__idex_module__DOT__Read2_REG;
        IData/*31:0*/ Top__DOT__Core__DOT__idex_module__DOT__Immd_REG;
        IData/*31:0*/ Top__DOT__Core__DOT__idex_module__DOT__Instr_reg;
        IData/*31:0*/ Top__DOT__Core__DOT__idex_module__DOT__operandA_reg;
        IData/*31:0*/ Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg;
        IData/*31:0*/ Top__DOT__Core__DOT__ifid_module__DOT__PCout_reg;
        IData/*31:0*/ Top__DOT__Core__DOT__immgen_module__DOT__sb_imm;
        IData/*31:0*/ Top__DOT__Core__DOT__immgen_module__DOT__auipc_imm;
        IData/*31:0*/ Top__DOT__Core__DOT__memwb_module__DOT__ReadData_reg;
        IData/*31:0*/ Top__DOT__Core__DOT__memwb_module__DOT__ALUres_reg;
        IData/*31:0*/ Top__DOT__Core__DOT__memwb_module__DOT__Instr_reg;
        IData/*31:0*/ Top__DOT__Core__DOT__memwb_module__DOT__MemWritedata_reg;
        IData/*31:0*/ Top__DOT__Core__DOT__memwb_module__DOT__PC_REG;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_0;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_1;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_2;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_3;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_4;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_5;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_6;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_7;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_8;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_9;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_10;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_11;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_12;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_13;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_14;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_15;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_16;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_17;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_18;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_19;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_20;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_21;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_22;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_23;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_24;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_25;
    };
    struct {
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_26;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_27;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_28;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_29;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_30;
        IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT__reg_31;
        IData/*31:0*/ Top__DOT__Core__DOT__MEM__DOT__rdata;
        IData/*31:0*/ Top__DOT__dmem__DOT__sram_data_i;
        IData/*31:0*/ Top__DOT__dmem__DOT__sram_data_o;
        IData/*31:0*/ Top__DOT__dmem__DOT___GEN_6;
        IData/*31:0*/ Top__DOT__dmem__DOT__sram__DOT__i;
        IData/*31:0*/ Top__DOT__imem__DOT__sram_data_o;
        IData/*31:0*/ Top__DOT__imem__DOT___GEN_6;
        IData/*31:0*/ Top__DOT__imem__DOT__sram__DOT__i;
        IData/*31:0*/ __VactIterCount;
        QData/*62:0*/ Top__DOT__Core__DOT__alu_module__DOT___GEN_12;
        QData/*32:0*/ Top__DOT__Core__DOT__immgen_module__DOT___GEN_7;
        VlUnpacked<IData/*31:0*/, 268435456> Top__DOT__dmem__DOT__sram__DOT__mem;
        VlUnpacked<IData/*31:0*/, 268435456> Top__DOT__imem__DOT__sram__DOT__mem;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop___024root(VTop__Syms* symsp, const char* v__name);
    ~VTop___024root();
    VL_UNCOPYABLE(VTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
