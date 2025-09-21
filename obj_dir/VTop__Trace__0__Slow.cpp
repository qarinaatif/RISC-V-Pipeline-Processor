// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


VL_ATTR_COLD void VTop___024root__trace_init_sub__TOP__0(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_sub__TOP__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"io_rvfi_valid_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"io_rvfi_insn_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"io_rvfi_mode_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+154,0,"io_rvfi_rs1_addr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+155,0,"io_rvfi_rs2_addr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+156,0,"io_rvfi_rs1_rdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"io_rvfi_rs2_rdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"io_rvfi_rd_addr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+159,0,"io_rvfi_rd_wdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"io_rvfi_pc_rdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"io_rvfi_pc_wdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"io_rvfi_mem_addr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"io_rvfi_mem_wmask_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+164,0,"io_rvfi_mem_rdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"io_rvfi_mem_wdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"io_rvfi_valid_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"io_rvfi_insn_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"io_rvfi_mode_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+154,0,"io_rvfi_rs1_addr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+155,0,"io_rvfi_rs2_addr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+156,0,"io_rvfi_rs1_rdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"io_rvfi_rs2_rdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"io_rvfi_rd_addr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+159,0,"io_rvfi_rd_wdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"io_rvfi_pc_rdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"io_rvfi_pc_wdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"io_rvfi_mem_addr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"io_rvfi_mem_wmask_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+164,0,"io_rvfi_mem_rdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"io_rvfi_mem_wdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+149,0,"Core_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"Core_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"Core_io_dmemReq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"Core_io_dmemReq_bits_addrRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"Core_io_dmemReq_bits_dataRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"Core_io_dmemReq_bits_activeByteLane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+5,0,"Core_io_dmemReq_bits_isWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"Core_io_dmemRsp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"Core_io_dmemRsp_bits_dataResponse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"Core_io_imemReq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"Core_io_imemReq_bits_addrRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"Core_io_imemReq_bits_activeByteLane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+169,0,"Core_io_imemReq_bits_isWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"Core_io_imemRsp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"Core_io_imemRsp_bits_dataResponse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+151,0,"Core_io_rvfi_bool",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"Core_io_rvfi_uint4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"Core_io_rvfi_uint32_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"Core_io_rvfi_uint32_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"Core_io_rvfi_uint32_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"Core_io_rvfi_uint32_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+149,0,"dmem_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"dmem_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"dmem_io_req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"dmem_io_req_bits_addrRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"dmem_io_req_bits_dataRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"dmem_io_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+5,0,"dmem_io_req_bits_isWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"dmem_io_rsp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"dmem_io_rsp_bits_dataResponse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+149,0,"imem_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"imem_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"imem_io_req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"imem_io_req_bits_addrRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"imem_io_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+169,0,"imem_io_req_bits_isWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"imem_io_rsp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"imem_io_rsp_bits_dataResponse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+151,0,"tracer_rvfi_i_bool",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"tracer_rvfi_i_uint4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"tracer_rvfi_i_uint32_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"tracer_rvfi_i_uint32_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"tracer_rvfi_i_uint32_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"tracer_rvfi_i_uint32_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+151,0,"tracer_rvfi_o_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"tracer_rvfi_o_insn_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"tracer_rvfi_o_pc_rdata_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"tracer_rvfi_o_mem_addr_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"tracer_rvfi_o_mem_wmask_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"tracer_rvfi_o_mem_wdata_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("Core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"io_dmemReq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"io_dmemReq_bits_addrRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"io_dmemReq_bits_dataRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"io_dmemReq_bits_activeByteLane",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+5,0,"io_dmemReq_bits_isWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"io_dmemRsp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"io_dmemRsp_bits_dataResponse",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"io_imemReq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"io_imemReq_bits_addrRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"io_imemReq_bits_activeByteLane",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+169,0,"io_imemReq_bits_isWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"io_imemRsp_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"io_imemRsp_bits_dataResponse",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+151,0,"io_rvfi_bool",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"io_rvfi_uint4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"io_rvfi_uint32_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"io_rvfi_uint32_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"io_rvfi_uint32_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"io_rvfi_uint32_8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+149,0,"pc_module_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"pc_module_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"pc_module_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"pc_module_io_pcout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"pc_module_io_pc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"InstructionFetch_io_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"InstructionFetch_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"InstructionFetch_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"InstructionFetch_io_coreInstrReq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"InstructionFetch_io_coreInstrReq_bits_addrRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"InstructionFetch_io_coreInstrReq_bits_activeByteLane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+169,0,"InstructionFetch_io_coreInstrReq_bits_isWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"InstructionFetch_io_coreInstrResp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"InstructionFetch_io_coreInstrResp_bits_dataResponse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"alu_module_io_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"alu_module_io_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"alu_module_io_aluctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+142,0,"alu_module_io_aluout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"alucontrol_module_io_Aluop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+21,0,"alucontrol_module_io_func7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+22,0,"alucontrol_module_io_func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+19,0,"alucontrol_module_io_aluctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+143,0,"Branchcontrol_module_io_RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"Branchcontrol_module_io_RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"Branchcontrol_module_io_func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+136,0,"Branchcontrol_module_io_branchctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"BranchForward_module_io_RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"BranchForward_module_io_RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+26,0,"ControlDecoder_module_io_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+27,0,"ControlDecoder_module_io_MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"ControlDecoder_module_io_MemRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"ControlDecoder_module_io_Branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"ControlDecoder_module_io_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"ControlDecoder_module_io_Mem2Reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"ControlDecoder_module_io_Ex_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+32,0,"ControlDecoder_module_io_Aluop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+33,0,"ControlDecoder_module_io_opA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+34,0,"ControlDecoder_module_io_opB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"exmem_module_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"exmem_module_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"exmem_module_io_ALUres",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"exmem_module_io_ReadData2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"exmem_module_io_RD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+36,0,"exmem_module_io_MemRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"exmem_module_io_MemtoReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"exmem_module_io_MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"exmem_module_io_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"exmem_module_io_func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+39,0,"exmem_module_io_Instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"exmem_module_io_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"exmem_module_io_ALUresMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"exmem_module_io_ReadData2MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"exmem_module_io_RDD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+43,0,"exmem_module_io_MemReadS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"exmem_module_io_MemtoRegS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"exmem_module_io_MemWriteS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"exmem_module_io_RegWriteS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"exmem_module_io_func3_EXMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+46,0,"exmem_module_io_Instr_EXMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"exmem_module_io_PC_EXMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"Forward_module_io_RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"Forward_module_io_RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+48,0,"Forward_module_io_MEMWB_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"Forward_module_io_MEMWB_RD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+50,0,"Forward_module_io_RS1OUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"Forward_module_io_RS2OUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"ForwardingUnit_module_io_IDEX_RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+53,0,"ForwardingUnit_module_io_IDEX_RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"ForwardingUnit_module_io_EXMEM_RD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+49,0,"ForwardingUnit_module_io_MEMWB_RD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+44,0,"ForwardingUnit_module_io_EXMEM_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"ForwardingUnit_module_io_MEMWB_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"ForwardingUnit_module_io_ForwardA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+55,0,"ForwardingUnit_module_io_ForwardB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+149,0,"idex_module_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"idex_module_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"idex_module_io_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"idex_module_io_OpA_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+34,0,"idex_module_io_OpB_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"idex_module_io_func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+57,0,"idex_module_io_func7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"idex_module_io_Read1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"idex_module_io_Read2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"idex_module_io_Immd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"idex_module_io_RD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+28,0,"idex_module_io_MemRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"idex_module_io_MemtoReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"idex_module_io_ALUOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+27,0,"idex_module_io_MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"idex_module_io_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"idex_module_io_RS1_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"idex_module_io_RS2_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,0,"idex_module_io_Instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"idex_module_io_operandA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"idex_module_io_operandAsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"idex_module_io_PC_IDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"idex_module_io_OpA_s_IDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+64,0,"idex_module_io_OpB_s_IDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"idex_module_io_func3_IDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+65,0,"idex_module_io_func7_IDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"idex_module_io_Read1_IDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"idex_module_io_Read2_IDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"idex_module_io_Immd_IDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"idex_module_io_RD_IDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+36,0,"idex_module_io_MemRead_IDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"idex_module_io_MemtoReg_IDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"idex_module_io_ALUOp_IDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+37,0,"idex_module_io_MemWrite_IDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"idex_module_io_RegWrite_IDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"idex_module_io_RS1_S_IDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+53,0,"idex_module_io_RS2_S_IDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"idex_module_io_Instr_IDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"idex_module_io_operandAout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+70,0,"idex_module_io_operandAselout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"ifid_module_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"ifid_module_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"ifid_module_io_Instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"ifid_module_io_PCout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"ifid_module_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"ifid_module_io_Instr_IFID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"ifid_module_io_PCout_IFID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"immgen_module_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"immgen_module_io_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"immgen_module_io_imm_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+149,0,"memwb_module_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"memwb_module_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"memwb_module_io_ReadData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"memwb_module_io_ALUres",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"memwb_module_io_RD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+43,0,"memwb_module_io_MemtoReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"memwb_module_io_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"memwb_module_io_Instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"memwb_module_io_memaddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"memwb_module_io_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"memwb_module_io_MemWritedata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"memwb_module_io_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"memwb_module_io_ReadData_MEMWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"memwb_module_io_ALUres_MEMWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"memwb_module_io_RDD_MEMWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+75,0,"memwb_module_io_MemtoReg_MEMWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"memwb_module_io_RegWrite_MEMWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"memwb_module_io_Instr_MEMWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"memwb_module_io_memaddressD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"memwb_module_io_mask_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"memwb_module_io_MemWritedata_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"memwb_module_io_PC_MEMWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+149,0,"regfile_module_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"regfile_module_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"regfile_module_io_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"regfile_module_io_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,0,"regfile_module_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"regfile_module_io_writeData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"regfile_module_io_readData1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"regfile_module_io_readData2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+149,0,"MEM_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"MEM_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"MEM_io_aluResultIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"MEM_io_writeData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"MEM_io_writeEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"MEM_io_readEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"MEM_io_readData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"MEM_io_Data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"MEM_io_f3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+73,0,"MEM_io_maskout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1,0,"MEM_io_dccmReq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"MEM_io_dccmReq_bits_addrRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"MEM_io_dccmReq_bits_dataRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"MEM_io_dccmReq_bits_activeByteLane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+5,0,"MEM_io_dccmReq_bits_isWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"MEM_io_dccmRsp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"MEM_io_dccmRsp_bits_dataResponse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("BranchForward_module", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"io_RS1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"io_RS2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("Branchcontrol_module", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+143,0,"io_RS1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"io_RS2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"io_func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+136,0,"io_branchctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ControlDecoder_module", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"io_opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+27,0,"io_MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"io_MemRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"io_Branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"io_RegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"io_Mem2Reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"io_Ex_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+32,0,"io_Aluop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+33,0,"io_opA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+34,0,"io_opB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Forward_module", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"io_RS1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"io_RS2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+48,0,"io_MEMWB_RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"io_MEMWB_RD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+50,0,"io_RS1OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"io_RS2OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ForwardingUnit_module", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+52,0,"io_IDEX_RS1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+53,0,"io_IDEX_RS2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"io_EXMEM_RD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+49,0,"io_MEMWB_RD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+44,0,"io_EXMEM_RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"io_MEMWB_RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"io_ForwardA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+55,0,"io_ForwardB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("InstructionFetch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"io_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"io_instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"io_coreInstrReq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"io_coreInstrReq_bits_addrRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"io_coreInstrReq_bits_activeByteLane",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+169,0,"io_coreInstrReq_bits_isWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"io_coreInstrResp_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"io_coreInstrResp_bits_dataResponse",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("MEM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"io_aluResultIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"io_writeData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"io_writeEnable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"io_readEnable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"io_readData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"io_Data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"io_f3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+73,0,"io_maskout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1,0,"io_dccmReq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"io_dccmReq_bits_addrRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"io_dccmReq_bits_dataRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"io_dccmReq_bits_activeByteLane",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+5,0,"io_dccmReq_bits_isWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"io_dccmRsp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"io_dccmRsp_bits_dataResponse",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+80,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+81,0,"offsetSW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"wdata_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+83,0,"wdata_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+84,0,"wdata_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+85,0,"wdata_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+86,0,"io_dccmReq_bits_dataRequest_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+87,0,"io_dccmReq_bits_dataRequest_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+147,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_module", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+140,0,"io_op1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"io_op2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"io_aluctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+142,0,"io_aluout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("alucontrol_module", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"io_Aluop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+21,0,"io_func7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+22,0,"io_func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+19,0,"io_aluctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("exmem_module", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"io_ALUres",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"io_ReadData2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"io_RD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+36,0,"io_MemRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"io_MemtoReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"io_MemWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"io_RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"io_func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+39,0,"io_Instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_PC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"io_ALUresMEM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"io_ReadData2MEM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"io_RDD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+43,0,"io_MemReadS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"io_MemtoRegS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"io_MemWriteS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"io_RegWriteS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"io_func3_EXMEM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+46,0,"io_Instr_EXMEM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"io_PC_EXMEM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"ALUres_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"ReadData2_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"RD_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+43,0,"MemRead_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"MemtoReg_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"MemWrite_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"RegWrite_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"func3_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+46,0,"Instr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"PC_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("idex_module", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"io_PC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"io_OpA_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+34,0,"io_OpB_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"io_func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+57,0,"io_func7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"io_Read1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"io_Read2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"io_Immd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"io_RD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+28,0,"io_MemRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"io_MemtoReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"io_ALUOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+27,0,"io_MemWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"io_RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"io_RS1_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"io_RS2_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,0,"io_Instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"io_operandA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"io_operandAsel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"io_PC_IDEX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"io_OpA_s_IDEX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+64,0,"io_OpB_s_IDEX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"io_func3_IDEX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+65,0,"io_func7_IDEX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"io_Read1_IDEX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"io_Read2_IDEX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"io_Immd_IDEX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"io_RD_IDEX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+36,0,"io_MemRead_IDEX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"io_MemtoReg_IDEX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"io_ALUOp_IDEX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+37,0,"io_MemWrite_IDEX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"io_RegWrite_IDEX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"io_RS1_S_IDEX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+53,0,"io_RS2_S_IDEX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"io_Instr_IDEX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"io_operandAout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+70,0,"io_operandAselout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"PC_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"OpA_s_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+64,0,"OpB_s_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"func3_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+65,0,"func7_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"Read1_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"Read2_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"Immd_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"RD_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+36,0,"MemRead_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"MemtoReg_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"ALUOp_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+37,0,"MemWrite_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"RegWrite_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"RS1_S_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+53,0,"RS2_S_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"Instr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"operandA_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+70,0,"operandAsel_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ifid_module", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"io_Instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"io_PCout",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"io_Instr_IFID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"io_PCout_IFID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"Instr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"PCout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("immgen_module", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+60,0,"io_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"io_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"io_imm_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+88,0,"i_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"s_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"sb_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"u_imm_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+92,0,"u_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"auipc_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+94,0,"uj_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->pushPrefix("memwb_module", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"io_ReadData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"io_ALUres",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"io_RD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+43,0,"io_MemtoReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"io_RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"io_Instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"io_memaddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"io_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"io_MemWritedata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"io_PC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"io_ReadData_MEMWB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"io_ALUres_MEMWB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"io_RDD_MEMWB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+75,0,"io_MemtoReg_MEMWB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"io_RegWrite_MEMWB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"io_Instr_MEMWB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"io_memaddressD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"io_mask_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"io_MemWritedata_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"io_PC_MEMWB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"ReadData_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"ALUres_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"RD_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+75,0,"MemtoReg_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"RegWrite_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"Instr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"memaddress_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"mask_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"MemWritedata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"PC_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_module", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"io_pcout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"io_pc4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("regfile_module", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"io_RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"io_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,0,"io_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"io_writeData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"io_readData1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"io_readData2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"reg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"reg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"reg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"reg_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"reg_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"reg_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"reg_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"reg_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"reg_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"reg_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"reg_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"reg_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"reg_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"reg_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"reg_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"reg_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"reg_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"reg_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"reg_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"reg_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"reg_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"reg_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"reg_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"reg_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"reg_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"reg_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"reg_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"reg_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"reg_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"reg_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"reg_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"reg_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"Rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"Rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dmem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"io_req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"io_req_bits_addrRequest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"io_req_bits_dataRequest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"io_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+5,0,"io_req_bits_isWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"io_rsp_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"io_rsp_bits_dataResponse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+149,0,"sram_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"sram_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"sram_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"sram_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+130,0,"sram_data_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"sram_wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+166,0,"sram_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("sram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+170,0,"NUM_WMASKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"RAM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"IZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+176,0,"IFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+130,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+166,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("imem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"io_req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"io_req_bits_addrRequest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"io_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+169,0,"io_req_bits_isWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"io_rsp_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"io_rsp_bits_dataResponse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+149,0,"sram_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"sram_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"sram_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"sram_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+179,0,"sram_data_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"sram_wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+167,0,"sram_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("sram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+170,0,"NUM_WMASKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"RAM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"IZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+181,0,"IFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 87,0);
    tracep->declBit(c+149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+179,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+167,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tracer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+151,0,"rvfi_i_bool",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"rvfi_i_uint4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"rvfi_i_uint32_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"rvfi_i_uint32_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"rvfi_i_uint32_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"rvfi_i_uint32_8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+151,0,"rvfi_o_valid_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"rvfi_o_insn_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"rvfi_o_pc_rdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"rvfi_o_mem_addr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"rvfi_o_mem_wmask_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"rvfi_o_mem_wdata_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTop___024root__trace_init_top(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_top\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTop___024root__trace_register(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_register\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VTop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTop___024root__trace_const_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_const_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTop___024root__trace_const_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_const_0_sub_0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    bufp->fullBit(oldp+169,(0U));
    bufp->fullIData(oldp+170,(4U),32);
    bufp->fullIData(oldp+171,(0x20U),32);
    bufp->fullIData(oldp+172,(0x1cU),32);
    bufp->fullIData(oldp+173,(0x10000000U),32);
    bufp->fullIData(oldp+174,(0U),32);
    bufp->fullIData(oldp+175,(3U),32);
    bufp->fullQData(oldp+176,(0x646d656d2e686578ULL),64);
    bufp->fullIData(oldp+178,(vlSelfRef.Top__DOT__dmem__DOT__sram__DOT__i),32);
    bufp->fullIData(oldp+179,(0U),32);
    bufp->fullCData(oldp+180,(0U),4);
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x6772616dU;
    __Vtemp_1[2U] = 0x70726fU;
    bufp->fullWData(oldp+181,(__Vtemp_1),88);
    bufp->fullIData(oldp+184,(vlSelfRef.Top__DOT__imem__DOT__sram__DOT__i),32);
}

VL_ATTR_COLD void VTop___024root__trace_full_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTop___024root__trace_full_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_0_sub_0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.Top__DOT__Core__DOT__MEM_io_dccmReq_valid));
    bufp->fullIData(oldp+2,(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg),32);
    bufp->fullIData(oldp+3,((((((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                 ? ((0U == (3U & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                     ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                        >> 0x18U) : 
                                    ((1U == (3U & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                      ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                         >> 0x18U) : 
                                     ((2U == (3U & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                       ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                          >> 0x18U)
                                       : vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg)))
                                 : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                     ? ((0U == (3U 
                                                & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                         ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                            >> 0x18U)
                                         : ((1U == 
                                             (3U & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
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
                                                 : vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg)))))),32);
    bufp->fullCData(oldp+4,(((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                              ? (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT___GEN_12)
                              : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                  ? (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT___GEN_22)
                                  : 0xfU))),4);
    bufp->fullBit(oldp+5,(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemWrite_reg));
    bufp->fullBit(oldp+6,((2U == (IData)(vlSelfRef.Top__DOT__dmem__DOT__state_reg))));
    bufp->fullBit(oldp+7,((1U & (~ (IData)(vlSelfRef.Top__DOT__Core__DOT__InstructionFetch_io_stall)))));
    bufp->fullIData(oldp+8,(((IData)(vlSelfRef.Top__DOT__Core__DOT__InstructionFetch_io_stall)
                              ? 0U : (0xffffffU & (vlSelfRef.Top__DOT__Core__DOT__pc_module__DOT__reg_ 
                                                   >> 2U)))),32);
    bufp->fullCData(oldp+9,(((IData)(vlSelfRef.Top__DOT__Core__DOT__InstructionFetch_io_stall)
                              ? 0U : 0xfU)),4);
    bufp->fullCData(oldp+10,(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__mask_reg),4);
    bufp->fullIData(oldp+11,(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__Instr_reg),32);
    bufp->fullIData(oldp+12,(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__PC_REG),32);
    bufp->fullIData(oldp+13,(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__ALUres_reg),32);
    bufp->fullIData(oldp+14,(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__MemWritedata_reg),32);
    bufp->fullIData(oldp+15,(vlSelfRef.Top__DOT__Core__DOT__pc_module__DOT__reg_),32);
    bufp->fullIData(oldp+16,(((IData)(4U) + vlSelfRef.Top__DOT__Core__DOT__pc_module__DOT__reg_)),32);
    bufp->fullIData(oldp+17,((0xffffffU & (vlSelfRef.Top__DOT__Core__DOT__pc_module__DOT__reg_ 
                                           >> 2U))),32);
    bufp->fullBit(oldp+18,(vlSelfRef.Top__DOT__Core__DOT__InstructionFetch_io_stall));
    bufp->fullCData(oldp+19,((0x1fU & (IData)(vlSelfRef.Top__DOT__Core__DOT__alucontrol_module__DOT___GEN_5))),5);
    bufp->fullCData(oldp+20,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__ALUOp_REG),3);
    bufp->fullCData(oldp+21,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__func7_REG),7);
    bufp->fullCData(oldp+22,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__func3_REG),3);
    bufp->fullCData(oldp+23,((7U & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+24,((0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+25,((0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+26,((0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)),7);
    bufp->fullBit(oldp+27,(((0x33U != (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                            & ((0x13U != (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                               & (0x23U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))))));
    bufp->fullBit(oldp+28,(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module_io_MemRead));
    bufp->fullBit(oldp+29,(((0x33U != (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                            & ((0x13U != (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                               & ((0x23U != (0x7fU 
                                             & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                  & ((3U != (0x7fU 
                                             & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                     & (0x63U == (0x7fU 
                                                  & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))))))));
    bufp->fullBit(oldp+30,(((0x33U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                            | ((0x13U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                               | ((0x23U != (0x7fU 
                                             & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                  & ((3U == (0x7fU 
                                             & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                     | ((0x63U != (0x7fU 
                                                   & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                        & ((0x6fU == 
                                            (0x7fU 
                                             & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                           | (IData)(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module__DOT___GEN_9)))))))));
    bufp->fullCData(oldp+31,(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module_io_Ex_sel),2);
    bufp->fullCData(oldp+32,(((0x33U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                               ? 0U : ((0x13U == (0x7fU 
                                                  & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                        ? 1U : ((0x23U 
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
    bufp->fullCData(oldp+33,(((0x33U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                               ? 0U : ((0x13U == (0x7fU 
                                                  & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg))
                                        ? 0U : ((0x23U 
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
    bufp->fullBit(oldp+34,(((0x33U != (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                            & ((0x13U == (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                               | ((0x23U == (0x7fU 
                                             & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                  | ((3U == (0x7fU 
                                             & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                     | ((0x63U != (0x7fU 
                                                   & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                        & ((0x6fU != 
                                            (0x7fU 
                                             & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                           & (IData)(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module__DOT___GEN_9)))))))));
    bufp->fullCData(oldp+35,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RD_REG),5);
    bufp->fullBit(oldp+36,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__MemRead_REG));
    bufp->fullBit(oldp+37,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__MemWrite_REG));
    bufp->fullBit(oldp+38,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RegWrite_REG));
    bufp->fullIData(oldp+39,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Instr_reg),32);
    bufp->fullIData(oldp+40,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__PC_REG),32);
    bufp->fullIData(oldp+41,(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg),32);
    bufp->fullCData(oldp+42,(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__RD_reg),5);
    bufp->fullBit(oldp+43,(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemRead_reg));
    bufp->fullBit(oldp+44,(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__RegWrite_reg));
    bufp->fullCData(oldp+45,(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__func3_REG),3);
    bufp->fullIData(oldp+46,(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__Instr_reg),32);
    bufp->fullIData(oldp+47,(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__PC_REG),32);
    bufp->fullBit(oldp+48,(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RegWrite_reg));
    bufp->fullCData(oldp+49,(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg),5);
    bufp->fullBit(oldp+50,(vlSelfRef.Top__DOT__Core__DOT__Forward_module_io_RS1OUT));
    bufp->fullBit(oldp+51,(((IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RegWrite_reg) 
                            & ((IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg) 
                               == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                            >> 0x14U))))));
    bufp->fullCData(oldp+52,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RS1_S_REG),5);
    bufp->fullCData(oldp+53,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__RS2_S_REG),5);
    bufp->fullCData(oldp+54,(vlSelfRef.Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardA),2);
    bufp->fullCData(oldp+55,(vlSelfRef.Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardB),2);
    bufp->fullIData(oldp+56,(vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__PCout_reg),32);
    bufp->fullBit(oldp+57,((1U & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                  >> 0x1eU))));
    bufp->fullIData(oldp+58,(((0U == (IData)(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module_io_Ex_sel))
                               ? (IData)(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT___GEN_7)
                               : ((1U == (IData)(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module_io_Ex_sel))
                                   ? (IData)(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT___GEN_7)
                                   : ((2U == (IData)(vlSelfRef.Top__DOT__Core__DOT__ControlDecoder_module_io_Ex_sel))
                                       ? (IData)(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT___GEN_7)
                                       : 0U)))),32);
    bufp->fullCData(oldp+59,((0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                       >> 7U))),5);
    bufp->fullIData(oldp+60,(vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg),32);
    bufp->fullIData(oldp+61,(((0U != (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                               >> 0xfU)))
                               ? ((IData)(vlSelfRef.Top__DOT__Core__DOT___T_70)
                                   ? vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__ALUres_reg
                                   : 0U) : 0U)),32);
    bufp->fullBit(oldp+62,(((0U != (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                             >> 0xfU))) 
                            & (IData)(vlSelfRef.Top__DOT__Core__DOT___T_70))));
    bufp->fullCData(oldp+63,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__OpA_s_REG),2);
    bufp->fullBit(oldp+64,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__OpB_s_REG));
    bufp->fullBit(oldp+65,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__func7_REG));
    bufp->fullIData(oldp+66,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Read1_REG),32);
    bufp->fullIData(oldp+67,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Read2_REG),32);
    bufp->fullIData(oldp+68,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Immd_REG),32);
    bufp->fullIData(oldp+69,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__operandA_reg),32);
    bufp->fullBit(oldp+70,(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__operandAsel_reg));
    bufp->fullBit(oldp+71,(vlSelfRef.Top__DOT__Core__DOT__ifid_module_io_flush));
    bufp->fullIData(oldp+72,((IData)(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT___GEN_7)),32);
    bufp->fullCData(oldp+73,(((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                               ? (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT___GEN_12)
                               : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                   ? (IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT___GEN_22)
                                   : ((IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemWrite_reg)
                                       ? 0xfU : 0U)))),4);
    bufp->fullIData(oldp+74,(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__ReadData_reg),32);
    bufp->fullBit(oldp+75,(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__MemtoReg_reg));
    bufp->fullBit(oldp+76,(vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_RegWrite));
    bufp->fullIData(oldp+77,(vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData1),32);
    bufp->fullIData(oldp+78,(vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData2),32);
    bufp->fullCData(oldp+79,(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__offset),2);
    bufp->fullCData(oldp+80,(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__funct3),3);
    bufp->fullCData(oldp+81,((3U & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg)),2);
    bufp->fullCData(oldp+82,((0xffU & ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                        ? ((0U == (3U 
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
                                                : (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 0x10U))
                                            : vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg)))),8);
    bufp->fullCData(oldp+83,((0xffU & ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                        ? ((0U == (3U 
                                                   & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                            ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                               >> 8U)
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg
                                                : (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 0x10U)))
                                        : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 8U)
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                    ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg
                                                    : 
                                                   (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                    >> 0x18U)))
                                            : (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                               >> 8U))))),8);
    bufp->fullCData(oldp+84,((0xffU & ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                        ? ((0U == (3U 
                                                   & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                            ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                               >> 0x10U)
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 0x10U)
                                                : (
                                                   (2U 
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
                                                ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 0x10U)
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                    ? 
                                                   (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                    >> 8U)
                                                    : vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg))
                                            : (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                               >> 0x10U))))),8);
    bufp->fullCData(oldp+85,((0xffU & ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
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
                                                : (
                                                   (2U 
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
                                                ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 0x18U)
                                                : (
                                                   (1U 
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
    bufp->fullSData(oldp+86,(((0xff00U & (((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 8U)
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                    ? vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg
                                                    : 
                                                   (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                    >> 0x10U)))
                                            : ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_3)
                                                ? (
                                                   (0U 
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
                                                   >> 8U))) 
                                          << 8U)) | 
                              (0xffU & ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                         ? ((0U == 
                                             (3U & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
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
                                             : vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg))))),16);
    bufp->fullSData(oldp+87,(((0xff00U & (((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
                                                ? (vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ReadData2_reg 
                                                   >> 0x18U)
                                                : (
                                                   (1U 
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
                                                ? (
                                                   (0U 
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
                                                   >> 0x18U))) 
                                          << 8U)) | 
                              (0xffU & ((IData)(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT____VdfgRegularize_h24b9a9d6_0_4)
                                         ? ((0U == 
                                             (3U & vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__ALUres_reg))
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
                                                >> 0x10U)))))),16);
    bufp->fullIData(oldp+88,(((((vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                 >> 0x1fU) ? 0xfffffU
                                 : 0U) << 0xcU) | (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                   >> 0x14U))),32);
    bufp->fullIData(oldp+89,(((((vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                 >> 0x1fU) ? 0xfffffU
                                 : 0U) << 0xcU) | (
                                                   (0xfe0U 
                                                    & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                         >> 7U))))),32);
    bufp->fullIData(oldp+90,(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT__sb_imm),32);
    bufp->fullIData(oldp+91,((vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                              >> 0xcU)),20);
    bufp->fullIData(oldp+92,((0xfffff000U & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)),32);
    bufp->fullIData(oldp+93,(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT__auipc_imm),32);
    bufp->fullQData(oldp+94,((0x1ffffffffULL & ((((QData)((IData)(
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
                                                + (
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__PCout_reg 
                                                                     >> 0x1fU))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__PCout_reg)))))),33);
    bufp->fullIData(oldp+96,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_0),32);
    bufp->fullIData(oldp+97,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_1),32);
    bufp->fullIData(oldp+98,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_2),32);
    bufp->fullIData(oldp+99,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_3),32);
    bufp->fullIData(oldp+100,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_4),32);
    bufp->fullIData(oldp+101,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_5),32);
    bufp->fullIData(oldp+102,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_6),32);
    bufp->fullIData(oldp+103,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_7),32);
    bufp->fullIData(oldp+104,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_8),32);
    bufp->fullIData(oldp+105,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_9),32);
    bufp->fullIData(oldp+106,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_10),32);
    bufp->fullIData(oldp+107,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_11),32);
    bufp->fullIData(oldp+108,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_12),32);
    bufp->fullIData(oldp+109,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_13),32);
    bufp->fullIData(oldp+110,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_14),32);
    bufp->fullIData(oldp+111,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_15),32);
    bufp->fullIData(oldp+112,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_16),32);
    bufp->fullIData(oldp+113,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_17),32);
    bufp->fullIData(oldp+114,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_18),32);
    bufp->fullIData(oldp+115,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_19),32);
    bufp->fullIData(oldp+116,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_20),32);
    bufp->fullIData(oldp+117,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_21),32);
    bufp->fullIData(oldp+118,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_22),32);
    bufp->fullIData(oldp+119,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_23),32);
    bufp->fullIData(oldp+120,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_24),32);
    bufp->fullIData(oldp+121,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_25),32);
    bufp->fullIData(oldp+122,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_26),32);
    bufp->fullIData(oldp+123,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_27),32);
    bufp->fullIData(oldp+124,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_28),32);
    bufp->fullIData(oldp+125,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_29),32);
    bufp->fullIData(oldp+126,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_30),32);
    bufp->fullIData(oldp+127,(vlSelfRef.Top__DOT__Core__DOT__regfile_module__DOT__reg_31),32);
    bufp->fullBit(oldp+128,(vlSelfRef.Top__DOT__dmem__DOT__sram_we));
    bufp->fullIData(oldp+129,((0xfffffffU & vlSelfRef.Top__DOT__dmem__DOT___GEN_6)),28);
    bufp->fullIData(oldp+130,(vlSelfRef.Top__DOT__dmem__DOT__sram_data_i),32);
    bufp->fullCData(oldp+131,(vlSelfRef.Top__DOT__dmem__DOT__sram_wmask),4);
    bufp->fullCData(oldp+132,(vlSelfRef.Top__DOT__dmem__DOT__state_reg),2);
    bufp->fullIData(oldp+133,((0xfffffffU & vlSelfRef.Top__DOT__imem__DOT___GEN_6)),28);
    bufp->fullCData(oldp+134,(vlSelfRef.Top__DOT__imem__DOT__state_reg),2);
    bufp->fullIData(oldp+135,(((IData)(vlSelfRef.Top__DOT__Core__DOT___T_4)
                                ? (IData)(vlSelfRef.Top__DOT__Core__DOT__immgen_module__DOT___GEN_7)
                                : ((((0U == (7U & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                   >> 0xcU)))
                                      ? (vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 
                                         == vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                                      : ((1U == (7U 
                                                 & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                    >> 0xcU)))
                                          ? (vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 
                                             != vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                                          : ((4U == 
                                              (7U & 
                                               (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                >> 0xcU)))
                                              ? VL_LTS_III(32, vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1, vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                                              : ((5U 
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
                                    & ((0x33U != (0x7fU 
                                                  & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                       & ((0x13U != 
                                           (0x7fU & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                          & ((0x23U 
                                              != (0x7fU 
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
                                    : (((0x63U == (0x7fU 
                                                   & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                        | (3U == (0x7fU 
                                                  & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)))
                                        ? ((IData)(0xfffffffcU) 
                                           + vlSelfRef.Top__DOT__Core__DOT__pc_module__DOT__reg_)
                                        : ((IData)(4U) 
                                           + vlSelfRef.Top__DOT__Core__DOT__pc_module__DOT__reg_))))),32);
    bufp->fullBit(oldp+136,(((0U == (7U & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                           >> 0xcU)))
                              ? (vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 
                                 == vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                              : ((1U == (7U & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                               >> 0xcU)))
                                  ? (vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 
                                     != vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                                  : ((4U == (7U & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                   >> 0xcU)))
                                      ? VL_LTS_III(32, vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1, vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                                      : ((5U == (7U 
                                                 & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                    >> 0xcU)))
                                          ? VL_GTES_III(32, vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1, vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                                          : ((6U == 
                                              (7U & 
                                               (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                >> 0xcU)))
                                              ? (vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 
                                                 < vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2)
                                              : (IData)(
                                                        ((0x7000U 
                                                          == 
                                                          (0x7000U 
                                                           & vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg)) 
                                                         & (vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1 
                                                            >= vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2))))))))));
    bufp->fullIData(oldp+137,(((IData)(vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__OpB_s_REG)
                                ? ((0U == (IData)(vlSelfRef.Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardB))
                                    ? vlSelfRef.Top__DOT__Core__DOT__idex_module__DOT__Read2_REG
                                    : (((1U == (IData)(vlSelfRef.Top__DOT__Core__DOT__ForwardingUnit_module_io_ForwardB)) 
                                        & (IData)(vlSelfRef.Top__DOT__Core__DOT__exmem_module__DOT__MemRead_reg))
                                        ? vlSelfRef.Top__DOT__Core__DOT__memwb_module_io_ReadData
                                        : vlSelfRef.Top__DOT__Core__DOT___GEN_61))
                                : vlSelfRef.Top__DOT__Core__DOT___GEN_66)),32);
    bufp->fullIData(oldp+138,(((IData)(vlSelfRef.Top__DOT__Core__DOT__Forward_module_io_RS1OUT)
                                ? vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData
                                : vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData1)),32);
    bufp->fullIData(oldp+139,((((IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RegWrite_reg) 
                                & ((IData)(vlSelfRef.Top__DOT__Core__DOT__memwb_module__DOT__RD_reg) 
                                   == (0x1fU & (vlSelfRef.Top__DOT__Core__DOT__ifid_module__DOT__Instr_reg 
                                                >> 0x14U))))
                                ? vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData
                                : vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_readData2)),32);
    bufp->fullIData(oldp+140,(vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op1),32);
    bufp->fullIData(oldp+141,(vlSelfRef.Top__DOT__Core__DOT__alu_module_io_op2),32);
    bufp->fullIData(oldp+142,((IData)(vlSelfRef.Top__DOT__Core__DOT__alu_module__DOT___GEN_12)),32);
    bufp->fullIData(oldp+143,(vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS1),32);
    bufp->fullIData(oldp+144,(vlSelfRef.Top__DOT__Core__DOT__Branchcontrol_module_io_RS2),32);
    bufp->fullIData(oldp+145,(vlSelfRef.Top__DOT__Core__DOT__memwb_module_io_ReadData),32);
    bufp->fullIData(oldp+146,(vlSelfRef.Top__DOT__Core__DOT__regfile_module_io_writeData),32);
    bufp->fullIData(oldp+147,(vlSelfRef.Top__DOT__Core__DOT__MEM__DOT__rdata),32);
    bufp->fullIData(oldp+148,(vlSelfRef.Top__DOT__Core__DOT__alu_module__DOT__shift),32);
    bufp->fullBit(oldp+149,(vlSelfRef.clock));
    bufp->fullBit(oldp+150,(vlSelfRef.reset));
    bufp->fullBit(oldp+151,(vlSelfRef.io_rvfi_valid_0));
    bufp->fullIData(oldp+152,(vlSelfRef.io_rvfi_insn_0),32);
    bufp->fullCData(oldp+153,(vlSelfRef.io_rvfi_mode_0),2);
    bufp->fullCData(oldp+154,(vlSelfRef.io_rvfi_rs1_addr_0),5);
    bufp->fullCData(oldp+155,(vlSelfRef.io_rvfi_rs2_addr_0),5);
    bufp->fullIData(oldp+156,(vlSelfRef.io_rvfi_rs1_rdata_0),32);
    bufp->fullIData(oldp+157,(vlSelfRef.io_rvfi_rs2_rdata_0),32);
    bufp->fullCData(oldp+158,(vlSelfRef.io_rvfi_rd_addr_0),5);
    bufp->fullIData(oldp+159,(vlSelfRef.io_rvfi_rd_wdata_0),32);
    bufp->fullIData(oldp+160,(vlSelfRef.io_rvfi_pc_rdata_0),32);
    bufp->fullIData(oldp+161,(vlSelfRef.io_rvfi_pc_wdata_0),32);
    bufp->fullIData(oldp+162,(vlSelfRef.io_rvfi_mem_addr_0),32);
    bufp->fullCData(oldp+163,(vlSelfRef.io_rvfi_mem_wmask_0),4);
    bufp->fullIData(oldp+164,(vlSelfRef.io_rvfi_mem_rdata_0),32);
    bufp->fullIData(oldp+165,(vlSelfRef.io_rvfi_mem_wdata_0),32);
    bufp->fullIData(oldp+166,(vlSelfRef.Top__DOT__dmem__DOT__sram_data_o),32);
    bufp->fullIData(oldp+167,(vlSelfRef.Top__DOT__imem__DOT__sram_data_o),32);
    bufp->fullIData(oldp+168,(((IData)(vlSelfRef.Top__DOT__Core__DOT__InstructionFetch_io_stall)
                                ? 0U : vlSelfRef.Top__DOT__imem__DOT__sram_data_o)),32);
}
