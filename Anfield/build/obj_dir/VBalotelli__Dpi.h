// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/kaizhou/ysyx-workbench/Anfield/vsrc/Balotelli/Ex.v:248:32
    extern void SystemBreak(int Ebreak);
    // DPI import at /home/kaizhou/ysyx-workbench/Anfield/vsrc/Balotelli/RegFile.v:31:34
    extern void get_when_commit(const svOpenArrayHandle a);
    // DPI import at /home/kaizhou/ysyx-workbench/Anfield/vsrc/Balotelli/RegFile.v:20:34
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
