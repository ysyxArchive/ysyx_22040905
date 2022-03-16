// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See V__031.h for the primary calling header

#include "verilated.h"

#include "V__031__Syms.h"
#include "V__031___024root.h"

void V__031___024root___ctor_var_reset(V__031___024root* vlSelf);

V__031___024root::V__031___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    V__031___024root___ctor_var_reset(this);
}

void V__031___024root::__Vconfigure(V__031__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

V__031___024root::~V__031___024root() {
}
