// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBalotelli.h for the primary calling header

#ifndef VERILATED_VBALOTELLI___024ROOT_H_
#define VERILATED_VBALOTELLI___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VBalotelli__Syms;
class VBalotelli_VerilatedVcd;


//----------

VL_MODULE(VBalotelli___024root) {
  public:

    // PORTS
    VL_IN8(Clk,0,0);
    VL_IN8(Rst,0,0);
    VL_IN64(InstIn,63,0);
    VL_OUT64(PcOut,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*4:0*/ Balotelli__DOT__RdAddr_RegFileIn;
        CData/*0:0*/ Balotelli__DOT__RdWriteEnable_RegFileIn;
        CData/*4:0*/ Balotelli__DOT__Rs1Addr_IdOut;
        CData/*4:0*/ Balotelli__DOT__Rs2Addr_IdOut;
        CData/*0:0*/ Balotelli__DOT__Rs1ReadEnable_IdOut;
        CData/*0:0*/ Balotelli__DOT__Rs2ReadEnable_IdOut;
        CData/*4:0*/ Balotelli__DOT__RdAddr_IdOut;
        CData/*0:0*/ Balotelli__DOT__RdWriteEnable_IdOut;
        CData/*4:0*/ Balotelli__DOT__RdAddr_ExIn;
        CData/*0:0*/ Balotelli__DOT__RdWriteEnable_ExIn;
        CData/*6:0*/ Balotelli__DOT__OpCode_ExIn;
        CData/*2:0*/ Balotelli__DOT__Funct3_ExIn;
        CData/*6:0*/ Balotelli__DOT__Funct7_ExIn;
        CData/*4:0*/ Balotelli__DOT__RdAddr_MemIn;
        CData/*0:0*/ Balotelli__DOT__RdWriteEnable_MemIn;
        CData/*4:0*/ Balotelli__DOT__Rs1Addr_FwuIn;
        CData/*4:0*/ Balotelli__DOT__Rs2Addr_FwuIn;
        CData/*0:0*/ Balotelli__DOT__Rs1ReadEnable_FwuIn;
        CData/*0:0*/ Balotelli__DOT__Rs2ReadEnable_FwuIn;
        CData/*0:0*/ Balotelli__DOT__JumpFlag_ExOut;
        CData/*0:0*/ Balotelli__DOT__HoldFlag;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__lut_out;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__hit;
        CData/*4:0*/ Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__lut_out;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__hit;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__lut_out;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__hit;
        CData/*4:0*/ Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__lut_out;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__hit;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__lut_out;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__hit;
        CData/*4:0*/ Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__lut_out;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__hit;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__hit;
        CData/*1:0*/ Balotelli__DOT__Balotelli_Ex__DOT__RaiseException;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_Type__DOT__i0__DOT__hit;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__hit;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__hit;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_One__DOT__i0__DOT__hit;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_Type__DOT__i0__DOT__hit;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__hit;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_Zero__DOT__i0__DOT__hit;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_One__DOT__i0__DOT__hit;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__hit;
        CData/*1:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__lut_out;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__hit;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Ex__DOT__JumpFlag__DOT__i0__DOT__lut_out;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Ex__DOT__JumpFlag__DOT__i0__DOT__hit;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Ex__DOT__JumpAddr__DOT__i0__DOT__hit;
        CData/*1:0*/ Balotelli__DOT__Balotelli_Fwu__DOT__ForwardA;
        CData/*1:0*/ Balotelli__DOT__Balotelli_Fwu__DOT__ForwardB;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__hit;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__hit;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Ctrl__DOT__HoldFlag__DOT__i0__DOT__lut_out;
        CData/*0:0*/ Balotelli__DOT__Balotelli_Ctrl__DOT__HoldFlag__DOT__i0__DOT__hit;
        SData/*11:0*/ Balotelli__DOT__Balotelli_Id__DOT__Imm_S_Type;
        SData/*11:0*/ Balotelli__DOT__Balotelli_Id__DOT__Imm_B_Type;
        IData/*19:0*/ Balotelli__DOT__Balotelli_Id__DOT__Imm_J_Type;
        IData/*31:0*/ Balotelli__DOT__Balotelli_RegFile__DOT__unnamedblk1__DOT__i;
        QData/*63:0*/ Balotelli__DOT__RdWriteData_RegFileIn;
        QData/*63:0*/ Balotelli__DOT__Inst_IdIn;
        QData/*63:0*/ Balotelli__DOT__InstAddr_IdIn;
        QData/*63:0*/ Balotelli__DOT__Imm_IdOut;
        QData/*63:0*/ Balotelli__DOT__InstAddr_ExIn;
    };
    struct {
        QData/*63:0*/ Balotelli__DOT__Rs1ReadData_ExIn;
        QData/*63:0*/ Balotelli__DOT__Rs2ReadData_ExIn;
        QData/*63:0*/ Balotelli__DOT__Imm_ExIn;
        QData/*63:0*/ Balotelli__DOT__RdWriteData_ExOut;
        QData/*63:0*/ Balotelli__DOT__RdWriteData_MemIn;
        QData/*63:0*/ Balotelli__DOT__Rs1ReadData_FwuIn;
        QData/*63:0*/ Balotelli__DOT__Rs1ReadData_FwuOut;
        QData/*63:0*/ Balotelli__DOT__Rs2ReadData_FwuOut;
        QData/*63:0*/ Balotelli__DOT__JumpAddr_ExOut;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Pc__DOT__PcIn;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__lut_out;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_TypeOut;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_TypeOut;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_ZeroOut;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_OneOut;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_TypeOut;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_TypeOut;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_ZeroOut;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_OneOut;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Ex__DOT__ImmAddRs1ReadData;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataAddRs2ReadData;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataSubRs2ReadData;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_Type__DOT__i0__DOT__lut_out;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__lut_out;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__lut_out;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_One__DOT__i0__DOT__lut_out;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_Type__DOT__i0__DOT__lut_out;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__lut_out;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_Zero__DOT__i0__DOT__lut_out;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_One__DOT__i0__DOT__lut_out;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__lut_out;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Ex__DOT__JumpAddr__DOT__i0__DOT__lut_out;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__lut_out;
        QData/*63:0*/ Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__lut_out;
        VlUnpacked<CData/*7:0*/, 15> Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 15> Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 15> Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 15> Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 15> Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*4:0*/, 15> Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*7:0*/, 15> Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 15> Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 15> Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 15> Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 15> Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*4:0*/, 15> Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*7:0*/, 15> Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 15> Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 15> Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 15> Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 15> Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*4:0*/, 15> Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*70:0*/, 15> Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 15> Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 15> Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*63:0*/, 32> Balotelli__DOT__Balotelli_RegFile__DOT__rf;
        VlUnpacked<VlWide<3>/*66:0*/, 1> Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_Type__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 1> Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_Type__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 1> Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_Type__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*70:0*/, 2> Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 2> Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 4> Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 4> Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__key_list;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 4> Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 1> Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_One__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 1> Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_One__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 1> Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_One__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 1> Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_Type__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 1> Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_Type__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 1> Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_Type__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*70:0*/, 2> Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 2> Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 1> Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_Zero__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 1> Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_Zero__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 1> Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_Zero__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 1> Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_One__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 1> Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_One__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 1> Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_One__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*70:0*/, 6> Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 6> Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 6> Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*13:0*/, 2> Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__pair_list;
        VlUnpacked<SData/*11:0*/, 2> Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 2> Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*7:0*/, 1> Balotelli__DOT__Balotelli_Ex__DOT__JumpFlag__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 1> Balotelli__DOT__Balotelli_Ex__DOT__JumpFlag__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 1> Balotelli__DOT__Balotelli_Ex__DOT__JumpFlag__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*70:0*/, 1> Balotelli__DOT__Balotelli_Ex__DOT__JumpAddr__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 1> Balotelli__DOT__Balotelli_Ex__DOT__JumpAddr__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 1> Balotelli__DOT__Balotelli_Ex__DOT__JumpAddr__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 3> Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 3> Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 3> Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 3> Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*1:0*/, 2> Balotelli__DOT__Balotelli_Ctrl__DOT__HoldFlag__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> Balotelli__DOT__Balotelli_Ctrl__DOT__HoldFlag__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 2> Balotelli__DOT__Balotelli_Ctrl__DOT__HoldFlag__DOT__i0__DOT__data_list;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__Clk;
    CData/*0:0*/ __Vclklast__TOP__Rst;
    VlWide<6>/*179:0*/ Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__Id_Rs1AddrOut____pinNumber4;
    VlWide<6>/*179:0*/ Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__Id_Rs2AddrOut____pinNumber4;
    VlWide<6>/*179:0*/ Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__Id_RdAddrOut____pinNumber4;
    VlWide<34>/*1064:0*/ Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__Id_Imm____pinNumber4;
    VlWide<5>/*141:0*/ Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Funct7_RV32_R_Type____pinNumber4;
    VlWide<9>/*267:0*/ Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Funct3_RV32_R_Type_Zero____pinNumber4;
    VlWide<5>/*141:0*/ Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Funct7_RV64_R_Type____pinNumber4;
    VlWide<14>/*425:0*/ Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__OpOcde_RdWriteDataOut____pinNumber4;
    VlWide<7>/*197:0*/ Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4;
    VlWide<7>/*197:0*/ Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VBalotelli__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VBalotelli___024root);  ///< Copying not allowed
  public:
    VBalotelli___024root(const char* name);
    ~VBalotelli___024root();

    // INTERNAL METHODS
    void __Vconfigure(VBalotelli__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
