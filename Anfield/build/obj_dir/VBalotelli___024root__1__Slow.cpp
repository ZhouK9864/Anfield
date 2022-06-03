// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBalotelli.h for the primary calling header

#include "VBalotelli___024root.h"
#include "VBalotelli__Syms.h"

#include "verilated_dpi.h"

void VBalotelli___024root____Vdpiimwrap_Balotelli__DOT__Balotelli_RegFile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);
void VBalotelli___024root____Vdpiimwrap_Balotelli__DOT__Balotelli_RegFile__DOT__get_when_commit__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 3> &a);

void VBalotelli___024root___initial__TOP__4(VBalotelli___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBalotelli__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBalotelli___024root___initial__TOP__4\n"); );
    // Body
    VBalotelli___024root____Vdpiimwrap_Balotelli__DOT__Balotelli_RegFile__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf);
    VBalotelli___024root____Vdpiimwrap_Balotelli__DOT__Balotelli_RegFile__DOT__get_when_commit__Vdpioc2_TOP(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf_en_set);
}

void VBalotelli___024root___eval_initial(VBalotelli___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBalotelli__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBalotelli___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__Clk = vlSelf->Clk;
    vlSelf->__Vclklast__TOP__Rst = vlSelf->Rst;
    VBalotelli___024root___initial__TOP__4(vlSelf);
}

void VBalotelli___024root___settle__TOP__1(VBalotelli___024root* vlSelf) VL_ATTR_COLD;

void VBalotelli___024root___eval_settle(VBalotelli___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBalotelli__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBalotelli___024root___eval_settle\n"); );
    // Body
    VBalotelli___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void VBalotelli___024root___final(VBalotelli___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBalotelli__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBalotelli___024root___final\n"); );
}

void VBalotelli___024root___ctor_var_reset(VBalotelli___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBalotelli__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBalotelli___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Clk = 0;
    vlSelf->Rst = 0;
    vlSelf->InstIn = 0;
    vlSelf->raddr = 0;
    vlSelf->LoadData = 0;
    vlSelf->PcOut = 0;
    vlSelf->RaddrOut = 0;
    vlSelf->WaddrOut = 0;
    vlSelf->MemDataOut = 0;
    vlSelf->Wmask = 0;
    vlSelf->MemDataIn = 0;
    vlSelf->Balotelli__DOT__RdWriteData_RegFileIn = 0;
    vlSelf->Balotelli__DOT__RdAddr_RegFileIn = 0;
    vlSelf->Balotelli__DOT__RdWriteEnable_RegFileIn = 0;
    vlSelf->Balotelli__DOT__Inst_IdIn = 0;
    vlSelf->Balotelli__DOT__InstAddr_IdIn = 0;
    vlSelf->Balotelli__DOT__Rs1Addr_IdOut = 0;
    vlSelf->Balotelli__DOT__Rs2Addr_IdOut = 0;
    vlSelf->Balotelli__DOT__Rs1ReadEnable_IdOut = 0;
    vlSelf->Balotelli__DOT__Rs2ReadEnable_IdOut = 0;
    vlSelf->Balotelli__DOT__RdAddr_IdOut = 0;
    vlSelf->Balotelli__DOT__RdWriteEnable_IdOut = 0;
    vlSelf->Balotelli__DOT__Imm_IdOut = 0;
    vlSelf->Balotelli__DOT__Shamt_IdOut = 0;
    vlSelf->Balotelli__DOT__InstAddr_ExIn = 0;
    vlSelf->Balotelli__DOT__RdAddr_ExIn = 0;
    vlSelf->Balotelli__DOT__RdWriteEnable_ExIn = 0;
    vlSelf->Balotelli__DOT__Rs1ReadData_ExIn = 0;
    vlSelf->Balotelli__DOT__Rs2ReadData_ExIn = 0;
    vlSelf->Balotelli__DOT__Imm_ExIn = 0;
    vlSelf->Balotelli__DOT__OpCode_ExIn = 0;
    vlSelf->Balotelli__DOT__Funct3_ExIn = 0;
    vlSelf->Balotelli__DOT__Funct7_ExIn = 0;
    vlSelf->Balotelli__DOT__Shamt_ExIn = 0;
    vlSelf->Balotelli__DOT__RdWriteData_ExOut = 0;
    vlSelf->Balotelli__DOT__Imm_ExOut = 0;
    vlSelf->Balotelli__DOT__OpCode_ExOut = 0;
    vlSelf->Balotelli__DOT__Funct3_ExOut = 0;
    vlSelf->Balotelli__DOT__Rs1ReadData_ExOut = 0;
    vlSelf->Balotelli__DOT__Rs2ReadData_ExOut = 0;
    vlSelf->Balotelli__DOT__HoldFlag_ExOut = 0;
    vlSelf->Balotelli__DOT__Imm_MemIn = 0;
    vlSelf->Balotelli__DOT__OpCode_MemIn = 0;
    vlSelf->Balotelli__DOT__Funct3_MemIn = 0;
    vlSelf->Balotelli__DOT__Rs1ReadData_MemIn = 0;
    vlSelf->Balotelli__DOT__Rs2ReadData_MemIn = 0;
    vlSelf->Balotelli__DOT__RdWriteData_MemIn = 0;
    vlSelf->Balotelli__DOT__RdAddr_MemIn = 0;
    vlSelf->Balotelli__DOT__RdWriteEnable_MemIn = 0;
    vlSelf->Balotelli__DOT__RdWriteData_MemOut = 0;
    vlSelf->Balotelli__DOT__RdWriteEnable_MemOut = 0;
    vlSelf->Balotelli__DOT__Rs1ReadData_FwuIn = 0;
    vlSelf->Balotelli__DOT__Rs2ReadData_FwuIn = 0;
    vlSelf->Balotelli__DOT__Rs1Addr_FwuIn = 0;
    vlSelf->Balotelli__DOT__Rs2Addr_FwuIn = 0;
    vlSelf->Balotelli__DOT__Rs1ReadEnable_FwuIn = 0;
    vlSelf->Balotelli__DOT__Rs2ReadEnable_FwuIn = 0;
    vlSelf->Balotelli__DOT__Rs1ReadData_FwuOut = 0;
    vlSelf->Balotelli__DOT__Rs2ReadData_FwuOut = 0;
    vlSelf->Balotelli__DOT__JumpFlag_PcIn = 0;
    vlSelf->Balotelli__DOT__JumpAddr_ExOut = 0;
    vlSelf->Balotelli__DOT__JumpFlag_ExOut = 0;
    vlSelf->Balotelli__DOT__HoldFlag = 0;
    vlSelf->Balotelli__DOT__Balotelli_Pc__DOT__PcIn = 0;
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Imm_S_Type = 0;
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Imm_B_Type = 0;
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Imm_J_Type = 0;
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__ShamtFunct3_00 = 0;
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__ShamtFunct3_01 = 0;
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__ShamtFunct7 = 0;
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__ShamtFunct7_mux____pinNumber4 = 0;
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__ShamtFunct3_00_mux____pinNumber4 = 0;
    VL_ZERO_RESET_W(180, vlSelf->Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__Id_Rs1AddrOut____pinNumber4);
    VL_ZERO_RESET_W(180, vlSelf->Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__Id_Rs2AddrOut____pinNumber4);
    VL_ZERO_RESET_W(180, vlSelf->Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__Id_RdAddrOut____pinNumber4);
    VL_ZERO_RESET_W(1065, vlSelf->Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__Id_Imm____pinNumber4);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Shamt_mux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Shamt_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Shamt_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Shamt_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Shamt_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__ShamtFunct7_mux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__ShamtFunct7_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__ShamtFunct7_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__ShamtFunct7_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__ShamtFunct7_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__ShamtFunct3_00_mux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__ShamtFunct3_00_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__ShamtFunct3_00_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__ShamtFunct3_00_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__ShamtFunct3_00_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__ShamtFunct3_01_mux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__ShamtFunct3_01_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__ShamtFunct3_01_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__ShamtFunct3_01_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__ShamtFunct3_01_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable_mux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        VL_ZERO_RESET_W(71, vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf_en_set[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__unnamedblk1__DOT__i = 0;
    VL_ZERO_RESET_W(142, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Imm_mux____pinNumber4);
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__OpCode_mux____pinNumber4 = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Funct3_mux____pinNumber4 = 0;
    VL_ZERO_RESET_W(142, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Rs1ReadData_mux____pinNumber4);
    VL_ZERO_RESET_W(142, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Rs2ReadData_mux____pinNumber4);
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_TypeOut = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV32_Right = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV32_Left = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_TypeOut = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_ZeroOut = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_OneOut = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_TypeOut = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV64_Right = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV64_Left = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_TypeOut = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_ZeroOut = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_OneOut = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__RaiseException = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__ImmAddRs1ReadData = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataAddRs2ReadData = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataSubRs2ReadData = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataSllImm = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataSraImm = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataSrlImm = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataSllwRs2ReadData = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataSrawRs2ReadData = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataSrlwRs2ReadData = 0;
    VL_ZERO_RESET_W(469, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Funct3_RV32_I_Type____pinNumber4);
    VL_ZERO_RESET_W(142, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Shift_RV32_Right_mux____pinNumber4);
    VL_ZERO_RESET_W(142, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Funct7_RV32_R_Type____pinNumber4);
    VL_ZERO_RESET_W(536, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Funct3_RV32_R_Type_Zero____pinNumber4);
    VL_ZERO_RESET_W(134, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Funct3_RV32_R_Type_One____pinNumber4);
    VL_ZERO_RESET_W(201, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Funct3_RV64_I_Type____pinNumber4);
    VL_ZERO_RESET_W(142, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Shift_RV64_Right_mux____pinNumber4);
    VL_ZERO_RESET_W(142, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Funct7_RV64_R_Type____pinNumber4);
    VL_ZERO_RESET_W(201, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Funct3_RV64_R_Type_Zero____pinNumber4);
    VL_ZERO_RESET_W(134, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Funct3_RV64_R_Type_One____pinNumber4);
    VL_ZERO_RESET_W(568, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__OpOcde_RdWriteDataOut____pinNumber4);
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__BranchFlag = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__BranchFlag_mux____pinNumber4 = 0;
    VL_ZERO_RESET_W(213, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__JumpAddr____pinNumber4);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_ZERO_RESET_W(71, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Imm_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Imm_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Imm_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Imm_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Imm_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpCode_mux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpCode_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpCode_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpCode_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpCode_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_mux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_ZERO_RESET_W(71, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadData_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadData_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadData_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadData_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadData_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_ZERO_RESET_W(71, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs2ReadData_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs2ReadData_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs2ReadData_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs2ReadData_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs2ReadData_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_Type__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_Type__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_Type__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_Type__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_Type__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_ZERO_RESET_W(71, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV32_Right_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV32_Right_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV32_Right_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV32_Right_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV32_Right_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        VL_ZERO_RESET_W(71, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV32_Left_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV32_Left_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV32_Left_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV32_Left_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV32_Left_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_ZERO_RESET_W(71, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_One__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_One__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_One__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_One__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_One__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_Type__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_Type__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_Type__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_Type__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_Type__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_ZERO_RESET_W(71, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV64_Right_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV64_Right_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV64_Right_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV64_Right_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV64_Right_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        VL_ZERO_RESET_W(71, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV64_Left_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV64_Left_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV64_Left_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV64_Left_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Shift_RV64_Left_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_ZERO_RESET_W(71, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_Zero__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_Zero__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_Zero__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_Zero__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_Zero__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_One__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_One__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_One__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_One__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_One__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_ZERO_RESET_W(71, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpFlag_mux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpFlag_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpFlag_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpFlag_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpFlag_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__BranchFlag_mux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__BranchFlag_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__BranchFlag_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__BranchFlag_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__BranchFlag_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__HoldFlag_mux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__HoldFlag_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__HoldFlag_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__HoldFlag_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__HoldFlag_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_ZERO_RESET_W(71, vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpAddr__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpAddr__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpAddr__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpAddr__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpAddr__DOT__i0__DOT__hit = 0;
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData = 0;
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__LoadTypeAddr = 0;
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__StoreTypeAddr = 0;
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__StoreTypeData = 0;
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__StoreTypeMask = 0;
    VL_ZERO_RESET_W(469, vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4);
    VL_ZERO_RESET_W(469, vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__LoadTypeAddr_mux____pinNumber4);
    VL_ZERO_RESET_W(268, vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__StoreTypeAddr_mux____pinNumber4);
    VL_ZERO_RESET_W(268, vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__StoreTypeData_mux____pinNumber4);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        VL_ZERO_RESET_W(71, vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteData_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteData_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteData_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteData_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteData_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        VL_ZERO_RESET_W(71, vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemRAddr_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemRAddr_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemRAddr_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemRAddr_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemRAddr_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__LoadTypeAddr_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__LoadTypeAddr_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__LoadTypeAddr_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__LoadTypeAddr_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__LoadTypeAddr_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        VL_ZERO_RESET_W(71, vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemWAddr_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemWAddr_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemWAddr_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemWAddr_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemWAddr_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__StoreTypeAddr_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__StoreTypeAddr_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__StoreTypeAddr_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__StoreTypeAddr_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__StoreTypeAddr_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        VL_ZERO_RESET_W(71, vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemWData_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemWData_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemWData_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemWData_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemWData_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__StoreTypeData_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__StoreTypeData_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__StoreTypeData_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__StoreTypeData_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__StoreTypeData_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemMask_mux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemMask_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemMask_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemMask_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemMask_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__StoreTypeMask_mux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__StoreTypeMask_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__StoreTypeMask_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__StoreTypeMask_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__StoreTypeMask_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteEnable_mux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteEnable_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteEnable_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteEnable_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteEnable_mux__DOT__i0__DOT__hit = 0;
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardA = 0;
    VL_ZERO_RESET_W(268, vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4);
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardB = 0;
    VL_ZERO_RESET_W(268, vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__lut_out = 0;
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
