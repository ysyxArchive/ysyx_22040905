// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPassthrough.h for the primary calling header

#include "VPassthrough___024root.h"
#include "VPassthrough__Syms.h"

//==========

VL_INLINE_OPT void VPassthrough___024root___combo__TOP__1(VPassthrough___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPassthrough__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPassthrough___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->io_out = vlSelf->io_in;
}

void VPassthrough___024root___eval(VPassthrough___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPassthrough__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPassthrough___024root___eval\n"); );
    // Body
    VPassthrough___024root___combo__TOP__1(vlSelf);
}

QData VPassthrough___024root___change_request_1(VPassthrough___024root* vlSelf);

VL_INLINE_OPT QData VPassthrough___024root___change_request(VPassthrough___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPassthrough__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPassthrough___024root___change_request\n"); );
    // Body
    return (VPassthrough___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VPassthrough___024root___change_request_1(VPassthrough___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPassthrough__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPassthrough___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VPassthrough___024root___eval_debug_assertions(VPassthrough___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPassthrough__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPassthrough___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->io_in & 0xfc00U))) {
        Verilated::overWidthError("io_in");}
}
#endif  // VL_DEBUG
