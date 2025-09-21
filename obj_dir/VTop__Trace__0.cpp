// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


void VTop___024root__trace_chg_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTop___024root__trace_chg_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_0_sub_0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.Top__DOT__Core__DOT__MEM_io_dccmReq_valid));
        bufp->chgIData(oldp+1,(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg),32);
        bufp->chgIData(oldp+2,((((((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                    ? ((0U == (3U & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                        ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                           >> 0x18U)
                                        : ((1U == (3U 
                                                   & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                            ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                               >> 0x18U)
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 0x18U)
                                                : vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg)))
                                    : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                        ? ((0U == (3U 
                                                   & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                            ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                               >> 0x18U)
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 0x18U)
                                                : (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 8U)))
                                        : (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                           >> 0x18U))) 
                                  << 0x18U) | (0xff0000U 
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
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                  ? 
                                                 (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                  >> 8U)
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                   ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg
                                                   : 
                                                  (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 0x10U)))
                                                 : 
                                                ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                   ? 
                                                  (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 8U)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                    ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg
                                                    : 
                                                   (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                    >> 0x18U)))
                                                  : 
                                                 (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                  >> 8U))) 
                                               << 8U)) 
                                   | (0xffU & ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                                ? (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                    ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg
                                                    : 
                                                   (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                    >> 8U))
                                                : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                     ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg
                                                     : 
                                                    (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                     >> 0x10U))
                                                    : vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg)))))),32);
        bufp->chgCData(oldp+3,(((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                 ? (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT___GEN_12)
                                 : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                     ? (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT___GEN_22)
                                     : 0xfU))),4);
        bufp->chgBit(oldp+4,(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemWrite_reg));
        bufp->chgBit(oldp+5,((2U == (IData)(vlSelfRef.Top__DOT__dmem__DOT__state_reg))));
        bufp->chgBit(oldp+6,((1U & (~ (IData)(vlSelfRef.Top__DOT__Core__DOT__InstructionFetch_io_stall)))));
        bufp->chgIData(oldp+7,(((IData)(vlSelfRef.Top__DOT__Core__DOT__InstructionFetch_io_stall)
                                 ? 0U : (0xffffffU 
                                         & (vlSelfRef.Top__DOT__Core__DOT__pc_module__DOT__reg_ 
                                            >> 2U)))),32);
        bufp->chgCData(oldp+8,(((IData)(vlSelfRef.Top__DOT__Core__DOT__InstructionFetch_io_stall)
                                 ? 0U : 0xfU)),4);
        bufp->chgCData(oldp+9,(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__mask_reg),4);
        bufp->chgIData(oldp+10,(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__Instr_reg),32);
        bufp->chgIData(oldp+11,(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__PC_REG),32);
        bufp->chgIData(oldp+12,(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__ALUres_reg),32);
        bufp->chgIData(oldp+13,(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__MemWritedata_reg),32);
        bufp->chgIData(oldp+14,(vlSelfRef.Top__DOT__Core__DOT__pc_module__DOT__reg_),32);
        bufp->chgIData(oldp+15,(((IData)(4U) + vlSelfRef.Top__DOT__Core__DOT__pc_module__DOT__reg_)),32);
        bufp->chgIData(oldp+16,((0xffffffU & (vlSelfRef.Top__DOT__Core__DOT__pc_module__DOT__reg_ 
                                              >> 2U))),32);
        bufp->chgBit(oldp+17,(vlSelfRef.Top__DOT__Core__DOT__InstructionFetch_io_stall));
        bufp->chgCData(oldp+18,((0x1fU & (IData)(vlSelfRef.Top__DOT__Core__DOT__alucontrol_module__DOT___GEN_5))),5);
        bufp->chgCData(oldp+19,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__ALUOp_REG),3);
        bufp->chgCData(oldp+20,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__func7_REG),7);
        bufp->chgCData(oldp+21,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__func3_REG),3);
        bufp->chgCData(oldp+22,((7U & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+23,((0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+24,((0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+25,((0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)),7);
        bufp->chgBit(oldp+26,(((0x33U != (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                               & ((0x13U != (0x7fU 
                                             & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                  & (0x23U == (0x7fU 
                                               & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))))));
        bufp->chgBit(oldp+27,(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module_io_MemRead));
        bufp->chgBit(oldp+28,(((0x33U != (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                               & ((0x13U != (0x7fU 
                                             & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                  & ((0x23U != (0x7fU 
                                                & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                     & ((3U != (0x7fU 
                                                & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                        & (0x63U == 
                                           (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))))))));
        bufp->chgBit(oldp+29,(((0x33U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                               | ((0x13U == (0x7fU 
                                             & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                  | ((0x23U != (0x7fU 
                                                & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                     & ((3U == (0x7fU 
                                                & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                        | ((0x63U != 
                                            (0x7fU 
                                             & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                           & ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                              | (IData)(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module__DOT___GEN_9)))))))));
        bufp->chgCData(oldp+30,(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module_io_Ex_sel),2);
        bufp->chgCData(oldp+31,(((0x33U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                  ? 0U : ((0x13U == 
                                           (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                           ? 1U : (
                                                   (0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                                    ? 5U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                                     ? 4U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                                      ? 2U
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                                       ? 3U
                                                       : 
                                                      ((0x67U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                                        ? 3U
                                                        : 
                                                       ((0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                                         ? 6U
                                                         : 
                                                        ((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                                          ? 6U
                                                          : 7U)))))))))),3);
        bufp->chgCData(oldp+32,(((0x33U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                  ? 0U : ((0x13U == 
                                           (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                           ? 0U : (
                                                   (0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                                     ? 0U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                                      ? 0U
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                                       ? 1U
                                                       : 
                                                      ((0x67U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                                        ? 1U
                                                        : (IData)(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module__DOT___GEN_6))))))))),2);
        bufp->chgBit(oldp+33,(((0x33U != (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                               & ((0x13U == (0x7fU 
                                             & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                  | ((0x23U == (0x7fU 
                                                & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                     | ((3U == (0x7fU 
                                                & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                        | ((0x63U != 
                                            (0x7fU 
                                             & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                           & ((0x6fU 
                                               != (0x7fU 
                                                   & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                              & (IData)(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module__DOT___GEN_9)))))))));
        bufp->chgCData(oldp+34,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RD_REG),5);
        bufp->chgBit(oldp+35,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__MemRead_REG));
        bufp->chgBit(oldp+36,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__MemWrite_REG));
        bufp->chgBit(oldp+37,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RegWrite_REG));
        bufp->chgIData(oldp+38,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Instr_reg),32);
        bufp->chgIData(oldp+39,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__PC_REG),32);
        bufp->chgIData(oldp+40,(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg),32);
        bufp->chgCData(oldp+41,(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__RD_reg),5);
        bufp->chgBit(oldp+42,(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemRead_reg));
        bufp->chgBit(oldp+43,(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__RegWrite_reg));
        bufp->chgCData(oldp+44,(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__func3_REG),3);
        bufp->chgIData(oldp+45,(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__Instr_reg),32);
        bufp->chgIData(oldp+46,(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__PC_REG),32);
        bufp->chgBit(oldp+47,(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RegWrite_reg));
        bufp->chgCData(oldp+48,(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg),5);
        bufp->chgBit(oldp+49,(vlSelfRef.Top__DOT__Core__DOT__Forward_module_io_RS1OUT));
        bufp->chgBit(oldp+50,(((IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RegWrite_reg) 
                               & ((IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg) 
                                  == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                               >> 0x14U))))));
        bufp->chgCData(oldp+51,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RS1_S_REG),5);
        bufp->chgCData(oldp+52,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RS2_S_REG),5);
        bufp->chgCData(oldp+53,(vlSelfRef.Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardA),2);
        bufp->chgCData(oldp+54,(vlSelfRef.Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardB),2);
        bufp->chgIData(oldp+55,(vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__PCout_reg),32);
        bufp->chgBit(oldp+56,((1U & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                     >> 0x1eU))));
        bufp->chgIData(oldp+57,(((0U == (IData)(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module_io_Ex_sel))
                                  ? (IData)(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT___GEN_7)
                                  : ((1U == (IData)(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module_io_Ex_sel))
                                      ? (IData)(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT___GEN_7)
                                      : ((2U == (IData)(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module_io_Ex_sel))
                                          ? (IData)(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT___GEN_7)
                                          : 0U)))),32);
        bufp->chgCData(oldp+58,((0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                          >> 7U))),5);
        bufp->chgIData(oldp+59,(vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg),32);
        bufp->chgIData(oldp+60,(((0U != (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                  >> 0xfU)))
                                  ? ((IData)(vlSelfRef.Top__DOT__Core__DOT___T_70)
                                      ? vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__ALUres_reg
                                      : 0U) : 0U)),32);
        bufp->chgBit(oldp+61,(((0U != (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                >> 0xfU))) 
                               & (IData)(vlSelfRef.Top__DOT__Core__DOT___T_70))));
        bufp->chgCData(oldp+62,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__OpA_s_REG),2);
        bufp->chgBit(oldp+63,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__OpB_s_REG));
        bufp->chgBit(oldp+64,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__func7_REG));
        bufp->chgIData(oldp+65,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Read1_REG),32);
        bufp->chgIData(oldp+66,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Read2_REG),32);
        bufp->chgIData(oldp+67,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Immd_REG),32);
        bufp->chgIData(oldp+68,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__operandA_reg),32);
        bufp->chgBit(oldp+69,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__operandAsel_reg));
        bufp->chgBit(oldp+70,(vlSelfRef.Top__DOT__Core__DOT__ifid_module_io_flush));
        bufp->chgIData(oldp+71,((IData)(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT___GEN_7)),32);
        bufp->chgCData(oldp+72,(((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                  ? (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT___GEN_12)
                                  : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                      ? (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT___GEN_22)
                                      : ((IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemWrite_reg)
                                          ? 0xfU : 0U)))),4);
        bufp->chgIData(oldp+73,(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__ReadData_reg),32);
        bufp->chgBit(oldp+74,(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__MemtoReg_reg));
        bufp->chgBit(oldp+75,(vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_RegWrite));
        bufp->chgIData(oldp+76,(vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData1),32);
        bufp->chgIData(oldp+77,(vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData2),32);
        bufp->chgCData(oldp+78,(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__offset),2);
        bufp->chgCData(oldp+79,(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__funct3),3);
        bufp->chgCData(oldp+80,((3U & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg)),2);
        bufp->chgCData(oldp+81,((0xffU & ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                           ? ((0U == 
                                               (3U 
                                                & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                               ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg
                                               : (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                  >> 8U))
                                           : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                               ? ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                   ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg
                                                   : 
                                                  (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 0x10U))
                                               : vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg)))),8);
        bufp->chgCData(oldp+82,((0xffU & ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                           ? ((0U == 
                                               (3U 
                                                & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                               ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                  >> 8U)
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                   ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg
                                                   : 
                                                  (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 0x10U)))
                                           : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                               ? ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                   ? 
                                                  (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 8U)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                    ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg
                                                    : 
                                                   (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                    >> 0x18U)))
                                               : (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                  >> 8U))))),8);
        bufp->chgCData(oldp+83,((0xffU & ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                           ? ((0U == 
                                               (3U 
                                                & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                               ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                  >> 0x10U)
                                               : ((1U 
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
                                           : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                               ? ((0U 
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
                                               : (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                  >> 0x10U))))),8);
        bufp->chgCData(oldp+84,((0xffU & ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                           ? ((0U == 
                                               (3U 
                                                & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                               ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                  >> 0x18U)
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                   ? 
                                                  (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 0x18U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                    ? 
                                                   (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                    >> 0x18U)
                                                    : vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg)))
                                           : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                               ? ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                   ? 
                                                  (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 0x18U)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                    ? 
                                                   (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                    >> 0x18U)
                                                    : 
                                                   (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                    >> 8U)))
                                               : (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                  >> 0x18U))))),8);
        bufp->chgSData(oldp+85,(((0xff00U & (((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                               ? ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                   ? 
                                                  (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 8U)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                    ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg
                                                    : 
                                                   (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                    >> 0x10U)))
                                               : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                    ? 
                                                   (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                    >> 8U)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                     ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg
                                                     : 
                                                    (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                     >> 0x18U)))
                                                   : 
                                                  (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 8U))) 
                                             << 8U)) 
                                 | (0xffU & ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                  ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg
                                                  : 
                                                 (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                  >> 8U))
                                              : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                   ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg
                                                   : 
                                                  (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 0x10U))
                                                  : vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg))))),16);
        bufp->chgSData(oldp+86,(((0xff00U & (((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                               ? ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                   ? 
                                                  (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 0x18U)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                    ? 
                                                   (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                    >> 0x18U)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                     ? 
                                                    (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                     >> 0x18U)
                                                     : vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg)))
                                               : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                    ? 
                                                   (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                    >> 0x18U)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                     ? 
                                                    (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                     >> 0x18U)
                                                     : 
                                                    (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                     >> 8U)))
                                                   : 
                                                  (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 0x18U))) 
                                             << 8U)) 
                                 | (0xffU & ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                              ? ((0U 
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
                                              : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
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
                                                  >> 0x10U)))))),16);
        bufp->chgIData(oldp+87,(((((vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                    >> 0x1fU) ? 0xfffffU
                                    : 0U) << 0xcU) 
                                 | (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                    >> 0x14U))),32);
        bufp->chgIData(oldp+88,(((((vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                    >> 0x1fU) ? 0xfffffU
                                    : 0U) << 0xcU) 
                                 | ((0xfe0U & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                               >> 0x14U)) 
                                    | (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                >> 7U))))),32);
        bufp->chgIData(oldp+89,(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT__sb_imm),32);
        bufp->chgIData(oldp+90,((vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                 >> 0xcU)),20);
        bufp->chgIData(oldp+91,((0xfffff000U & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)),32);
        bufp->chgIData(oldp+92,(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT__auipc_imm),32);
        bufp->chgQData(oldp+93,((0x1ffffffffULL & (
                                                   (((QData)((IData)(
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
                                                    | (QData)((IData)(vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__PCout_reg)))))),33);
        bufp->chgIData(oldp+95,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_0),32);
        bufp->chgIData(oldp+96,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_1),32);
        bufp->chgIData(oldp+97,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_2),32);
        bufp->chgIData(oldp+98,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_3),32);
        bufp->chgIData(oldp+99,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_4),32);
        bufp->chgIData(oldp+100,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_5),32);
        bufp->chgIData(oldp+101,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_6),32);
        bufp->chgIData(oldp+102,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_7),32);
        bufp->chgIData(oldp+103,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_8),32);
        bufp->chgIData(oldp+104,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_9),32);
        bufp->chgIData(oldp+105,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_10),32);
        bufp->chgIData(oldp+106,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_11),32);
        bufp->chgIData(oldp+107,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_12),32);
        bufp->chgIData(oldp+108,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_13),32);
        bufp->chgIData(oldp+109,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_14),32);
        bufp->chgIData(oldp+110,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_15),32);
        bufp->chgIData(oldp+111,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_16),32);
        bufp->chgIData(oldp+112,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_17),32);
        bufp->chgIData(oldp+113,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_18),32);
        bufp->chgIData(oldp+114,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_19),32);
        bufp->chgIData(oldp+115,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_20),32);
        bufp->chgIData(oldp+116,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_21),32);
        bufp->chgIData(oldp+117,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_22),32);
        bufp->chgIData(oldp+118,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_23),32);
        bufp->chgIData(oldp+119,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_24),32);
        bufp->chgIData(oldp+120,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_25),32);
        bufp->chgIData(oldp+121,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_26),32);
        bufp->chgIData(oldp+122,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_27),32);
        bufp->chgIData(oldp+123,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_28),32);
        bufp->chgIData(oldp+124,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_29),32);
        bufp->chgIData(oldp+125,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_30),32);
        bufp->chgIData(oldp+126,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_31),32);
        bufp->chgBit(oldp+127,(vlSelfRef.Top__DOT__dmem__DOT__sram_we));
        bufp->chgIData(oldp+128,((0xfffffffU & vlSelfRef.Top__DOT__dmem__DOT___GEN_6)),28);
        bufp->chgIData(oldp+129,(vlSelfRef.Top__DOT__dmem__DOT__sram_data_i),32);
        bufp->chgCData(oldp+130,(vlSelfRef.Top__DOT__dmem__DOT__sram_wmask),4);
        bufp->chgCData(oldp+131,(vlSelfRef.Top__DOT__dmem__DOT__state_reg),2);
        bufp->chgIData(oldp+132,((0xfffffffU & vlSelfRef.Top__DOT__imem__DOT___GEN_6)),28);
        bufp->chgCData(oldp+133,(vlSelfRef.Top__DOT__imem__DOT__state_reg),2);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+134,(((IData)(vlSelfRef.Top__DOT__Core__DOT___T_4)
                                   ? (IData)(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT___GEN_7)
                                   : ((((0U == (7U 
                                                & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                   >> 0xcU)))
                                         ? (vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 
                                            == vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                                         : ((1U == 
                                             (7U & 
                                              (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                               >> 0xcU)))
                                             ? (vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 
                                                != vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                     >> 0xcU)))
                                                 ? 
                                                VL_LTS_III(32, vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1, vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                                                 : 
                                                ((5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                      >> 0xcU)))
                                                  ? 
                                                 VL_GTES_III(32, vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1, vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                       >> 0xcU)))
                                                   ? 
                                                  (vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 
                                                   < vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                                                   : (IData)(
                                                             ((0x7000U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                                              & (vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 
                                                                 >= vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)))))))) 
                                       & ((0x33U != 
                                           (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                          & ((0x13U 
                                              != (0x7fU 
                                                  & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                             & ((0x23U 
                                                 != 
                                                 (0x7fU 
                                                  & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                                & ((3U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                                   & (0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)))))))
                                       ? ((IData)(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT___GEN_7) 
                                          - (IData)(4U))
                                       : (((0x63U == 
                                            (0x7fU 
                                             & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                           | (3U == 
                                              (0x7fU 
                                               & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)))
                                           ? ((IData)(0xfffffffcU) 
                                              + vlSelfRef.Top__DOT__Core__DOT__pc_module__DOT__reg_)
                                           : ((IData)(4U) 
                                              + vlSelfRef.Top__DOT__Core__DOT__pc_module__DOT__reg_))))),32);
        bufp->chgBit(oldp+135,(((0U == (7U & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                              >> 0xcU)))
                                 ? (vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 
                                    == vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                                 : ((1U == (7U & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                  >> 0xcU)))
                                     ? (vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 
                                        != vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                                     : ((4U == (7U 
                                                & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                   >> 0xcU)))
                                         ? VL_LTS_III(32, vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1, vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                                         : ((5U == 
                                             (7U & 
                                              (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                               >> 0xcU)))
                                             ? VL_GTES_III(32, vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1, vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                                             : ((6U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                     >> 0xcU)))
                                                 ? 
                                                (vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 
                                                 < vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                                                 : (IData)(
                                                           ((0x7000U 
                                                             == 
                                                             (0x7000U 
                                                              & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                                            & (vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 
                                                               >= vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2))))))))));
        bufp->chgIData(oldp+136,(((IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__OpB_s_REG)
                                   ? ((0U == (IData)(vlSelfRef.Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardB))
                                       ? vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Read2_REG
                                       : (((1U == (IData)(vlSelfRef.Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardB)) 
                                           & (IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemRead_reg))
                                           ? vlSelfRef.Top__DOT__Core__DOT__memwb_module_io_ReadData
                                           : vlSelfRef.Top__DOT__Core__DOT___GEN_61))
                                   : vlSelfRef.Top__DOT__Core__DOT___GEN_66)),32);
        bufp->chgIData(oldp+137,(((IData)(vlSelfRef.Top__DOT__Core__DOT__Forward_module_io_RS1OUT)
                                   ? vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData
                                   : vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData1)),32);
        bufp->chgIData(oldp+138,((((IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RegWrite_reg) 
                                   & ((IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg) 
                                      == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                   >> 0x14U))))
                                   ? vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData
                                   : vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData2)),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+139,(vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op1),32);
        bufp->chgIData(oldp+140,(vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op2),32);
        bufp->chgIData(oldp+141,((IData)(vlSelfRef.Top__DOT__Core__DOT__alu_module__DOT___GEN_12)),32);
        bufp->chgIData(oldp+142,(vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1),32);
        bufp->chgIData(oldp+143,(vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2),32);
        bufp->chgIData(oldp+144,(vlSelfRef.Top__DOT__Core__DOT__memwb_module_io_ReadData),32);
        bufp->chgIData(oldp+145,(vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData),32);
        bufp->chgIData(oldp+146,(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata),32);
        bufp->chgIData(oldp+147,(vlSelfRef.Top__DOT__Core__DOT__alu_module__DOT__shift),32);
    }
    bufp->chgBit(oldp+148,(vlSelfRef.clock));
    bufp->chgBit(oldp+149,(vlSelfRef.reset));
    bufp->chgBit(oldp+150,(vlSelfRef.io_rvfi_valid_0));
    bufp->chgIData(oldp+151,(vlSelfRef.io_rvfi_insn_0),32);
    bufp->chgCData(oldp+152,(vlSelfRef.io_rvfi_mode_0),2);
    bufp->chgCData(oldp+153,(vlSelfRef.io_rvfi_rs1_addr_0),5);
    bufp->chgCData(oldp+154,(vlSelfRef.io_rvfi_rs2_addr_0),5);
    bufp->chgIData(oldp+155,(vlSelfRef.io_rvfi_rs1_rdata_0),32);
    bufp->chgIData(oldp+156,(vlSelfRef.io_rvfi_rs2_rdata_0),32);
    bufp->chgCData(oldp+157,(vlSelfRef.io_rvfi_rd_addr_0),5);
    bufp->chgIData(oldp+158,(vlSelfRef.io_rvfi_rd_wdata_0),32);
    bufp->chgIData(oldp+159,(vlSelfRef.io_rvfi_pc_rdata_0),32);
    bufp->chgIData(oldp+160,(vlSelfRef.io_rvfi_pc_wdata_0),32);
    bufp->chgIData(oldp+161,(vlSelfRef.io_rvfi_mem_addr_0),32);
    bufp->chgCData(oldp+162,(vlSelfRef.io_rvfi_mem_wmask_0),4);
    bufp->chgIData(oldp+163,(vlSelfRef.io_rvfi_mem_rdata_0),32);
    bufp->chgIData(oldp+164,(vlSelfRef.io_rvfi_mem_wdata_0),32);
    bufp->chgIData(oldp+165,(vlSelfRef.Top__DOT__dmem__DOT__sram_data_o),32);
    bufp->chgIData(oldp+166,(vlSelfRef.Top__DOT__imem__DOT__sram_data_o),32);
    bufp->chgIData(oldp+167,(((IData)(vlSelfRef.Top__DOT__Core__DOT__InstructionFetch_io_stall)
                               ? 0U : vlSelfRef.Top__DOT__imem__DOT__sram_data_o)),32);
}

void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_cleanup\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
