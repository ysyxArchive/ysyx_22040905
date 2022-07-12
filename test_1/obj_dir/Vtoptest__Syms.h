// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOPTEST__SYMS_H_
#define VERILATED_VTOPTEST__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vtoptest.h"

// INCLUDE MODULE CLASSES
#include "Vtoptest___024root.h"

// SYMS CLASS (contains all model state)
class Vtoptest__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtoptest* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtoptest___024root             TOP;

    // CONSTRUCTORS
    Vtoptest__Syms(VerilatedContext* contextp, const char* namep, Vtoptest* modelp);
    ~Vtoptest__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
