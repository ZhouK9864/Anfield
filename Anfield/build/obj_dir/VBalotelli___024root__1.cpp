// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBalotelli.h for the primary calling header

#include "VBalotelli___024root.h"
#include "VBalotelli__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VBalotelli___024root___combo__TOP__3(VBalotelli___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBalotelli__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBalotelli___024root___combo__TOP__3\n"); );
    // Variables
    VlWide<7>/*223:0*/ __Vtemp1921;
    VlWide<15>/*479:0*/ __Vtemp1928;
    VlWide<3>/*95:0*/ __Vtemp1979;
    VlWide<3>/*95:0*/ __Vtemp1986;
    // Body
    __Vtemp1921[3U] = ((7U & ((IData)((((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->MemDataIn 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->MemDataIn)))) 
                              >> 0x1aU)) | ((0x38U 
                                             & ((IData)(
                                                        (((QData)((IData)(
                                                                          (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->MemDataIn 
                                                                                >> 0x1fU))))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->MemDataIn)))) 
                                                >> 0x1aU)) 
                                            | ((IData)(
                                                       ((((QData)((IData)(
                                                                          (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->MemDataIn 
                                                                                >> 0x1fU))))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->MemDataIn))) 
                                                        >> 0x20U)) 
                                               << 6U)));
    __Vtemp1921[4U] = (0x80U | ((7U & ((IData)(((((QData)((IData)(
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->MemDataIn 
                                                                                >> 0x1fU))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->MemDataIn))) 
                                                >> 0x20U)) 
                                       >> 0x1aU)) | 
                                (((IData)(vlSelf->MemDataIn) 
                                  << 9U) | (0x38U & 
                                            ((IData)(
                                                     ((((QData)((IData)(
                                                                        (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->MemDataIn 
                                                                                >> 0x1fU))))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->MemDataIn))) 
                                                      >> 0x20U)) 
                                             >> 0x1aU)))));
    __Vtemp1921[5U] = ((7U & ((IData)(vlSelf->MemDataIn) 
                              >> 0x17U)) | ((0x38U 
                                             & ((IData)(vlSelf->MemDataIn) 
                                                >> 0x17U)) 
                                            | ((0x1c0U 
                                                & ((IData)(vlSelf->MemDataIn) 
                                                   >> 0x17U)) 
                                               | ((IData)(
                                                          (vlSelf->MemDataIn 
                                                           >> 0x20U)) 
                                                  << 9U))));
    __Vtemp1928[9U] = ((0x1ffU & ((IData)((((- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->MemDataIn 
                                                                           >> 0x1fU)))))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->MemDataIn)))))) 
                                  >> 0x14U)) | ((0xe00U 
                                                 & ((IData)(
                                                            (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->MemDataIn 
                                                                                >> 0x1fU)))))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & (IData)(vlSelf->MemDataIn)))))) 
                                                    >> 0x14U)) 
                                                | ((IData)(
                                                           ((((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->MemDataIn 
                                                                                >> 0x1fU)))))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               (0xffffU 
                                                                                & (IData)(vlSelf->MemDataIn))))) 
                                                            >> 0x20U)) 
                                                   << 0xcU)));
    __Vtemp1928[0xaU] = (0x1000U | ((0x1ffU & ((IData)(
                                                       ((((- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->MemDataIn 
                                                                                >> 0x1fU)))))) 
                                                          << 0x10U) 
                                                         | (QData)((IData)(
                                                                           (0xffffU 
                                                                            & (IData)(vlSelf->MemDataIn))))) 
                                                        >> 0x20U)) 
                                               >> 0x14U)) 
                                    | (((IData)((((QData)((IData)(
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->MemDataIn 
                                                                                >> 0x1fU))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->MemDataIn)))) 
                                        << 0xfU) | 
                                       (0xe00U & ((IData)(
                                                          ((((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->MemDataIn 
                                                                                >> 0x1fU)))))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              (0xffffU 
                                                                               & (IData)(vlSelf->MemDataIn))))) 
                                                           >> 0x20U)) 
                                                  >> 0x14U)))));
    __Vtemp1928[0xeU] = (0xc0000U | ((__Vtemp1921[5U] 
                                      >> 0x17U) | (
                                                   (0xe00U 
                                                    & ((IData)(
                                                               (vlSelf->MemDataIn 
                                                                >> 0x20U)) 
                                                       >> 0xeU)) 
                                                   | ((0x7000U 
                                                       & ((IData)(
                                                                  (vlSelf->MemDataIn 
                                                                   >> 0x20U)) 
                                                          >> 0xeU)) 
                                                      | (0x38000U 
                                                         & ((IData)(
                                                                    (vlSelf->MemDataIn 
                                                                     >> 0x20U)) 
                                                            >> 0xeU))))));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[0U] 
        = (IData)((QData)((IData)(vlSelf->MemDataIn)));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[1U] 
        = (IData)(((QData)((IData)(vlSelf->MemDataIn)) 
                   >> 0x20U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[2U] 
        = (6U | ((IData)((QData)((IData)((0xffffU & (IData)(vlSelf->MemDataIn))))) 
                 << 3U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[3U] 
        = (((IData)((QData)((IData)((0xffffU & (IData)(vlSelf->MemDataIn))))) 
            >> 0x1dU) | ((IData)(((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->MemDataIn)))) 
                                  >> 0x20U)) << 3U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[4U] 
        = (0x28U | (((IData)((QData)((IData)((0xffU 
                                              & (IData)(vlSelf->MemDataIn))))) 
                     << 6U) | ((IData)(((QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->MemDataIn)))) 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[5U] 
        = (((IData)((QData)((IData)((0xffU & (IData)(vlSelf->MemDataIn))))) 
            >> 0x1aU) | ((IData)(((QData)((IData)((0xffU 
                                                   & (IData)(vlSelf->MemDataIn)))) 
                                  >> 0x20U)) << 6U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[6U] 
        = (0x100U | (((IData)((((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->MemDataIn 
                                                               >> 0x1fU)))))) 
                                << 8U) | (QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->MemDataIn)))))) 
                      << 9U) | ((IData)(((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->MemDataIn)))) 
                                         >> 0x20U)) 
                                >> 0x1aU)));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[7U] 
        = (((IData)((((- (QData)((IData)((1U & (IData)(
                                                       (vlSelf->MemDataIn 
                                                        >> 0x1fU)))))) 
                      << 8U) | (QData)((IData)((0xffU 
                                                & (IData)(vlSelf->MemDataIn)))))) 
            >> 0x17U) | ((IData)(((((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->MemDataIn 
                                                                   >> 0x1fU)))))) 
                                    << 8U) | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->MemDataIn))))) 
                                  >> 0x20U)) << 9U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[8U] 
        = (((IData)((((- (QData)((IData)((1U & (IData)(
                                                       (vlSelf->MemDataIn 
                                                        >> 0x1fU)))))) 
                      << 0x10U) | (QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->MemDataIn)))))) 
            << 0xcU) | ((IData)(((((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->MemDataIn 
                                                                  >> 0x1fU)))))) 
                                   << 8U) | (QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelf->MemDataIn))))) 
                                 >> 0x20U)) >> 0x17U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[9U] 
        = __Vtemp1928[9U];
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[0xaU] 
        = __Vtemp1928[0xaU];
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[0xbU] 
        = ((0x1ffU & ((IData)((((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->MemDataIn 
                                                                       >> 0x1fU))))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->MemDataIn)))) 
                      >> 0x11U)) | (__Vtemp1921[3U] 
                                    << 9U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[0xcU] 
        = ((__Vtemp1921[3U] >> 0x17U) | (__Vtemp1921[4U] 
                                         << 9U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[0xdU] 
        = ((__Vtemp1921[4U] >> 0x17U) | (__Vtemp1921[5U] 
                                         << 9U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[0xeU] 
        = __Vtemp1928[0xeU];
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[0U];
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[1U];
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[2U]);
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[3U] 
            << 0x1dU) | (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[2U] 
                         >> 3U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[4U] 
            << 0x1dU) | (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[3U] 
                         >> 3U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[4U] 
                 >> 3U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[5U] 
            << 0x1aU) | (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[4U] 
                         >> 6U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[6U] 
            << 0x1aU) | (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[5U] 
                         >> 6U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[6U] 
                 >> 6U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[7U] 
            << 0x17U) | (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[6U] 
                         >> 9U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[8U] 
            << 0x17U) | (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[7U] 
                         >> 9U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[3U][2U] 
        = (7U & (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[8U] 
                 >> 9U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[9U] 
            << 0x14U) | (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[8U] 
                         >> 0xcU));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[0xaU] 
            << 0x14U) | (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[9U] 
                         >> 0xcU));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[4U][2U] 
        = (7U & (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[0xaU] 
                 >> 0xcU));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[0xbU] 
            << 0x11U) | (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[0xaU] 
                         >> 0xfU));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[0xcU] 
            << 0x11U) | (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[0xbU] 
                         >> 0xfU));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[5U][2U] 
        = (7U & (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[0xcU] 
                 >> 0xfU));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[0xdU] 
            << 0xeU) | (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[0xcU] 
                        >> 0x12U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[0xeU] 
            << 0xeU) | (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[0xdU] 
                        >> 0x12U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list[6U][2U] 
        = (7U & (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT____Vcellinp__MemTypeData_mux____pinNumber4[0xeU] 
                 >> 0x12U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list[3U] 
        = (7U & vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list[4U] 
        = (7U & vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list[5U] 
        = (7U & vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list[6U] 
        = (7U & vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->Balotelli__DOT__Funct3_MemIn) 
                               == vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->Balotelli__DOT__Funct3_MemIn) 
           == vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->Balotelli__DOT__Funct3_MemIn) 
                                  == vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->Balotelli__DOT__Funct3_MemIn) 
              == vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->Balotelli__DOT__Funct3_MemIn) 
                                  == vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->Balotelli__DOT__Funct3_MemIn) 
              == vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->Balotelli__DOT__Funct3_MemIn) 
                                  == vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->Balotelli__DOT__Funct3_MemIn) 
              == vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->Balotelli__DOT__Funct3_MemIn) 
                                  == vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->Balotelli__DOT__Funct3_MemIn) 
              == vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->Balotelli__DOT__Funct3_MemIn) 
                                  == vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->Balotelli__DOT__Funct3_MemIn) 
              == vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->Balotelli__DOT__Funct3_MemIn) 
                                  == vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->Balotelli__DOT__Funct3_MemIn) 
              == vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData 
        = ((IData)(vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__hit)
            ? vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData_mux__DOT__i0__DOT__lut_out
            : 0ULL);
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteData_mux__DOT__i0__DOT__pair_list[0U][0U] 
        = (IData)(vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData);
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteData_mux__DOT__i0__DOT__pair_list[0U][1U] 
        = (IData)((vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__MemTypeData 
                   >> 0x20U));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteData_mux__DOT__i0__DOT__pair_list[0U][2U] = 3U;
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteData_mux__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteData_mux__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteData_mux__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteData_mux__DOT__i0__DOT__key_list[0U] 
        = (0x7fU & vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteData_mux__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteData_mux__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->Balotelli__DOT__OpCode_MemIn) 
                               == vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteData_mux__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteData_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteData_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->Balotelli__DOT__OpCode_MemIn) 
           == vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteData_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->Balotelli__DOT__RdWriteData_MemOut = ((IData)(vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteData_mux__DOT__i0__DOT__hit)
                                                   ? vlSelf->Balotelli__DOT__Balotelli_Mem__DOT__RdWriteData_mux__DOT__i0__DOT__lut_out
                                                   : vlSelf->Balotelli__DOT__RdWriteData_MemIn);
    VL_EXTEND_WQ(67,64, __Vtemp1979, ((IData)(vlSelf->Balotelli__DOT__Rs1ReadEnable_IdOut)
                                       ? vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf
                                      [vlSelf->Balotelli__DOT__Rs1Addr_IdOut]
                                       : 0ULL));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[0U] 
        = (IData)(vlSelf->Balotelli__DOT__RdWriteData_ExOut);
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[1U] 
        = (IData)((vlSelf->Balotelli__DOT__RdWriteData_ExOut 
                   >> 0x20U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[2U] 
        = (4U | ((IData)(vlSelf->Balotelli__DOT__RdWriteData_MemOut) 
                 << 3U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[3U] 
        = (((IData)(vlSelf->Balotelli__DOT__RdWriteData_MemOut) 
            >> 0x1dU) | ((IData)((vlSelf->Balotelli__DOT__RdWriteData_MemOut 
                                  >> 0x20U)) << 3U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[4U] 
        = (0x10U | (((IData)(vlSelf->Balotelli__DOT__RdWriteData_RegFileIn) 
                     << 6U) | ((IData)((vlSelf->Balotelli__DOT__RdWriteData_MemOut 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[5U] 
        = (((IData)(vlSelf->Balotelli__DOT__RdWriteData_RegFileIn) 
            >> 0x1aU) | ((IData)((vlSelf->Balotelli__DOT__RdWriteData_RegFileIn 
                                  >> 0x20U)) << 6U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[6U] 
        = (0x40U | ((__Vtemp1979[0U] << 9U) | ((IData)(
                                                       (vlSelf->Balotelli__DOT__RdWriteData_RegFileIn 
                                                        >> 0x20U)) 
                                               >> 0x1aU)));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[7U] 
        = ((__Vtemp1979[0U] >> 0x17U) | (__Vtemp1979[1U] 
                                         << 9U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[8U] 
        = ((__Vtemp1979[1U] >> 0x17U) | (__Vtemp1979[2U] 
                                         << 9U));
    VL_EXTEND_WQ(67,64, __Vtemp1986, ((IData)(vlSelf->Balotelli__DOT__Rs2ReadEnable_IdOut)
                                       ? vlSelf->Balotelli__DOT__Balotelli_RegFile__DOT__rf
                                      [vlSelf->Balotelli__DOT__Rs2Addr_IdOut]
                                       : 0ULL));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[0U] 
        = (IData)(vlSelf->Balotelli__DOT__RdWriteData_ExOut);
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[1U] 
        = (IData)((vlSelf->Balotelli__DOT__RdWriteData_ExOut 
                   >> 0x20U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[2U] 
        = (4U | ((IData)(vlSelf->Balotelli__DOT__RdWriteData_MemOut) 
                 << 3U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[3U] 
        = (((IData)(vlSelf->Balotelli__DOT__RdWriteData_MemOut) 
            >> 0x1dU) | ((IData)((vlSelf->Balotelli__DOT__RdWriteData_MemOut 
                                  >> 0x20U)) << 3U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[4U] 
        = (0x10U | (((IData)(vlSelf->Balotelli__DOT__RdWriteData_RegFileIn) 
                     << 6U) | ((IData)((vlSelf->Balotelli__DOT__RdWriteData_MemOut 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[5U] 
        = (((IData)(vlSelf->Balotelli__DOT__RdWriteData_RegFileIn) 
            >> 0x1aU) | ((IData)((vlSelf->Balotelli__DOT__RdWriteData_RegFileIn 
                                  >> 0x20U)) << 6U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[6U] 
        = (0x40U | ((__Vtemp1986[0U] << 9U) | ((IData)(
                                                       (vlSelf->Balotelli__DOT__RdWriteData_RegFileIn 
                                                        >> 0x20U)) 
                                               >> 0x1aU)));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[7U] 
        = ((__Vtemp1986[0U] >> 0x17U) | (__Vtemp1986[1U] 
                                         << 9U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[8U] 
        = ((__Vtemp1986[1U] >> 0x17U) | (__Vtemp1986[2U] 
                                         << 9U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[0U];
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[1U];
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[2U]);
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[3U] 
            << 0x1dU) | (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[2U] 
                         >> 3U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[4U] 
            << 0x1dU) | (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[3U] 
                         >> 3U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[4U] 
                 >> 3U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[5U] 
            << 0x1aU) | (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[4U] 
                         >> 6U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[6U] 
            << 0x1aU) | (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[5U] 
                         >> 6U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[6U] 
                 >> 6U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[7U] 
            << 0x17U) | (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[6U] 
                         >> 9U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[8U] 
            << 0x17U) | (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[7U] 
                         >> 9U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list[3U][2U] 
        = (7U & (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardAChooseDataSource____pinNumber4[8U] 
                 >> 9U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[0U];
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[1U];
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[2U]);
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[3U] 
            << 0x1dU) | (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[2U] 
                         >> 3U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[4U] 
            << 0x1dU) | (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[3U] 
                         >> 3U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[4U] 
                 >> 3U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[5U] 
            << 0x1aU) | (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[4U] 
                         >> 6U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[6U] 
            << 0x1aU) | (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[5U] 
                         >> 6U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[6U] 
                 >> 6U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[7U] 
            << 0x17U) | (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[6U] 
                         >> 9U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[8U] 
            << 0x17U) | (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[7U] 
                         >> 9U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list[3U][2U] 
        = (7U & (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT____Vcellinp__ForwardBChooseDataSource____pinNumber4[8U] 
                 >> 9U));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__key_list[3U] 
        = (7U & vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__key_list[3U] 
        = (7U & vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardA) 
                               == vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardA) 
           == vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__lut_out 
        = (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardA) 
                                  == vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardA) 
              == vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__lut_out 
        = (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardA) 
                                  == vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardA) 
              == vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__lut_out 
        = (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardA) 
                                  == vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardA) 
              == vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->Balotelli__DOT__Rs1ReadData_FwuOut = ((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__hit)
                                                   ? vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardAChooseDataSource__DOT__i0__DOT__lut_out
                                                   : 0ULL);
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardB) 
                               == vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardB) 
           == vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__lut_out 
        = (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardB) 
                                  == vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardB) 
              == vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__lut_out 
        = (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardB) 
                                  == vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardB) 
              == vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__lut_out 
        = (vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardB) 
                                  == vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardB) 
              == vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->Balotelli__DOT__Rs2ReadData_FwuOut = ((IData)(vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__hit)
                                                   ? vlSelf->Balotelli__DOT__Balotelli_Fwu__DOT__ForwardBChooseDataSource__DOT__i0__DOT__lut_out
                                                   : 0ULL);
}

void VBalotelli___024root___sequent__TOP__2(VBalotelli___024root* vlSelf);

void VBalotelli___024root___eval(VBalotelli___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBalotelli__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBalotelli___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->Clk) & (~ (IData)(vlSelf->__Vclklast__TOP__Clk))) 
         | ((~ (IData)(vlSelf->Rst)) & (IData)(vlSelf->__Vclklast__TOP__Rst)))) {
        VBalotelli___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    VBalotelli___024root___combo__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__Clk = vlSelf->Clk;
    vlSelf->__Vclklast__TOP__Rst = vlSelf->Rst;
}

QData VBalotelli___024root___change_request_1(VBalotelli___024root* vlSelf);

VL_INLINE_OPT QData VBalotelli___024root___change_request(VBalotelli___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBalotelli__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBalotelli___024root___change_request\n"); );
    // Body
    return (VBalotelli___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VBalotelli___024root___change_request_1(VBalotelli___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBalotelli__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBalotelli___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VBalotelli___024root___eval_debug_assertions(VBalotelli___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBalotelli__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBalotelli___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->Clk & 0xfeU))) {
        Verilated::overWidthError("Clk");}
    if (VL_UNLIKELY((vlSelf->Rst & 0xfeU))) {
        Verilated::overWidthError("Rst");}
}
#endif  // VL_DEBUG
