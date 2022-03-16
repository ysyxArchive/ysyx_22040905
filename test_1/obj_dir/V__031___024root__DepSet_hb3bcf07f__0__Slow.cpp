// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See V__031.h for the primary calling header

#include "verilated.h"

#include "V__031___024root.h"

VL_ATTR_COLD void V__031___024root___eval_initial(V__031___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    V__031__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V__031___024root___eval_initial\n"); );
}

void V__031___024root___combo__TOP__0(V__031___024root* vlSelf);

VL_ATTR_COLD void V__031___024root___eval_settle(V__031___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    V__031__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V__031___024root___eval_settle\n"); );
    // Body
    V__031___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void V__031___024root___final(V__031___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    V__031__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V__031___024root___final\n"); );
}

VL_ATTR_COLD void V__031___024root___ctor_var_reset(V__031___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    V__031__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V__031___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->f = VL_RAND_RESET_I(1);
}
