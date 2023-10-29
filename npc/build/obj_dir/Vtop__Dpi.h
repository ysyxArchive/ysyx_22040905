// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/cyh/ysyx-workbench/npc/vsrc/ebreak.v:1:30
    extern void cpp_break();
    // DPI import at /home/cyh/ysyx-workbench/npc/vsrc/memory.v:1:30
    extern void pmem_read(int raddr, long long* rdata);
    // DPI import at /home/cyh/ysyx-workbench/npc/vsrc/memory.v:2:30
    extern void pmem_write(int waddr, long long wdata, char wmask);
    // DPI import at /home/cyh/ysyx-workbench/npc/vsrc/print_csr.v:1:30
    extern void set_csr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/cyh/ysyx-workbench/npc/vsrc/print_gpr.v:1:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/cyh/ysyx-workbench/npc/vsrc/itrace.v:1:30
    extern void set_itrace_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif

#endif  // guard
