// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop___024root.h"

VL_ATTR_COLD void VTop___024root___eval_static(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_static\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void VTop___024root___eval_initial__TOP(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_initial(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void VTop___024root___eval_initial__TOP(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial__TOP\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelfRef.io_rvfi_mode_0 = 3U;
    vlSelfRef.io_rvfi_rs1_addr_0 = 0U;
    vlSelfRef.io_rvfi_rs2_addr_0 = 0U;
    vlSelfRef.io_rvfi_rs1_rdata_0 = 0U;
    vlSelfRef.io_rvfi_rs2_rdata_0 = 0U;
    vlSelfRef.io_rvfi_rd_addr_0 = 0U;
    vlSelfRef.io_rvfi_rd_wdata_0 = 0U;
    vlSelfRef.io_rvfi_pc_wdata_0 = 0U;
    vlSelfRef.io_rvfi_mem_rdata_0 = 0U;
    VL_READMEM_N(true, 32, 268435456, 0, std::string{"dmem.hex"}
                 ,  &(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__mem)
                 , 0, ~0ULL);
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x6772616dU;
    __Vtemp_1[2U] = 0x70726fU;
    VL_READMEM_N(true, 32, 268435456, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VTop___024root___eval_final(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_final\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTop___024root___eval_phase__stl(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_settle(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_settle\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VTop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("Top.v", 2437, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__stl\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__0(VTop___024root* vlSelf);
VL_ATTR_COLD void VTop___024root____Vm_traceActivitySetAll(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_stl(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_stl\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VTop___024root___stl_sequent__TOP__0(vlSelf);
        VTop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__0(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___stl_sequent__TOP__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ Top__DOT__Core__DOT___T_23;
    Top__DOT__Core__DOT___T_23 = 0;
    CData/*0:0*/ Top__DOT__Core__DOT__alu_module__DOT___T_16;
    Top__DOT__Core__DOT__alu_module__DOT___T_16 = 0;
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
    vlSelfRef.io_rvfi_insn_0 = vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__Instr_reg;
    vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module_io_MemRead 
        = ((0x33U != (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
           & ((0x13U != (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
              & ((0x23U != (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                 & (3U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)))));
    vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module__DOT___GEN_9 
        = ((0x67U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
           | ((0x37U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
              | (0x17U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))));
    vlSelfRef.Top__DOT__dmem__DOT___state_reg_T_3 = 
        ((0U == (IData)(vlSelfRef.Top__DOT__dmem__DOT__state_reg)) 
         | (2U == (IData)(vlSelfRef.Top__DOT__dmem__DOT__state_reg)));
    vlSelfRef.io_rvfi_pc_rdata_0 = vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__PC_REG;
    vlSelfRef.io_rvfi_mem_addr_0 = vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__ALUres_reg;
    vlSelfRef.io_rvfi_mem_wmask_0 = vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__mask_reg;
    vlSelfRef.io_rvfi_mem_wdata_0 = vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__MemWritedata_reg;
    vlSelfRef.io_rvfi_valid_0 = (1U & (~ ((IData)(vlSelfRef.clock) 
                                          | (0U == vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__Instr_reg))));
    vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_RegWrite 
        = ((3U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__Instr_reg)) 
           | (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RegWrite_reg));
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
    vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4 
        = ((IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemWrite_reg) 
           & (0U == (IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__func3_REG)));
    vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3 
        = ((IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemWrite_reg) 
           & (1U == (IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__func3_REG)));
    vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata 
        = ((2U == (IData)(vlSelfRef.Top__DOT__dmem__DOT__state_reg))
            ? vlSelfRef.Top__DOT__dmem__DOT__sram_data_o
            : 0U);
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
    vlSelfRef.Top__DOT__Core__DOT__MEM_io_dccmReq_valid 
        = ((IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemRead_reg) 
           | (IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemWrite_reg));
    vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData 
        = ((3U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__Instr_reg))
            ? vlSelfRef.Top__DOT__dmem__DOT__sram_data_o
            : ((IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__MemtoReg_reg)
                ? ((IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__MemtoReg_reg)
                    ? vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__ReadData_reg
                    : 0U) : vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__ALUres_reg));
    Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_5 
        = ((IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RegWrite_reg) 
           & (0U != (IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg)));
    Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_1 
        = ((IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__RegWrite_reg) 
           & (0U != (IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__RD_reg)));
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
    Top__DOT__Core__DOT___T_23 = ((IData)(vlSelfRef.Top__DOT__Core__DOT___T_4) 
                                  | ((0x63U == (0x7fU 
                                                & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                     | (0x63U == (0x7fU 
                                                  & vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Instr_reg))));
    vlSelfRef.Top__DOT__dmem__DOT___state_reg_T_5 = 
        ((1U == (IData)(vlSelfRef.Top__DOT__dmem__DOT__state_reg)) 
         & (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM_io_dccmReq_valid));
    Top__DOT__dmem__DOT___T_2 = ((IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemWrite_reg) 
                                 & (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM_io_dccmReq_valid));
    Top__DOT__dmem__DOT____VdfgRegularize_h48f37a89_0_0 
        = ((~ (IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemWrite_reg)) 
           & (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM_io_dccmReq_valid));
    Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_3 
        = ((IData)(Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_1) 
           & ((IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__RD_reg) 
              == (IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RS1_S_REG)));
    Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_17 
        = ((IData)(Top__DOT__Core__DOT__ForwardingUnit_module__DOT___T_1) 
           & ((IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__RD_reg) 
              == (IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RS2_S_REG)));
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
    vlSelfRef.Top__DOT__Core__DOT__InstructionFetch_io_stall 
        = ((IData)(Top__DOT__Core__DOT___T_23) | (IData)(vlSelfRef.Top__DOT__Core__DOT__ifid_module_io_flush));
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
    if ((0U == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                         >> 0x14U)))) {
        vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData2 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2 
            = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData2;
    } else {
        vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData2 
            = ((0x1fU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                   >> 0x14U))) ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_31
                : ((0x1eU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                       >> 0x14U))) ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_30
                    : ((0x1dU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                           >> 0x14U)))
                        ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_29
                        : ((0x1cU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                               >> 0x14U)))
                            ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_28
                            : ((0x1bU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                   >> 0x14U)))
                                ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_27
                                : ((0x1aU == (0x1fU 
                                              & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                 >> 0x14U)))
                                    ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_26
                                    : ((0x19U == (0x1fU 
                                                  & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                     >> 0x14U)))
                                        ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_25
                                        : ((0x18U == 
                                            (0x1fU 
                                             & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                >> 0x14U)))
                                            ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_24
                                            : ((0x17U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                    >> 0x14U)))
                                                ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_23
                                                : (
                                                   (0x16U 
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
                                                          : Top__DOT__Core__DOT__regfile_module__DOT___GEN_47))))))))))))))));
        vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2 
            = ((1U == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
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
                                : vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData2)))));
    }
    if ((0U == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                         >> 0xfU)))) {
        vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData1 = 0U;
        vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 
            = vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData1;
    } else {
        vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData1 
            = ((0x1fU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                   >> 0xfU))) ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_31
                : ((0x1eU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                       >> 0xfU))) ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_30
                    : ((0x1dU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                           >> 0xfU)))
                        ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_29
                        : ((0x1cU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                               >> 0xfU)))
                            ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_28
                            : ((0x1bU == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                   >> 0xfU)))
                                ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_27
                                : ((0x1aU == (0x1fU 
                                              & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                 >> 0xfU)))
                                    ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_26
                                    : ((0x19U == (0x1fU 
                                                  & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                     >> 0xfU)))
                                        ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_25
                                        : ((0x18U == 
                                            (0x1fU 
                                             & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                >> 0xfU)))
                                            ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_24
                                            : ((0x17U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                    >> 0xfU)))
                                                ? vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_23
                                                : (
                                                   (0x16U 
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
                                                          : Top__DOT__Core__DOT__regfile_module__DOT___GEN_15))))))))))))))));
        vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 
            = ((1U == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
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
                                : vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData1)))));
    }
}

VL_ATTR_COLD void VTop___024root___eval_triggers__stl(VTop___024root* vlSelf);

VL_ATTR_COLD bool VTop___024root___eval_phase__stl(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__stl\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VTop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__ico(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__ico\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__act\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__nba(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__nba\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTop___024root____Vm_traceActivitySetAll(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root____Vm_traceActivitySetAll\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void VTop___024root___ctor_var_reset(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->io_rvfi_valid_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15971361884192775342ull);
    vlSelf->io_rvfi_insn_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15393335235419124997ull);
    vlSelf->io_rvfi_mode_0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9565124315714342597ull);
    vlSelf->io_rvfi_rs1_addr_0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 395553558653311007ull);
    vlSelf->io_rvfi_rs2_addr_0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3301718950503354687ull);
    vlSelf->io_rvfi_rs1_rdata_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7124432557259551040ull);
    vlSelf->io_rvfi_rs2_rdata_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3884955738329156995ull);
    vlSelf->io_rvfi_rd_addr_0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2796284851443349471ull);
    vlSelf->io_rvfi_rd_wdata_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3861872693894957672ull);
    vlSelf->io_rvfi_pc_rdata_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2866446156202246209ull);
    vlSelf->io_rvfi_pc_wdata_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9972575577211197152ull);
    vlSelf->io_rvfi_mem_addr_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15080012428953147170ull);
    vlSelf->io_rvfi_mem_wmask_0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17363735412187247935ull);
    vlSelf->io_rvfi_mem_rdata_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 377794054647356148ull);
    vlSelf->io_rvfi_mem_wdata_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10227977567897458104ull);
    vlSelf->Top__DOT__Core__DOT__InstructionFetch_io_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14253518301610402890ull);
    vlSelf->Top__DOT__Core__DOT__alu_module_io_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9403361947740646843ull);
    vlSelf->Top__DOT__Core__DOT__alu_module_io_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7493334061648441071ull);
    vlSelf->Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10064813849538024660ull);
    vlSelf->Top__DOT__Core__DOT__Branchcontrol_module_io_RS2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5179528730904387511ull);
    vlSelf->Top__DOT__Core__DOT__ControlDecoder_module_io_MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12854424452661692441ull);
    vlSelf->Top__DOT__Core__DOT__ControlDecoder_module_io_Ex_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9367287411514354882ull);
    vlSelf->Top__DOT__Core__DOT__Forward_module_io_RS1OUT = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5904674856327076172ull);
    vlSelf->Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3505233816307583359ull);
    vlSelf->Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardB = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4646238217119038810ull);
    vlSelf->Top__DOT__Core__DOT__ifid_module_io_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11007844971926308266ull);
    vlSelf->Top__DOT__Core__DOT__memwb_module_io_ReadData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4611726663439115646ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module_io_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4394362073581070168ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module_io_writeData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3559776293191553055ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module_io_readData1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15450444847378597086ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module_io_readData2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3335469488496423744ull);
    vlSelf->Top__DOT__Core__DOT__MEM_io_dccmReq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7085324303630116953ull);
    vlSelf->Top__DOT__Core__DOT___T_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16888409202987895470ull);
    vlSelf->Top__DOT__Core__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5852081011278223526ull);
    vlSelf->Top__DOT__Core__DOT___T_70 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6008751649195191559ull);
    vlSelf->Top__DOT__Core__DOT___GEN_61 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8886719523093887996ull);
    vlSelf->Top__DOT__Core__DOT___GEN_66 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15208869084730149549ull);
    vlSelf->Top__DOT__Core__DOT__pc_module__DOT__reg_ = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9083530339784912436ull);
    vlSelf->Top__DOT__Core__DOT__alu_module__DOT__shift = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16908125598582062620ull);
    vlSelf->Top__DOT__Core__DOT__alu_module__DOT___GEN_12 = VL_SCOPED_RAND_RESET_Q(63, __VscopeHash, 644789491255660797ull);
    vlSelf->Top__DOT__Core__DOT__alucontrol_module__DOT___GEN_5 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9195217946712316524ull);
    vlSelf->Top__DOT__Core__DOT__ControlDecoder_module__DOT___GEN_6 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9958989396528385452ull);
    vlSelf->Top__DOT__Core__DOT__ControlDecoder_module__DOT___GEN_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14425897194758262719ull);
    vlSelf->Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13395630016950169057ull);
    vlSelf->Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18195396078527461196ull);
    vlSelf->Top__DOT__Core__DOT__exmem_module__DOT__RD_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1646045711074317122ull);
    vlSelf->Top__DOT__Core__DOT__exmem_module__DOT__MemRead_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11676549785083062273ull);
    vlSelf->Top__DOT__Core__DOT__exmem_module__DOT__MemWrite_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5850146367699105664ull);
    vlSelf->Top__DOT__Core__DOT__exmem_module__DOT__RegWrite_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5376747808562518693ull);
    vlSelf->Top__DOT__Core__DOT__exmem_module__DOT__func3_REG = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5454526258121921213ull);
    vlSelf->Top__DOT__Core__DOT__exmem_module__DOT__Instr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6791993278760052518ull);
    vlSelf->Top__DOT__Core__DOT__exmem_module__DOT__PC_REG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16473073288558227565ull);
    vlSelf->Top__DOT__Core__DOT__idex_module__DOT__PC_REG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10985318041070581820ull);
    vlSelf->Top__DOT__Core__DOT__idex_module__DOT__OpA_s_REG = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4204050591686626523ull);
    vlSelf->Top__DOT__Core__DOT__idex_module__DOT__OpB_s_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9818498501777142246ull);
    vlSelf->Top__DOT__Core__DOT__idex_module__DOT__func3_REG = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10493747509106494576ull);
    vlSelf->Top__DOT__Core__DOT__idex_module__DOT__func7_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 502949437903143475ull);
    vlSelf->Top__DOT__Core__DOT__idex_module__DOT__Read1_REG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13681478364722496212ull);
    vlSelf->Top__DOT__Core__DOT__idex_module__DOT__Read2_REG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11474216955157252334ull);
    vlSelf->Top__DOT__Core__DOT__idex_module__DOT__Immd_REG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8023616063699380210ull);
    vlSelf->Top__DOT__Core__DOT__idex_module__DOT__RD_REG = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6656136222684959699ull);
    vlSelf->Top__DOT__Core__DOT__idex_module__DOT__MemRead_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17467473263500236438ull);
    vlSelf->Top__DOT__Core__DOT__idex_module__DOT__ALUOp_REG = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17637250559921220747ull);
    vlSelf->Top__DOT__Core__DOT__idex_module__DOT__MemWrite_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8744595347407354950ull);
    vlSelf->Top__DOT__Core__DOT__idex_module__DOT__RegWrite_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14533792807703240585ull);
    vlSelf->Top__DOT__Core__DOT__idex_module__DOT__RS1_S_REG = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1165700524026709731ull);
    vlSelf->Top__DOT__Core__DOT__idex_module__DOT__RS2_S_REG = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7255755427393585377ull);
    vlSelf->Top__DOT__Core__DOT__idex_module__DOT__Instr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6330598474922159532ull);
    vlSelf->Top__DOT__Core__DOT__idex_module__DOT__operandA_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1840194799404289896ull);
    vlSelf->Top__DOT__Core__DOT__idex_module__DOT__operandAsel_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16903196780353986247ull);
    vlSelf->Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6684920504806708330ull);
    vlSelf->Top__DOT__Core__DOT__ifid_module__DOT__PCout_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17783512999021245533ull);
    vlSelf->Top__DOT__Core__DOT__immgen_module__DOT__sb_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17343534665948904429ull);
    vlSelf->Top__DOT__Core__DOT__immgen_module__DOT__auipc_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14434908362941431698ull);
    vlSelf->Top__DOT__Core__DOT__immgen_module__DOT___GEN_7 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 14238031298922536633ull);
    vlSelf->Top__DOT__Core__DOT__memwb_module__DOT__ReadData_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15475353755820044975ull);
    vlSelf->Top__DOT__Core__DOT__memwb_module__DOT__ALUres_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1338832635795259100ull);
    vlSelf->Top__DOT__Core__DOT__memwb_module__DOT__RD_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 661667578317971881ull);
    vlSelf->Top__DOT__Core__DOT__memwb_module__DOT__MemtoReg_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14723246848134707795ull);
    vlSelf->Top__DOT__Core__DOT__memwb_module__DOT__RegWrite_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17687196059029817472ull);
    vlSelf->Top__DOT__Core__DOT__memwb_module__DOT__Instr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7154338408828051759ull);
    vlSelf->Top__DOT__Core__DOT__memwb_module__DOT__mask_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14466822840730883768ull);
    vlSelf->Top__DOT__Core__DOT__memwb_module__DOT__MemWritedata_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9806921928788077267ull);
    vlSelf->Top__DOT__Core__DOT__memwb_module__DOT__PC_REG = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11086036800222429297ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7856397036567814864ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13159550858112689579ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12696705777324237328ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4280803504808485396ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3483858324863725282ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7276883079569554341ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17044904815821367039ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8973315804623370235ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8176370624678603376ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13539848965069414895ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8113631838383120865ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8821040242427056407ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14668655026860811070ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10469627817349820342ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_14 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6952131015749791447ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_15 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1191096254076349801ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_16 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15497088086256494368ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_17 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12522116489593675358ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_18 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5906564434507326684ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_19 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11207794613359680132ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_20 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4091247125051164361ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_21 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16434410304408530579ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_22 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1614261651387401951ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_23 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17314893119024550389ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_24 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6033900495364654575ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_25 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10205078232340859854ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_26 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3431212428157528169ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_27 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9842068724563135848ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_28 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17948190643885663401ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_29 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1579039504934640912ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_30 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 761375935166838810ull);
    vlSelf->Top__DOT__Core__DOT__regfile_module__DOT__reg_31 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3718711221456131005ull);
    vlSelf->Top__DOT__Core__DOT__MEM__DOT__offset = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4943621365219587577ull);
    vlSelf->Top__DOT__Core__DOT__MEM__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6339698342706404935ull);
    vlSelf->Top__DOT__Core__DOT__MEM__DOT___GEN_12 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1593626248394194941ull);
    vlSelf->Top__DOT__Core__DOT__MEM__DOT___GEN_22 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2751843778283584811ull);
    vlSelf->Top__DOT__Core__DOT__MEM__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11263806257093939202ull);
    vlSelf->Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6980700536933526491ull);
    vlSelf->Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1775410198529798585ull);
    vlSelf->Top__DOT__dmem__DOT__sram_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 168348258608475855ull);
    vlSelf->Top__DOT__dmem__DOT__sram_data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13155068594670774059ull);
    vlSelf->Top__DOT__dmem__DOT__sram_wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8909117017908523670ull);
    vlSelf->Top__DOT__dmem__DOT__sram_data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5189466903760271951ull);
    vlSelf->Top__DOT__dmem__DOT__state_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9865916382177767034ull);
    vlSelf->Top__DOT__dmem__DOT___state_reg_T_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7863312864896820532ull);
    vlSelf->Top__DOT__dmem__DOT___state_reg_T_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9845392696219380715ull);
    vlSelf->Top__DOT__dmem__DOT___GEN_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3238334416527546187ull);
    vlSelf->Top__DOT__dmem__DOT__sram__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17730958667062621156ull);
    for (int __Vi0 = 0; __Vi0 < 268435456; ++__Vi0) {
        vlSelf->Top__DOT__dmem__DOT__sram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11092408826059904982ull);
    }
    vlSelf->Top__DOT__imem__DOT__sram_data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11383043813935221650ull);
    vlSelf->Top__DOT__imem__DOT__state_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5959124850913550976ull);
    vlSelf->Top__DOT__imem__DOT___state_reg_T_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8459613037795642303ull);
    vlSelf->Top__DOT__imem__DOT___state_reg_T_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9471145473431726134ull);
    vlSelf->Top__DOT__imem__DOT___GEN_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17432607681658307605ull);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11637992639946024550ull);
    for (int __Vi0 = 0; __Vi0 < 268435456; ++__Vi0) {
        vlSelf->Top__DOT__imem__DOT__sram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11619171196994589976ull);
    }
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13272892335938733197ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
