// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vunit.h for the primary calling header

#include "verilated.h"

#include "Vunit_gen_p.h"

VL_ATTR_COLD void Vunit_gen_p___ctor_var_reset(Vunit_gen_p* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_gen_p___ctor_var_reset\n"); );
    // Body
    vlSelf->io_src = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(132, vlSelf->io_x);
    VL_RAND_RESET_W(132, vlSelf->io_p);
    vlSelf->io_c = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->__PVT__io_p_lo);
    VL_RAND_RESET_W(66, vlSelf->__PVT__io_p_hi);
    vlSelf->__PVT__gen_sel__DOT__sel_negative = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_sel__DOT__sel_positive = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_sel__DOT__sel_double_negative = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_sel__DOT__sel_double_positive = VL_RAND_RESET_I(1);
}
