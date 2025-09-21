// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop___024root.h"

void VTop___024root___ico_sequent__TOP__0(VTop___024root* vlSelf);

void VTop___024root___eval_ico(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_ico\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VTop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VTop___024root___ico_sequent__TOP__0(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ico_sequent__TOP__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_rvfi_valid_0 = (1U & (~ ((IData)(vlSelfRef.clock) 
                                          | (0U == vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__Instr_reg))));
}

void VTop___024root___eval_triggers__ico(VTop___024root* vlSelf);

bool VTop___024root___eval_phase__ico(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__ico\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VTop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VTop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VTop___024root___eval_act(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_act\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VTop___024root___nba_sequent__TOP__0(VTop___024root* vlSelf);
void VTop___024root___nba_sequent__TOP__1(VTop___024root* vlSelf);
void VTop___024root___nba_comb__TOP__0(VTop___024root* vlSelf);

void VTop___024root___eval_nba(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_nba\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void VTop___024root___nba_sequent__TOP__0(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.Top__DOT__dmem__DOT__sram_we) 
         & (~ (IData)(vlSelfRef.reset)))) {
        if ((1U & (IData)(vlSelfRef.Top__DOT__dmem__DOT__sram_wmask))) {
            vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__mem[(0xfffffffU 
                                                           & vlSelfRef.Top__DOT__dmem__DOT___GEN_6)] 
                = ((0xffffff00U & vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__mem
                    [(0xfffffffU & vlSelfRef.Top__DOT__dmem__DOT___GEN_6)]) 
                   | (0xffU & vlSelfRef.Top__DOT__dmem__DOT__sram_data_i));
        }
        if ((2U & (IData)(vlSelfRef.Top__DOT__dmem__DOT__sram_wmask))) {
            vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__mem[(0xfffffffU 
                                                           & vlSelfRef.Top__DOT__dmem__DOT___GEN_6)] 
                = ((0xffff00ffU & vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__mem
                    [(0xfffffffU & vlSelfRef.Top__DOT__dmem__DOT___GEN_6)]) 
                   | (0xff00U & vlSelfRef.Top__DOT__dmem__DOT__sram_data_i));
        }
        if ((4U & (IData)(vlSelfRef.Top__DOT__dmem__DOT__sram_wmask))) {
            vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__mem[(0xfffffffU 
                                                           & vlSelfRef.Top__DOT__dmem__DOT___GEN_6)] 
                = ((0xff00ffffU & vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__mem
                    [(0xfffffffU & vlSelfRef.Top__DOT__dmem__DOT___GEN_6)]) 
                   | (0xff0000U & vlSelfRef.Top__DOT__dmem__DOT__sram_data_i));
        }
        if ((8U & (IData)(vlSelfRef.Top__DOT__dmem__DOT__sram_wmask))) {
            vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__mem[(0xfffffffU 
                                                           & vlSelfRef.Top__DOT__dmem__DOT___GEN_6)] 
                = ((0xffffffU & vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__mem
                    [(0xfffffffU & vlSelfRef.Top__DOT__dmem__DOT___GEN_6)]) 
                   | (0xff000000U & vlSelfRef.Top__DOT__dmem__DOT__sram_data_i));
        }
    }
    if ((1U & ((~ (IData)(vlSelfRef.Top__DOT__dmem__DOT__sram_we)) 
               & (~ (IData)(vlSelfRef.reset))))) {
        vlSelfRef.Top__DOT__dmem__DOT__sram_data_o 
            = vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__mem
            [(0xfffffffU & vlSelfRef.Top__DOT__dmem__DOT___GEN_6)];
    }
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        vlSelfRef.Top__DOT__imem__DOT__sram_data_o 
            = vlSelfRef.Top__DOT__imem__DOT__sram__DOT__mem
            [(0xfffffffU & vlSelfRef.Top__DOT__imem__DOT___GEN_6)];
    }
}

VL_INLINE_OPT void VTop___024root___nba_sequent__TOP__1(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ Top__DOT__Core__DOT___T_23;
    Top__DOT__Core__DOT___T_23 = 0;
    CData/*0:0*/ Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_1;
    Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_1 = 0;
    CData/*0:0*/ Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_3;
    Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_3 = 0;
    CData/*0:0*/ Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_5;
    Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_5 = 0;
    CData/*0:0*/ Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_17;
    Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_17 = 0;
    QData/*32:0*/ Top__DOT__Core__DOT__immgen_module__DOT___GEN_4;
    Top__DOT__Core__DOT__immgen_module__DOT___GEN_4 = 0;
    QData/*32:0*/ Top__DOT__Core__DOT__immgen_module__DOT____VdfgRegularize_h0358fbff_0_1;
    Top__DOT__Core__DOT__immgen_module__DOT____VdfgRegularize_h0358fbff_0_1 = 0;
    IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT___GEN_15;
    Top__DOT__Core__DOT__regfile_module__DOT___GEN_15 = 0;
    IData/*31:0*/ Top__DOT__Core__DOT__regfile_module__DOT___GEN_47;
    Top__DOT__Core__DOT__regfile_module__DOT___GEN_47 = 0;
    CData/*0:0*/ Top__DOT__dmem__DOT___T_2;
    Top__DOT__dmem__DOT___T_2 = 0;
    CData/*0:0*/ Top__DOT__dmem__DOT____VdfgRegularize_h48f37a89_0_0;
    Top__DOT__dmem__DOT____VdfgRegularize_h48f37a89_0_0 = 0;
    // Body
    vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__MemtoReg_reg 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemRead_reg));
    vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__func7_REG 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                      >> 0x1eU)));
    vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__operandAsel_reg 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                        >> 0xfU))) 
                                                   & (IData)(vlSelfRef.Top__DOT__Core__DOT___T_70)));
    if (vlSelfRef.reset) {
        vlSelfRef.Top__DOT__imem__DOT__state_reg = 0U;
        vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Immd_REG = 0U;
        vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__ReadData_reg = 0U;
        vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Read1_REG = 0U;
        vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__offset = 0U;
        vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__ALUOp_REG = 0U;
        vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__OpA_s_REG = 0U;
        vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RS1_S_REG = 0U;
        vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RS2_S_REG = 0U;
        vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__funct3 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__mask_reg = 0U;
    } else {
        if (vlSelfRef.Top__DOT__imem__DOT___state_reg_T_3) {
            vlSelfRef.Top__DOT__imem__DOT__state_reg = 1U;
        } else if (vlSelfRef.Top__DOT__imem__DOT___state_reg_T_5) {
            vlSelfRef.Top__DOT__imem__DOT__state_reg = 2U;
        }
        vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Immd_REG 
            = ((0U == (IData)(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module_io_Ex_sel))
                ? (IData)(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT___GEN_7)
                : ((1U == (IData)(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module_io_Ex_sel))
                    ? (IData)(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT___GEN_7)
                    : ((2U == (IData)(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module_io_Ex_sel))
                        ? (IData)(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT___GEN_7)
                        : 0U)));
        vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__ReadData_reg 
            = vlSelfRef.Top__DOT__Core__DOT__memwb_module_io_ReadData;
        vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Read1_REG 
            = ((IData)(vlSelfRef.Top__DOT__Core__DOT__Forward_module_io_RS1OUT)
                ? vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData
                : vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData1);
        if ((2U != (IData)(vlSelfRef.Top__DOT__dmem__DOT__state_reg))) {
            vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__offset 
                = (3U & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg);
            vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__funct3 
                = vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__func3_REG;
        }
        if ((0x33U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))) {
            vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__ALUOp_REG = 0U;
            vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__OpA_s_REG = 0U;
        } else if ((0x13U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))) {
            vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__ALUOp_REG = 1U;
            vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__OpA_s_REG = 0U;
        } else if ((0x23U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))) {
            vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__ALUOp_REG = 5U;
            vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__OpA_s_REG = 0U;
        } else if ((3U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))) {
            vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__ALUOp_REG = 4U;
            vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__OpA_s_REG = 0U;
        } else if ((0x63U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))) {
            vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__ALUOp_REG = 2U;
            vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__OpA_s_REG = 0U;
        } else if ((0x6fU == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))) {
            vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__ALUOp_REG = 3U;
            vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__OpA_s_REG = 1U;
        } else if ((0x67U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))) {
            vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__ALUOp_REG = 3U;
            vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__OpA_s_REG = 1U;
        } else {
            vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__ALUOp_REG 
                = ((0x37U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                    ? 6U : ((0x17U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                             ? 6U : 7U));
            vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__OpA_s_REG 
                = vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module__DOT___GEN_6;
        }
        vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RS1_S_REG 
            = (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                        >> 0xfU));
        vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RS2_S_REG 
            = (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                        >> 0x14U));
        vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__mask_reg 
            = ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                ? (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT___GEN_12)
                : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                    ? (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT___GEN_22)
                    : ((IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemWrite_reg)
                        ? 0xfU : 0U)));
    }
    vlSelfRef.io_rvfi_mem_wmask_0 = vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__mask_reg;
    vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemWrite_reg 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__MemWrite_REG));
    if (vlSelfRef.reset) {
        vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__PC_REG = 0U;
        vlSelfRef.io_rvfi_pc_rdata_0 = vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__PC_REG;
        vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__Instr_reg = 0U;
    } else {
        vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__PC_REG 
            = vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__PC_REG;
        vlSelfRef.io_rvfi_pc_rdata_0 = vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__PC_REG;
        vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__Instr_reg 
            = vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__Instr_reg;
    }
    vlSelfRef.io_rvfi_insn_0 = vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__Instr_reg;
    vlSelfRef.io_rvfi_valid_0 = (1U & (~ ((IData)(vlSelfRef.clock) 
                                          | (0U == vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__Instr_reg))));
    if (vlSelfRef.reset) {
        vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__operandA_reg = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_18 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_17 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_16 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_25 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_24 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_23 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_31 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_22 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_30 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_28 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_20 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_27 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_19 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_21 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_29 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_26 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_15 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_4 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_12 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_3 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_0 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_8 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_14 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_6 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_13 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_5 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_1 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_10 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_2 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_11 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_7 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_9 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__MemWritedata_reg = 0U;
        vlSelfRef.io_rvfi_mem_wdata_0 = vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__MemWritedata_reg;
        vlSelfRef.Top__DOT__dmem__DOT__state_reg = 0U;
    } else {
        vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__operandA_reg 
            = ((0U != (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                >> 0xfU))) ? ((IData)(vlSelfRef.Top__DOT__Core__DOT___T_70)
                                               ? vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__ALUres_reg
                                               : 0U)
                : 0U);
        if (((IData)(vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_RegWrite) 
             & (0U != (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg)))) {
            if ((0x12U == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_18 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0x11U == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_17 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0x10U == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_16 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0x19U == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_25 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0x18U == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_24 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0x17U == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_23 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0x1fU == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_31 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0x16U == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_22 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0x1eU == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_30 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0x1cU == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_28 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0x14U == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_20 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0x1bU == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_27 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0x13U == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_19 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0x15U == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_21 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0x1dU == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_29 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0x1aU == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_26 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0xfU == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_15 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((4U == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_4 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0xcU == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_12 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((3U == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_3 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0U == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_0 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((8U == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_8 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0xeU == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_14 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((6U == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_6 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0xdU == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_13 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((5U == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_5 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((1U == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_1 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0xaU == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_10 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((2U == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_2 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((0xbU == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_11 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((7U == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_7 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
            if ((9U == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))) {
                vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_9 
                    = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData;
            }
        }
        vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__MemWritedata_reg 
            = vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg;
        vlSelfRef.io_rvfi_mem_wdata_0 = vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__MemWritedata_reg;
        if (vlSelfRef.Top__DOT__dmem__DOT___state_reg_T_3) {
            vlSelfRef.Top__DOT__dmem__DOT__state_reg = 1U;
        } else if (vlSelfRef.Top__DOT__dmem__DOT___state_reg_T_5) {
            vlSelfRef.Top__DOT__dmem__DOT__state_reg = 2U;
        }
    }
    vlSelfRef.Top__DOT__dmem__DOT___state_reg_T_3 = 
        ((0U == (IData)(vlSelfRef.Top__DOT__dmem__DOT__state_reg)) 
         | (2U == (IData)(vlSelfRef.Top__DOT__dmem__DOT__state_reg)));
    vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__func3_REG 
        = ((IData)(vlSelfRef.reset) ? 0U : (IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__func3_REG));
    vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4 
        = ((IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemWrite_reg) 
           & (0U == (IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__func3_REG)));
    vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3 
        = ((IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemWrite_reg) 
           & (1U == (IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__func3_REG)));
    vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__MemWrite_REG 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (0x33U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                                   & ((0x13U 
                                                       != 
                                                       (0x7fU 
                                                        & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                                      & (0x23U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)))));
    if (vlSelfRef.reset) {
        vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__PC_REG = 0U;
        vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__Instr_reg = 0U;
        vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__ALUres_reg = 0U;
        vlSelfRef.io_rvfi_mem_addr_0 = vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__ALUres_reg;
        vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg = 0U;
    } else {
        vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__PC_REG 
            = vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__PC_REG;
        vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__Instr_reg 
            = vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Instr_reg;
        vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__ALUres_reg 
            = vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg;
        vlSelfRef.io_rvfi_mem_addr_0 = vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__ALUres_reg;
        vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
            = ((IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__OpB_s_REG)
                ? ((0U == (IData)(vlSelfRef.Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardB))
                    ? vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Read2_REG
                    : (((1U == (IData)(vlSelfRef.Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardB)) 
                        & (IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemRead_reg))
                        ? vlSelfRef.Top__DOT__Core__DOT__memwb_module_io_ReadData
                        : vlSelfRef.Top__DOT__Core__DOT___GEN_61))
                : vlSelfRef.Top__DOT__Core__DOT___GEN_66);
    }
    vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemRead_reg 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__MemRead_REG));
    vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__OpB_s_REG 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (0x33U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                                   & ((0x13U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                                      | ((0x23U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                                         | ((3U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                                            | ((0x63U 
                                                                != 
                                                                (0x7fU 
                                                                 & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                                               & ((0x6fU 
                                                                   != 
                                                                   (0x7fU 
                                                                    & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                                                  & (IData)(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module__DOT___GEN_9))))))));
    vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__func3_REG 
        = ((IData)(vlSelfRef.reset) ? 0U : (7U & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                  >> 0xcU)));
    vlSelfRef.Top__DOT__Core__DOT__alucontrol_module__DOT___GEN_5 
        = ((0U == (IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__ALUOp_REG))
            ? (((IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__func7_REG) 
                << 3U) | (IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__func3_REG))
            : ((1U == (IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__ALUOp_REG))
                ? (IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__func3_REG)
                : (((5U == (IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__ALUOp_REG)) 
                    | (4U == (IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__ALUOp_REG)))
                    ? 0U : ((3U == (IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__ALUOp_REG))
                             ? 0x1fU : ((2U == (IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__ALUOp_REG))
                                         ? (0x10U | (IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__func3_REG))
                                         : 0U)))));
    if (vlSelfRef.reset) {
        vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__PC_REG = 0U;
        vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Instr_reg = 0U;
        vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg = 0U;
    } else {
        vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__PC_REG 
            = vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__PCout_reg;
        vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Instr_reg 
            = vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg;
        vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg 
            = (IData)(vlSelfRef.Top__DOT__Core__DOT__alu_module__DOT___GEN_12);
    }
    if ((0U == (3U & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))) {
        vlSelfRef.Top__DOT__Core__DOT__MEM__DOT___GEN_12 = 1U;
        vlSelfRef.Top__DOT__Core__DOT__MEM__DOT___GEN_22 = 3U;
    } else if ((1U == (3U & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))) {
        vlSelfRef.Top__DOT__Core__DOT__MEM__DOT___GEN_12 = 2U;
        vlSelfRef.Top__DOT__Core__DOT__MEM__DOT___GEN_22 = 6U;
    } else {
        vlSelfRef.Top__DOT__Core__DOT__MEM__DOT___GEN_12 
            = ((2U == (3U & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                ? 4U : 8U);
        vlSelfRef.Top__DOT__Core__DOT__MEM__DOT___GEN_22 = 0xcU;
    }
    vlSelfRef.Top__DOT__Core__DOT__MEM_io_dccmReq_valid 
        = ((IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemRead_reg) 
           | (IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemWrite_reg));
    vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__MemRead_REG 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module_io_MemRead));
    vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Read2_REG 
        = ((IData)(vlSelfRef.reset) ? 0U : (((IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RegWrite_reg) 
                                             & ((IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                    >> 0x14U))))
                                             ? vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData
                                             : vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData2));
    vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RegWrite_reg 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__RegWrite_reg));
    vlSelfRef.Top__DOT__dmem__DOT___state_reg_T_5 = 
        ((1U == (IData)(vlSelfRef.Top__DOT__dmem__DOT__state_reg)) 
         & (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM_io_dccmReq_valid));
    Top__DOT__dmem__DOT___T_2 = ((IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemWrite_reg) 
                                 & (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM_io_dccmReq_valid));
    Top__DOT__dmem__DOT____VdfgRegularize_h48f37a89_0_0 
        = ((~ (IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemWrite_reg)) 
           & (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM_io_dccmReq_valid));
    vlSelfRef.Top__DOT__dmem__DOT__sram_we = ((~ (IData)(Top__DOT__dmem__DOT____VdfgRegularize_h48f37a89_0_0)) 
                                              & (IData)(Top__DOT__dmem__DOT___T_2));
    if (Top__DOT__dmem__DOT____VdfgRegularize_h48f37a89_0_0) {
        vlSelfRef.Top__DOT__dmem__DOT___GEN_6 = vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg;
        vlSelfRef.Top__DOT__dmem__DOT__sram_data_i = 0U;
        vlSelfRef.Top__DOT__dmem__DOT__sram_wmask = 0U;
    } else if (Top__DOT__dmem__DOT___T_2) {
        vlSelfRef.Top__DOT__dmem__DOT___GEN_6 = vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg;
        vlSelfRef.Top__DOT__dmem__DOT__sram_data_i 
            = (((((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                   ? ((0U == (3U & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                       ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                          >> 0x18U) : ((1U == (3U & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                        ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                           >> 0x18U)
                                        : ((2U == (3U 
                                                   & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                            ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                               >> 0x18U)
                                            : vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg)))
                   : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                       ? ((0U == (3U & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                           ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                              >> 0x18U) : ((1U == (3U 
                                                   & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                            ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                               >> 0x18U)
                                            : (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                               >> 8U)))
                       : (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                          >> 0x18U))) << 0x18U) | (0xff0000U 
                                                   & (((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                                        ? 
                                                       ((0U 
                                                         == 
                                                         (3U 
                                                          & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                         ? 
                                                        (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                         >> 0x10U)
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (3U 
                                                           & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                          ? 
                                                         (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                          >> 0x10U)
                                                          : 
                                                         ((2U 
                                                           == 
                                                           (3U 
                                                            & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                           ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg
                                                           : 
                                                          (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                           >> 0x18U))))
                                                        : 
                                                       ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                         ? 
                                                        ((0U 
                                                          == 
                                                          (3U 
                                                           & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                          ? 
                                                         (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                          >> 0x10U)
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (3U 
                                                            & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                           ? 
                                                          (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                           >> 8U)
                                                           : vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg))
                                                         : 
                                                        (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                         >> 0x10U))) 
                                                      << 0x10U))) 
               | ((0xff00U & (((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                ? ((0U == (3U & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                    ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                       >> 8U) : ((1U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                  ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg
                                                  : 
                                                 (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                  >> 0x10U)))
                                : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                    ? ((0U == (3U & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                        ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                           >> 8U) : 
                                       ((1U == (3U 
                                                & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                         ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg
                                         : (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                            >> 0x18U)))
                                    : (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                       >> 8U))) << 8U)) 
                  | (0xffU & ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                               ? ((0U == (3U & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                   ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg
                                   : (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                      >> 8U)) : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                   ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg
                                                   : 
                                                  (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 0x10U))
                                                  : vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg)))));
        vlSelfRef.Top__DOT__dmem__DOT__sram_wmask = 
            ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
              ? (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT___GEN_12)
              : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                  ? (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT___GEN_22)
                  : 0xfU));
    } else {
        vlSelfRef.Top__DOT__dmem__DOT___GEN_6 = 0U;
        vlSelfRef.Top__DOT__dmem__DOT__sram_data_i = 0U;
        vlSelfRef.Top__DOT__dmem__DOT__sram_wmask = 0U;
    }
    vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_RegWrite 
        = ((3U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__Instr_reg)) 
           | (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RegWrite_reg));
    vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__RegWrite_reg 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RegWrite_REG));
    if (vlSelfRef.reset) {
        vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__PCout_reg = 0U;
        vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg = 0U;
    } else {
        vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__PCout_reg 
            = ((IData)(vlSelfRef.Top__DOT__Core__DOT__ifid_module_io_flush)
                ? 0U : vlSelfRef.Top__DOT__Core__DOT__pc_module__DOT__reg_);
        vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg 
            = vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__RD_reg;
    }
    Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_5 
        = ((IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RegWrite_reg) 
           & (0U != (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg)));
    vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RegWrite_REG 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                                   | ((0x13U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                                      | ((0x23U 
                                                          != 
                                                          (0x7fU 
                                                           & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                                         & ((3U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                                            | ((0x63U 
                                                                != 
                                                                (0x7fU 
                                                                 & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                                               & ((0x6fU 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                                                  | (IData)(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module__DOT___GEN_9))))))));
    if (vlSelfRef.reset) {
        vlSelfRef.Top__DOT__Core__DOT__pc_module__DOT__reg_ = 0xfffffffcU;
        vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__RD_reg = 0U;
        vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RD_REG = 0U;
        vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg = 0U;
    } else {
        vlSelfRef.Top__DOT__Core__DOT__pc_module__DOT__reg_ 
            = ((IData)(vlSelfRef.Top__DOT__Core__DOT___T_4)
                ? (IData)(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT___GEN_7)
                : ((((0U == (7U & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                   >> 0xcU))) ? (vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 
                                                 == vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                      : ((1U == (7U & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                       >> 0xcU))) ? 
                         (vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 
                          != vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                          : ((4U == (7U & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                           >> 0xcU)))
                              ? VL_LTS_III(32, vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1, vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                              : ((5U == (7U & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                               >> 0xcU)))
                                  ? VL_GTES_III(32, vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1, vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                                  : ((6U == (7U & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                   >> 0xcU)))
                                      ? (vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 
                                         < vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                                      : (IData)(((0x7000U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                                 & (vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 
                                                    >= vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)))))))) 
                    & ((0x33U != (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                       & ((0x13U != (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                          & ((0x23U != (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                             & ((3U != (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                & (0x63U == (0x7fU 
                                             & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)))))))
                    ? ((IData)(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT___GEN_7) 
                       - (IData)(4U)) : vlSelfRef.Top__DOT__Core__DOT___GEN_0));
        vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__RD_reg 
            = vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RD_REG;
        vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RD_REG 
            = (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                        >> 7U));
        vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
            = ((IData)(vlSelfRef.Top__DOT__Core__DOT__ifid_module_io_flush)
                ? 0U : ((IData)(vlSelfRef.Top__DOT__Core__DOT__InstructionFetch_io_stall)
                         ? 0U : vlSelfRef.Top__DOT__imem__DOT__sram_data_o));
    }
    Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_1 
        = ((IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__RegWrite_reg) 
           & (0U != (IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__RD_reg)));
    Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_3 
        = ((IData)(Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_1) 
           & ((IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__RD_reg) 
              == (IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RS1_S_REG)));
    Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_17 
        = ((IData)(Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_1) 
           & ((IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__RD_reg) 
              == (IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RS2_S_REG)));
    vlSelfRef.Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardA 
        = ((IData)(Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_3)
            ? 1U : (((~ (IData)(Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_3)) 
                     & ((IData)(Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_5) 
                        & ((IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RS1_S_REG) 
                           == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))))
                     ? 2U : 0U));
    vlSelfRef.Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardB 
        = ((IData)(Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_17)
            ? 1U : (((~ (IData)(Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_17)) 
                     & ((IData)(Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_5) 
                        & ((IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RS2_S_REG) 
                           == (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg))))
                     ? 2U : 0U));
    vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module_io_MemRead 
        = ((0x33U != (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
           & ((0x13U != (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
              & ((0x23U != (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                 & (3U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)))));
    vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module__DOT___GEN_9 
        = ((0x67U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
           | ((0x37U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
              | (0x17U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))));
    vlSelfRef.Top__DOT__Core__DOT___GEN_0 = (((0x63U 
                                               == (0x7fU 
                                                   & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                              | (3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)))
                                              ? ((IData)(0xfffffffcU) 
                                                 + vlSelfRef.Top__DOT__Core__DOT__pc_module__DOT__reg_)
                                              : ((IData)(4U) 
                                                 + vlSelfRef.Top__DOT__Core__DOT__pc_module__DOT__reg_));
    vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module__DOT___GEN_6 
        = ((0x37U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
            ? 2U : ((0x17U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                     ? 2U : 0U));
    Top__DOT__Core__DOT__immgen_module__DOT____VdfgRegularize_h0358fbff_0_1 
        = (((QData)((IData)((1U & (((vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U) >> 0x13U)))) 
            << 0x20U) | (QData)((IData)(((((vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                            >> 0x1fU)
                                            ? 0xfffffU
                                            : 0U) << 0xcU) 
                                         | (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                            >> 0x14U)))));
    vlSelfRef.Top__DOT__Core__DOT__Forward_module_io_RS1OUT 
        = ((IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RegWrite_reg) 
           & ((IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg) 
              == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                           >> 0xfU))));
    vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT__sb_imm 
        = (((((vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
               >> 0x1fU) ? 0x7ffffU : 0U) << 0xdU) 
            | (((0x1000U & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                            >> 0x13U)) | (0x800U & 
                                          (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                           << 4U))) 
               | ((0x7e0U & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                             >> 0x14U)) | (0x1eU & 
                                           (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                            >> 7U))))) 
           + vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__PCout_reg);
    vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT__auipc_imm 
        = ((0xfffff000U & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg) 
           + vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__PCout_reg);
    vlSelfRef.Top__DOT__Core__DOT___T_4 = ((0x6fU == 
                                            (0x7fU 
                                             & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                           | (0x67U 
                                              == (0x7fU 
                                                  & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)));
    Top__DOT__Core__DOT__regfile_module__DOT___GEN_15 
        = ((0xfU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                              >> 0xfU))) ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_15
            : ((0xeU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                  >> 0xfU))) ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_14
                : ((0xdU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                      >> 0xfU))) ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_13
                    : ((0xcU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                          >> 0xfU)))
                        ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_12
                        : ((0xbU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                              >> 0xfU)))
                            ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_11
                            : ((0xaU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                  >> 0xfU)))
                                ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_10
                                : ((9U == (0x1fU & 
                                           (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                            >> 0xfU)))
                                    ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_9
                                    : ((8U == (0x1fU 
                                               & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                  >> 0xfU)))
                                        ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_8
                                        : ((7U == (0x1fU 
                                                   & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                      >> 0xfU)))
                                            ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_7
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                    >> 0xfU)))
                                                ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_6
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                        >> 0xfU)))
                                                    ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_5
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                         >> 0xfU)))
                                                     ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_4
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                          >> 0xfU)))
                                                      ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_3
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                           >> 0xfU)))
                                                       ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_2
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                            >> 0xfU)))
                                                        ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_1
                                                        : vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_0)))))))))))))));
    Top__DOT__Core__DOT__regfile_module__DOT___GEN_47 
        = ((0xfU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                              >> 0x14U))) ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_15
            : ((0xeU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                  >> 0x14U))) ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_14
                : ((0xdU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                      >> 0x14U))) ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_13
                    : ((0xcU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                          >> 0x14U)))
                        ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_12
                        : ((0xbU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                              >> 0x14U)))
                            ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_11
                            : ((0xaU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                  >> 0x14U)))
                                ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_10
                                : ((9U == (0x1fU & 
                                           (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                            >> 0x14U)))
                                    ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_9
                                    : ((8U == (0x1fU 
                                               & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                  >> 0x14U)))
                                        ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_8
                                        : ((7U == (0x1fU 
                                                   & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                      >> 0x14U)))
                                            ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_7
                                            : ((6U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                    >> 0x14U)))
                                                ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_6
                                                : (
                                                   (5U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                        >> 0x14U)))
                                                    ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_5
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                         >> 0x14U)))
                                                     ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_4
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                          >> 0x14U)))
                                                      ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_3
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                           >> 0x14U)))
                                                       ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_2
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                            >> 0x14U)))
                                                        ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_1
                                                        : vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_0)))))))))))))));
    vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module_io_Ex_sel 
        = ((0x33U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
            ? 0U : ((0x13U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                     ? 0U : ((0x23U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                              ? 1U : ((3U == (0x7fU 
                                              & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                       ? 0U : ((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                                ? 0U
                                                : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                                    ? 0U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                                     ? 0U
                                                     : (IData)(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module__DOT___GEN_6))))))));
    vlSelfRef.Top__DOT__Core__DOT___T_70 = (((IData)(vlSelfRef.Top__DOT__Core__DOT__Forward_module_io_RS1OUT) 
                                             & ((IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RD_REG) 
                                                != 
                                                (0x1fU 
                                                 & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                    >> 0xfU)))) 
                                            & ((IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__RD_reg) 
                                               != (0x1fU 
                                                   & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                      >> 0xfU))));
    Top__DOT__Core__DOT__immgen_module__DOT___GEN_4 
        = (0x1ffffffffULL & ((0x23U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                              ? (((QData)((IData)((1U 
                                                   & (((vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                        >> 0x1fU)
                                                        ? 0xfffffU
                                                        : 0U) 
                                                      >> 0x13U)))) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((((vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                                  >> 0x1fU)
                                                                  ? 0xfffffU
                                                                  : 0U) 
                                                                << 0xcU) 
                                                               | ((0xfe0U 
                                                                   & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                                        >> 7U)))))))
                              : ((0x63U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                  ? (((QData)((IData)(
                                                      (vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT__sb_imm 
                                                       >> 0x1fU))) 
                                      << 0x20U) | (QData)((IData)(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT__sb_imm)))
                                  : ((0x37U == (0x7fU 
                                                & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                      ? (((QData)((IData)(
                                                          (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                           >> 0x1fU))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (0xfffff000U 
                                                            & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))))
                                      : ((0x17U == 
                                          (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                          ? (((QData)((IData)(
                                                              (vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT__auipc_imm 
                                                               >> 0x1fU))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT__auipc_imm)))
                                          : ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                              ? ((((QData)((IData)(
                                                                   ((((vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                                       >> 0x1fU)
                                                                       ? 0xfffU
                                                                       : 0U) 
                                                                     << 1U) 
                                                                    | (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                                       >> 0x1fU)))) 
                                                   << 0x14U) 
                                                  | (QData)((IData)(
                                                                    (((0xff000U 
                                                                       & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg) 
                                                                      | (0x800U 
                                                                         & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                                            >> 9U))) 
                                                                     | (0x7feU 
                                                                        & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                                           >> 0x14U)))))) 
                                                 + 
                                                 (((QData)((IData)(
                                                                   (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__PCout_reg 
                                                                    >> 0x1fU))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__PCout_reg))))
                                              : 0ULL))))));
    Top__DOT__Core__DOT___T_23 = ((IData)(vlSelfRef.Top__DOT__Core__DOT___T_4) 
                                  | ((0x63U == (0x7fU 
                                                & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                     | (0x63U == (0x7fU 
                                                  & vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Instr_reg))));
    vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData1 
        = ((0U == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                            >> 0xfU))) ? 0U : ((0x1fU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                    >> 0xfU)))
                                                ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_31
                                                : (
                                                   (0x1eU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                        >> 0xfU)))
                                                    ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_30
                                                    : 
                                                   ((0x1dU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                         >> 0xfU)))
                                                     ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_29
                                                     : 
                                                    ((0x1cU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                          >> 0xfU)))
                                                      ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_28
                                                      : 
                                                     ((0x1bU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                           >> 0xfU)))
                                                       ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_27
                                                       : 
                                                      ((0x1aU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                            >> 0xfU)))
                                                        ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_26
                                                        : 
                                                       ((0x19U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                             >> 0xfU)))
                                                         ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_25
                                                         : 
                                                        ((0x18U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                              >> 0xfU)))
                                                          ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_24
                                                          : 
                                                         ((0x17U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                               >> 0xfU)))
                                                           ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_23
                                                           : 
                                                          ((0x16U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                                >> 0xfU)))
                                                            ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_22
                                                            : 
                                                           ((0x15U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                                 >> 0xfU)))
                                                             ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_21
                                                             : 
                                                            ((0x14U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                                  >> 0xfU)))
                                                              ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_20
                                                              : 
                                                             ((0x13U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                                   >> 0xfU)))
                                                               ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_19
                                                               : 
                                                              ((0x12U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                                    >> 0xfU)))
                                                                ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_18
                                                                : 
                                                               ((0x11U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                                     >> 0xfU)))
                                                                 ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_17
                                                                 : 
                                                                ((0x10U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                                      >> 0xfU)))
                                                                  ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_16
                                                                  : Top__DOT__Core__DOT__regfile_module__DOT___GEN_15)))))))))))))))));
    vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData2 
        = ((0U == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                            >> 0x14U))) ? 0U : ((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                     >> 0x14U)))
                                                 ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_31
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                      >> 0x14U)))
                                                  ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_30
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                       >> 0x14U)))
                                                   ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                        >> 0x14U)))
                                                    ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                         >> 0x14U)))
                                                     ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_27
                                                     : 
                                                    ((0x1aU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                          >> 0x14U)))
                                                      ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_26
                                                      : 
                                                     ((0x19U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                           >> 0x14U)))
                                                       ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_25
                                                       : 
                                                      ((0x18U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                            >> 0x14U)))
                                                        ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_24
                                                        : 
                                                       ((0x17U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                             >> 0x14U)))
                                                         ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_23
                                                         : 
                                                        ((0x16U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                              >> 0x14U)))
                                                          ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_22
                                                          : 
                                                         ((0x15U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                               >> 0x14U)))
                                                           ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_21
                                                           : 
                                                          ((0x14U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                                >> 0x14U)))
                                                            ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_20
                                                            : 
                                                           ((0x13U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                                 >> 0x14U)))
                                                             ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_19
                                                             : 
                                                            ((0x12U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                                  >> 0x14U)))
                                                              ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_18
                                                              : 
                                                             ((0x11U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                                   >> 0x14U)))
                                                               ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_17
                                                               : 
                                                              ((0x10U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                                    >> 0x14U)))
                                                                ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_16
                                                                : Top__DOT__Core__DOT__regfile_module__DOT___GEN_47)))))))))))))))));
    vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT___GEN_7 
        = ((3U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
            ? Top__DOT__Core__DOT__immgen_module__DOT____VdfgRegularize_h0358fbff_0_1
            : ((0x13U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                ? Top__DOT__Core__DOT__immgen_module__DOT____VdfgRegularize_h0358fbff_0_1
                : ((0x67U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                    ? Top__DOT__Core__DOT__immgen_module__DOT____VdfgRegularize_h0358fbff_0_1
                    : Top__DOT__Core__DOT__immgen_module__DOT___GEN_4)));
    vlSelfRef.Top__DOT__Core__DOT__ifid_module_io_flush 
        = (((IData)(Top__DOT__Core__DOT___T_23) | (3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))) 
           | (3U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Instr_reg)));
    vlSelfRef.Top__DOT__Core__DOT__InstructionFetch_io_stall 
        = ((IData)(Top__DOT__Core__DOT___T_23) | (IData)(vlSelfRef.Top__DOT__Core__DOT__ifid_module_io_flush));
    vlSelfRef.Top__DOT__imem__DOT___state_reg_T_3 = 
        ((0U == (IData)(vlSelfRef.Top__DOT__imem__DOT__state_reg)) 
         | ((~ (IData)(vlSelfRef.Top__DOT__Core__DOT__InstructionFetch_io_stall)) 
            & (2U == (IData)(vlSelfRef.Top__DOT__imem__DOT__state_reg))));
    vlSelfRef.Top__DOT__imem__DOT___state_reg_T_5 = 
        ((~ (IData)(vlSelfRef.Top__DOT__Core__DOT__InstructionFetch_io_stall)) 
         & (1U == (IData)(vlSelfRef.Top__DOT__imem__DOT__state_reg)));
    vlSelfRef.Top__DOT__imem__DOT___GEN_6 = ((IData)(vlSelfRef.Top__DOT__Core__DOT__InstructionFetch_io_stall)
                                              ? 0U : 
                                             ((IData)(vlSelfRef.Top__DOT__Core__DOT__InstructionFetch_io_stall)
                                               ? 0U
                                               : (0xffffffU 
                                                  & (vlSelfRef.Top__DOT__Core__DOT__pc_module__DOT__reg_ 
                                                     >> 2U))));
}

VL_INLINE_OPT void VTop___024root___nba_comb__TOP__0(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_comb__TOP__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ Top__DOT__Core__DOT__alu_module__DOT___T_16;
    Top__DOT__Core__DOT__alu_module__DOT___T_16 = 0;
    // Body
    vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata 
        = ((2U == (IData)(vlSelfRef.Top__DOT__dmem__DOT__state_reg))
            ? vlSelfRef.Top__DOT__dmem__DOT__sram_data_o
            : 0U);
    vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData 
        = ((3U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__Instr_reg))
            ? vlSelfRef.Top__DOT__dmem__DOT__sram_data_o
            : ((IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__MemtoReg_reg)
                ? ((IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__MemtoReg_reg)
                    ? vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__ReadData_reg
                    : 0U) : vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__ALUres_reg));
    vlSelfRef.Top__DOT__Core__DOT__memwb_module_io_ReadData 
        = ((2U == (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__funct3))
            ? vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata
            : ((0U == (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__funct3))
                ? ((0U == (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__offset))
                    ? ((((0x80U & vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata)
                          ? 0xffffffU : 0U) << 8U) 
                       | (0xffU & vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata))
                    : ((1U == (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__offset))
                        ? ((((0x8000U & vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata)
                              ? 0xffffffU : 0U) << 8U) 
                           | (0xffU & (vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata 
                                       >> 8U))) : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__offset))
                                                    ? 
                                                   ((((0x800000U 
                                                       & vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata)
                                                       ? 0xffffffU
                                                       : 0U) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata 
                                                          >> 0x10U)))
                                                    : 
                                                   ((((vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata 
                                                       >> 0x1fU)
                                                       ? 0xffffffU
                                                       : 0U) 
                                                     << 8U) 
                                                    | (vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata 
                                                       >> 0x18U)))))
                : ((4U == (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__funct3))
                    ? ((0U == (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__offset))
                        ? (0xffU & vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata)
                        : ((1U == (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__offset))
                            ? (0xffU & (vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata 
                                        >> 8U)) : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__offset))
                                                    ? 
                                                   (0xffU 
                                                    & (vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata 
                                                       >> 0x10U))
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata, 0x18U))))
                    : ((5U == (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__funct3))
                        ? ((0U == (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__offset))
                            ? (0xffffU & vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata)
                            : ((1U == (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__offset))
                                ? (0xffffU & (vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata 
                                              >> 8U))
                                : VL_SHIFTR_III(32,32,32, vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata, 0x10U)))
                        : ((0U == (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__offset))
                            ? ((((0x8000U & vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata)
                                  ? 0xffffU : 0U) << 0x10U) 
                               | (0xffffU & vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata))
                            : ((1U == (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__offset))
                                ? ((((0x800000U & vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata)
                                      ? 0xffffU : 0U) 
                                    << 0x10U) | (0xffffU 
                                                 & (vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata 
                                                    >> 8U)))
                                : ((((vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata 
                                      >> 0x1fU) ? 0xffffU
                                      : 0U) << 0x10U) 
                                   | (vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata 
                                      >> 0x10U))))))));
    vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op1 
        = ((0x17U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Instr_reg))
            ? 0U : ((IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__operandAsel_reg)
                     ? vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__operandA_reg
                     : ((0U == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Instr_reg 
                                         >> 0xfU)))
                         ? 0U : ((0x37U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Instr_reg))
                                  ? 0U : ((2U == (IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__OpA_s_REG))
                                           ? vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__PC_REG
                                           : ((0U == (IData)(vlSelfRef.Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardA))
                                               ? vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Read1_REG
                                               : ((1U 
                                                   == (IData)(vlSelfRef.Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardA))
                                                   ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardA))
                                                    ? vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData
                                                    : vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Read1_REG))))))));
    vlSelfRef.Top__DOT__Core__DOT___GEN_61 = ((1U == (IData)(vlSelfRef.Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardB))
                                               ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg
                                               : ((2U 
                                                   == (IData)(vlSelfRef.Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardB))
                                                   ? vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData
                                                   : vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Read2_REG));
    vlSelfRef.Top__DOT__Core__DOT___GEN_66 = ((0U == (IData)(vlSelfRef.Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardB))
                                               ? vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Read2_REG
                                               : vlSelfRef.Top__DOT__Core__DOT___GEN_61);
    vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op2 
        = ((IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__OpB_s_REG)
            ? vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Immd_REG
            : vlSelfRef.Top__DOT__Core__DOT___GEN_66);
    Top__DOT__Core__DOT__alu_module__DOT___T_16 = (vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op1 
                                                   < vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op2);
    vlSelfRef.Top__DOT__Core__DOT__alu_module__DOT__shift 
        = (vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op1 
           >> (0x1fU & vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op2));
    vlSelfRef.Top__DOT__Core__DOT__alu_module__DOT___GEN_12 
        = (0x7fffffffffffffffULL & ((0U == (0x1fU & (IData)(vlSelfRef.Top__DOT__Core__DOT__alucontrol_module__DOT___GEN_5)))
                                     ? (QData)((IData)(
                                                       (vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op1 
                                                        + vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op2)))
                                     : ((8U == (0x1fU 
                                                & (IData)(vlSelfRef.Top__DOT__Core__DOT__alucontrol_module__DOT___GEN_5)))
                                         ? (QData)((IData)(
                                                           (vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op1 
                                                            - vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op2)))
                                         : ((7U == 
                                             (0x1fU 
                                              & (IData)(vlSelfRef.Top__DOT__Core__DOT__alucontrol_module__DOT___GEN_5)))
                                             ? (QData)((IData)(
                                                               (vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op1 
                                                                & vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op2)))
                                             : ((6U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.Top__DOT__Core__DOT__alucontrol_module__DOT___GEN_5)))
                                                 ? (QData)((IData)(
                                                                   (vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op1 
                                                                    | vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op2)))
                                                 : 
                                                ((4U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(vlSelfRef.Top__DOT__Core__DOT__alucontrol_module__DOT___GEN_5)))
                                                  ? (QData)((IData)(
                                                                    (vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op1 
                                                                     ^ vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op2)))
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelfRef.Top__DOT__Core__DOT__alucontrol_module__DOT___GEN_5)))
                                                   ? (QData)((IData)(Top__DOT__Core__DOT__alu_module__DOT___T_16))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelfRef.Top__DOT__Core__DOT__alucontrol_module__DOT___GEN_5)))
                                                    ? 
                                                   ((QData)((IData)(vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op1)) 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op2))
                                                    : (QData)((IData)(
                                                                      ((3U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.Top__DOT__Core__DOT__alucontrol_module__DOT___GEN_5)))
                                                                        ? (IData)(Top__DOT__Core__DOT__alu_module__DOT___T_16)
                                                                        : 
                                                                       ((5U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.Top__DOT__Core__DOT__alucontrol_module__DOT___GEN_5)))
                                                                         ? vlSelfRef.Top__DOT__Core__DOT__alu_module__DOT__shift
                                                                         : 
                                                                        (((0xdU 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.Top__DOT__Core__DOT__alucontrol_module__DOT___GEN_5))) 
                                                                          | (5U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.Top__DOT__Core__DOT__alucontrol_module__DOT___GEN_5))))
                                                                          ? vlSelfRef.Top__DOT__Core__DOT__alu_module__DOT__shift
                                                                          : 
                                                                         ((0x1fU 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.Top__DOT__Core__DOT__alucontrol_module__DOT___GEN_5)))
                                                                           ? vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op1
                                                                           : 0U))))))))))))));
    vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 
        = ((0U == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                            >> 0xfU))) ? vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData1
            : ((1U == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                >> 0xfU))) ? (IData)(vlSelfRef.Top__DOT__Core__DOT__alu_module__DOT___GEN_12)
                : ((2U == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                    >> 0xfU))) ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg
                    : ((3U == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                        >> 0xfU))) ? vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData
                        : ((4U == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                            >> 0xfU)))
                            ? vlSelfRef.Top__DOT__Core__DOT__memwb_module_io_ReadData
                            : ((5U == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                >> 0xfU)))
                                ? vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData
                                : vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData1))))));
    vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2 
        = ((0U == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                            >> 0x14U))) ? vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData2
            : ((1U == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                >> 0x14U))) ? (IData)(vlSelfRef.Top__DOT__Core__DOT__alu_module__DOT___GEN_12)
                : ((2U == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                    >> 0x14U))) ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg
                    : ((3U == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                        >> 0x14U)))
                        ? vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData
                        : ((4U == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                            >> 0x14U)))
                            ? vlSelfRef.Top__DOT__Core__DOT__memwb_module_io_ReadData
                            : ((5U == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                >> 0x14U)))
                                ? vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData
                                : vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData2))))));
}

void VTop___024root___eval_triggers__act(VTop___024root* vlSelf);

bool VTop___024root___eval_phase__act(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__act\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VTop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTop___024root___eval_phase__nba(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__nba\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__ico(VTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__nba(VTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf);
#endif  // VL_DEBUG

void VTop___024root___eval(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VTop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("Top.v", 2437, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VTop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VTop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Top.v", 2437, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VTop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Top.v", 2437, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VTop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VTop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTop___024root___eval_debug_assertions(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_debug_assertions\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
