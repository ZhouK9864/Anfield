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
    VlWide<3>/*95:0*/ __Vtemp1012;
    VlWide<3>/*95:0*/ __Vtemp1013;
    VlWide<3>/*95:0*/ __Vtemp1014;
    VlWide<3>/*95:0*/ __Vtemp1015;
    VlWide<3>/*95:0*/ __Vtemp1016;
    VlWide<3>/*95:0*/ __Vtemp1017;
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
            tracep->chgCData(oldp+11,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[11]),8);
            tracep->chgCData(oldp+12,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[12]),8);
            tracep->chgCData(oldp+13,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[13]),8);
            tracep->chgCData(oldp+14,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__pair_list[14]),8);
            tracep->chgCData(oldp+15,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+16,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+17,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+18,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+19,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+20,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[5]),7);
            tracep->chgCData(oldp+21,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[6]),7);
            tracep->chgCData(oldp+22,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[7]),7);
            tracep->chgCData(oldp+23,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[8]),7);
            tracep->chgCData(oldp+24,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[9]),7);
            tracep->chgCData(oldp+25,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[10]),7);
            tracep->chgCData(oldp+26,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[11]),7);
            tracep->chgCData(oldp+27,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[12]),7);
            tracep->chgCData(oldp+28,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[13]),7);
            tracep->chgCData(oldp+29,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__key_list[14]),7);
            tracep->chgBit(oldp+30,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+31,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+32,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[2]));
            tracep->chgBit(oldp+33,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[3]));
            tracep->chgBit(oldp+34,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[4]));
            tracep->chgBit(oldp+35,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[5]));
            tracep->chgBit(oldp+36,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[6]));
            tracep->chgBit(oldp+37,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[7]));
            tracep->chgBit(oldp+38,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[8]));
            tracep->chgBit(oldp+39,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[9]));
            tracep->chgBit(oldp+40,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[10]));
            tracep->chgBit(oldp+41,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[11]));
            tracep->chgBit(oldp+42,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[12]));
            tracep->chgBit(oldp+43,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[13]));
            tracep->chgBit(oldp+44,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__data_list[14]));
            tracep->chgCData(oldp+45,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[0]),8);
            tracep->chgCData(oldp+46,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[1]),8);
            tracep->chgCData(oldp+47,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[2]),8);
            tracep->chgCData(oldp+48,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[3]),8);
            tracep->chgCData(oldp+49,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[4]),8);
            tracep->chgCData(oldp+50,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[5]),8);
            tracep->chgCData(oldp+51,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[6]),8);
            tracep->chgCData(oldp+52,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[7]),8);
            tracep->chgCData(oldp+53,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[8]),8);
            tracep->chgCData(oldp+54,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[9]),8);
            tracep->chgCData(oldp+55,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[10]),8);
            tracep->chgCData(oldp+56,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[11]),8);
            tracep->chgCData(oldp+57,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[12]),8);
            tracep->chgCData(oldp+58,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[13]),8);
            tracep->chgCData(oldp+59,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__pair_list[14]),8);
            tracep->chgCData(oldp+60,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+61,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+62,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+63,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+64,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+65,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[5]),7);
            tracep->chgCData(oldp+66,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[6]),7);
            tracep->chgCData(oldp+67,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[7]),7);
            tracep->chgCData(oldp+68,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[8]),7);
            tracep->chgCData(oldp+69,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[9]),7);
            tracep->chgCData(oldp+70,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[10]),7);
            tracep->chgCData(oldp+71,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[11]),7);
            tracep->chgCData(oldp+72,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[12]),7);
            tracep->chgCData(oldp+73,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[13]),7);
            tracep->chgCData(oldp+74,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__key_list[14]),7);
            tracep->chgBit(oldp+75,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+76,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+77,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[2]));
            tracep->chgBit(oldp+78,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[3]));
            tracep->chgBit(oldp+79,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[4]));
            tracep->chgBit(oldp+80,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[5]));
            tracep->chgBit(oldp+81,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[6]));
            tracep->chgBit(oldp+82,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[7]));
            tracep->chgBit(oldp+83,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[8]));
            tracep->chgBit(oldp+84,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[9]));
            tracep->chgBit(oldp+85,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[10]));
            tracep->chgBit(oldp+86,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[11]));
            tracep->chgBit(oldp+87,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[12]));
            tracep->chgBit(oldp+88,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[13]));
            tracep->chgBit(oldp+89,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__data_list[14]));
            tracep->chgCData(oldp+90,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[0]),8);
            tracep->chgCData(oldp+91,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[1]),8);
            tracep->chgCData(oldp+92,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[2]),8);
            tracep->chgCData(oldp+93,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[3]),8);
            tracep->chgCData(oldp+94,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[4]),8);
            tracep->chgCData(oldp+95,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[5]),8);
            tracep->chgCData(oldp+96,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[6]),8);
            tracep->chgCData(oldp+97,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[7]),8);
            tracep->chgCData(oldp+98,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[8]),8);
            tracep->chgCData(oldp+99,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[9]),8);
            tracep->chgCData(oldp+100,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[10]),8);
            tracep->chgCData(oldp+101,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[11]),8);
            tracep->chgCData(oldp+102,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[12]),8);
            tracep->chgCData(oldp+103,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[13]),8);
            tracep->chgCData(oldp+104,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__pair_list[14]),8);
            tracep->chgCData(oldp+105,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+106,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+107,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+108,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+109,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+110,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[5]),7);
            tracep->chgCData(oldp+111,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[6]),7);
            tracep->chgCData(oldp+112,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[7]),7);
            tracep->chgCData(oldp+113,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[8]),7);
            tracep->chgCData(oldp+114,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[9]),7);
            tracep->chgCData(oldp+115,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[10]),7);
            tracep->chgCData(oldp+116,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[11]),7);
            tracep->chgCData(oldp+117,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[12]),7);
            tracep->chgCData(oldp+118,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[13]),7);
            tracep->chgCData(oldp+119,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__key_list[14]),7);
            tracep->chgBit(oldp+120,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+121,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+122,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[2]));
            tracep->chgBit(oldp+123,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[3]));
            tracep->chgBit(oldp+124,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[4]));
            tracep->chgBit(oldp+125,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[5]));
            tracep->chgBit(oldp+126,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[6]));
            tracep->chgBit(oldp+127,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[7]));
            tracep->chgBit(oldp+128,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[8]));
            tracep->chgBit(oldp+129,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[9]));
            tracep->chgBit(oldp+130,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[10]));
            tracep->chgBit(oldp+131,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[11]));
            tracep->chgBit(oldp+132,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[12]));
            tracep->chgBit(oldp+133,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[13]));
            tracep->chgBit(oldp+134,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__data_list[14]));
            tracep->chgSData(oldp+135,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__pair_list[0]),14);
            tracep->chgSData(oldp+136,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__pair_list[1]),14);
            tracep->chgSData(oldp+137,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__key_list[0]),12);
            tracep->chgSData(oldp+138,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__key_list[1]),12);
            tracep->chgCData(oldp+139,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+140,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+141,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpFlag__DOT__i0__DOT__pair_list[0]),8);
            tracep->chgCData(oldp+142,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpFlag__DOT__i0__DOT__key_list[0]),7);
            tracep->chgBit(oldp+143,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpFlag__DOT__i0__DOT__data_list[0]));
            tracep->chgCData(oldp+144,(vlSelf->Balotelli__DOT__Balotelli_Ctrl__DOT__HoldFlag__DOT__i0__DOT__pair_list[0]),2);
            tracep->chgCData(oldp+145,(vlSelf->Balotelli__DOT__Balotelli_Ctrl__DOT__HoldFlag__DOT__i0__DOT__pair_list[1]),2);
            tracep->chgBit(oldp+146,(vlSelf->Balotelli__DOT__Balotelli_Ctrl__DOT__HoldFlag__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+147,(vlSelf->Balotelli__DOT__Balotelli_Ctrl__DOT__HoldFlag__DOT__i0__DOT__key_list[1]));
            tracep->chgBit(oldp+148,(vlSelf->Balotelli__DOT__Balotelli_Ctrl__DOT__HoldFlag__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+149,(vlSelf->Balotelli__DOT__Balotelli_Ctrl__DOT__HoldFlag__DOT__i0__DOT__data_list[1]));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+150,(vlSelf->Balotelli__DOT__RdWriteData_RegFileIn),64);
            tracep->chgCData(oldp+152,(vlSelf->Balotelli__DOT__RdAddr_RegFileIn),5);
            tracep->chgBit(oldp+153,(vlSelf->Balotelli__DOT__RdWriteEnable_RegFileIn));
            tracep->chgQData(oldp+154,(((IData)(vlSelf->Balotelli__DOT__Rs1ReadEnable_IdOut)
                                         ? vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf
                                        [vlSelf->Balotelli__DOT__Rs1Addr_IdOut]
                                         : 0ULL)),64);
            tracep->chgQData(oldp+156,(((IData)(vlSelf->Balotelli__DOT__Rs2ReadEnable_IdOut)
                                         ? vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf
                                        [vlSelf->Balotelli__DOT__Rs2Addr_IdOut]
                                         : 0ULL)),64);
            tracep->chgQData(oldp+158,(vlSelf->Balotelli__DOT__Inst_IdIn),64);
            tracep->chgQData(oldp+160,(vlSelf->Balotelli__DOT__InstAddr_IdIn),64);
            tracep->chgCData(oldp+162,(vlSelf->Balotelli__DOT__Rs1Addr_IdOut),5);
            tracep->chgCData(oldp+163,(vlSelf->Balotelli__DOT__Rs2Addr_IdOut),5);
            tracep->chgBit(oldp+164,(vlSelf->Balotelli__DOT__Rs1ReadEnable_IdOut));
            tracep->chgBit(oldp+165,(vlSelf->Balotelli__DOT__Rs2ReadEnable_IdOut));
            tracep->chgCData(oldp+166,(vlSelf->Balotelli__DOT__RdAddr_IdOut),5);
            tracep->chgBit(oldp+167,(vlSelf->Balotelli__DOT__RdWriteEnable_IdOut));
            tracep->chgQData(oldp+168,(vlSelf->Balotelli__DOT__Imm_IdOut),64);
            tracep->chgCData(oldp+170,((0x7fU & (IData)(vlSelf->Balotelli__DOT__Inst_IdIn))),7);
            tracep->chgCData(oldp+171,((7U & (IData)(
                                                     (vlSelf->Balotelli__DOT__Inst_IdIn 
                                                      >> 0xcU)))),3);
            tracep->chgCData(oldp+172,((0x7fU & (IData)(
                                                        (vlSelf->Balotelli__DOT__Inst_IdIn 
                                                         >> 0x19U)))),7);
            tracep->chgQData(oldp+173,(vlSelf->Balotelli__DOT__InstAddr_ExIn),64);
            tracep->chgCData(oldp+175,(vlSelf->Balotelli__DOT__RdAddr_ExIn),5);
            tracep->chgBit(oldp+176,(vlSelf->Balotelli__DOT__RdWriteEnable_ExIn));
            tracep->chgQData(oldp+177,(vlSelf->Balotelli__DOT__Imm_ExIn),64);
            tracep->chgCData(oldp+179,(vlSelf->Balotelli__DOT__OpCode_ExIn),7);
            tracep->chgCData(oldp+180,(vlSelf->Balotelli__DOT__Funct3_ExIn),3);
            tracep->chgCData(oldp+181,(vlSelf->Balotelli__DOT__Funct7_ExIn),7);
            tracep->chgQData(oldp+182,(vlSelf->Balotelli__DOT__RdWriteData_ExOut),64);
            tracep->chgQData(oldp+184,(vlSelf->Balotelli__DOT__RdWriteData_MemIn),64);
            tracep->chgCData(oldp+186,(vlSelf->Balotelli__DOT__RdAddr_MemIn),5);
            tracep->chgBit(oldp+187,(vlSelf->Balotelli__DOT__RdWriteEnable_MemIn));
            tracep->chgQData(oldp+188,(vlSelf->Balotelli__DOT__Rs1ReadData_FwuIn),64);
            tracep->chgCData(oldp+190,(vlSelf->Balotelli__DOT__Rs1Addr_FwuIn),5);
            tracep->chgCData(oldp+191,(vlSelf->Balotelli__DOT__Rs2Addr_FwuIn),5);
            tracep->chgQData(oldp+192,(vlSelf->Balotelli__DOT__Rs1ReadData_FwuOut),64);
            tracep->chgQData(oldp+194,(vlSelf->Balotelli__DOT__Rs2ReadData_FwuOut),64);
            tracep->chgQData(oldp+196,(vlSelf->Balotelli__DOT__JumpAddr_ExOut),64);
            tracep->chgBit(oldp+198,(vlSelf->Balotelli__DOT__JumpFlag_ExOut));
            tracep->chgBit(oldp+199,(vlSelf->Balotelli__DOT__HoldFlag));
            tracep->chgSData(oldp+200,((0xfffU & (IData)(
                                                         (vlSelf->Balotelli__DOT__Inst_IdIn 
                                                          >> 0x14U)))),12);
            tracep->chgSData(oldp+201,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Imm_S_Type),12);
            tracep->chgSData(oldp+202,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Imm_B_Type),12);
            tracep->chgIData(oldp+203,((0xfffffU & (IData)(
                                                           (vlSelf->Balotelli__DOT__Inst_IdIn 
                                                            >> 0xcU)))),20);
            tracep->chgIData(oldp+204,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Imm_J_Type),20);
            tracep->chgBit(oldp+205,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+206,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1ReadEnable__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+207,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__Id_Rs1AddrOut____pinNumber4),180);
            tracep->chgSData(oldp+213,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[0]),12);
            tracep->chgSData(oldp+214,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[1]),12);
            tracep->chgSData(oldp+215,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[2]),12);
            tracep->chgSData(oldp+216,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[3]),12);
            tracep->chgSData(oldp+217,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[4]),12);
            tracep->chgSData(oldp+218,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[5]),12);
            tracep->chgSData(oldp+219,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[6]),12);
            tracep->chgSData(oldp+220,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[7]),12);
            tracep->chgSData(oldp+221,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[8]),12);
            tracep->chgSData(oldp+222,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[9]),12);
            tracep->chgSData(oldp+223,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[10]),12);
            tracep->chgSData(oldp+224,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[11]),12);
            tracep->chgSData(oldp+225,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[12]),12);
            tracep->chgSData(oldp+226,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[13]),12);
            tracep->chgSData(oldp+227,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__pair_list[14]),12);
            tracep->chgCData(oldp+228,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+229,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+230,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+231,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+232,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+233,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[5]),7);
            tracep->chgCData(oldp+234,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[6]),7);
            tracep->chgCData(oldp+235,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[7]),7);
            tracep->chgCData(oldp+236,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[8]),7);
            tracep->chgCData(oldp+237,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[9]),7);
            tracep->chgCData(oldp+238,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[10]),7);
            tracep->chgCData(oldp+239,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[11]),7);
            tracep->chgCData(oldp+240,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[12]),7);
            tracep->chgCData(oldp+241,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[13]),7);
            tracep->chgCData(oldp+242,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__key_list[14]),7);
            tracep->chgCData(oldp+243,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[0]),5);
            tracep->chgCData(oldp+244,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[1]),5);
            tracep->chgCData(oldp+245,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[2]),5);
            tracep->chgCData(oldp+246,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[3]),5);
            tracep->chgCData(oldp+247,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[4]),5);
            tracep->chgCData(oldp+248,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[5]),5);
            tracep->chgCData(oldp+249,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[6]),5);
            tracep->chgCData(oldp+250,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[7]),5);
            tracep->chgCData(oldp+251,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[8]),5);
            tracep->chgCData(oldp+252,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[9]),5);
            tracep->chgCData(oldp+253,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[10]),5);
            tracep->chgCData(oldp+254,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[11]),5);
            tracep->chgCData(oldp+255,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[12]),5);
            tracep->chgCData(oldp+256,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[13]),5);
            tracep->chgCData(oldp+257,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__data_list[14]),5);
            tracep->chgCData(oldp+258,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__lut_out),5);
            tracep->chgBit(oldp+259,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs1AddrOut__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+260,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+261,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2ReadEnable__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+262,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__Id_Rs2AddrOut____pinNumber4),180);
            tracep->chgSData(oldp+268,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[0]),12);
            tracep->chgSData(oldp+269,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[1]),12);
            tracep->chgSData(oldp+270,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[2]),12);
            tracep->chgSData(oldp+271,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[3]),12);
            tracep->chgSData(oldp+272,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[4]),12);
            tracep->chgSData(oldp+273,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[5]),12);
            tracep->chgSData(oldp+274,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[6]),12);
            tracep->chgSData(oldp+275,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[7]),12);
            tracep->chgSData(oldp+276,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[8]),12);
            tracep->chgSData(oldp+277,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[9]),12);
            tracep->chgSData(oldp+278,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[10]),12);
            tracep->chgSData(oldp+279,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[11]),12);
            tracep->chgSData(oldp+280,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[12]),12);
            tracep->chgSData(oldp+281,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[13]),12);
            tracep->chgSData(oldp+282,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__pair_list[14]),12);
            tracep->chgCData(oldp+283,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+284,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+285,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+286,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+287,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+288,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[5]),7);
            tracep->chgCData(oldp+289,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[6]),7);
            tracep->chgCData(oldp+290,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[7]),7);
            tracep->chgCData(oldp+291,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[8]),7);
            tracep->chgCData(oldp+292,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[9]),7);
            tracep->chgCData(oldp+293,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[10]),7);
            tracep->chgCData(oldp+294,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[11]),7);
            tracep->chgCData(oldp+295,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[12]),7);
            tracep->chgCData(oldp+296,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[13]),7);
            tracep->chgCData(oldp+297,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__key_list[14]),7);
            tracep->chgCData(oldp+298,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[0]),5);
            tracep->chgCData(oldp+299,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[1]),5);
            tracep->chgCData(oldp+300,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[2]),5);
            tracep->chgCData(oldp+301,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[3]),5);
            tracep->chgCData(oldp+302,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[4]),5);
            tracep->chgCData(oldp+303,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[5]),5);
            tracep->chgCData(oldp+304,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[6]),5);
            tracep->chgCData(oldp+305,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[7]),5);
            tracep->chgCData(oldp+306,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[8]),5);
            tracep->chgCData(oldp+307,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[9]),5);
            tracep->chgCData(oldp+308,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[10]),5);
            tracep->chgCData(oldp+309,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[11]),5);
            tracep->chgCData(oldp+310,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[12]),5);
            tracep->chgCData(oldp+311,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[13]),5);
            tracep->chgCData(oldp+312,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__data_list[14]),5);
            tracep->chgCData(oldp+313,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__lut_out),5);
            tracep->chgBit(oldp+314,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Rs2AddrOut__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+315,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+316,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdWriteEnable__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+317,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__Id_RdAddrOut____pinNumber4),180);
            tracep->chgSData(oldp+323,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[0]),12);
            tracep->chgSData(oldp+324,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[1]),12);
            tracep->chgSData(oldp+325,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[2]),12);
            tracep->chgSData(oldp+326,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[3]),12);
            tracep->chgSData(oldp+327,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[4]),12);
            tracep->chgSData(oldp+328,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[5]),12);
            tracep->chgSData(oldp+329,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[6]),12);
            tracep->chgSData(oldp+330,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[7]),12);
            tracep->chgSData(oldp+331,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[8]),12);
            tracep->chgSData(oldp+332,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[9]),12);
            tracep->chgSData(oldp+333,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[10]),12);
            tracep->chgSData(oldp+334,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[11]),12);
            tracep->chgSData(oldp+335,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[12]),12);
            tracep->chgSData(oldp+336,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[13]),12);
            tracep->chgSData(oldp+337,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__pair_list[14]),12);
            tracep->chgCData(oldp+338,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+339,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+340,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+341,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+342,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+343,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[5]),7);
            tracep->chgCData(oldp+344,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[6]),7);
            tracep->chgCData(oldp+345,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[7]),7);
            tracep->chgCData(oldp+346,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[8]),7);
            tracep->chgCData(oldp+347,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[9]),7);
            tracep->chgCData(oldp+348,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[10]),7);
            tracep->chgCData(oldp+349,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[11]),7);
            tracep->chgCData(oldp+350,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[12]),7);
            tracep->chgCData(oldp+351,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[13]),7);
            tracep->chgCData(oldp+352,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__key_list[14]),7);
            tracep->chgCData(oldp+353,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[0]),5);
            tracep->chgCData(oldp+354,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[1]),5);
            tracep->chgCData(oldp+355,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[2]),5);
            tracep->chgCData(oldp+356,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[3]),5);
            tracep->chgCData(oldp+357,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[4]),5);
            tracep->chgCData(oldp+358,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[5]),5);
            tracep->chgCData(oldp+359,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[6]),5);
            tracep->chgCData(oldp+360,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[7]),5);
            tracep->chgCData(oldp+361,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[8]),5);
            tracep->chgCData(oldp+362,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[9]),5);
            tracep->chgCData(oldp+363,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[10]),5);
            tracep->chgCData(oldp+364,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[11]),5);
            tracep->chgCData(oldp+365,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[12]),5);
            tracep->chgCData(oldp+366,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[13]),5);
            tracep->chgCData(oldp+367,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__data_list[14]),5);
            tracep->chgCData(oldp+368,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__lut_out),5);
            tracep->chgBit(oldp+369,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_RdAddrOut__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+370,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT____Vcellinp__Id_Imm____pinNumber4),1065);
            tracep->chgWData(oldp+404,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgWData(oldp+407,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[1]),71);
            tracep->chgWData(oldp+410,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[2]),71);
            tracep->chgWData(oldp+413,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[3]),71);
            tracep->chgWData(oldp+416,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[4]),71);
            tracep->chgWData(oldp+419,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[5]),71);
            tracep->chgWData(oldp+422,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[6]),71);
            tracep->chgWData(oldp+425,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[7]),71);
            tracep->chgWData(oldp+428,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[8]),71);
            tracep->chgWData(oldp+431,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[9]),71);
            tracep->chgWData(oldp+434,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[10]),71);
            tracep->chgWData(oldp+437,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[11]),71);
            tracep->chgWData(oldp+440,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[12]),71);
            tracep->chgWData(oldp+443,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[13]),71);
            tracep->chgWData(oldp+446,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__pair_list[14]),71);
            tracep->chgCData(oldp+449,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+450,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+451,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+452,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+453,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+454,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[5]),7);
            tracep->chgCData(oldp+455,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[6]),7);
            tracep->chgCData(oldp+456,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[7]),7);
            tracep->chgCData(oldp+457,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[8]),7);
            tracep->chgCData(oldp+458,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[9]),7);
            tracep->chgCData(oldp+459,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[10]),7);
            tracep->chgCData(oldp+460,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[11]),7);
            tracep->chgCData(oldp+461,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[12]),7);
            tracep->chgCData(oldp+462,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[13]),7);
            tracep->chgCData(oldp+463,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__key_list[14]),7);
            tracep->chgQData(oldp+464,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+466,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+468,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+470,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+472,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+474,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+476,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+478,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+480,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+482,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+484,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+486,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+488,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+490,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+492,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+494,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+496,(vlSelf->Balotelli__DOT__Balotelli_Id__DOT__Id_Imm__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+497,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[0]),64);
            tracep->chgQData(oldp+499,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[1]),64);
            tracep->chgQData(oldp+501,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[2]),64);
            tracep->chgQData(oldp+503,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[3]),64);
            tracep->chgQData(oldp+505,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[4]),64);
            tracep->chgQData(oldp+507,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[5]),64);
            tracep->chgQData(oldp+509,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[6]),64);
            tracep->chgQData(oldp+511,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[7]),64);
            tracep->chgQData(oldp+513,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[8]),64);
            tracep->chgQData(oldp+515,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[9]),64);
            tracep->chgQData(oldp+517,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[10]),64);
            tracep->chgQData(oldp+519,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[11]),64);
            tracep->chgQData(oldp+521,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[12]),64);
            tracep->chgQData(oldp+523,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[13]),64);
            tracep->chgQData(oldp+525,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[14]),64);
            tracep->chgQData(oldp+527,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[15]),64);
            tracep->chgQData(oldp+529,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[16]),64);
            tracep->chgQData(oldp+531,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[17]),64);
            tracep->chgQData(oldp+533,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[18]),64);
            tracep->chgQData(oldp+535,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[19]),64);
            tracep->chgQData(oldp+537,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[20]),64);
            tracep->chgQData(oldp+539,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[21]),64);
            tracep->chgQData(oldp+541,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[22]),64);
            tracep->chgQData(oldp+543,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[23]),64);
            tracep->chgQData(oldp+545,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[24]),64);
            tracep->chgQData(oldp+547,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[25]),64);
            tracep->chgQData(oldp+549,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[26]),64);
            tracep->chgQData(oldp+551,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[27]),64);
            tracep->chgQData(oldp+553,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[28]),64);
            tracep->chgQData(oldp+555,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[29]),64);
            tracep->chgQData(oldp+557,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[30]),64);
            tracep->chgQData(oldp+559,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf[31]),64);
            tracep->chgIData(oldp+561,(vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__unnamedblk1__DOT__i),32);
            tracep->chgQData(oldp+562,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_TypeOut),64);
            tracep->chgQData(oldp+564,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_TypeOut),64);
            tracep->chgQData(oldp+566,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_ZeroOut),64);
            tracep->chgQData(oldp+568,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_OneOut),64);
            tracep->chgQData(oldp+570,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_TypeOut),64);
            tracep->chgQData(oldp+572,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_TypeOut),64);
            tracep->chgQData(oldp+574,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_ZeroOut),64);
            tracep->chgQData(oldp+576,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_OneOut),64);
            tracep->chgCData(oldp+578,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__RaiseException),2);
            tracep->chgQData(oldp+579,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__ImmAddRs1ReadData),64);
            tracep->chgQData(oldp+581,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataAddRs2ReadData),64);
            tracep->chgQData(oldp+583,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataSubRs2ReadData),64);
            tracep->chgQData(oldp+585,((vlSelf->Balotelli__DOT__Rs1ReadData_FwuOut 
                                        & vlSelf->Balotelli__DOT__Rs2ReadData_FwuOut)),64);
            tracep->chgQData(oldp+587,((vlSelf->Balotelli__DOT__Rs1ReadData_FwuOut 
                                        | vlSelf->Balotelli__DOT__Rs2ReadData_FwuOut)),64);
            tracep->chgQData(oldp+589,((vlSelf->Balotelli__DOT__Rs1ReadData_FwuOut 
                                        ^ vlSelf->Balotelli__DOT__Rs2ReadData_FwuOut)),64);
            VL_EXTEND_WI(67,32, __Vtemp1012, (IData)(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__ImmAddRs1ReadData));
            tracep->chgWData(oldp+591,(__Vtemp1012),67);
            tracep->chgWData(oldp+594,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_Type__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgCData(oldp+597,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_Type__DOT__i0__DOT__key_list[0]),3);
            tracep->chgQData(oldp+598,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_Type__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+600,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_Type__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+602,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_I_Type__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+603,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Funct7_RV32_R_Type____pinNumber4),142);
            tracep->chgWData(oldp+608,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgWData(oldp+611,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__pair_list[1]),71);
            tracep->chgCData(oldp+614,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+615,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__key_list[1]),7);
            tracep->chgQData(oldp+616,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+618,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+620,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+622,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV32_R_Type__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+623,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Funct3_RV32_R_Type_Zero____pinNumber4),268);
            tracep->chgWData(oldp+632,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+635,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+638,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+641,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__pair_list[3]),67);
            tracep->chgCData(oldp+644,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+645,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+646,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+647,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__key_list[3]),3);
            tracep->chgQData(oldp+648,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+650,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+652,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+654,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+656,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+658,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_Zero__DOT__i0__DOT__hit));
            VL_EXTEND_WI(67,32, __Vtemp1013, (IData)(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataSubRs2ReadData));
            tracep->chgWData(oldp+659,(__Vtemp1013),67);
            tracep->chgWData(oldp+662,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_One__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgCData(oldp+665,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_One__DOT__i0__DOT__key_list[0]),3);
            tracep->chgQData(oldp+666,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_One__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+668,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_One__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+670,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV32_R_Type_One__DOT__i0__DOT__hit));
            VL_EXTEND_WQ(67,64, __Vtemp1014, (((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__ImmAddRs1ReadData 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__ImmAddRs1ReadData))));
            tracep->chgWData(oldp+671,(__Vtemp1014),67);
            tracep->chgWData(oldp+674,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_Type__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgCData(oldp+677,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_Type__DOT__i0__DOT__key_list[0]),3);
            tracep->chgQData(oldp+678,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_Type__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+680,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_Type__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+682,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_I_Type__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+683,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__Funct7_RV64_R_Type____pinNumber4),142);
            tracep->chgWData(oldp+688,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgWData(oldp+691,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__pair_list[1]),71);
            tracep->chgCData(oldp+694,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+695,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__key_list[1]),7);
            tracep->chgQData(oldp+696,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+698,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+700,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+702,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct7_RV64_R_Type__DOT__i0__DOT__hit));
            VL_EXTEND_WQ(67,64, __Vtemp1015, (((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataAddRs2ReadData 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataAddRs2ReadData))));
            tracep->chgWData(oldp+703,(__Vtemp1015),67);
            tracep->chgWData(oldp+706,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_Zero__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgCData(oldp+709,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_Zero__DOT__i0__DOT__key_list[0]),3);
            tracep->chgQData(oldp+710,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_Zero__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+712,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_Zero__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+714,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_Zero__DOT__i0__DOT__hit));
            VL_EXTEND_WQ(67,64, __Vtemp1016, (((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataSubRs2ReadData 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Rs1ReadDataSubRs2ReadData))));
            tracep->chgWData(oldp+715,(__Vtemp1016),67);
            tracep->chgWData(oldp+718,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_One__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgCData(oldp+721,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_One__DOT__i0__DOT__key_list[0]),3);
            tracep->chgQData(oldp+722,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_One__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+724,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_One__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+726,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct3_RV64_R_Type_One__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+727,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT____Vcellinp__OpOcde_RdWriteDataOut____pinNumber4),426);
            tracep->chgWData(oldp+741,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgWData(oldp+744,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__pair_list[1]),71);
            tracep->chgWData(oldp+747,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__pair_list[2]),71);
            tracep->chgWData(oldp+750,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__pair_list[3]),71);
            tracep->chgWData(oldp+753,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__pair_list[4]),71);
            tracep->chgWData(oldp+756,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__pair_list[5]),71);
            tracep->chgCData(oldp+759,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+760,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+761,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+762,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+763,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+764,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__key_list[5]),7);
            tracep->chgQData(oldp+765,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+767,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+769,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+771,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+773,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+775,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+777,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+779,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__OpOcde_RdWriteDataOut__DOT__i0__DOT__hit));
            tracep->chgSData(oldp+780,((0xfffU & (IData)(vlSelf->Balotelli__DOT__Imm_ExIn))),12);
            tracep->chgCData(oldp+781,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+782,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__Funct_Environment__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+783,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpFlag__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+784,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpFlag__DOT__i0__DOT__hit));
            __Vtemp1017[0U] = (IData)((vlSelf->Balotelli__DOT__InstAddr_ExIn 
                                       + vlSelf->Balotelli__DOT__Imm_ExIn));
            __Vtemp1017[1U] = (IData)(((vlSelf->Balotelli__DOT__InstAddr_ExIn 
                                        + vlSelf->Balotelli__DOT__Imm_ExIn) 
                                       >> 0x20U));
            __Vtemp1017[2U] = 0x6fU;
            tracep->chgWData(oldp+785,(__Vtemp1017),71);
            tracep->chgWData(oldp+788,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpAddr__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgCData(oldp+791,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpAddr__DOT__i0__DOT__key_list[0]),7);
            tracep->chgQData(oldp+792,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpAddr__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+794,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpAddr__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+796,(vlSelf->Balotelli__DOT__Balotelli_Ex__DOT__JumpAddr__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+797,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardA),2);
            tracep->chgCData(oldp+798,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardB),2);
            tracep->chgWData(oldp+799,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4),198);
            tracep->chgWData(oldp+806,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+809,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+812,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgCData(oldp+815,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+816,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+817,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__key_list[2]),2);
            tracep->chgQData(oldp+818,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+820,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+822,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+824,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+826,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+827,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4),198);
            tracep->chgWData(oldp+834,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+837,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+840,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgCData(oldp+843,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+844,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+845,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__key_list[2]),2);
            tracep->chgQData(oldp+846,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+848,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+850,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+852,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+854,(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+855,(vlSelf->Balotelli__DOT__Balotelli_Ctrl__DOT__HoldFlag__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+856,(vlSelf->Balotelli__DOT__Balotelli_Ctrl__DOT__HoldFlag__DOT__i0__DOT__hit));
        }
        tracep->chgBit(oldp+857,(vlSelf->Clk));
        tracep->chgBit(oldp+858,(vlSelf->Rst));
        tracep->chgQData(oldp+859,(vlSelf->InstIn),64);
        tracep->chgQData(oldp+861,(vlSelf->PcOut),64);
        tracep->chgQData(oldp+863,(((IData)(vlSelf->Balotelli__DOT__JumpFlag_ExOut)
                                     ? vlSelf->Balotelli__DOT__JumpAddr_ExOut
                                     : (4ULL + vlSelf->PcOut))),64);
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
