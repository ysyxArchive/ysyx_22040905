// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See V__031.h for the primary calling header

#include "verilated.h"

#include "V__031___024root.h"

VL_INLINE_OPT void V__031___024root___combo__TOP__0(V__031___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    V__031__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V__031___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->f = ((IData)(vlSelf->a) ^ (IData)(vlSelf->b));
}

void V__031___024root___eval(V__031___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    V__031__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V__031___024root___eval\n"); );
    // Body
    V__031___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void V__031___024root___eval_debug_assertions(V__031___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    V__031__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V__031___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
