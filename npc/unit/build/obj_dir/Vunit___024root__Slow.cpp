// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vunit.h for the primary calling header

#include "verilated.h"

#include "Vunit__Syms.h"
#include "Vunit___024root.h"

void Vunit___024root___ctor_var_reset(Vunit___024root* vlSelf);

Vunit___024root::Vunit___024root(Vunit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vunit___024root___ctor_var_reset(this);
}

void Vunit___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vunit___024root::~Vunit___024root() {
}
