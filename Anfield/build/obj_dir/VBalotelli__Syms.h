// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBALOTELLI__SYMS_H_
#define VERILATED_VBALOTELLI__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VBalotelli.h"

// INCLUDE MODULE CLASSES
#include "VBalotelli___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VBalotelli__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VBalotelli* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VBalotelli___024root           TOP;

    // CONSTRUCTORS
    VBalotelli__Syms(VerilatedContext* contextp, const char* namep, VBalotelli* modelp);
    ~VBalotelli__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
