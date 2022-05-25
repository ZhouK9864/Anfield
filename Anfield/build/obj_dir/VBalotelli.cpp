// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBalotelli.h"
#include "VBalotelli__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VBalotelli::VBalotelli(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VBalotelli__Syms(_vcontextp__, _vcname__, this)}
    , Clk{vlSymsp->TOP.Clk}
    , Rst{vlSymsp->TOP.Rst}
    , InstIn{vlSymsp->TOP.InstIn}
    , raddr{vlSymsp->TOP.raddr}
    , LoadData{vlSymsp->TOP.LoadData}
    , PcOut{vlSymsp->TOP.PcOut}
    , RaddrOut{vlSymsp->TOP.RaddrOut}
    , WaddrOut{vlSymsp->TOP.WaddrOut}
    , MemDataOut{vlSymsp->TOP.MemDataOut}
    , Wmask{vlSymsp->TOP.Wmask}
    , MemDataIn{vlSymsp->TOP.MemDataIn}
    , rootp{&(vlSymsp->TOP)}
{
}

VBalotelli::VBalotelli(const char* _vcname__)
    : VBalotelli(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VBalotelli::~VBalotelli() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VBalotelli___024root___eval_initial(VBalotelli___024root* vlSelf);
void VBalotelli___024root___eval_settle(VBalotelli___024root* vlSelf);
void VBalotelli___024root___eval(VBalotelli___024root* vlSelf);
QData VBalotelli___024root___change_request(VBalotelli___024root* vlSelf);
#ifdef VL_DEBUG
void VBalotelli___024root___eval_debug_assertions(VBalotelli___024root* vlSelf);
#endif  // VL_DEBUG
void VBalotelli___024root___final(VBalotelli___024root* vlSelf);

static void _eval_initial_loop(VBalotelli__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VBalotelli___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VBalotelli___024root___eval_settle(&(vlSymsp->TOP));
        VBalotelli___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VBalotelli___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/kaizhou/ysyx-workbench/Anfield/vsrc/Balotelli/Balotelli.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VBalotelli___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VBalotelli::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBalotelli::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBalotelli___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VBalotelli___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VBalotelli___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/kaizhou/ysyx-workbench/Anfield/vsrc/Balotelli/Balotelli.v", 2, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VBalotelli___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VBalotelli::final() {
    VBalotelli___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VBalotelli::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VBalotelli::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VBalotelli___024root__traceInitTop(VBalotelli___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBalotelli___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBalotelli___024root*>(voidSelf);
    VBalotelli__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VBalotelli___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VBalotelli___024root__traceRegister(VBalotelli___024root* vlSelf, VerilatedVcd* tracep);

void VBalotelli::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VBalotelli___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
