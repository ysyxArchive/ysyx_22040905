// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPassthrough.h for the primary calling header

#include "VPassthrough___024root.h"
#include "VPassthrough__Syms.h"

//==========


void VPassthrough___024root___ctor_var_reset(VPassthrough___024root* vlSelf);

VPassthrough___024root::VPassthrough___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VPassthrough___024root___ctor_var_reset(this);
}

void VPassthrough___024root::__Vconfigure(VPassthrough__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VPassthrough___024root::~VPassthrough___024root() {
}

void VPassthrough___024root___eval_initial(VPassthrough___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPassthrough__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPassthrough___024root___eval_initial\n"); );
}

void VPassthrough___024root___combo__TOP__1(VPassthrough___024root* vlSelf);

void VPassthrough___024root___eval_settle(VPassthrough___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPassthrough__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPassthrough___024root___eval_settle\n"); );
    // Body
    VPassthrough___024root___combo__TOP__1(vlSelf);
}

void VPassthrough___024root___final(VPassthrough___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPassthrough__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPassthrough___024root___final\n"); );
}

void VPassthrough___024root___ctor_var_reset(VPassthrough___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPassthrough__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPassthrough___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_in = VL_RAND_RESET_I(10);
    vlSelf->io_out = VL_RAND_RESET_I(10);
}
