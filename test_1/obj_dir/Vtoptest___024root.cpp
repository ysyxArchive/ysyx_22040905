// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtoptest.h for the primary calling header

#include "Vtoptest___024root.h"
#include "Vtoptest__Syms.h"

//==========

VL_INLINE_OPT void Vtoptest___024root___combo__TOP__2(Vtoptest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtoptest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtoptest___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->f = ((IData)(vlSelf->a) ^ (IData)(vlSelf->b));
}

void Vtoptest___024root___eval(Vtoptest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtoptest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtoptest___024root___eval\n"); );
    // Body
    Vtoptest___024root___combo__TOP__2(vlSelf);
}

QData Vtoptest___024root___change_request_1(Vtoptest___024root* vlSelf);

VL_INLINE_OPT QData Vtoptest___024root___change_request(Vtoptest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtoptest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtoptest___024root___change_request\n"); );
    // Body
    return (Vtoptest___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtoptest___024root___change_request_1(Vtoptest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtoptest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtoptest___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtoptest___024root___eval_debug_assertions(Vtoptest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtoptest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtoptest___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
