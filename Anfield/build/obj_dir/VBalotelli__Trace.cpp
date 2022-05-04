// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBalotelli__Syms.h"


void VBalotelli___024root__traceChgSub0(VBalotelli___024root* vlSelf, VerilatedVcd* tracep);

void VBalotelli___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VBalotelli___024root* const __restrict vlSelf = static_cast<VBalotelli___024root*>(voidSelf);
    VBalotelli__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VBalotelli___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VBalotelli___024root__traceChgSub0(VBalotelli___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBalotelli__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp470;
    VlWide<3>/*95:0*/ __Vtemp471;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[0]),8);
            tracep->chgCData(oldp+1,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[1]),8);
            tracep->chgCData(oldp+2,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[2]),8);
            tracep->chgCData(oldp+3,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[3]),8);
            tracep->chgCData(oldp+4,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[4]),8);
            tracep->chgCData(oldp+5,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[5]),8);
            tracep->chgCData(oldp+6,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[6]),8);
            tracep->chgCData(oldp+7,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[7]),8);
            tracep->chgCData(oldp+8,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[8]),8);
            tracep->chgCData(oldp+9,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[9]),8);
            tracep->chgCData(oldp+10,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[10]),8);
            tracep->chgCData(oldp+11,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+12,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+13,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+14,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+15,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+16,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[5]),7);
            tracep->chgCData(oldp+17,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[6]),7);
            tracep->chgCData(oldp+18,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[7]),7);
            tracep->chgCData(oldp+19,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[8]),7);
            tracep->chgCData(oldp+20,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[9]),7);
            tracep->chgCData(oldp+21,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[10]),7);
            tracep->chgBit(oldp+22,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+23,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+24,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[2]));
            tracep->chgBit(oldp+25,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[3]));
            tracep->chgBit(oldp+26,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[4]));
            tracep->chgBit(oldp+27,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[5]));
            tracep->chgBit(oldp+28,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[6]));
            tracep->chgBit(oldp+29,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[7]));
            tracep->chgBit(oldp+30,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[8]));
            tracep->chgBit(oldp+31,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[9]));
            tracep->chgBit(oldp+32,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[10]));
            tracep->chgCData(oldp+33,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[0]),8);
            tracep->chgCData(oldp+34,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[1]),8);
            tracep->chgCData(oldp+35,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[2]),8);
            tracep->chgCData(oldp+36,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[3]),8);
            tracep->chgCData(oldp+37,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[4]),8);
            tracep->chgCData(oldp+38,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[5]),8);
            tracep->chgCData(oldp+39,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[6]),8);
            tracep->chgCData(oldp+40,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[7]),8);
            tracep->chgCData(oldp+41,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[8]),8);
            tracep->chgCData(oldp+42,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[9]),8);
            tracep->chgCData(oldp+43,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[10]),8);
            tracep->chgCData(oldp+44,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+45,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+46,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+47,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+48,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+49,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[5]),7);
            tracep->chgCData(oldp+50,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[6]),7);
            tracep->chgCData(oldp+51,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[7]),7);
            tracep->chgCData(oldp+52,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[8]),7);
            tracep->chgCData(oldp+53,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[9]),7);
            tracep->chgCData(oldp+54,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[10]),7);
            tracep->chgBit(oldp+55,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+56,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+57,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[2]));
            tracep->chgBit(oldp+58,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[3]));
            tracep->chgBit(oldp+59,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[4]));
            tracep->chgBit(oldp+60,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[5]));
            tracep->chgBit(oldp+61,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[6]));
            tracep->chgBit(oldp+62,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[7]));
            tracep->chgBit(oldp+63,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[8]));
            tracep->chgBit(oldp+64,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[9]));
            tracep->chgBit(oldp+65,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[10]));
            tracep->chgCData(oldp+66,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[0]),8);
            tracep->chgCData(oldp+67,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[1]),8);
            tracep->chgCData(oldp+68,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[2]),8);
            tracep->chgCData(oldp+69,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[3]),8);
            tracep->chgCData(oldp+70,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[4]),8);
            tracep->chgCData(oldp+71,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[5]),8);
            tracep->chgCData(oldp+72,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[6]),8);
            tracep->chgCData(oldp+73,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[7]),8);
            tracep->chgCData(oldp+74,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[8]),8);
            tracep->chgCData(oldp+75,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[9]),8);
            tracep->chgCData(oldp+76,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[10]),8);
            tracep->chgCData(oldp+77,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+78,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+79,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+80,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+81,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+82,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[5]),7);
            tracep->chgCData(oldp+83,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[6]),7);
            tracep->chgCData(oldp+84,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[7]),7);
            tracep->chgCData(oldp+85,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[8]),7);
            tracep->chgCData(oldp+86,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[9]),7);
            tracep->chgCData(oldp+87,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[10]),7);
            tracep->chgBit(oldp+88,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+89,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+90,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[2]));
            tracep->chgBit(oldp+91,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[3]));
            tracep->chgBit(oldp+92,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[4]));
            tracep->chgBit(oldp+93,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[5]));
            tracep->chgBit(oldp+94,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[6]));
            tracep->chgBit(oldp+95,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[7]));
            tracep->chgBit(oldp+96,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[8]));
            tracep->chgBit(oldp+97,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[9]));
            tracep->chgBit(oldp+98,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[10]));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+99,(vlSelf->Balotelli__DOT__RdWriteData_RegFileIn),64);
            tracep->chgCData(oldp+101,(vlSelf->Balotelli__DOT__RdAddr_RegFileIn),5);
            tracep->chgBit(oldp+102,(vlSelf->Balotelli__DOT__RdWriteEnable_RegFileIn));
            tracep->chgQData(oldp+103,(((IData)(vlSelf->Balotelli__DOT__Rs1ReadEnable_IdOut)
                                         ? vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf
                                        [vlSelf->Balotelli__DOT__Rs1Addr_IdOut]
                                         : 0ULL)),64);
            tracep->chgQData(oldp+105,(((IData)(vlSelf->Balotelli__DOT__Rs2ReadEnable_IdOut)
                                         ? vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf
                                        [vlSelf->Balotelli__DOT__Rs2Addr_IdOut]
                                         : 0ULL)),64);
            tracep->chgQData(oldp+107,(vlSelf->Balotelli__DOT__Inst_IdIn),64);
            tracep->chgQData(oldp+109,(vlSelf->Balotelli__DOT__InstAddr_IdIn),64);
            tracep->chgCData(oldp+111,(vlSelf->Balotelli__DOT__Rs1Addr_IdOut),5);
            tracep->chgCData(oldp+112,(vlSelf->Balotelli__DOT__Rs2Addr_IdOut),5);
            tracep->chgBit(oldp+113,(vlSelf->Balotelli__DOT__Rs1ReadEnable_IdOut));
            tracep->chgBit(oldp+114,(vlSelf->Balotelli__DOT__Rs2ReadEnable_IdOut));
            tracep->chgCData(oldp+115,(vlSelf->Balotelli__DOT__RdAddr_IdOut),5);
            tracep->chgBit(oldp+116,(vlSelf->Balotelli__DOT__RdWriteEnable_IdOut));
            tracep->chgQData(oldp+117,(vlSelf->Balotelli__DOT__Imm_IdOut),64);
            tracep->chgCData(oldp+119,((0x7fU & (IData)(vlSelf->Balotelli__DOT__Inst_IdIn))),7);
            tracep->chgCData(oldp+120,((7U & (IData)(
                                                     (vlSelf->Balotelli__DOT__Inst_IdIn 
                                                      >> 0xcU)))),3);
            tracep->chgCData(oldp+121,((0x7fU & (IData)(
                                                        (vlSelf->Balotelli__DOT__Inst_IdIn 
                                                         >> 0x19U)))),7);
            tracep->chgQData(oldp+122,(vlSelf->Balotelli__DOT__InstAddr_ExIn),64);
            tracep->chgCData(oldp+124,(vlSelf->Balotelli__DOT__RdAddr_ExIn),5);
            tracep->chgBit(oldp+125,(vlSelf->Balotelli__DOT__RdWriteEnable_ExIn));
            tracep->chgQData(oldp+126,(vlSelf->Balotelli__DOT__Rs1ReadData_ExIn),64);
            tracep->chgQData(oldp+128,(vlSelf->Balotelli__DOT__Rs2ReadData_ExIn),64);
            tracep->chgQData(oldp+130,(vlSelf->Balotelli__DOT__Imm_ExIn),64);
            tracep->chgCData(oldp+132,(vlSelf->Balotelli__DOT__OpCode_ExIn),7);
            tracep->chgCData(oldp+133,(vlSelf->Balotelli__DOT__Funct3_ExIn),3);
            tracep->chgCData(oldp+134,(vlSelf->Balotelli__DOT__Funct7_ExIn),7);
            tracep->chgQData(oldp+135,(vlSelf->Balotelli__DOT__RdWriteData_ExOut),64);
            tracep->chgQData(oldp+137,(vlSelf->Balotelli__DOT__RdWriteData_MemIn),64);
            tracep->chgCData(oldp+139,(vlSelf->Balotelli__DOT__RdAddr_MemIn),5);
            tracep->chgBit(oldp+140,(vlSelf->Balotelli__DOT__RdWriteEnable_MemIn));
            tracep->chgSData(oldp+141,((0xfffU & (IData)(
                                                         (vlSelf->Balotelli__DOT__Inst_IdIn 
                                                          >> 0x14U)))),12);
            tracep->chgSData(oldp+142,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Imm_S_type),12);
            tracep->chgSData(oldp+143,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Imm_B_type),12);
            tracep->chgIData(oldp+144,((0xfffffU & (IData)(
                                                           (vlSelf->Balotelli__DOT__Inst_IdIn 
                                                            >> 0xcU)))),20);
            tracep->chgIData(oldp+145,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Imm_J_type),20);
            tracep->chgBit(oldp+146,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+147,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+148,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__Id_Rs1AddrOut____pinNumber4),132);
            tracep->chgSData(oldp+153,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[0]),12);
            tracep->chgSData(oldp+154,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[1]),12);
            tracep->chgSData(oldp+155,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[2]),12);
            tracep->chgSData(oldp+156,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[3]),12);
            tracep->chgSData(oldp+157,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[4]),12);
            tracep->chgSData(oldp+158,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[5]),12);
            tracep->chgSData(oldp+159,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[6]),12);
            tracep->chgSData(oldp+160,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[7]),12);
            tracep->chgSData(oldp+161,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[8]),12);
            tracep->chgSData(oldp+162,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[9]),12);
            tracep->chgSData(oldp+163,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[10]),12);
            tracep->chgCData(oldp+164,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+165,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+166,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+167,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+168,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+169,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[5]),7);
            tracep->chgCData(oldp+170,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[6]),7);
            tracep->chgCData(oldp+171,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[7]),7);
            tracep->chgCData(oldp+172,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[8]),7);
            tracep->chgCData(oldp+173,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[9]),7);
            tracep->chgCData(oldp+174,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[10]),7);
            tracep->chgCData(oldp+175,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[0]),5);
            tracep->chgCData(oldp+176,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[1]),5);
            tracep->chgCData(oldp+177,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[2]),5);
            tracep->chgCData(oldp+178,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[3]),5);
            tracep->chgCData(oldp+179,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[4]),5);
            tracep->chgCData(oldp+180,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[5]),5);
            tracep->chgCData(oldp+181,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[6]),5);
            tracep->chgCData(oldp+182,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[7]),5);
            tracep->chgCData(oldp+183,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[8]),5);
            tracep->chgCData(oldp+184,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[9]),5);
            tracep->chgCData(oldp+185,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[10]),5);
            tracep->chgCData(oldp+186,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__lut_out),5);
            tracep->chgBit(oldp+187,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+188,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+189,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+190,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__Id_Rs2AddrOut____pinNumber4),132);
            tracep->chgSData(oldp+195,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[0]),12);
            tracep->chgSData(oldp+196,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[1]),12);
            tracep->chgSData(oldp+197,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[2]),12);
            tracep->chgSData(oldp+198,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[3]),12);
            tracep->chgSData(oldp+199,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[4]),12);
            tracep->chgSData(oldp+200,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[5]),12);
            tracep->chgSData(oldp+201,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[6]),12);
            tracep->chgSData(oldp+202,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[7]),12);
            tracep->chgSData(oldp+203,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[8]),12);
            tracep->chgSData(oldp+204,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[9]),12);
            tracep->chgSData(oldp+205,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[10]),12);
            tracep->chgCData(oldp+206,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+207,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+208,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+209,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+210,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+211,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[5]),7);
            tracep->chgCData(oldp+212,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[6]),7);
            tracep->chgCData(oldp+213,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[7]),7);
            tracep->chgCData(oldp+214,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[8]),7);
            tracep->chgCData(oldp+215,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[9]),7);
            tracep->chgCData(oldp+216,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[10]),7);
            tracep->chgCData(oldp+217,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[0]),5);
            tracep->chgCData(oldp+218,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[1]),5);
            tracep->chgCData(oldp+219,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[2]),5);
            tracep->chgCData(oldp+220,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[3]),5);
            tracep->chgCData(oldp+221,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[4]),5);
            tracep->chgCData(oldp+222,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[5]),5);
            tracep->chgCData(oldp+223,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[6]),5);
            tracep->chgCData(oldp+224,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[7]),5);
            tracep->chgCData(oldp+225,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[8]),5);
            tracep->chgCData(oldp+226,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[9]),5);
            tracep->chgCData(oldp+227,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[10]),5);
            tracep->chgCData(oldp+228,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__lut_out),5);
            tracep->chgBit(oldp+229,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+230,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+231,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+232,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__Id_RdAddrOut____pinNumber4),132);
            tracep->chgSData(oldp+237,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[0]),12);
            tracep->chgSData(oldp+238,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[1]),12);
            tracep->chgSData(oldp+239,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[2]),12);
            tracep->chgSData(oldp+240,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[3]),12);
            tracep->chgSData(oldp+241,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[4]),12);
            tracep->chgSData(oldp+242,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[5]),12);
            tracep->chgSData(oldp+243,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[6]),12);
            tracep->chgSData(oldp+244,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[7]),12);
            tracep->chgSData(oldp+245,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[8]),12);
            tracep->chgSData(oldp+246,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[9]),12);
            tracep->chgSData(oldp+247,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[10]),12);
            tracep->chgCData(oldp+248,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+249,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+250,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+251,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+252,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+253,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[5]),7);
            tracep->chgCData(oldp+254,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[6]),7);
            tracep->chgCData(oldp+255,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[7]),7);
            tracep->chgCData(oldp+256,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[8]),7);
            tracep->chgCData(oldp+257,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[9]),7);
            tracep->chgCData(oldp+258,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[10]),7);
            tracep->chgCData(oldp+259,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[0]),5);
            tracep->chgCData(oldp+260,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[1]),5);
            tracep->chgCData(oldp+261,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[2]),5);
            tracep->chgCData(oldp+262,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[3]),5);
            tracep->chgCData(oldp+263,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[4]),5);
            tracep->chgCData(oldp+264,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[5]),5);
            tracep->chgCData(oldp+265,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[6]),5);
            tracep->chgCData(oldp+266,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[7]),5);
            tracep->chgCData(oldp+267,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[8]),5);
            tracep->chgCData(oldp+268,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[9]),5);
            tracep->chgCData(oldp+269,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[10]),5);
            tracep->chgCData(oldp+270,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__lut_out),5);
            tracep->chgBit(oldp+271,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+272,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__Id_Imm____pinNumber4),781);
            tracep->chgWData(oldp+297,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgWData(oldp+300,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[1]),71);
            tracep->chgWData(oldp+303,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[2]),71);
            tracep->chgWData(oldp+306,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[3]),71);
            tracep->chgWData(oldp+309,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[4]),71);
            tracep->chgWData(oldp+312,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[5]),71);
            tracep->chgWData(oldp+315,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[6]),71);
            tracep->chgWData(oldp+318,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[7]),71);
            tracep->chgWData(oldp+321,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[8]),71);
            tracep->chgWData(oldp+324,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[9]),71);
            tracep->chgWData(oldp+327,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[10]),71);
            tracep->chgCData(oldp+330,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+331,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+332,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+333,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+334,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+335,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[5]),7);
            tracep->chgCData(oldp+336,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[6]),7);
            tracep->chgCData(oldp+337,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[7]),7);
            tracep->chgCData(oldp+338,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[8]),7);
            tracep->chgCData(oldp+339,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[9]),7);
            tracep->chgCData(oldp+340,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[10]),7);
            tracep->chgQData(oldp+341,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+343,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+345,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+347,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+349,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+351,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+353,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+355,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+357,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+359,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+361,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+363,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+365,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+366,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[0]),64);
            tracep->chgQData(oldp+368,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[1]),64);
            tracep->chgQData(oldp+370,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[2]),64);
            tracep->chgQData(oldp+372,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[3]),64);
            tracep->chgQData(oldp+374,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[4]),64);
            tracep->chgQData(oldp+376,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[5]),64);
            tracep->chgQData(oldp+378,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[6]),64);
            tracep->chgQData(oldp+380,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[7]),64);
            tracep->chgQData(oldp+382,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[8]),64);
            tracep->chgQData(oldp+384,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[9]),64);
            tracep->chgQData(oldp+386,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[10]),64);
            tracep->chgQData(oldp+388,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[11]),64);
            tracep->chgQData(oldp+390,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[12]),64);
            tracep->chgQData(oldp+392,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[13]),64);
            tracep->chgQData(oldp+394,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[14]),64);
            tracep->chgQData(oldp+396,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[15]),64);
            tracep->chgQData(oldp+398,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[16]),64);
            tracep->chgQData(oldp+400,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[17]),64);
            tracep->chgQData(oldp+402,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[18]),64);
            tracep->chgQData(oldp+404,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[19]),64);
            tracep->chgQData(oldp+406,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[20]),64);
            tracep->chgQData(oldp+408,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[21]),64);
            tracep->chgQData(oldp+410,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[22]),64);
            tracep->chgQData(oldp+412,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[23]),64);
            tracep->chgQData(oldp+414,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[24]),64);
            tracep->chgQData(oldp+416,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[25]),64);
            tracep->chgQData(oldp+418,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[26]),64);
            tracep->chgQData(oldp+420,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[27]),64);
            tracep->chgQData(oldp+422,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[28]),64);
            tracep->chgQData(oldp+424,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[29]),64);
            tracep->chgQData(oldp+426,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[30]),64);
            tracep->chgQData(oldp+428,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[31]),64);
            tracep->chgIData(oldp+430,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__unnamedblk1__DOT__i),32);
            tracep->chgQData(oldp+431,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_I_typeOut),64);
            VL_EXTEND_WQ(67,64, __Vtemp470, (vlSelf->Balotelli__DOT__Imm_ExIn 
                                             + vlSelf->Balotelli__DOT__Rs1ReadData_ExIn));
            tracep->chgWData(oldp+433,(__Vtemp470),67);
            tracep->chgWData(oldp+436,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_I_type__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgCData(oldp+439,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_I_type__DOT__i0__DOT__key_list[0]),3);
            tracep->chgQData(oldp+440,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_I_type__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+442,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_I_type__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+444,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_I_type__DOT__i0__DOT__hit));
            __Vtemp471[0U] = (IData)(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_I_typeOut);
            __Vtemp471[1U] = (IData)((vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_I_typeOut 
                                      >> 0x20U));
            __Vtemp471[2U] = 0x13U;
            tracep->chgWData(oldp+445,(__Vtemp471),71);
            tracep->chgWData(oldp+448,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgCData(oldp+451,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__key_list[0]),7);
            tracep->chgQData(oldp+452,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+454,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+456,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__hit));
        }
        tracep->chgBit(oldp+457,(vlSelf->Clk));
        tracep->chgBit(oldp+458,(vlSelf->Rst));
        tracep->chgQData(oldp+459,(vlSelf->InstIn),64);
        tracep->chgQData(oldp+461,(vlSelf->PcOut),64);
        tracep->chgQData(oldp+463,((4ULL + vlSelf->PcOut)),64);
    }
}

void VBalotelli___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VBalotelli___024root* const __restrict vlSelf = static_cast<VBalotelli___024root*>(voidSelf);
    VBalotelli__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
