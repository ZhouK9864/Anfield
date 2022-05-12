// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBalotelli__Syms.h"


void VBalotelli___024root__traceInitSub0(VBalotelli___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VBalotelli___024root__traceInitTop(VBalotelli___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBalotelli__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VBalotelli___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VBalotelli___024root__traceInitSub0(VBalotelli___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBalotelli__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+858,"Clk", false,-1);
        tracep->declBit(c+859,"Rst", false,-1);
        tracep->declQuad(c+860,"InstIn", false,-1, 63,0);
        tracep->declQuad(c+862,"PcOut", false,-1, 63,0);
        tracep->declBit(c+858,"Balotelli Clk", false,-1);
        tracep->declBit(c+859,"Balotelli Rst", false,-1);
        tracep->declQuad(c+860,"Balotelli InstIn", false,-1, 63,0);
        tracep->declQuad(c+862,"Balotelli PcOut", false,-1, 63,0);
        tracep->declQuad(c+151,"Balotelli RdWriteData_RegFileIn", false,-1, 63,0);
        tracep->declBus(c+153,"Balotelli RdAddr_RegFileIn", false,-1, 4,0);
        tracep->declBit(c+154,"Balotelli RdWriteEnable_RegFileIn", false,-1);
        tracep->declQuad(c+155,"Balotelli Rs1ReadData_RegFileOut", false,-1, 63,0);
        tracep->declQuad(c+157,"Balotelli Rs2ReadData_RegFileOut", false,-1, 63,0);
        tracep->declQuad(c+159,"Balotelli Inst_IdIn", false,-1, 63,0);
        tracep->declQuad(c+161,"Balotelli InstAddr_IdIn", false,-1, 63,0);
        tracep->declBus(c+163,"Balotelli Rs1Addr_IdOut", false,-1, 4,0);
        tracep->declBus(c+164,"Balotelli Rs2Addr_IdOut", false,-1, 4,0);
        tracep->declQuad(c+161,"Balotelli InstAddr_IdOut", false,-1, 63,0);
        tracep->declBit(c+165,"Balotelli Rs1ReadEnable_IdOut", false,-1);
        tracep->declBit(c+166,"Balotelli Rs2ReadEnable_IdOut", false,-1);
        tracep->declBus(c+167,"Balotelli RdAddr_IdOut", false,-1, 4,0);
        tracep->declBit(c+168,"Balotelli RdWriteEnable_IdOut", false,-1);
        tracep->declQuad(c+155,"Balotelli Rs1ReadData_IdOut", false,-1, 63,0);
        tracep->declQuad(c+157,"Balotelli Rs2ReadData_IdOut", false,-1, 63,0);
        tracep->declQuad(c+169,"Balotelli Imm_IdOut", false,-1, 63,0);
        tracep->declBus(c+171,"Balotelli OpCode_IdOut", false,-1, 6,0);
        tracep->declBus(c+172,"Balotelli Funct3_IdOut", false,-1, 2,0);
        tracep->declBus(c+173,"Balotelli Funct7_IdOut", false,-1, 6,0);
        tracep->declQuad(c+174,"Balotelli InstAddr_ExIn", false,-1, 63,0);
        tracep->declBus(c+176,"Balotelli RdAddr_ExIn", false,-1, 4,0);
        tracep->declBit(c+177,"Balotelli RdWriteEnable_ExIn", false,-1);
        tracep->declQuad(c+866,"Balotelli Rs1ReadData_ExIn", false,-1, 63,0);
        tracep->declQuad(c+868,"Balotelli Rs2ReadData_ExIn", false,-1, 63,0);
        tracep->declQuad(c+178,"Balotelli Imm_ExIn", false,-1, 63,0);
        tracep->declBus(c+180,"Balotelli OpCode_ExIn", false,-1, 6,0);
        tracep->declBus(c+181,"Balotelli Funct3_ExIn", false,-1, 2,0);
        tracep->declBus(c+182,"Balotelli Funct7_ExIn", false,-1, 6,0);
        tracep->declQuad(c+183,"Balotelli RdWriteData_ExOut", false,-1, 63,0);
        tracep->declBus(c+176,"Balotelli RdAddr_ExOut", false,-1, 4,0);
        tracep->declBit(c+177,"Balotelli RdWriteEnable_ExOut", false,-1);
        tracep->declQuad(c+185,"Balotelli RdWriteData_MemIn", false,-1, 63,0);
        tracep->declBus(c+187,"Balotelli RdAddr_MemIn", false,-1, 4,0);
        tracep->declBit(c+188,"Balotelli RdWriteEnable_MemIn", false,-1);
        tracep->declQuad(c+185,"Balotelli RdWriteData_MemOut", false,-1, 63,0);
        tracep->declBus(c+187,"Balotelli RdAddr_MemOut", false,-1, 4,0);
        tracep->declBit(c+188,"Balotelli RdWriteEnable_MemOut", false,-1);
        tracep->declQuad(c+189,"Balotelli Rs1ReadData_FwuIn", false,-1, 63,0);
        tracep->declBus(c+191,"Balotelli Rs1Addr_FwuIn", false,-1, 4,0);
        tracep->declBus(c+192,"Balotelli Rs2Addr_FwuIn", false,-1, 4,0);
        tracep->declBit(c+870,"Balotelli Rs1ReadEnable_FwuIn", false,-1);
        tracep->declBit(c+871,"Balotelli Rs2ReadEnable_FwuIn", false,-1);
        tracep->declQuad(c+193,"Balotelli Rs1ReadData_FwuOut", false,-1, 63,0);
        tracep->declQuad(c+195,"Balotelli Rs2ReadData_FwuOut", false,-1, 63,0);
        tracep->declQuad(c+197,"Balotelli JumpAddr_PcIn", false,-1, 63,0);
        tracep->declBit(c+199,"Balotelli JumpFlag_PcIn", false,-1);
        tracep->declQuad(c+197,"Balotelli JumpAddr_ExOut", false,-1, 63,0);
        tracep->declBit(c+199,"Balotelli JumpFlag_ExOut", false,-1);
        tracep->declBit(c+200,"Balotelli HoldFlag", false,-1);
        tracep->declBit(c+858,"Balotelli Balotelli_Pc Clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Pc Rst", false,-1);
        tracep->declQuad(c+197,"Balotelli Balotelli_Pc JumpAddrFromCtrl", false,-1, 63,0);
        tracep->declBit(c+199,"Balotelli Balotelli_Pc JumpFlagFromCtrl", false,-1);
        tracep->declQuad(c+862,"Balotelli Balotelli_Pc PcOut", false,-1, 63,0);
        tracep->declQuad(c+864,"Balotelli Balotelli_Pc PcIn", false,-1, 63,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Pc Pc_reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+873,"Balotelli Balotelli_Pc Pc_reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+858,"Balotelli Balotelli_Pc Pc_reg clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Pc Pc_reg rst", false,-1);
        tracep->declQuad(c+864,"Balotelli Balotelli_Pc Pc_reg din", false,-1, 63,0);
        tracep->declQuad(c+862,"Balotelli Balotelli_Pc Pc_reg dout", false,-1, 63,0);
        tracep->declBit(c+875,"Balotelli Balotelli_Pc Pc_reg wen", false,-1);
        tracep->declBit(c+858,"Balotelli Balotelli_If2Id Clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_If2Id Rst", false,-1);
        tracep->declQuad(c+862,"Balotelli Balotelli_If2Id InstAddrIn", false,-1, 63,0);
        tracep->declQuad(c+860,"Balotelli Balotelli_If2Id InstIn", false,-1, 63,0);
        tracep->declBit(c+200,"Balotelli Balotelli_If2Id HoldFlagFromCtrl", false,-1);
        tracep->declQuad(c+161,"Balotelli Balotelli_If2Id InstAddrOut", false,-1, 63,0);
        tracep->declQuad(c+159,"Balotelli Balotelli_If2Id InstOut", false,-1, 63,0);
        tracep->declBus(c+872,"Balotelli Balotelli_If2Id InstAddr_reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+873,"Balotelli Balotelli_If2Id InstAddr_reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+858,"Balotelli Balotelli_If2Id InstAddr_reg clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_If2Id InstAddr_reg rst", false,-1);
        tracep->declQuad(c+862,"Balotelli Balotelli_If2Id InstAddr_reg din", false,-1, 63,0);
        tracep->declBit(c+200,"Balotelli Balotelli_If2Id InstAddr_reg en", false,-1);
        tracep->declQuad(c+161,"Balotelli Balotelli_If2Id InstAddr_reg dout", false,-1, 63,0);
        tracep->declBit(c+875,"Balotelli Balotelli_If2Id InstAddr_reg wen", false,-1);
        tracep->declBus(c+872,"Balotelli Balotelli_If2Id Inst_reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_If2Id Inst_reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+858,"Balotelli Balotelli_If2Id Inst_reg clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_If2Id Inst_reg rst", false,-1);
        tracep->declQuad(c+860,"Balotelli Balotelli_If2Id Inst_reg din", false,-1, 63,0);
        tracep->declBit(c+200,"Balotelli Balotelli_If2Id Inst_reg en", false,-1);
        tracep->declQuad(c+159,"Balotelli Balotelli_If2Id Inst_reg dout", false,-1, 63,0);
        tracep->declBit(c+875,"Balotelli Balotelli_If2Id Inst_reg wen", false,-1);
        tracep->declQuad(c+161,"Balotelli Balotelli_Id InstAddrIn", false,-1, 63,0);
        tracep->declQuad(c+159,"Balotelli Balotelli_Id InstIn", false,-1, 63,0);
        tracep->declQuad(c+155,"Balotelli Balotelli_Id Rs1ReadDataIn", false,-1, 63,0);
        tracep->declQuad(c+157,"Balotelli Balotelli_Id Rs2ReadDataIn", false,-1, 63,0);
        tracep->declQuad(c+161,"Balotelli Balotelli_Id InstAddrOut", false,-1, 63,0);
        tracep->declBus(c+163,"Balotelli Balotelli_Id Rs1AddrOut", false,-1, 4,0);
        tracep->declBit(c+165,"Balotelli Balotelli_Id Rs1ReadEnable", false,-1);
        tracep->declBus(c+164,"Balotelli Balotelli_Id Rs2AddrOut", false,-1, 4,0);
        tracep->declBit(c+166,"Balotelli Balotelli_Id Rs2ReadEnable", false,-1);
        tracep->declBus(c+167,"Balotelli Balotelli_Id RdAddrOut", false,-1, 4,0);
        tracep->declBit(c+168,"Balotelli Balotelli_Id RdWriteEnable", false,-1);
        tracep->declQuad(c+155,"Balotelli Balotelli_Id Rs1ReadDataOut", false,-1, 63,0);
        tracep->declQuad(c+157,"Balotelli Balotelli_Id Rs2ReadDataOut", false,-1, 63,0);
        tracep->declQuad(c+169,"Balotelli Balotelli_Id Imm", false,-1, 63,0);
        tracep->declBus(c+171,"Balotelli Balotelli_Id OpCode", false,-1, 6,0);
        tracep->declBus(c+172,"Balotelli Balotelli_Id Funct3", false,-1, 2,0);
        tracep->declBus(c+173,"Balotelli Balotelli_Id Funct7", false,-1, 6,0);
        tracep->declBus(c+201,"Balotelli Balotelli_Id Imm_I_Type", false,-1, 11,0);
        tracep->declBus(c+202,"Balotelli Balotelli_Id Imm_S_Type", false,-1, 11,0);
        tracep->declBus(c+203,"Balotelli Balotelli_Id Imm_B_Type", false,-1, 11,0);
        tracep->declBus(c+204,"Balotelli Balotelli_Id Imm_U_Type", false,-1, 19,0);
        tracep->declBus(c+205,"Balotelli Balotelli_Id Imm_J_Type", false,-1, 20,1);
        tracep->declBus(c+878,"Balotelli Balotelli_Id Id_Rs1ReadEnable NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Id Id_Rs1ReadEnable KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Id Id_Rs1ReadEnable DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+165,"Balotelli Balotelli_Id Id_Rs1ReadEnable out", false,-1, 0,0);
        tracep->declBus(c+171,"Balotelli Balotelli_Id Id_Rs1ReadEnable key", false,-1, 6,0);
        tracep->declBus(c+881,"Balotelli Balotelli_Id Id_Rs1ReadEnable default_out", false,-1, 0,0);
        tracep->declArray(c+882,"Balotelli Balotelli_Id Id_Rs1ReadEnable lut", false,-1, 119,0);
        tracep->declBus(c+878,"Balotelli Balotelli_Id Id_Rs1ReadEnable i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Id Id_Rs1ReadEnable i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Id Id_Rs1ReadEnable i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Id Id_Rs1ReadEnable i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+165,"Balotelli Balotelli_Id Id_Rs1ReadEnable i0 out", false,-1, 0,0);
        tracep->declBus(c+171,"Balotelli Balotelli_Id Id_Rs1ReadEnable i0 key", false,-1, 6,0);
        tracep->declBus(c+881,"Balotelli Balotelli_Id Id_Rs1ReadEnable i0 default_out", false,-1, 0,0);
        tracep->declArray(c+882,"Balotelli Balotelli_Id Id_Rs1ReadEnable i0 lut", false,-1, 119,0);
        tracep->declBus(c+886,"Balotelli Balotelli_Id Id_Rs1ReadEnable i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+1+i*1,"Balotelli Balotelli_Id Id_Rs1ReadEnable i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+16+i*1,"Balotelli Balotelli_Id Id_Rs1ReadEnable i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+31+i*1,"Balotelli Balotelli_Id Id_Rs1ReadEnable i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+206,"Balotelli Balotelli_Id Id_Rs1ReadEnable i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+207,"Balotelli Balotelli_Id Id_Rs1ReadEnable i0 hit", false,-1);
        tracep->declBus(c+887,"Balotelli Balotelli_Id Id_Rs1ReadEnable i0 i", false,-1, 31,0);
        tracep->declBus(c+878,"Balotelli Balotelli_Id Id_Rs1AddrOut NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Id Id_Rs1AddrOut KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+888,"Balotelli Balotelli_Id Id_Rs1AddrOut DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+163,"Balotelli Balotelli_Id Id_Rs1AddrOut out", false,-1, 4,0);
        tracep->declBus(c+171,"Balotelli Balotelli_Id Id_Rs1AddrOut key", false,-1, 6,0);
        tracep->declBus(c+889,"Balotelli Balotelli_Id Id_Rs1AddrOut default_out", false,-1, 4,0);
        tracep->declArray(c+208,"Balotelli Balotelli_Id Id_Rs1AddrOut lut", false,-1, 179,0);
        tracep->declBus(c+878,"Balotelli Balotelli_Id Id_Rs1AddrOut i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Id Id_Rs1AddrOut i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+888,"Balotelli Balotelli_Id Id_Rs1AddrOut i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Id Id_Rs1AddrOut i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+163,"Balotelli Balotelli_Id Id_Rs1AddrOut i0 out", false,-1, 4,0);
        tracep->declBus(c+171,"Balotelli Balotelli_Id Id_Rs1AddrOut i0 key", false,-1, 6,0);
        tracep->declBus(c+889,"Balotelli Balotelli_Id Id_Rs1AddrOut i0 default_out", false,-1, 4,0);
        tracep->declArray(c+208,"Balotelli Balotelli_Id Id_Rs1AddrOut i0 lut", false,-1, 179,0);
        tracep->declBus(c+890,"Balotelli Balotelli_Id Id_Rs1AddrOut i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+214+i*1,"Balotelli Balotelli_Id Id_Rs1AddrOut i0 pair_list", true,(i+0), 11,0);}}
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+229+i*1,"Balotelli Balotelli_Id Id_Rs1AddrOut i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+244+i*1,"Balotelli Balotelli_Id Id_Rs1AddrOut i0 data_list", true,(i+0), 4,0);}}
        tracep->declBus(c+259,"Balotelli Balotelli_Id Id_Rs1AddrOut i0 lut_out", false,-1, 4,0);
        tracep->declBit(c+260,"Balotelli Balotelli_Id Id_Rs1AddrOut i0 hit", false,-1);
        tracep->declBus(c+887,"Balotelli Balotelli_Id Id_Rs1AddrOut i0 i", false,-1, 31,0);
        tracep->declBus(c+878,"Balotelli Balotelli_Id Id_Rs2ReadEnable NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Id Id_Rs2ReadEnable KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Id Id_Rs2ReadEnable DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+166,"Balotelli Balotelli_Id Id_Rs2ReadEnable out", false,-1, 0,0);
        tracep->declBus(c+171,"Balotelli Balotelli_Id Id_Rs2ReadEnable key", false,-1, 6,0);
        tracep->declBus(c+881,"Balotelli Balotelli_Id Id_Rs2ReadEnable default_out", false,-1, 0,0);
        tracep->declArray(c+891,"Balotelli Balotelli_Id Id_Rs2ReadEnable lut", false,-1, 119,0);
        tracep->declBus(c+878,"Balotelli Balotelli_Id Id_Rs2ReadEnable i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Id Id_Rs2ReadEnable i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Id Id_Rs2ReadEnable i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Id Id_Rs2ReadEnable i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+166,"Balotelli Balotelli_Id Id_Rs2ReadEnable i0 out", false,-1, 0,0);
        tracep->declBus(c+171,"Balotelli Balotelli_Id Id_Rs2ReadEnable i0 key", false,-1, 6,0);
        tracep->declBus(c+881,"Balotelli Balotelli_Id Id_Rs2ReadEnable i0 default_out", false,-1, 0,0);
        tracep->declArray(c+891,"Balotelli Balotelli_Id Id_Rs2ReadEnable i0 lut", false,-1, 119,0);
        tracep->declBus(c+886,"Balotelli Balotelli_Id Id_Rs2ReadEnable i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+46+i*1,"Balotelli Balotelli_Id Id_Rs2ReadEnable i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+61+i*1,"Balotelli Balotelli_Id Id_Rs2ReadEnable i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+76+i*1,"Balotelli Balotelli_Id Id_Rs2ReadEnable i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+261,"Balotelli Balotelli_Id Id_Rs2ReadEnable i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+262,"Balotelli Balotelli_Id Id_Rs2ReadEnable i0 hit", false,-1);
        tracep->declBus(c+887,"Balotelli Balotelli_Id Id_Rs2ReadEnable i0 i", false,-1, 31,0);
        tracep->declBus(c+878,"Balotelli Balotelli_Id Id_Rs2AddrOut NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Id Id_Rs2AddrOut KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+888,"Balotelli Balotelli_Id Id_Rs2AddrOut DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+164,"Balotelli Balotelli_Id Id_Rs2AddrOut out", false,-1, 4,0);
        tracep->declBus(c+171,"Balotelli Balotelli_Id Id_Rs2AddrOut key", false,-1, 6,0);
        tracep->declBus(c+889,"Balotelli Balotelli_Id Id_Rs2AddrOut default_out", false,-1, 4,0);
        tracep->declArray(c+263,"Balotelli Balotelli_Id Id_Rs2AddrOut lut", false,-1, 179,0);
        tracep->declBus(c+878,"Balotelli Balotelli_Id Id_Rs2AddrOut i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Id Id_Rs2AddrOut i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+888,"Balotelli Balotelli_Id Id_Rs2AddrOut i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Id Id_Rs2AddrOut i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+164,"Balotelli Balotelli_Id Id_Rs2AddrOut i0 out", false,-1, 4,0);
        tracep->declBus(c+171,"Balotelli Balotelli_Id Id_Rs2AddrOut i0 key", false,-1, 6,0);
        tracep->declBus(c+889,"Balotelli Balotelli_Id Id_Rs2AddrOut i0 default_out", false,-1, 4,0);
        tracep->declArray(c+263,"Balotelli Balotelli_Id Id_Rs2AddrOut i0 lut", false,-1, 179,0);
        tracep->declBus(c+890,"Balotelli Balotelli_Id Id_Rs2AddrOut i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+269+i*1,"Balotelli Balotelli_Id Id_Rs2AddrOut i0 pair_list", true,(i+0), 11,0);}}
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+284+i*1,"Balotelli Balotelli_Id Id_Rs2AddrOut i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+299+i*1,"Balotelli Balotelli_Id Id_Rs2AddrOut i0 data_list", true,(i+0), 4,0);}}
        tracep->declBus(c+314,"Balotelli Balotelli_Id Id_Rs2AddrOut i0 lut_out", false,-1, 4,0);
        tracep->declBit(c+315,"Balotelli Balotelli_Id Id_Rs2AddrOut i0 hit", false,-1);
        tracep->declBus(c+887,"Balotelli Balotelli_Id Id_Rs2AddrOut i0 i", false,-1, 31,0);
        tracep->declBus(c+878,"Balotelli Balotelli_Id Id_RdWriteEnable NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Id Id_RdWriteEnable KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Id Id_RdWriteEnable DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+168,"Balotelli Balotelli_Id Id_RdWriteEnable out", false,-1, 0,0);
        tracep->declBus(c+171,"Balotelli Balotelli_Id Id_RdWriteEnable key", false,-1, 6,0);
        tracep->declBus(c+881,"Balotelli Balotelli_Id Id_RdWriteEnable default_out", false,-1, 0,0);
        tracep->declArray(c+895,"Balotelli Balotelli_Id Id_RdWriteEnable lut", false,-1, 119,0);
        tracep->declBus(c+878,"Balotelli Balotelli_Id Id_RdWriteEnable i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Id Id_RdWriteEnable i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Id Id_RdWriteEnable i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Id Id_RdWriteEnable i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+168,"Balotelli Balotelli_Id Id_RdWriteEnable i0 out", false,-1, 0,0);
        tracep->declBus(c+171,"Balotelli Balotelli_Id Id_RdWriteEnable i0 key", false,-1, 6,0);
        tracep->declBus(c+881,"Balotelli Balotelli_Id Id_RdWriteEnable i0 default_out", false,-1, 0,0);
        tracep->declArray(c+895,"Balotelli Balotelli_Id Id_RdWriteEnable i0 lut", false,-1, 119,0);
        tracep->declBus(c+886,"Balotelli Balotelli_Id Id_RdWriteEnable i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+91+i*1,"Balotelli Balotelli_Id Id_RdWriteEnable i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+106+i*1,"Balotelli Balotelli_Id Id_RdWriteEnable i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+121+i*1,"Balotelli Balotelli_Id Id_RdWriteEnable i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+316,"Balotelli Balotelli_Id Id_RdWriteEnable i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+317,"Balotelli Balotelli_Id Id_RdWriteEnable i0 hit", false,-1);
        tracep->declBus(c+887,"Balotelli Balotelli_Id Id_RdWriteEnable i0 i", false,-1, 31,0);
        tracep->declBus(c+878,"Balotelli Balotelli_Id Id_RdAddrOut NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Id Id_RdAddrOut KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+888,"Balotelli Balotelli_Id Id_RdAddrOut DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+167,"Balotelli Balotelli_Id Id_RdAddrOut out", false,-1, 4,0);
        tracep->declBus(c+171,"Balotelli Balotelli_Id Id_RdAddrOut key", false,-1, 6,0);
        tracep->declBus(c+889,"Balotelli Balotelli_Id Id_RdAddrOut default_out", false,-1, 4,0);
        tracep->declArray(c+318,"Balotelli Balotelli_Id Id_RdAddrOut lut", false,-1, 179,0);
        tracep->declBus(c+878,"Balotelli Balotelli_Id Id_RdAddrOut i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Id Id_RdAddrOut i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+888,"Balotelli Balotelli_Id Id_RdAddrOut i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Id Id_RdAddrOut i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+167,"Balotelli Balotelli_Id Id_RdAddrOut i0 out", false,-1, 4,0);
        tracep->declBus(c+171,"Balotelli Balotelli_Id Id_RdAddrOut i0 key", false,-1, 6,0);
        tracep->declBus(c+889,"Balotelli Balotelli_Id Id_RdAddrOut i0 default_out", false,-1, 4,0);
        tracep->declArray(c+318,"Balotelli Balotelli_Id Id_RdAddrOut i0 lut", false,-1, 179,0);
        tracep->declBus(c+890,"Balotelli Balotelli_Id Id_RdAddrOut i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+324+i*1,"Balotelli Balotelli_Id Id_RdAddrOut i0 pair_list", true,(i+0), 11,0);}}
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+339+i*1,"Balotelli Balotelli_Id Id_RdAddrOut i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+354+i*1,"Balotelli Balotelli_Id Id_RdAddrOut i0 data_list", true,(i+0), 4,0);}}
        tracep->declBus(c+369,"Balotelli Balotelli_Id Id_RdAddrOut i0 lut_out", false,-1, 4,0);
        tracep->declBit(c+370,"Balotelli Balotelli_Id Id_RdAddrOut i0 hit", false,-1);
        tracep->declBus(c+887,"Balotelli Balotelli_Id Id_RdAddrOut i0 i", false,-1, 31,0);
        tracep->declBus(c+878,"Balotelli Balotelli_Id Id_Imm NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Id Id_Imm KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Id Id_Imm DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+169,"Balotelli Balotelli_Id Id_Imm out", false,-1, 63,0);
        tracep->declBus(c+171,"Balotelli Balotelli_Id Id_Imm key", false,-1, 6,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Id Id_Imm default_out", false,-1, 63,0);
        tracep->declArray(c+371,"Balotelli Balotelli_Id Id_Imm lut", false,-1, 1064,0);
        tracep->declBus(c+878,"Balotelli Balotelli_Id Id_Imm i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Id Id_Imm i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Id Id_Imm i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Id Id_Imm i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+169,"Balotelli Balotelli_Id Id_Imm i0 out", false,-1, 63,0);
        tracep->declBus(c+171,"Balotelli Balotelli_Id Id_Imm i0 key", false,-1, 6,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Id Id_Imm i0 default_out", false,-1, 63,0);
        tracep->declArray(c+371,"Balotelli Balotelli_Id Id_Imm i0 lut", false,-1, 1064,0);
        tracep->declBus(c+899,"Balotelli Balotelli_Id Id_Imm i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<15; i++) {
                tracep->declArray(c+405+i*3,"Balotelli Balotelli_Id Id_Imm i0 pair_list", true,(i+0), 70,0);}}
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+450+i*1,"Balotelli Balotelli_Id Id_Imm i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<15; i++) {
                tracep->declQuad(c+465+i*2,"Balotelli Balotelli_Id Id_Imm i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+495,"Balotelli Balotelli_Id Id_Imm i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+497,"Balotelli Balotelli_Id Id_Imm i0 hit", false,-1);
        tracep->declBus(c+887,"Balotelli Balotelli_Id Id_Imm i0 i", false,-1, 31,0);
        tracep->declBit(c+858,"Balotelli Balotelli_RegFile Clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_RegFile Rst", false,-1);
        tracep->declQuad(c+151,"Balotelli Balotelli_RegFile RdWriteData", false,-1, 63,0);
        tracep->declBus(c+153,"Balotelli Balotelli_RegFile RdWriteAddr", false,-1, 4,0);
        tracep->declBit(c+154,"Balotelli Balotelli_RegFile RdWriteEnable", false,-1);
        tracep->declBus(c+163,"Balotelli Balotelli_RegFile Rs1AddrIn", false,-1, 4,0);
        tracep->declBit(c+165,"Balotelli Balotelli_RegFile Rs1ReadEnable", false,-1);
        tracep->declBus(c+164,"Balotelli Balotelli_RegFile Rs2AddrIn", false,-1, 4,0);
        tracep->declBit(c+166,"Balotelli Balotelli_RegFile Rs2ReadEnable", false,-1);
        tracep->declQuad(c+155,"Balotelli Balotelli_RegFile Rs1ReadData", false,-1, 63,0);
        tracep->declQuad(c+157,"Balotelli Balotelli_RegFile Rs2ReadData", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+498+i*2,"Balotelli Balotelli_RegFile rf", true,(i+0), 63,0);}}
        tracep->declBus(c+562,"Balotelli Balotelli_RegFile unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+858,"Balotelli Balotelli_Id2Ex Clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Id2Ex Rst", false,-1);
        tracep->declQuad(c+161,"Balotelli Balotelli_Id2Ex InstAddrIn", false,-1, 63,0);
        tracep->declBus(c+167,"Balotelli Balotelli_Id2Ex RdAddrIn", false,-1, 4,0);
        tracep->declBit(c+168,"Balotelli Balotelli_Id2Ex RdWriteEnableIn", false,-1);
        tracep->declQuad(c+155,"Balotelli Balotelli_Id2Ex Rs1ReadDataIn", false,-1, 63,0);
        tracep->declQuad(c+157,"Balotelli Balotelli_Id2Ex Rs2ReadDataIn", false,-1, 63,0);
        tracep->declBus(c+163,"Balotelli Balotelli_Id2Ex Rs1AddrIn", false,-1, 4,0);
        tracep->declBus(c+164,"Balotelli Balotelli_Id2Ex Rs2AddrIn", false,-1, 4,0);
        tracep->declQuad(c+169,"Balotelli Balotelli_Id2Ex ImmIn", false,-1, 63,0);
        tracep->declBus(c+171,"Balotelli Balotelli_Id2Ex OpCodeIn", false,-1, 6,0);
        tracep->declBus(c+172,"Balotelli Balotelli_Id2Ex Funct3In", false,-1, 2,0);
        tracep->declBus(c+173,"Balotelli Balotelli_Id2Ex Funct7In", false,-1, 6,0);
        tracep->declBit(c+200,"Balotelli Balotelli_Id2Ex HoldFlagFromCtrl", false,-1);
        tracep->declQuad(c+174,"Balotelli Balotelli_Id2Ex InstAddrOut", false,-1, 63,0);
        tracep->declBus(c+176,"Balotelli Balotelli_Id2Ex RdAddrOut", false,-1, 4,0);
        tracep->declBit(c+177,"Balotelli Balotelli_Id2Ex RdWriteEnableOut", false,-1);
        tracep->declQuad(c+189,"Balotelli Balotelli_Id2Ex Rs1ReadDataOut", false,-1, 63,0);
        tracep->declQuad(c+189,"Balotelli Balotelli_Id2Ex Rs2ReadDataOut", false,-1, 63,0);
        tracep->declBus(c+191,"Balotelli Balotelli_Id2Ex Rs1AddrOut", false,-1, 4,0);
        tracep->declBus(c+192,"Balotelli Balotelli_Id2Ex Rs2AddrOut", false,-1, 4,0);
        tracep->declQuad(c+178,"Balotelli Balotelli_Id2Ex ImmOut", false,-1, 63,0);
        tracep->declBus(c+180,"Balotelli Balotelli_Id2Ex OpCodeOut", false,-1, 6,0);
        tracep->declBus(c+181,"Balotelli Balotelli_Id2Ex Funct3Out", false,-1, 2,0);
        tracep->declBus(c+182,"Balotelli Balotelli_Id2Ex Funct7Out", false,-1, 6,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Id2Ex InstAddr_reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+873,"Balotelli Balotelli_Id2Ex InstAddr_reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+858,"Balotelli Balotelli_Id2Ex InstAddr_reg clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Id2Ex InstAddr_reg rst", false,-1);
        tracep->declQuad(c+161,"Balotelli Balotelli_Id2Ex InstAddr_reg din", false,-1, 63,0);
        tracep->declBit(c+200,"Balotelli Balotelli_Id2Ex InstAddr_reg en", false,-1);
        tracep->declQuad(c+174,"Balotelli Balotelli_Id2Ex InstAddr_reg dout", false,-1, 63,0);
        tracep->declBit(c+875,"Balotelli Balotelli_Id2Ex InstAddr_reg wen", false,-1);
        tracep->declBus(c+888,"Balotelli Balotelli_Id2Ex Rs1Addr_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+889,"Balotelli Balotelli_Id2Ex Rs1Addr_reg RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+858,"Balotelli Balotelli_Id2Ex Rs1Addr_reg clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Id2Ex Rs1Addr_reg rst", false,-1);
        tracep->declBus(c+163,"Balotelli Balotelli_Id2Ex Rs1Addr_reg din", false,-1, 4,0);
        tracep->declBit(c+200,"Balotelli Balotelli_Id2Ex Rs1Addr_reg en", false,-1);
        tracep->declBus(c+191,"Balotelli Balotelli_Id2Ex Rs1Addr_reg dout", false,-1, 4,0);
        tracep->declBit(c+875,"Balotelli Balotelli_Id2Ex Rs1Addr_reg wen", false,-1);
        tracep->declBus(c+888,"Balotelli Balotelli_Id2Ex Rs2Addr_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+889,"Balotelli Balotelli_Id2Ex Rs2Addr_reg RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+858,"Balotelli Balotelli_Id2Ex Rs2Addr_reg clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Id2Ex Rs2Addr_reg rst", false,-1);
        tracep->declBus(c+164,"Balotelli Balotelli_Id2Ex Rs2Addr_reg din", false,-1, 4,0);
        tracep->declBit(c+200,"Balotelli Balotelli_Id2Ex Rs2Addr_reg en", false,-1);
        tracep->declBus(c+192,"Balotelli Balotelli_Id2Ex Rs2Addr_reg dout", false,-1, 4,0);
        tracep->declBit(c+875,"Balotelli Balotelli_Id2Ex Rs2Addr_reg wen", false,-1);
        tracep->declBus(c+888,"Balotelli Balotelli_Id2Ex RdAddr_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+889,"Balotelli Balotelli_Id2Ex RdAddr_reg RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+858,"Balotelli Balotelli_Id2Ex RdAddr_reg clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Id2Ex RdAddr_reg rst", false,-1);
        tracep->declBus(c+167,"Balotelli Balotelli_Id2Ex RdAddr_reg din", false,-1, 4,0);
        tracep->declBit(c+200,"Balotelli Balotelli_Id2Ex RdAddr_reg en", false,-1);
        tracep->declBus(c+176,"Balotelli Balotelli_Id2Ex RdAddr_reg dout", false,-1, 4,0);
        tracep->declBit(c+875,"Balotelli Balotelli_Id2Ex RdAddr_reg wen", false,-1);
        tracep->declBus(c+880,"Balotelli Balotelli_Id2Ex RdWriteEnable_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+900,"Balotelli Balotelli_Id2Ex RdWriteEnable_reg RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+858,"Balotelli Balotelli_Id2Ex RdWriteEnable_reg clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Id2Ex RdWriteEnable_reg rst", false,-1);
        tracep->declBus(c+168,"Balotelli Balotelli_Id2Ex RdWriteEnable_reg din", false,-1, 0,0);
        tracep->declBit(c+200,"Balotelli Balotelli_Id2Ex RdWriteEnable_reg en", false,-1);
        tracep->declBus(c+177,"Balotelli Balotelli_Id2Ex RdWriteEnable_reg dout", false,-1, 0,0);
        tracep->declBit(c+875,"Balotelli Balotelli_Id2Ex RdWriteEnable_reg wen", false,-1);
        tracep->declBus(c+872,"Balotelli Balotelli_Id2Ex Rs1ReadData_reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Id2Ex Rs1ReadData_reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+858,"Balotelli Balotelli_Id2Ex Rs1ReadData_reg clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Id2Ex Rs1ReadData_reg rst", false,-1);
        tracep->declQuad(c+155,"Balotelli Balotelli_Id2Ex Rs1ReadData_reg din", false,-1, 63,0);
        tracep->declBit(c+200,"Balotelli Balotelli_Id2Ex Rs1ReadData_reg en", false,-1);
        tracep->declQuad(c+189,"Balotelli Balotelli_Id2Ex Rs1ReadData_reg dout", false,-1, 63,0);
        tracep->declBit(c+875,"Balotelli Balotelli_Id2Ex Rs1ReadData_reg wen", false,-1);
        tracep->declBus(c+872,"Balotelli Balotelli_Id2Ex Rs2ReadData_reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Id2Ex Rs2ReadData_reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+858,"Balotelli Balotelli_Id2Ex Rs2ReadData_reg clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Id2Ex Rs2ReadData_reg rst", false,-1);
        tracep->declQuad(c+157,"Balotelli Balotelli_Id2Ex Rs2ReadData_reg din", false,-1, 63,0);
        tracep->declBit(c+200,"Balotelli Balotelli_Id2Ex Rs2ReadData_reg en", false,-1);
        tracep->declQuad(c+189,"Balotelli Balotelli_Id2Ex Rs2ReadData_reg dout", false,-1, 63,0);
        tracep->declBit(c+875,"Balotelli Balotelli_Id2Ex Rs2ReadData_reg wen", false,-1);
        tracep->declBus(c+872,"Balotelli Balotelli_Id2Ex Imm_reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Id2Ex Imm_reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+858,"Balotelli Balotelli_Id2Ex Imm_reg clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Id2Ex Imm_reg rst", false,-1);
        tracep->declQuad(c+169,"Balotelli Balotelli_Id2Ex Imm_reg din", false,-1, 63,0);
        tracep->declBit(c+200,"Balotelli Balotelli_Id2Ex Imm_reg en", false,-1);
        tracep->declQuad(c+178,"Balotelli Balotelli_Id2Ex Imm_reg dout", false,-1, 63,0);
        tracep->declBit(c+875,"Balotelli Balotelli_Id2Ex Imm_reg wen", false,-1);
        tracep->declBus(c+879,"Balotelli Balotelli_Id2Ex OpCode_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+901,"Balotelli Balotelli_Id2Ex OpCode_reg RESET_VAL", false,-1, 6,0);
        tracep->declBit(c+858,"Balotelli Balotelli_Id2Ex OpCode_reg clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Id2Ex OpCode_reg rst", false,-1);
        tracep->declBus(c+171,"Balotelli Balotelli_Id2Ex OpCode_reg din", false,-1, 6,0);
        tracep->declBit(c+200,"Balotelli Balotelli_Id2Ex OpCode_reg en", false,-1);
        tracep->declBus(c+180,"Balotelli Balotelli_Id2Ex OpCode_reg dout", false,-1, 6,0);
        tracep->declBit(c+875,"Balotelli Balotelli_Id2Ex OpCode_reg wen", false,-1);
        tracep->declBus(c+902,"Balotelli Balotelli_Id2Ex Funct3_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+903,"Balotelli Balotelli_Id2Ex Funct3_reg RESET_VAL", false,-1, 2,0);
        tracep->declBit(c+858,"Balotelli Balotelli_Id2Ex Funct3_reg clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Id2Ex Funct3_reg rst", false,-1);
        tracep->declBus(c+172,"Balotelli Balotelli_Id2Ex Funct3_reg din", false,-1, 2,0);
        tracep->declBit(c+200,"Balotelli Balotelli_Id2Ex Funct3_reg en", false,-1);
        tracep->declBus(c+181,"Balotelli Balotelli_Id2Ex Funct3_reg dout", false,-1, 2,0);
        tracep->declBit(c+875,"Balotelli Balotelli_Id2Ex Funct3_reg wen", false,-1);
        tracep->declBus(c+879,"Balotelli Balotelli_Id2Ex Funct7_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+901,"Balotelli Balotelli_Id2Ex Funct7_reg RESET_VAL", false,-1, 6,0);
        tracep->declBit(c+858,"Balotelli Balotelli_Id2Ex Funct7_reg clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Id2Ex Funct7_reg rst", false,-1);
        tracep->declBus(c+173,"Balotelli Balotelli_Id2Ex Funct7_reg din", false,-1, 6,0);
        tracep->declBit(c+200,"Balotelli Balotelli_Id2Ex Funct7_reg en", false,-1);
        tracep->declBus(c+182,"Balotelli Balotelli_Id2Ex Funct7_reg dout", false,-1, 6,0);
        tracep->declBit(c+875,"Balotelli Balotelli_Id2Ex Funct7_reg wen", false,-1);
        tracep->declQuad(c+174,"Balotelli Balotelli_Ex InstAddrIn", false,-1, 63,0);
        tracep->declBus(c+176,"Balotelli Balotelli_Ex RdAddrIn", false,-1, 4,0);
        tracep->declBit(c+177,"Balotelli Balotelli_Ex RdWriteEnableIn", false,-1);
        tracep->declQuad(c+193,"Balotelli Balotelli_Ex Rs1ReadDataIn", false,-1, 63,0);
        tracep->declQuad(c+195,"Balotelli Balotelli_Ex Rs2ReadDataIn", false,-1, 63,0);
        tracep->declQuad(c+178,"Balotelli Balotelli_Ex ImmIn", false,-1, 63,0);
        tracep->declBus(c+180,"Balotelli Balotelli_Ex OpCodeIn", false,-1, 6,0);
        tracep->declBus(c+181,"Balotelli Balotelli_Ex Funct3In", false,-1, 2,0);
        tracep->declBus(c+182,"Balotelli Balotelli_Ex Funct7In", false,-1, 6,0);
        tracep->declQuad(c+183,"Balotelli Balotelli_Ex RdWriteDataOut", false,-1, 63,0);
        tracep->declBus(c+176,"Balotelli Balotelli_Ex RdAddrOut", false,-1, 4,0);
        tracep->declBit(c+177,"Balotelli Balotelli_Ex RdWriteEnableOut", false,-1);
        tracep->declBit(c+199,"Balotelli Balotelli_Ex JumpFlagToCtrl", false,-1);
        tracep->declQuad(c+197,"Balotelli Balotelli_Ex JumpAddrToCtrl", false,-1, 63,0);
        tracep->declQuad(c+563,"Balotelli Balotelli_Ex Funct3_RV32_I_TypeOut", false,-1, 63,0);
        tracep->declQuad(c+565,"Balotelli Balotelli_Ex Funct7_RV32_R_TypeOut", false,-1, 63,0);
        tracep->declQuad(c+567,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_ZeroOut", false,-1, 63,0);
        tracep->declQuad(c+569,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_OneOut", false,-1, 63,0);
        tracep->declQuad(c+571,"Balotelli Balotelli_Ex Funct3_RV64_I_TypeOut", false,-1, 63,0);
        tracep->declQuad(c+573,"Balotelli Balotelli_Ex Funct7_RV64_R_TypeOut", false,-1, 63,0);
        tracep->declQuad(c+575,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_ZeroOut", false,-1, 63,0);
        tracep->declQuad(c+577,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_OneOut", false,-1, 63,0);
        tracep->declBus(c+904,"Balotelli Balotelli_Ex RaiseException_Ebreak", false,-1, 1,0);
        tracep->declBus(c+905,"Balotelli Balotelli_Ex RaiseException_Ecall", false,-1, 1,0);
        tracep->declBus(c+579,"Balotelli Balotelli_Ex RaiseException", false,-1, 1,0);
        tracep->declQuad(c+580,"Balotelli Balotelli_Ex ImmAddRs1ReadData", false,-1, 63,0);
        tracep->declQuad(c+582,"Balotelli Balotelli_Ex Rs1ReadDataAddRs2ReadData", false,-1, 63,0);
        tracep->declQuad(c+584,"Balotelli Balotelli_Ex Rs1ReadDataSubRs2ReadData", false,-1, 63,0);
        tracep->declQuad(c+586,"Balotelli Balotelli_Ex Rs1ReadDataAndRs2ReadData", false,-1, 63,0);
        tracep->declQuad(c+588,"Balotelli Balotelli_Ex Rs1ReadDataOrRs2ReadData", false,-1, 63,0);
        tracep->declQuad(c+590,"Balotelli Balotelli_Ex Rs1ReadDataXorRs2ReadData", false,-1, 63,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex Funct3_RV32_I_Type NR_KEY", false,-1, 31,0);
        tracep->declBus(c+902,"Balotelli Balotelli_Ex Funct3_RV32_I_Type KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Ex Funct3_RV32_I_Type DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+563,"Balotelli Balotelli_Ex Funct3_RV32_I_Type out", false,-1, 63,0);
        tracep->declBus(c+181,"Balotelli Balotelli_Ex Funct3_RV32_I_Type key", false,-1, 2,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Ex Funct3_RV32_I_Type default_out", false,-1, 63,0);
        tracep->declArray(c+592,"Balotelli Balotelli_Ex Funct3_RV32_I_Type lut", false,-1, 66,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex Funct3_RV32_I_Type i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+902,"Balotelli Balotelli_Ex Funct3_RV32_I_Type i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Ex Funct3_RV32_I_Type i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex Funct3_RV32_I_Type i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+563,"Balotelli Balotelli_Ex Funct3_RV32_I_Type i0 out", false,-1, 63,0);
        tracep->declBus(c+181,"Balotelli Balotelli_Ex Funct3_RV32_I_Type i0 key", false,-1, 2,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Ex Funct3_RV32_I_Type i0 default_out", false,-1, 63,0);
        tracep->declArray(c+592,"Balotelli Balotelli_Ex Funct3_RV32_I_Type i0 lut", false,-1, 66,0);
        tracep->declBus(c+906,"Balotelli Balotelli_Ex Funct3_RV32_I_Type i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+595+i*3,"Balotelli Balotelli_Ex Funct3_RV32_I_Type i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+598+i*1,"Balotelli Balotelli_Ex Funct3_RV32_I_Type i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+599+i*2,"Balotelli Balotelli_Ex Funct3_RV32_I_Type i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+601,"Balotelli Balotelli_Ex Funct3_RV32_I_Type i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+603,"Balotelli Balotelli_Ex Funct3_RV32_I_Type i0 hit", false,-1);
        tracep->declBus(c+907,"Balotelli Balotelli_Ex Funct3_RV32_I_Type i0 i", false,-1, 31,0);
        tracep->declBus(c+908,"Balotelli Balotelli_Ex Funct7_RV32_R_Type NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Ex Funct7_RV32_R_Type KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Ex Funct7_RV32_R_Type DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+565,"Balotelli Balotelli_Ex Funct7_RV32_R_Type out", false,-1, 63,0);
        tracep->declBus(c+182,"Balotelli Balotelli_Ex Funct7_RV32_R_Type key", false,-1, 6,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Ex Funct7_RV32_R_Type default_out", false,-1, 63,0);
        tracep->declArray(c+604,"Balotelli Balotelli_Ex Funct7_RV32_R_Type lut", false,-1, 141,0);
        tracep->declBus(c+908,"Balotelli Balotelli_Ex Funct7_RV32_R_Type i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Ex Funct7_RV32_R_Type i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Ex Funct7_RV32_R_Type i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex Funct7_RV32_R_Type i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+565,"Balotelli Balotelli_Ex Funct7_RV32_R_Type i0 out", false,-1, 63,0);
        tracep->declBus(c+182,"Balotelli Balotelli_Ex Funct7_RV32_R_Type i0 key", false,-1, 6,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Ex Funct7_RV32_R_Type i0 default_out", false,-1, 63,0);
        tracep->declArray(c+604,"Balotelli Balotelli_Ex Funct7_RV32_R_Type i0 lut", false,-1, 141,0);
        tracep->declBus(c+899,"Balotelli Balotelli_Ex Funct7_RV32_R_Type i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+609+i*3,"Balotelli Balotelli_Ex Funct7_RV32_R_Type i0 pair_list", true,(i+0), 70,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+615+i*1,"Balotelli Balotelli_Ex Funct7_RV32_R_Type i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+617+i*2,"Balotelli Balotelli_Ex Funct7_RV32_R_Type i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+621,"Balotelli Balotelli_Ex Funct7_RV32_R_Type i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+623,"Balotelli Balotelli_Ex Funct7_RV32_R_Type i0 hit", false,-1);
        tracep->declBus(c+909,"Balotelli Balotelli_Ex Funct7_RV32_R_Type i0 i", false,-1, 31,0);
        tracep->declBus(c+910,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero NR_KEY", false,-1, 31,0);
        tracep->declBus(c+902,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+567,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero out", false,-1, 63,0);
        tracep->declBus(c+181,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero key", false,-1, 2,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero default_out", false,-1, 63,0);
        tracep->declArray(c+624,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero lut", false,-1, 267,0);
        tracep->declBus(c+910,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+902,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+567,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero i0 out", false,-1, 63,0);
        tracep->declBus(c+181,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero i0 key", false,-1, 2,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero i0 default_out", false,-1, 63,0);
        tracep->declArray(c+624,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero i0 lut", false,-1, 267,0);
        tracep->declBus(c+906,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+633+i*3,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+645+i*1,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+649+i*2,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+657,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+659,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero i0 hit", false,-1);
        tracep->declBus(c+911,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_Zero i0 i", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One NR_KEY", false,-1, 31,0);
        tracep->declBus(c+902,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+569,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One out", false,-1, 63,0);
        tracep->declBus(c+181,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One key", false,-1, 2,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One default_out", false,-1, 63,0);
        tracep->declArray(c+660,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One lut", false,-1, 66,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+902,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+569,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One i0 out", false,-1, 63,0);
        tracep->declBus(c+181,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One i0 key", false,-1, 2,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One i0 default_out", false,-1, 63,0);
        tracep->declArray(c+660,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One i0 lut", false,-1, 66,0);
        tracep->declBus(c+906,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+663+i*3,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+666+i*1,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+667+i*2,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+669,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+671,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One i0 hit", false,-1);
        tracep->declBus(c+907,"Balotelli Balotelli_Ex Funct3_RV32_R_Type_One i0 i", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex Funct3_RV64_I_Type NR_KEY", false,-1, 31,0);
        tracep->declBus(c+902,"Balotelli Balotelli_Ex Funct3_RV64_I_Type KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Ex Funct3_RV64_I_Type DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+571,"Balotelli Balotelli_Ex Funct3_RV64_I_Type out", false,-1, 63,0);
        tracep->declBus(c+181,"Balotelli Balotelli_Ex Funct3_RV64_I_Type key", false,-1, 2,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Ex Funct3_RV64_I_Type default_out", false,-1, 63,0);
        tracep->declArray(c+672,"Balotelli Balotelli_Ex Funct3_RV64_I_Type lut", false,-1, 66,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex Funct3_RV64_I_Type i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+902,"Balotelli Balotelli_Ex Funct3_RV64_I_Type i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Ex Funct3_RV64_I_Type i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex Funct3_RV64_I_Type i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+571,"Balotelli Balotelli_Ex Funct3_RV64_I_Type i0 out", false,-1, 63,0);
        tracep->declBus(c+181,"Balotelli Balotelli_Ex Funct3_RV64_I_Type i0 key", false,-1, 2,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Ex Funct3_RV64_I_Type i0 default_out", false,-1, 63,0);
        tracep->declArray(c+672,"Balotelli Balotelli_Ex Funct3_RV64_I_Type i0 lut", false,-1, 66,0);
        tracep->declBus(c+906,"Balotelli Balotelli_Ex Funct3_RV64_I_Type i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+675+i*3,"Balotelli Balotelli_Ex Funct3_RV64_I_Type i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+678+i*1,"Balotelli Balotelli_Ex Funct3_RV64_I_Type i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+679+i*2,"Balotelli Balotelli_Ex Funct3_RV64_I_Type i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+681,"Balotelli Balotelli_Ex Funct3_RV64_I_Type i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+683,"Balotelli Balotelli_Ex Funct3_RV64_I_Type i0 hit", false,-1);
        tracep->declBus(c+907,"Balotelli Balotelli_Ex Funct3_RV64_I_Type i0 i", false,-1, 31,0);
        tracep->declBus(c+908,"Balotelli Balotelli_Ex Funct7_RV64_R_Type NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Ex Funct7_RV64_R_Type KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Ex Funct7_RV64_R_Type DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+573,"Balotelli Balotelli_Ex Funct7_RV64_R_Type out", false,-1, 63,0);
        tracep->declBus(c+182,"Balotelli Balotelli_Ex Funct7_RV64_R_Type key", false,-1, 6,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Ex Funct7_RV64_R_Type default_out", false,-1, 63,0);
        tracep->declArray(c+684,"Balotelli Balotelli_Ex Funct7_RV64_R_Type lut", false,-1, 141,0);
        tracep->declBus(c+908,"Balotelli Balotelli_Ex Funct7_RV64_R_Type i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Ex Funct7_RV64_R_Type i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Ex Funct7_RV64_R_Type i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex Funct7_RV64_R_Type i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+573,"Balotelli Balotelli_Ex Funct7_RV64_R_Type i0 out", false,-1, 63,0);
        tracep->declBus(c+182,"Balotelli Balotelli_Ex Funct7_RV64_R_Type i0 key", false,-1, 6,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Ex Funct7_RV64_R_Type i0 default_out", false,-1, 63,0);
        tracep->declArray(c+684,"Balotelli Balotelli_Ex Funct7_RV64_R_Type i0 lut", false,-1, 141,0);
        tracep->declBus(c+899,"Balotelli Balotelli_Ex Funct7_RV64_R_Type i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+689+i*3,"Balotelli Balotelli_Ex Funct7_RV64_R_Type i0 pair_list", true,(i+0), 70,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+695+i*1,"Balotelli Balotelli_Ex Funct7_RV64_R_Type i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+697+i*2,"Balotelli Balotelli_Ex Funct7_RV64_R_Type i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+701,"Balotelli Balotelli_Ex Funct7_RV64_R_Type i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+703,"Balotelli Balotelli_Ex Funct7_RV64_R_Type i0 hit", false,-1);
        tracep->declBus(c+909,"Balotelli Balotelli_Ex Funct7_RV64_R_Type i0 i", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero NR_KEY", false,-1, 31,0);
        tracep->declBus(c+902,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+575,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero out", false,-1, 63,0);
        tracep->declBus(c+181,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero key", false,-1, 2,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero default_out", false,-1, 63,0);
        tracep->declArray(c+704,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero lut", false,-1, 66,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+902,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+575,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero i0 out", false,-1, 63,0);
        tracep->declBus(c+181,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero i0 key", false,-1, 2,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero i0 default_out", false,-1, 63,0);
        tracep->declArray(c+704,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero i0 lut", false,-1, 66,0);
        tracep->declBus(c+906,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+707+i*3,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+710+i*1,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+711+i*2,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+713,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+715,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero i0 hit", false,-1);
        tracep->declBus(c+907,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_Zero i0 i", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One NR_KEY", false,-1, 31,0);
        tracep->declBus(c+902,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+577,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One out", false,-1, 63,0);
        tracep->declBus(c+181,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One key", false,-1, 2,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One default_out", false,-1, 63,0);
        tracep->declArray(c+716,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One lut", false,-1, 66,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+902,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+577,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One i0 out", false,-1, 63,0);
        tracep->declBus(c+181,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One i0 key", false,-1, 2,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One i0 default_out", false,-1, 63,0);
        tracep->declArray(c+716,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One i0 lut", false,-1, 66,0);
        tracep->declBus(c+906,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+719+i*3,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+722+i*1,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+723+i*2,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+725,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+727,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One i0 hit", false,-1);
        tracep->declBus(c+907,"Balotelli Balotelli_Ex Funct3_RV64_R_Type_One i0 i", false,-1, 31,0);
        tracep->declBus(c+912,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+183,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut out", false,-1, 63,0);
        tracep->declBus(c+180,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut key", false,-1, 6,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut default_out", false,-1, 63,0);
        tracep->declArray(c+728,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut lut", false,-1, 425,0);
        tracep->declBus(c+912,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+183,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut i0 out", false,-1, 63,0);
        tracep->declBus(c+180,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut i0 key", false,-1, 6,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut i0 default_out", false,-1, 63,0);
        tracep->declArray(c+728,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut i0 lut", false,-1, 425,0);
        tracep->declBus(c+899,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declArray(c+742+i*3,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut i0 pair_list", true,(i+0), 70,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+760+i*1,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+766+i*2,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+778,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+780,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut i0 hit", false,-1);
        tracep->declBus(c+913,"Balotelli Balotelli_Ex OpOcde_RdWriteDataOut i0 i", false,-1, 31,0);
        tracep->declBus(c+908,"Balotelli Balotelli_Ex Funct_Environment NR_KEY", false,-1, 31,0);
        tracep->declBus(c+890,"Balotelli Balotelli_Ex Funct_Environment KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+908,"Balotelli Balotelli_Ex Funct_Environment DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+579,"Balotelli Balotelli_Ex Funct_Environment out", false,-1, 1,0);
        tracep->declBus(c+781,"Balotelli Balotelli_Ex Funct_Environment key", false,-1, 11,0);
        tracep->declBus(c+914,"Balotelli Balotelli_Ex Funct_Environment default_out", false,-1, 1,0);
        tracep->declBus(c+915,"Balotelli Balotelli_Ex Funct_Environment lut", false,-1, 27,0);
        tracep->declBus(c+908,"Balotelli Balotelli_Ex Funct_Environment i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+890,"Balotelli Balotelli_Ex Funct_Environment i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+908,"Balotelli Balotelli_Ex Funct_Environment i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex Funct_Environment i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+579,"Balotelli Balotelli_Ex Funct_Environment i0 out", false,-1, 1,0);
        tracep->declBus(c+781,"Balotelli Balotelli_Ex Funct_Environment i0 key", false,-1, 11,0);
        tracep->declBus(c+914,"Balotelli Balotelli_Ex Funct_Environment i0 default_out", false,-1, 1,0);
        tracep->declBus(c+915,"Balotelli Balotelli_Ex Funct_Environment i0 lut", false,-1, 27,0);
        tracep->declBus(c+916,"Balotelli Balotelli_Ex Funct_Environment i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+136+i*1,"Balotelli Balotelli_Ex Funct_Environment i0 pair_list", true,(i+0), 13,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+138+i*1,"Balotelli Balotelli_Ex Funct_Environment i0 key_list", true,(i+0), 11,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+140+i*1,"Balotelli Balotelli_Ex Funct_Environment i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+782,"Balotelli Balotelli_Ex Funct_Environment i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+783,"Balotelli Balotelli_Ex Funct_Environment i0 hit", false,-1);
        tracep->declBus(c+909,"Balotelli Balotelli_Ex Funct_Environment i0 i", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex JumpFlag NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Ex JumpFlag KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex JumpFlag DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+199,"Balotelli Balotelli_Ex JumpFlag out", false,-1, 0,0);
        tracep->declBus(c+180,"Balotelli Balotelli_Ex JumpFlag key", false,-1, 6,0);
        tracep->declBus(c+881,"Balotelli Balotelli_Ex JumpFlag default_out", false,-1, 0,0);
        tracep->declBus(c+917,"Balotelli Balotelli_Ex JumpFlag lut", false,-1, 7,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex JumpFlag i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Ex JumpFlag i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex JumpFlag i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex JumpFlag i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+199,"Balotelli Balotelli_Ex JumpFlag i0 out", false,-1, 0,0);
        tracep->declBus(c+180,"Balotelli Balotelli_Ex JumpFlag i0 key", false,-1, 6,0);
        tracep->declBus(c+881,"Balotelli Balotelli_Ex JumpFlag i0 default_out", false,-1, 0,0);
        tracep->declBus(c+917,"Balotelli Balotelli_Ex JumpFlag i0 lut", false,-1, 7,0);
        tracep->declBus(c+886,"Balotelli Balotelli_Ex JumpFlag i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+142+i*1,"Balotelli Balotelli_Ex JumpFlag i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+143+i*1,"Balotelli Balotelli_Ex JumpFlag i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+144+i*1,"Balotelli Balotelli_Ex JumpFlag i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+784,"Balotelli Balotelli_Ex JumpFlag i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+785,"Balotelli Balotelli_Ex JumpFlag i0 hit", false,-1);
        tracep->declBus(c+907,"Balotelli Balotelli_Ex JumpFlag i0 i", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex JumpAddr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Ex JumpAddr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Ex JumpAddr DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+197,"Balotelli Balotelli_Ex JumpAddr out", false,-1, 63,0);
        tracep->declBus(c+180,"Balotelli Balotelli_Ex JumpAddr key", false,-1, 6,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Ex JumpAddr default_out", false,-1, 63,0);
        tracep->declArray(c+786,"Balotelli Balotelli_Ex JumpAddr lut", false,-1, 70,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex JumpAddr i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+879,"Balotelli Balotelli_Ex JumpAddr i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Ex JumpAddr i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex JumpAddr i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+197,"Balotelli Balotelli_Ex JumpAddr i0 out", false,-1, 63,0);
        tracep->declBus(c+180,"Balotelli Balotelli_Ex JumpAddr i0 key", false,-1, 6,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Ex JumpAddr i0 default_out", false,-1, 63,0);
        tracep->declArray(c+786,"Balotelli Balotelli_Ex JumpAddr i0 lut", false,-1, 70,0);
        tracep->declBus(c+899,"Balotelli Balotelli_Ex JumpAddr i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+789+i*3,"Balotelli Balotelli_Ex JumpAddr i0 pair_list", true,(i+0), 70,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+792+i*1,"Balotelli Balotelli_Ex JumpAddr i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+793+i*2,"Balotelli Balotelli_Ex JumpAddr i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+795,"Balotelli Balotelli_Ex JumpAddr i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+797,"Balotelli Balotelli_Ex JumpAddr i0 hit", false,-1);
        tracep->declBus(c+907,"Balotelli Balotelli_Ex JumpAddr i0 i", false,-1, 31,0);
        tracep->declBit(c+858,"Balotelli Balotelli_Ex2Mem Clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Ex2Mem Rst", false,-1);
        tracep->declQuad(c+183,"Balotelli Balotelli_Ex2Mem RdWriteDataIn", false,-1, 63,0);
        tracep->declBus(c+176,"Balotelli Balotelli_Ex2Mem RdAddrIn", false,-1, 4,0);
        tracep->declBit(c+177,"Balotelli Balotelli_Ex2Mem RdWriteEnableIn", false,-1);
        tracep->declQuad(c+185,"Balotelli Balotelli_Ex2Mem RdWriteDataOut", false,-1, 63,0);
        tracep->declBus(c+187,"Balotelli Balotelli_Ex2Mem RdAddrOut", false,-1, 4,0);
        tracep->declBit(c+188,"Balotelli Balotelli_Ex2Mem RdWriteEnableOut", false,-1);
        tracep->declBus(c+872,"Balotelli Balotelli_Ex2Mem RdWriteData WIDTH", false,-1, 31,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Ex2Mem RdWriteData RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+858,"Balotelli Balotelli_Ex2Mem RdWriteData clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Ex2Mem RdWriteData rst", false,-1);
        tracep->declQuad(c+183,"Balotelli Balotelli_Ex2Mem RdWriteData din", false,-1, 63,0);
        tracep->declQuad(c+185,"Balotelli Balotelli_Ex2Mem RdWriteData dout", false,-1, 63,0);
        tracep->declBit(c+875,"Balotelli Balotelli_Ex2Mem RdWriteData wen", false,-1);
        tracep->declBus(c+888,"Balotelli Balotelli_Ex2Mem RdAddr WIDTH", false,-1, 31,0);
        tracep->declBus(c+889,"Balotelli Balotelli_Ex2Mem RdAddr RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+858,"Balotelli Balotelli_Ex2Mem RdAddr clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Ex2Mem RdAddr rst", false,-1);
        tracep->declBus(c+176,"Balotelli Balotelli_Ex2Mem RdAddr din", false,-1, 4,0);
        tracep->declBus(c+187,"Balotelli Balotelli_Ex2Mem RdAddr dout", false,-1, 4,0);
        tracep->declBit(c+875,"Balotelli Balotelli_Ex2Mem RdAddr wen", false,-1);
        tracep->declBus(c+880,"Balotelli Balotelli_Ex2Mem RdWriteEnable WIDTH", false,-1, 31,0);
        tracep->declBus(c+900,"Balotelli Balotelli_Ex2Mem RdWriteEnable RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+858,"Balotelli Balotelli_Ex2Mem RdWriteEnable clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Ex2Mem RdWriteEnable rst", false,-1);
        tracep->declBus(c+177,"Balotelli Balotelli_Ex2Mem RdWriteEnable din", false,-1, 0,0);
        tracep->declBus(c+188,"Balotelli Balotelli_Ex2Mem RdWriteEnable dout", false,-1, 0,0);
        tracep->declBit(c+875,"Balotelli Balotelli_Ex2Mem RdWriteEnable wen", false,-1);
        tracep->declQuad(c+185,"Balotelli Balotelli_Mem RdWriteDataIn", false,-1, 63,0);
        tracep->declBus(c+187,"Balotelli Balotelli_Mem RdAddrIn", false,-1, 4,0);
        tracep->declBit(c+188,"Balotelli Balotelli_Mem RdWriteEnableIn", false,-1);
        tracep->declQuad(c+185,"Balotelli Balotelli_Mem RdWriteDataOut", false,-1, 63,0);
        tracep->declBus(c+187,"Balotelli Balotelli_Mem RdAddrOut", false,-1, 4,0);
        tracep->declBit(c+188,"Balotelli Balotelli_Mem RdWriteEnableOut", false,-1);
        tracep->declBit(c+858,"Balotelli Balotelli_Mem2Wb Clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Mem2Wb Rst", false,-1);
        tracep->declQuad(c+185,"Balotelli Balotelli_Mem2Wb RdWriteDataIn", false,-1, 63,0);
        tracep->declBus(c+187,"Balotelli Balotelli_Mem2Wb RdAddrIn", false,-1, 4,0);
        tracep->declBit(c+188,"Balotelli Balotelli_Mem2Wb RdWriteEnableIn", false,-1);
        tracep->declQuad(c+151,"Balotelli Balotelli_Mem2Wb RdWriteDataOut", false,-1, 63,0);
        tracep->declBus(c+153,"Balotelli Balotelli_Mem2Wb RdAddrOut", false,-1, 4,0);
        tracep->declBit(c+154,"Balotelli Balotelli_Mem2Wb RdWriteEnableOut", false,-1);
        tracep->declBus(c+872,"Balotelli Balotelli_Mem2Wb RdWriteData WIDTH", false,-1, 31,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Mem2Wb RdWriteData RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+858,"Balotelli Balotelli_Mem2Wb RdWriteData clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Mem2Wb RdWriteData rst", false,-1);
        tracep->declQuad(c+185,"Balotelli Balotelli_Mem2Wb RdWriteData din", false,-1, 63,0);
        tracep->declQuad(c+151,"Balotelli Balotelli_Mem2Wb RdWriteData dout", false,-1, 63,0);
        tracep->declBit(c+875,"Balotelli Balotelli_Mem2Wb RdWriteData wen", false,-1);
        tracep->declBus(c+888,"Balotelli Balotelli_Mem2Wb RdAddr WIDTH", false,-1, 31,0);
        tracep->declBus(c+889,"Balotelli Balotelli_Mem2Wb RdAddr RESET_VAL", false,-1, 4,0);
        tracep->declBit(c+858,"Balotelli Balotelli_Mem2Wb RdAddr clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Mem2Wb RdAddr rst", false,-1);
        tracep->declBus(c+187,"Balotelli Balotelli_Mem2Wb RdAddr din", false,-1, 4,0);
        tracep->declBus(c+153,"Balotelli Balotelli_Mem2Wb RdAddr dout", false,-1, 4,0);
        tracep->declBit(c+875,"Balotelli Balotelli_Mem2Wb RdAddr wen", false,-1);
        tracep->declBus(c+880,"Balotelli Balotelli_Mem2Wb RdWriteEnable WIDTH", false,-1, 31,0);
        tracep->declBus(c+900,"Balotelli Balotelli_Mem2Wb RdWriteEnable RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+858,"Balotelli Balotelli_Mem2Wb RdWriteEnable clk", false,-1);
        tracep->declBit(c+859,"Balotelli Balotelli_Mem2Wb RdWriteEnable rst", false,-1);
        tracep->declBus(c+188,"Balotelli Balotelli_Mem2Wb RdWriteEnable din", false,-1, 0,0);
        tracep->declBus(c+154,"Balotelli Balotelli_Mem2Wb RdWriteEnable dout", false,-1, 0,0);
        tracep->declBit(c+875,"Balotelli Balotelli_Mem2Wb RdWriteEnable wen", false,-1);
        tracep->declQuad(c+185,"Balotelli Balotelli_Fwu RdWriteDataEx2MemIn", false,-1, 63,0);
        tracep->declBus(c+187,"Balotelli Balotelli_Fwu RdAddrEx2MemIn", false,-1, 4,0);
        tracep->declBit(c+188,"Balotelli Balotelli_Fwu RdWriteEnableEx2MemIn", false,-1);
        tracep->declQuad(c+151,"Balotelli Balotelli_Fwu RdWriteDataMem2WbIn", false,-1, 63,0);
        tracep->declBus(c+153,"Balotelli Balotelli_Fwu RdAddrMem2WbIn", false,-1, 4,0);
        tracep->declBit(c+154,"Balotelli Balotelli_Fwu RdWriteEnableMem2WbIn", false,-1);
        tracep->declQuad(c+189,"Balotelli Balotelli_Fwu Rs1ReadDataRegFileIn", false,-1, 63,0);
        tracep->declQuad(c+189,"Balotelli Balotelli_Fwu Rs2ReadDataRegFileIn", false,-1, 63,0);
        tracep->declBus(c+191,"Balotelli Balotelli_Fwu Rs1AddrRegFileIn", false,-1, 4,0);
        tracep->declBus(c+192,"Balotelli Balotelli_Fwu Rs2AddrRegFileIn", false,-1, 4,0);
        tracep->declQuad(c+193,"Balotelli Balotelli_Fwu Rs1ReadDataFwuOut", false,-1, 63,0);
        tracep->declQuad(c+195,"Balotelli Balotelli_Fwu Rs2ReadDataFwuOut", false,-1, 63,0);
        tracep->declBus(c+798,"Balotelli Balotelli_Fwu ForwardA", false,-1, 1,0);
        tracep->declBus(c+799,"Balotelli Balotelli_Fwu ForwardB", false,-1, 1,0);
        tracep->declBus(c+902,"Balotelli Balotelli_Fwu ForwardAChooseDataSource NR_KEY", false,-1, 31,0);
        tracep->declBus(c+908,"Balotelli Balotelli_Fwu ForwardAChooseDataSource KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Fwu ForwardAChooseDataSource DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+193,"Balotelli Balotelli_Fwu ForwardAChooseDataSource out", false,-1, 63,0);
        tracep->declBus(c+798,"Balotelli Balotelli_Fwu ForwardAChooseDataSource key", false,-1, 1,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Fwu ForwardAChooseDataSource default_out", false,-1, 63,0);
        tracep->declArray(c+800,"Balotelli Balotelli_Fwu ForwardAChooseDataSource lut", false,-1, 197,0);
        tracep->declBus(c+902,"Balotelli Balotelli_Fwu ForwardAChooseDataSource i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+908,"Balotelli Balotelli_Fwu ForwardAChooseDataSource i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Fwu ForwardAChooseDataSource i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Fwu ForwardAChooseDataSource i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+193,"Balotelli Balotelli_Fwu ForwardAChooseDataSource i0 out", false,-1, 63,0);
        tracep->declBus(c+798,"Balotelli Balotelli_Fwu ForwardAChooseDataSource i0 key", false,-1, 1,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Fwu ForwardAChooseDataSource i0 default_out", false,-1, 63,0);
        tracep->declArray(c+800,"Balotelli Balotelli_Fwu ForwardAChooseDataSource i0 lut", false,-1, 197,0);
        tracep->declBus(c+918,"Balotelli Balotelli_Fwu ForwardAChooseDataSource i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+807+i*3,"Balotelli Balotelli_Fwu ForwardAChooseDataSource i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+816+i*1,"Balotelli Balotelli_Fwu ForwardAChooseDataSource i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+819+i*2,"Balotelli Balotelli_Fwu ForwardAChooseDataSource i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+825,"Balotelli Balotelli_Fwu ForwardAChooseDataSource i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+827,"Balotelli Balotelli_Fwu ForwardAChooseDataSource i0 hit", false,-1);
        tracep->declBus(c+919,"Balotelli Balotelli_Fwu ForwardAChooseDataSource i0 i", false,-1, 31,0);
        tracep->declBus(c+902,"Balotelli Balotelli_Fwu ForwardBChooseDataSource NR_KEY", false,-1, 31,0);
        tracep->declBus(c+908,"Balotelli Balotelli_Fwu ForwardBChooseDataSource KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Fwu ForwardBChooseDataSource DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+195,"Balotelli Balotelli_Fwu ForwardBChooseDataSource out", false,-1, 63,0);
        tracep->declBus(c+799,"Balotelli Balotelli_Fwu ForwardBChooseDataSource key", false,-1, 1,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Fwu ForwardBChooseDataSource default_out", false,-1, 63,0);
        tracep->declArray(c+828,"Balotelli Balotelli_Fwu ForwardBChooseDataSource lut", false,-1, 197,0);
        tracep->declBus(c+902,"Balotelli Balotelli_Fwu ForwardBChooseDataSource i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+908,"Balotelli Balotelli_Fwu ForwardBChooseDataSource i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+872,"Balotelli Balotelli_Fwu ForwardBChooseDataSource i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Fwu ForwardBChooseDataSource i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+195,"Balotelli Balotelli_Fwu ForwardBChooseDataSource i0 out", false,-1, 63,0);
        tracep->declBus(c+799,"Balotelli Balotelli_Fwu ForwardBChooseDataSource i0 key", false,-1, 1,0);
        tracep->declQuad(c+876,"Balotelli Balotelli_Fwu ForwardBChooseDataSource i0 default_out", false,-1, 63,0);
        tracep->declArray(c+828,"Balotelli Balotelli_Fwu ForwardBChooseDataSource i0 lut", false,-1, 197,0);
        tracep->declBus(c+918,"Balotelli Balotelli_Fwu ForwardBChooseDataSource i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+835+i*3,"Balotelli Balotelli_Fwu ForwardBChooseDataSource i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+844+i*1,"Balotelli Balotelli_Fwu ForwardBChooseDataSource i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+847+i*2,"Balotelli Balotelli_Fwu ForwardBChooseDataSource i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+853,"Balotelli Balotelli_Fwu ForwardBChooseDataSource i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+855,"Balotelli Balotelli_Fwu ForwardBChooseDataSource i0 hit", false,-1);
        tracep->declBus(c+919,"Balotelli Balotelli_Fwu ForwardBChooseDataSource i0 i", false,-1, 31,0);
        tracep->declBit(c+199,"Balotelli Balotelli_Ctrl JumpFlagFromEx", false,-1);
        tracep->declQuad(c+197,"Balotelli Balotelli_Ctrl JumpAddrFromEx", false,-1, 63,0);
        tracep->declQuad(c+197,"Balotelli Balotelli_Ctrl JumpAddrToPc", false,-1, 63,0);
        tracep->declBit(c+199,"Balotelli Balotelli_Ctrl JumpFlagToPc", false,-1);
        tracep->declBit(c+200,"Balotelli Balotelli_Ctrl HoldFlagOut", false,-1);
        tracep->declBus(c+908,"Balotelli Balotelli_Ctrl HoldFlag NR_KEY", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ctrl HoldFlag KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ctrl HoldFlag DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+200,"Balotelli Balotelli_Ctrl HoldFlag out", false,-1, 0,0);
        tracep->declBus(c+199,"Balotelli Balotelli_Ctrl HoldFlag key", false,-1, 0,0);
        tracep->declBus(c+881,"Balotelli Balotelli_Ctrl HoldFlag default_out", false,-1, 0,0);
        tracep->declBus(c+920,"Balotelli Balotelli_Ctrl HoldFlag lut", false,-1, 3,0);
        tracep->declBus(c+908,"Balotelli Balotelli_Ctrl HoldFlag i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ctrl HoldFlag i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ctrl HoldFlag i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+880,"Balotelli Balotelli_Ctrl HoldFlag i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+200,"Balotelli Balotelli_Ctrl HoldFlag i0 out", false,-1, 0,0);
        tracep->declBus(c+199,"Balotelli Balotelli_Ctrl HoldFlag i0 key", false,-1, 0,0);
        tracep->declBus(c+881,"Balotelli Balotelli_Ctrl HoldFlag i0 default_out", false,-1, 0,0);
        tracep->declBus(c+920,"Balotelli Balotelli_Ctrl HoldFlag i0 lut", false,-1, 3,0);
        tracep->declBus(c+908,"Balotelli Balotelli_Ctrl HoldFlag i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+145+i*1,"Balotelli Balotelli_Ctrl HoldFlag i0 pair_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+147+i*1,"Balotelli Balotelli_Ctrl HoldFlag i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+149+i*1,"Balotelli Balotelli_Ctrl HoldFlag i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+856,"Balotelli Balotelli_Ctrl HoldFlag i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+857,"Balotelli Balotelli_Ctrl HoldFlag i0 hit", false,-1);
        tracep->declBus(c+909,"Balotelli Balotelli_Ctrl HoldFlag i0 i", false,-1, 31,0);
    }
}

void VBalotelli___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VBalotelli___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VBalotelli___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VBalotelli___024root__traceRegister(VBalotelli___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBalotelli__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VBalotelli___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VBalotelli___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VBalotelli___024root__traceCleanup, vlSelf);
    }
}

void VBalotelli___024root__traceFullSub0(VBalotelli___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VBalotelli___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VBalotelli___024root* const __restrict vlSelf = static_cast<VBalotelli___024root*>(voidSelf);
    VBalotelli__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VBalotelli___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VBalotelli___024root__traceFullSub0(VBalotelli___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBalotelli__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp1003;
    VlWide<3>/*95:0*/ __Vtemp1004;
    VlWide<3>/*95:0*/ __Vtemp1005;
    VlWide<3>/*95:0*/ __Vtemp1006;
    VlWide<3>/*95:0*/ __Vtemp1007;
    VlWide<3>/*95:0*/ __Vtemp1008;
    VlWide<4>/*127:0*/ __Vtemp1009;
    VlWide<4>/*127:0*/ __Vtemp1010;
    VlWide<4>/*127:0*/ __Vtemp1011;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[0]),8);
        tracep->fullCData(oldp+2,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[1]),8);
        tracep->fullCData(oldp+3,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[2]),8);
        tracep->fullCData(oldp+4,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[3]),8);
        tracep->fullCData(oldp+5,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[4]),8);
        tracep->fullCData(oldp+6,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[5]),8);
        tracep->fullCData(oldp+7,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[6]),8);
        tracep->fullCData(oldp+8,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[7]),8);
        tracep->fullCData(oldp+9,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[8]),8);
        tracep->fullCData(oldp+10,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[9]),8);
        tracep->fullCData(oldp+11,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[10]),8);
        tracep->fullCData(oldp+12,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[11]),8);
        tracep->fullCData(oldp+13,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[12]),8);
        tracep->fullCData(oldp+14,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[13]),8);
        tracep->fullCData(oldp+15,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[14]),8);
        tracep->fullCData(oldp+16,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+17,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+18,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+19,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[3]),7);
        tracep->fullCData(oldp+20,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[4]),7);
        tracep->fullCData(oldp+21,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[5]),7);
        tracep->fullCData(oldp+22,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[6]),7);
        tracep->fullCData(oldp+23,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[7]),7);
        tracep->fullCData(oldp+24,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[8]),7);
        tracep->fullCData(oldp+25,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[9]),7);
        tracep->fullCData(oldp+26,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[10]),7);
        tracep->fullCData(oldp+27,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[11]),7);
        tracep->fullCData(oldp+28,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[12]),7);
        tracep->fullCData(oldp+29,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[13]),7);
        tracep->fullCData(oldp+30,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[14]),7);
        tracep->fullBit(oldp+31,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+32,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+33,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[2]));
        tracep->fullBit(oldp+34,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[3]));
        tracep->fullBit(oldp+35,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[4]));
        tracep->fullBit(oldp+36,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[5]));
        tracep->fullBit(oldp+37,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[6]));
        tracep->fullBit(oldp+38,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[7]));
        tracep->fullBit(oldp+39,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[8]));
        tracep->fullBit(oldp+40,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[9]));
        tracep->fullBit(oldp+41,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[10]));
        tracep->fullBit(oldp+42,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[11]));
        tracep->fullBit(oldp+43,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[12]));
        tracep->fullBit(oldp+44,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[13]));
        tracep->fullBit(oldp+45,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[14]));
        tracep->fullCData(oldp+46,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[0]),8);
        tracep->fullCData(oldp+47,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[1]),8);
        tracep->fullCData(oldp+48,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[2]),8);
        tracep->fullCData(oldp+49,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[3]),8);
        tracep->fullCData(oldp+50,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[4]),8);
        tracep->fullCData(oldp+51,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[5]),8);
        tracep->fullCData(oldp+52,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[6]),8);
        tracep->fullCData(oldp+53,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[7]),8);
        tracep->fullCData(oldp+54,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[8]),8);
        tracep->fullCData(oldp+55,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[9]),8);
        tracep->fullCData(oldp+56,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[10]),8);
        tracep->fullCData(oldp+57,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[11]),8);
        tracep->fullCData(oldp+58,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[12]),8);
        tracep->fullCData(oldp+59,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[13]),8);
        tracep->fullCData(oldp+60,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[14]),8);
        tracep->fullCData(oldp+61,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+62,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+63,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+64,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[3]),7);
        tracep->fullCData(oldp+65,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[4]),7);
        tracep->fullCData(oldp+66,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[5]),7);
        tracep->fullCData(oldp+67,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[6]),7);
        tracep->fullCData(oldp+68,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[7]),7);
        tracep->fullCData(oldp+69,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[8]),7);
        tracep->fullCData(oldp+70,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[9]),7);
        tracep->fullCData(oldp+71,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[10]),7);
        tracep->fullCData(oldp+72,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[11]),7);
        tracep->fullCData(oldp+73,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[12]),7);
        tracep->fullCData(oldp+74,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[13]),7);
        tracep->fullCData(oldp+75,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[14]),7);
        tracep->fullBit(oldp+76,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+77,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+78,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[2]));
        tracep->fullBit(oldp+79,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[3]));
        tracep->fullBit(oldp+80,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[4]));
        tracep->fullBit(oldp+81,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[5]));
        tracep->fullBit(oldp+82,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[6]));
        tracep->fullBit(oldp+83,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[7]));
        tracep->fullBit(oldp+84,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[8]));
        tracep->fullBit(oldp+85,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[9]));
        tracep->fullBit(oldp+86,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[10]));
        tracep->fullBit(oldp+87,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[11]));
        tracep->fullBit(oldp+88,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[12]));
        tracep->fullBit(oldp+89,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[13]));
        tracep->fullBit(oldp+90,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[14]));
        tracep->fullCData(oldp+91,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[0]),8);
        tracep->fullCData(oldp+92,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[1]),8);
        tracep->fullCData(oldp+93,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[2]),8);
        tracep->fullCData(oldp+94,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[3]),8);
        tracep->fullCData(oldp+95,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[4]),8);
        tracep->fullCData(oldp+96,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[5]),8);
        tracep->fullCData(oldp+97,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[6]),8);
        tracep->fullCData(oldp+98,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[7]),8);
        tracep->fullCData(oldp+99,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[8]),8);
        tracep->fullCData(oldp+100,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[9]),8);
        tracep->fullCData(oldp+101,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[10]),8);
        tracep->fullCData(oldp+102,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[11]),8);
        tracep->fullCData(oldp+103,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[12]),8);
        tracep->fullCData(oldp+104,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[13]),8);
        tracep->fullCData(oldp+105,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[14]),8);
        tracep->fullCData(oldp+106,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+107,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+108,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+109,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[3]),7);
        tracep->fullCData(oldp+110,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[4]),7);
        tracep->fullCData(oldp+111,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[5]),7);
        tracep->fullCData(oldp+112,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[6]),7);
        tracep->fullCData(oldp+113,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[7]),7);
        tracep->fullCData(oldp+114,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[8]),7);
        tracep->fullCData(oldp+115,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[9]),7);
        tracep->fullCData(oldp+116,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[10]),7);
        tracep->fullCData(oldp+117,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[11]),7);
        tracep->fullCData(oldp+118,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[12]),7);
        tracep->fullCData(oldp+119,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[13]),7);
        tracep->fullCData(oldp+120,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[14]),7);
        tracep->fullBit(oldp+121,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+122,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+123,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[2]));
        tracep->fullBit(oldp+124,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[3]));
        tracep->fullBit(oldp+125,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[4]));
        tracep->fullBit(oldp+126,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[5]));
        tracep->fullBit(oldp+127,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[6]));
        tracep->fullBit(oldp+128,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[7]));
        tracep->fullBit(oldp+129,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[8]));
        tracep->fullBit(oldp+130,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[9]));
        tracep->fullBit(oldp+131,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[10]));
        tracep->fullBit(oldp+132,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[11]));
        tracep->fullBit(oldp+133,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[12]));
        tracep->fullBit(oldp+134,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[13]));
        tracep->fullBit(oldp+135,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[14]));
        tracep->fullSData(oldp+136,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__pair_list[0]),14);
        tracep->fullSData(oldp+137,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__pair_list[1]),14);
        tracep->fullSData(oldp+138,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__key_list[0]),12);
        tracep->fullSData(oldp+139,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__key_list[1]),12);
        tracep->fullCData(oldp+140,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+141,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+142,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpFlag__DOT__i0__DOT__pair_list[0]),8);
        tracep->fullCData(oldp+143,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpFlag__DOT__i0__DOT__key_list[0]),7);
        tracep->fullBit(oldp+144,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpFlag__DOT__i0__DOT__data_list[0]));
        tracep->fullCData(oldp+145,(vlSelf->Balotelli__DOT__Balotelli_Ctrl__DOT__HoldFlag__DOT__i0__DOT__pair_list[0]),2);
        tracep->fullCData(oldp+146,(vlSelf->Balotelli__DOT__Balotelli_Ctrl__DOT__HoldFlag__DOT__i0__DOT__pair_list[1]),2);
        tracep->fullBit(oldp+147,(vlSelf->Balotelli__DOT__Balotelli_Ctrl__DOT__HoldFlag__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+148,(vlSelf->Balotelli__DOT__Balotelli_Ctrl__DOT__HoldFlag__DOT__i0__DOT__key_list[1]));
        tracep->fullBit(oldp+149,(vlSelf->Balotelli__DOT__Balotelli_Ctrl__DOT__HoldFlag__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+150,(vlSelf->Balotelli__DOT__Balotelli_Ctrl__DOT__HoldFlag__DOT__i0__DOT__data_list[1]));
        tracep->fullQData(oldp+151,(vlSelf->Balotelli__DOT__RdWriteData_RegFileIn),64);
        tracep->fullCData(oldp+153,(vlSelf->Balotelli__DOT__RdAddr_RegFileIn),5);
        tracep->fullBit(oldp+154,(vlSelf->Balotelli__DOT__RdWriteEnable_RegFileIn));
        tracep->fullQData(oldp+155,(((IData)(vlSelf->Balotelli__DOT__Rs1ReadEnable_IdOut)
                                      ? vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf
                                     [vlSelf->Balotelli__DOT__Rs1Addr_IdOut]
                                      : 0ULL)),64);
        tracep->fullQData(oldp+157,(((IData)(vlSelf->Balotelli__DOT__Rs2ReadEnable_IdOut)
                                      ? vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf
                                     [vlSelf->Balotelli__DOT__Rs2Addr_IdOut]
                                      : 0ULL)),64);
        tracep->fullQData(oldp+159,(vlSelf->Balotelli__DOT__Inst_IdIn),64);
        tracep->fullQData(oldp+161,(vlSelf->Balotelli__DOT__InstAddr_IdIn),64);
        tracep->fullCData(oldp+163,(vlSelf->Balotelli__DOT__Rs1Addr_IdOut),5);
        tracep->fullCData(oldp+164,(vlSelf->Balotelli__DOT__Rs2Addr_IdOut),5);
        tracep->fullBit(oldp+165,(vlSelf->Balotelli__DOT__Rs1ReadEnable_IdOut));
        tracep->fullBit(oldp+166,(vlSelf->Balotelli__DOT__Rs2ReadEnable_IdOut));
        tracep->fullCData(oldp+167,(vlSelf->Balotelli__DOT__RdAddr_IdOut),5);
        tracep->fullBit(oldp+168,(vlSelf->Balotelli__DOT__RdWriteEnable_IdOut));
        tracep->fullQData(oldp+169,(vlSelf->Balotelli__DOT__Imm_IdOut),64);
        tracep->fullCData(oldp+171,((0x7fU & (IData)(vlSelf->Balotelli__DOT__Inst_IdIn))),7);
        tracep->fullCData(oldp+172,((7U & (IData)((vlSelf->Balotelli__DOT__Inst_IdIn 
                                                   >> 0xcU)))),3);
        tracep->fullCData(oldp+173,((0x7fU & (IData)(
                                                     (vlSelf->Balotelli__DOT__Inst_IdIn 
                                                      >> 0x19U)))),7);
        tracep->fullQData(oldp+174,(vlSelf->Balotelli__DOT__InstAddr_ExIn),64);
        tracep->fullCData(oldp+176,(vlSelf->Balotelli__DOT__RdAddr_ExIn),5);
        tracep->fullBit(oldp+177,(vlSelf->Balotelli__DOT__RdWriteEnable_ExIn));
        tracep->fullQData(oldp+178,(vlSelf->Balotelli__DOT__Imm_ExIn),64);
        tracep->fullCData(oldp+180,(vlSelf->Balotelli__DOT__OpCode_ExIn),7);
        tracep->fullCData(oldp+181,(vlSelf->Balotelli__DOT__Funct3_ExIn),3);
        tracep->fullCData(oldp+182,(vlSelf->Balotelli__DOT__Funct7_ExIn),7);
        tracep->fullQData(oldp+183,(vlSelf->Balotelli__DOT__RdWriteData_ExOut),64);
        tracep->fullQData(oldp+185,(vlSelf->Balotelli__DOT__RdWriteData_MemIn),64);
        tracep->fullCData(oldp+187,(vlSelf->Balotelli__DOT__RdAddr_MemIn),5);
        tracep->fullBit(oldp+188,(vlSelf->Balotelli__DOT__RdWriteEnable_MemIn));
        tracep->fullQData(oldp+189,(vlSelf->Balotelli__DOT__Rs1ReadData_FwuIn),64);
        tracep->fullCData(oldp+191,(vlSelf->Balotelli__DOT__Rs1Addr_FwuIn),5);
        tracep->fullCData(oldp+192,(vlSelf->Balotelli__DOT__Rs2Addr_FwuIn),5);
        tracep->fullQData(oldp+193,(vlSelf->Balotelli__DOT__Rs1ReadData_FwuOut),64);
        tracep->fullQData(oldp+195,(vlSelf->Balotelli__DOT__Rs2ReadData_FwuOut),64);
        tracep->fullQData(oldp+197,(vlSelf->Balotelli__DOT__JumpAddr_ExOut),64);
        tracep->fullBit(oldp+199,(vlSelf->Balotelli__DOT__JumpFlag_ExOut));
        tracep->fullBit(oldp+200,(vlSelf->Balotelli__DOT__HoldFlag));
        tracep->fullSData(oldp+201,((0xfffU & (IData)(
                                                      (vlSelf->Balotelli__DOT__Inst_IdIn 
                                                       >> 0x14U)))),12);
        tracep->fullSData(oldp+202,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Imm_S_Type),12);
        tracep->fullSData(oldp+203,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Imm_B_Type),12);
        tracep->fullIData(oldp+204,((0xfffffU & (IData)(
                                                        (vlSelf->Balotelli__DOT__Inst_IdIn 
                                                         >> 0xcU)))),20);
        tracep->fullIData(oldp+205,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Imm_J_Type),20);
        tracep->fullBit(oldp+206,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+207,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+208,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__Id_Rs1AddrOut____pinNumber4),180);
        tracep->fullSData(oldp+214,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[0]),12);
        tracep->fullSData(oldp+215,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[1]),12);
        tracep->fullSData(oldp+216,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[2]),12);
        tracep->fullSData(oldp+217,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[3]),12);
        tracep->fullSData(oldp+218,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[4]),12);
        tracep->fullSData(oldp+219,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[5]),12);
        tracep->fullSData(oldp+220,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[6]),12);
        tracep->fullSData(oldp+221,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[7]),12);
        tracep->fullSData(oldp+222,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[8]),12);
        tracep->fullSData(oldp+223,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[9]),12);
        tracep->fullSData(oldp+224,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[10]),12);
        tracep->fullSData(oldp+225,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[11]),12);
        tracep->fullSData(oldp+226,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[12]),12);
        tracep->fullSData(oldp+227,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[13]),12);
        tracep->fullSData(oldp+228,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[14]),12);
        tracep->fullCData(oldp+229,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+230,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+231,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+232,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[3]),7);
        tracep->fullCData(oldp+233,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[4]),7);
        tracep->fullCData(oldp+234,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[5]),7);
        tracep->fullCData(oldp+235,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[6]),7);
        tracep->fullCData(oldp+236,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[7]),7);
        tracep->fullCData(oldp+237,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[8]),7);
        tracep->fullCData(oldp+238,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[9]),7);
        tracep->fullCData(oldp+239,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[10]),7);
        tracep->fullCData(oldp+240,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[11]),7);
        tracep->fullCData(oldp+241,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[12]),7);
        tracep->fullCData(oldp+242,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[13]),7);
        tracep->fullCData(oldp+243,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[14]),7);
        tracep->fullCData(oldp+244,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[0]),5);
        tracep->fullCData(oldp+245,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[1]),5);
        tracep->fullCData(oldp+246,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[2]),5);
        tracep->fullCData(oldp+247,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[3]),5);
        tracep->fullCData(oldp+248,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[4]),5);
        tracep->fullCData(oldp+249,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[5]),5);
        tracep->fullCData(oldp+250,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[6]),5);
        tracep->fullCData(oldp+251,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[7]),5);
        tracep->fullCData(oldp+252,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[8]),5);
        tracep->fullCData(oldp+253,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[9]),5);
        tracep->fullCData(oldp+254,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[10]),5);
        tracep->fullCData(oldp+255,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[11]),5);
        tracep->fullCData(oldp+256,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[12]),5);
        tracep->fullCData(oldp+257,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[13]),5);
        tracep->fullCData(oldp+258,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[14]),5);
        tracep->fullCData(oldp+259,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__lut_out),5);
        tracep->fullBit(oldp+260,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+261,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+262,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+263,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__Id_Rs2AddrOut____pinNumber4),180);
        tracep->fullSData(oldp+269,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[0]),12);
        tracep->fullSData(oldp+270,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[1]),12);
        tracep->fullSData(oldp+271,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[2]),12);
        tracep->fullSData(oldp+272,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[3]),12);
        tracep->fullSData(oldp+273,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[4]),12);
        tracep->fullSData(oldp+274,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[5]),12);
        tracep->fullSData(oldp+275,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[6]),12);
        tracep->fullSData(oldp+276,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[7]),12);
        tracep->fullSData(oldp+277,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[8]),12);
        tracep->fullSData(oldp+278,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[9]),12);
        tracep->fullSData(oldp+279,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[10]),12);
        tracep->fullSData(oldp+280,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[11]),12);
        tracep->fullSData(oldp+281,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[12]),12);
        tracep->fullSData(oldp+282,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[13]),12);
        tracep->fullSData(oldp+283,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[14]),12);
        tracep->fullCData(oldp+284,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+285,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+286,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+287,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[3]),7);
        tracep->fullCData(oldp+288,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[4]),7);
        tracep->fullCData(oldp+289,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[5]),7);
        tracep->fullCData(oldp+290,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[6]),7);
        tracep->fullCData(oldp+291,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[7]),7);
        tracep->fullCData(oldp+292,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[8]),7);
        tracep->fullCData(oldp+293,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[9]),7);
        tracep->fullCData(oldp+294,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[10]),7);
        tracep->fullCData(oldp+295,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[11]),7);
        tracep->fullCData(oldp+296,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[12]),7);
        tracep->fullCData(oldp+297,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[13]),7);
        tracep->fullCData(oldp+298,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[14]),7);
        tracep->fullCData(oldp+299,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[0]),5);
        tracep->fullCData(oldp+300,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[1]),5);
        tracep->fullCData(oldp+301,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[2]),5);
        tracep->fullCData(oldp+302,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[3]),5);
        tracep->fullCData(oldp+303,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[4]),5);
        tracep->fullCData(oldp+304,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[5]),5);
        tracep->fullCData(oldp+305,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[6]),5);
        tracep->fullCData(oldp+306,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[7]),5);
        tracep->fullCData(oldp+307,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[8]),5);
        tracep->fullCData(oldp+308,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[9]),5);
        tracep->fullCData(oldp+309,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[10]),5);
        tracep->fullCData(oldp+310,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[11]),5);
        tracep->fullCData(oldp+311,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[12]),5);
        tracep->fullCData(oldp+312,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[13]),5);
        tracep->fullCData(oldp+313,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[14]),5);
        tracep->fullCData(oldp+314,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__lut_out),5);
        tracep->fullBit(oldp+315,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+316,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+317,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+318,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__Id_RdAddrOut____pinNumber4),180);
        tracep->fullSData(oldp+324,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[0]),12);
        tracep->fullSData(oldp+325,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[1]),12);
        tracep->fullSData(oldp+326,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[2]),12);
        tracep->fullSData(oldp+327,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[3]),12);
        tracep->fullSData(oldp+328,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[4]),12);
        tracep->fullSData(oldp+329,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[5]),12);
        tracep->fullSData(oldp+330,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[6]),12);
        tracep->fullSData(oldp+331,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[7]),12);
        tracep->fullSData(oldp+332,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[8]),12);
        tracep->fullSData(oldp+333,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[9]),12);
        tracep->fullSData(oldp+334,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[10]),12);
        tracep->fullSData(oldp+335,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[11]),12);
        tracep->fullSData(oldp+336,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[12]),12);
        tracep->fullSData(oldp+337,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[13]),12);
        tracep->fullSData(oldp+338,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[14]),12);
        tracep->fullCData(oldp+339,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+340,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+341,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+342,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[3]),7);
        tracep->fullCData(oldp+343,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[4]),7);
        tracep->fullCData(oldp+344,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[5]),7);
        tracep->fullCData(oldp+345,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[6]),7);
        tracep->fullCData(oldp+346,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[7]),7);
        tracep->fullCData(oldp+347,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[8]),7);
        tracep->fullCData(oldp+348,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[9]),7);
        tracep->fullCData(oldp+349,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[10]),7);
        tracep->fullCData(oldp+350,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[11]),7);
        tracep->fullCData(oldp+351,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[12]),7);
        tracep->fullCData(oldp+352,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[13]),7);
        tracep->fullCData(oldp+353,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[14]),7);
        tracep->fullCData(oldp+354,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[0]),5);
        tracep->fullCData(oldp+355,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[1]),5);
        tracep->fullCData(oldp+356,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[2]),5);
        tracep->fullCData(oldp+357,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[3]),5);
        tracep->fullCData(oldp+358,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[4]),5);
        tracep->fullCData(oldp+359,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[5]),5);
        tracep->fullCData(oldp+360,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[6]),5);
        tracep->fullCData(oldp+361,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[7]),5);
        tracep->fullCData(oldp+362,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[8]),5);
        tracep->fullCData(oldp+363,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[9]),5);
        tracep->fullCData(oldp+364,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[10]),5);
        tracep->fullCData(oldp+365,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[11]),5);
        tracep->fullCData(oldp+366,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[12]),5);
        tracep->fullCData(oldp+367,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[13]),5);
        tracep->fullCData(oldp+368,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[14]),5);
        tracep->fullCData(oldp+369,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__lut_out),5);
        tracep->fullBit(oldp+370,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+371,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__Id_Imm____pinNumber4),1065);
        tracep->fullWData(oldp+405,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[0]),71);
        tracep->fullWData(oldp+408,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[1]),71);
        tracep->fullWData(oldp+411,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[2]),71);
        tracep->fullWData(oldp+414,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[3]),71);
        tracep->fullWData(oldp+417,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[4]),71);
        tracep->fullWData(oldp+420,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[5]),71);
        tracep->fullWData(oldp+423,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[6]),71);
        tracep->fullWData(oldp+426,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[7]),71);
        tracep->fullWData(oldp+429,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[8]),71);
        tracep->fullWData(oldp+432,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[9]),71);
        tracep->fullWData(oldp+435,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[10]),71);
        tracep->fullWData(oldp+438,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[11]),71);
        tracep->fullWData(oldp+441,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[12]),71);
        tracep->fullWData(oldp+444,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[13]),71);
        tracep->fullWData(oldp+447,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[14]),71);
        tracep->fullCData(oldp+450,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+451,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+452,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+453,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[3]),7);
        tracep->fullCData(oldp+454,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[4]),7);
        tracep->fullCData(oldp+455,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[5]),7);
        tracep->fullCData(oldp+456,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[6]),7);
        tracep->fullCData(oldp+457,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[7]),7);
        tracep->fullCData(oldp+458,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[8]),7);
        tracep->fullCData(oldp+459,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[9]),7);
        tracep->fullCData(oldp+460,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[10]),7);
        tracep->fullCData(oldp+461,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[11]),7);
        tracep->fullCData(oldp+462,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[12]),7);
        tracep->fullCData(oldp+463,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[13]),7);
        tracep->fullCData(oldp+464,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[14]),7);
        tracep->fullQData(oldp+465,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+467,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+469,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+471,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+473,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+475,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+477,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+479,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+481,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+483,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+485,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+487,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+489,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+491,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+493,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+495,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+497,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+498,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[0]),64);
        tracep->fullQData(oldp+500,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[1]),64);
        tracep->fullQData(oldp+502,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[2]),64);
        tracep->fullQData(oldp+504,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[3]),64);
        tracep->fullQData(oldp+506,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[4]),64);
        tracep->fullQData(oldp+508,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[5]),64);
        tracep->fullQData(oldp+510,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[6]),64);
        tracep->fullQData(oldp+512,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[7]),64);
        tracep->fullQData(oldp+514,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[8]),64);
        tracep->fullQData(oldp+516,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[9]),64);
        tracep->fullQData(oldp+518,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[10]),64);
        tracep->fullQData(oldp+520,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[11]),64);
        tracep->fullQData(oldp+522,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[12]),64);
        tracep->fullQData(oldp+524,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[13]),64);
        tracep->fullQData(oldp+526,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[14]),64);
        tracep->fullQData(oldp+528,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[15]),64);
        tracep->fullQData(oldp+530,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[16]),64);
        tracep->fullQData(oldp+532,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[17]),64);
        tracep->fullQData(oldp+534,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[18]),64);
        tracep->fullQData(oldp+536,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[19]),64);
        tracep->fullQData(oldp+538,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[20]),64);
        tracep->fullQData(oldp+540,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[21]),64);
        tracep->fullQData(oldp+542,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[22]),64);
        tracep->fullQData(oldp+544,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[23]),64);
        tracep->fullQData(oldp+546,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[24]),64);
        tracep->fullQData(oldp+548,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[25]),64);
        tracep->fullQData(oldp+550,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[26]),64);
        tracep->fullQData(oldp+552,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[27]),64);
        tracep->fullQData(oldp+554,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[28]),64);
        tracep->fullQData(oldp+556,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[29]),64);
        tracep->fullQData(oldp+558,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[30]),64);
        tracep->fullQData(oldp+560,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[31]),64);
        tracep->fullIData(oldp+562,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__unnamedblk1__DOT__i),32);
        tracep->fullQData(oldp+563,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_TypeOut),64);
        tracep->fullQData(oldp+565,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_TypeOut),64);
        tracep->fullQData(oldp+567,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_ZeroOut),64);
        tracep->fullQData(oldp+569,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_OneOut),64);
        tracep->fullQData(oldp+571,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_TypeOut),64);
        tracep->fullQData(oldp+573,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_TypeOut),64);
        tracep->fullQData(oldp+575,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_ZeroOut),64);
        tracep->fullQData(oldp+577,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_OneOut),64);
        tracep->fullCData(oldp+579,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__RaiseException),2);
        tracep->fullQData(oldp+580,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__ImmAddRs1ReadData),64);
        tracep->fullQData(oldp+582,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataAddRs2ReadData),64);
        tracep->fullQData(oldp+584,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataSubRs2ReadData),64);
        tracep->fullQData(oldp+586,((vlSelf->Balotelli__DOT__Rs1ReadData_FwuOut 
                                     & vlSelf->Balotelli__DOT__Rs2ReadData_FwuOut)),64);
        tracep->fullQData(oldp+588,((vlSelf->Balotelli__DOT__Rs1ReadData_FwuOut 
                                     | vlSelf->Balotelli__DOT__Rs2ReadData_FwuOut)),64);
        tracep->fullQData(oldp+590,((vlSelf->Balotelli__DOT__Rs1ReadData_FwuOut 
                                     ^ vlSelf->Balotelli__DOT__Rs2ReadData_FwuOut)),64);
        VL_EXTEND_WI(67,32, __Vtemp1003, (IData)(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__ImmAddRs1ReadData));
        tracep->fullWData(oldp+592,(__Vtemp1003),67);
        tracep->fullWData(oldp+595,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_Type__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullCData(oldp+598,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_Type__DOT__i0__DOT__key_list[0]),3);
        tracep->fullQData(oldp+599,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_Type__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+601,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_Type__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+603,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_Type__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+604,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Funct7_RV32_R_Type____pinNumber4),142);
        tracep->fullWData(oldp+609,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__pair_list[0]),71);
        tracep->fullWData(oldp+612,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__pair_list[1]),71);
        tracep->fullCData(oldp+615,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+616,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__key_list[1]),7);
        tracep->fullQData(oldp+617,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+619,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+621,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+623,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+624,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Funct3_RV32_R_Type_Zero____pinNumber4),268);
        tracep->fullWData(oldp+633,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+636,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+639,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+642,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullCData(oldp+645,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+646,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+647,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+648,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__key_list[3]),3);
        tracep->fullQData(oldp+649,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+651,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+653,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+655,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+657,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+659,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__hit));
        VL_EXTEND_WI(67,32, __Vtemp1004, (IData)(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataSubRs2ReadData));
        tracep->fullWData(oldp+660,(__Vtemp1004),67);
        tracep->fullWData(oldp+663,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_One__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullCData(oldp+666,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_One__DOT__i0__DOT__key_list[0]),3);
        tracep->fullQData(oldp+667,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_One__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+669,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_One__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+671,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_One__DOT__i0__DOT__hit));
        VL_EXTEND_WQ(67,64, __Vtemp1005, (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__ImmAddRs1ReadData 
                                                                                >> 0x1fU))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__ImmAddRs1ReadData))));
        tracep->fullWData(oldp+672,(__Vtemp1005),67);
        tracep->fullWData(oldp+675,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_Type__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullCData(oldp+678,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_Type__DOT__i0__DOT__key_list[0]),3);
        tracep->fullQData(oldp+679,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_Type__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+681,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_Type__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+683,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_Type__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+684,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Funct7_RV64_R_Type____pinNumber4),142);
        tracep->fullWData(oldp+689,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__pair_list[0]),71);
        tracep->fullWData(oldp+692,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__pair_list[1]),71);
        tracep->fullCData(oldp+695,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+696,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__key_list[1]),7);
        tracep->fullQData(oldp+697,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+699,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+701,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+703,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__hit));
        VL_EXTEND_WQ(67,64, __Vtemp1006, (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataAddRs2ReadData 
                                                                                >> 0x1fU))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataAddRs2ReadData))));
        tracep->fullWData(oldp+704,(__Vtemp1006),67);
        tracep->fullWData(oldp+707,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_Zero__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullCData(oldp+710,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_Zero__DOT__i0__DOT__key_list[0]),3);
        tracep->fullQData(oldp+711,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_Zero__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+713,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_Zero__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+715,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_Zero__DOT__i0__DOT__hit));
        VL_EXTEND_WQ(67,64, __Vtemp1007, (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataSubRs2ReadData 
                                                                                >> 0x1fU))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataSubRs2ReadData))));
        tracep->fullWData(oldp+716,(__Vtemp1007),67);
        tracep->fullWData(oldp+719,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_One__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullCData(oldp+722,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_One__DOT__i0__DOT__key_list[0]),3);
        tracep->fullQData(oldp+723,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_One__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+725,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_One__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+727,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_One__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+728,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__OpOcde_RdWriteDataOut____pinNumber4),426);
        tracep->fullWData(oldp+742,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__pair_list[0]),71);
        tracep->fullWData(oldp+745,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__pair_list[1]),71);
        tracep->fullWData(oldp+748,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__pair_list[2]),71);
        tracep->fullWData(oldp+751,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__pair_list[3]),71);
        tracep->fullWData(oldp+754,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__pair_list[4]),71);
        tracep->fullWData(oldp+757,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__pair_list[5]),71);
        tracep->fullCData(oldp+760,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+761,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+762,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+763,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__key_list[3]),7);
        tracep->fullCData(oldp+764,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__key_list[4]),7);
        tracep->fullCData(oldp+765,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__key_list[5]),7);
        tracep->fullQData(oldp+766,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+768,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+770,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+772,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+774,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+776,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+778,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+780,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__hit));
        tracep->fullSData(oldp+781,((0xfffU & (IData)(vlSelf->Balotelli__DOT__Imm_ExIn))),12);
        tracep->fullCData(oldp+782,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+783,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+784,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpFlag__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+785,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpFlag__DOT__i0__DOT__hit));
        __Vtemp1008[0U] = (IData)((vlSelf->Balotelli__DOT__InstAddr_ExIn 
                                   + vlSelf->Balotelli__DOT__Imm_ExIn));
        __Vtemp1008[1U] = (IData)(((vlSelf->Balotelli__DOT__InstAddr_ExIn 
                                    + vlSelf->Balotelli__DOT__Imm_ExIn) 
                                   >> 0x20U));
        __Vtemp1008[2U] = 0x6fU;
        tracep->fullWData(oldp+786,(__Vtemp1008),71);
        tracep->fullWData(oldp+789,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpAddr__DOT__i0__DOT__pair_list[0]),71);
        tracep->fullCData(oldp+792,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpAddr__DOT__i0__DOT__key_list[0]),7);
        tracep->fullQData(oldp+793,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpAddr__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+795,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpAddr__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+797,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpAddr__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+798,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardA),2);
        tracep->fullCData(oldp+799,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardB),2);
        tracep->fullWData(oldp+800,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4),198);
        tracep->fullWData(oldp+807,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+810,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+813,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullCData(oldp+816,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+817,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+818,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__key_list[2]),2);
        tracep->fullQData(oldp+819,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+821,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+823,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+825,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+827,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+828,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4),198);
        tracep->fullWData(oldp+835,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+838,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+841,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullCData(oldp+844,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+845,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+846,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__key_list[2]),2);
        tracep->fullQData(oldp+847,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+849,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+851,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+853,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+855,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+856,(vlSelf->Balotelli__DOT__Balotelli_Ctrl__DOT__HoldFlag__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+857,(vlSelf->Balotelli__DOT__Balotelli_Ctrl__DOT__HoldFlag__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+858,(vlSelf->Clk));
        tracep->fullBit(oldp+859,(vlSelf->Rst));
        tracep->fullQData(oldp+860,(vlSelf->InstIn),64);
        tracep->fullQData(oldp+862,(vlSelf->PcOut),64);
        tracep->fullQData(oldp+864,(((IData)(vlSelf->Balotelli__DOT__JumpFlag_ExOut)
                                      ? vlSelf->Balotelli__DOT__JumpAddr_ExOut
                                      : (4ULL + vlSelf->PcOut))),64);
        tracep->fullQData(oldp+866,(vlSelf->Balotelli__DOT__Rs1ReadData_ExIn),64);
        tracep->fullQData(oldp+868,(vlSelf->Balotelli__DOT__Rs2ReadData_ExIn),64);
        tracep->fullBit(oldp+870,(vlSelf->Balotelli__DOT__Rs1ReadEnable_FwuIn));
        tracep->fullBit(oldp+871,(vlSelf->Balotelli__DOT__Rs2ReadEnable_FwuIn));
        tracep->fullIData(oldp+872,(0x40U),32);
        tracep->fullQData(oldp+873,(0x80000000ULL),64);
        tracep->fullBit(oldp+875,(1U));
        tracep->fullQData(oldp+876,(0ULL),64);
        tracep->fullIData(oldp+878,(0xfU),32);
        tracep->fullIData(oldp+879,(7U),32);
        tracep->fullIData(oldp+880,(1U),32);
        tracep->fullBit(oldp+881,(0U));
        __Vtemp1009[0U] = 0x37775fa7U;
        __Vtemp1009[1U] = 0x27671fe7U;
        __Vtemp1009[2U] = 0xcfc70746U;
        __Vtemp1009[3U] = 0x6e2edeU;
        tracep->fullWData(oldp+882,(__Vtemp1009),120);
        tracep->fullIData(oldp+886,(8U),32);
        tracep->fullIData(oldp+887,(0xfU),32);
        tracep->fullIData(oldp+888,(5U),32);
        tracep->fullCData(oldp+889,(0U),5);
        tracep->fullIData(oldp+890,(0xcU),32);
        __Vtemp1010[0U] = 0x36775fa7U;
        __Vtemp1010[1U] = 0x26671fe6U;
        __Vtemp1010[2U] = 0xcec70647U;
        __Vtemp1010[3U] = 0x6e2edeU;
        tracep->fullWData(oldp+891,(__Vtemp1010),120);
        __Vtemp1011[0U] = 0x37775fa7U;
        __Vtemp1011[1U] = 0x27671fe7U;
        __Vtemp1011[2U] = 0xcfc60746U;
        __Vtemp1011[3U] = 0x6f2fdfU;
        tracep->fullWData(oldp+895,(__Vtemp1011),120);
        tracep->fullIData(oldp+899,(0x47U),32);
        tracep->fullBit(oldp+900,(0U));
        tracep->fullCData(oldp+901,(0U),7);
        tracep->fullIData(oldp+902,(3U),32);
        tracep->fullCData(oldp+903,(0U),3);
        tracep->fullCData(oldp+904,(1U),2);
        tracep->fullCData(oldp+905,(2U),2);
        tracep->fullIData(oldp+906,(0x43U),32);
        tracep->fullIData(oldp+907,(1U),32);
        tracep->fullIData(oldp+908,(2U),32);
        tracep->fullIData(oldp+909,(2U),32);
        tracep->fullIData(oldp+910,(4U),32);
        tracep->fullIData(oldp+911,(4U),32);
        tracep->fullIData(oldp+912,(6U),32);
        tracep->fullIData(oldp+913,(6U),32);
        tracep->fullCData(oldp+914,(0U),2);
        tracep->fullIData(oldp+915,(0x14002U),28);
        tracep->fullIData(oldp+916,(0xeU),32);
        tracep->fullCData(oldp+917,(0xdfU),8);
        tracep->fullIData(oldp+918,(0x42U),32);
        tracep->fullIData(oldp+919,(3U),32);
        tracep->fullCData(oldp+920,(0xcU),4);
    }
}
