// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtoptest.h for the primary calling header

#include "Vtoptest___024root.h"
#include "Vtoptest__Syms.h"

//==========


void Vtoptest___024root___ctor_var_reset(Vtoptest___024root* vlSelf);

Vtoptest___024root::Vtoptest___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtoptest___024root___ctor_var_reset(this);
}

void Vtoptest___024root::__Vconfigure(Vtoptest__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtoptest___024root::~Vtoptest___024root() {
}

void Vtoptest___024root___initial__TOP__1(Vtoptest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtoptest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtoptest___024root___initial__TOP__1\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string("top.vcd"));
    VL_PRINTF_MT("-Info: toptest.v:5: $dumpvar ignored, as Verilated without --trace\n");
}

void Vtoptest___024root___eval_initial(Vtoptest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtoptest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtoptest___024root___eval_initial\n"); );
    // Body
    Vtoptest___024root___initial__TOP__1(vlSelf);
}

void Vtoptest___024root___combo__TOP__2(Vtoptest___024root* vlSelf);

void Vtoptest___024root___eval_settle(Vtoptest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtoptest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtoptest___024root___eval_settle\n"); );
    // Body
    Vtoptest___024root___combo__TOP__2(vlSelf);
}

void Vtoptest___024root___final(Vtoptest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtoptest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtoptest___024root___final\n"); );
}

void Vtoptest___024root___ctor_var_reset(Vtoptest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtoptest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtoptest___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->f = VL_RAND_RESET_I(1);
}
