// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vunit.h for the primary calling header

#include "verilated.h"

#include "Vunit___024root.h"

VL_ATTR_COLD void Vunit___024root___eval_static(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vunit___024root___eval_initial(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void Vunit___024root___eval_final(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vunit___024root___eval_triggers__stl(Vunit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vunit___024root___dump_triggers__stl(Vunit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vunit___024root___eval_stl(Vunit___024root* vlSelf);

VL_ATTR_COLD void Vunit___024root___eval_settle(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vunit___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vunit___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vunit___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vunit___024root___dump_triggers__stl(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vunit___024root___stl_sequent__TOP__0(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h9ca31a1f__0;
    VlWide<5>/*159:0*/ __Vtemp_h202d6a15__0;
    VlWide<5>/*159:0*/ __Vtemp_h626ca6a0__0;
    VlWide<5>/*159:0*/ __Vtemp_h202d6a15__1;
    VlWide<5>/*159:0*/ __Vtemp_h3e17a9bc__0;
    // Body
    vlSelf->io_result_hi = (((QData)((IData)(vlSelf->unit__DOT__result[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->unit__DOT__result[2U])));
    vlSelf->io_result_lo = (((QData)((IData)(vlSelf->unit__DOT__result[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->unit__DOT__result[0U])));
    vlSelf->unit__DOT___cnt_T_5 = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->unit__DOT__cnt)));
    VL_SHIFTR_WWI(129,129,32, __Vtemp_h9ca31a1f__0, vlSelf->unit__DOT__b, 1U);
    vlSelf->unit__DOT___b_T[0U] = __Vtemp_h9ca31a1f__0[0U];
    vlSelf->unit__DOT___b_T[1U] = __Vtemp_h9ca31a1f__0[1U];
    vlSelf->unit__DOT___b_T[2U] = __Vtemp_h9ca31a1f__0[2U];
    vlSelf->unit__DOT___b_T[3U] = __Vtemp_h9ca31a1f__0[3U];
    vlSelf->unit__DOT___b_T[4U] = (1U & __Vtemp_h9ca31a1f__0[4U]);
    __Vtemp_h202d6a15__0[0U] = vlSelf->unit__DOT__a[0U];
    __Vtemp_h202d6a15__0[1U] = vlSelf->unit__DOT__a[1U];
    __Vtemp_h202d6a15__0[2U] = vlSelf->unit__DOT__a[2U];
    __Vtemp_h202d6a15__0[3U] = vlSelf->unit__DOT__a[3U];
    __Vtemp_h202d6a15__0[4U] = vlSelf->unit__DOT__a[4U];
    VL_SUB_W(5, __Vtemp_h626ca6a0__0, vlSelf->unit__DOT__result, __Vtemp_h202d6a15__0);
    vlSelf->unit__DOT___s_T_3[0U] = __Vtemp_h626ca6a0__0[0U];
    vlSelf->unit__DOT___s_T_3[1U] = __Vtemp_h626ca6a0__0[1U];
    vlSelf->unit__DOT___s_T_3[2U] = __Vtemp_h626ca6a0__0[2U];
    vlSelf->unit__DOT___s_T_3[3U] = __Vtemp_h626ca6a0__0[3U];
    vlSelf->unit__DOT___s_T_3[4U] = (3U & __Vtemp_h626ca6a0__0[4U]);
    __Vtemp_h202d6a15__1[0U] = vlSelf->unit__DOT__a[0U];
    __Vtemp_h202d6a15__1[1U] = vlSelf->unit__DOT__a[1U];
    __Vtemp_h202d6a15__1[2U] = vlSelf->unit__DOT__a[2U];
    __Vtemp_h202d6a15__1[3U] = vlSelf->unit__DOT__a[3U];
    __Vtemp_h202d6a15__1[4U] = vlSelf->unit__DOT__a[4U];
    VL_ADD_W(5, __Vtemp_h3e17a9bc__0, vlSelf->unit__DOT__result, __Vtemp_h202d6a15__1);
    vlSelf->unit__DOT___s_T_6[0U] = __Vtemp_h3e17a9bc__0[0U];
    vlSelf->unit__DOT___s_T_6[1U] = __Vtemp_h3e17a9bc__0[1U];
    vlSelf->unit__DOT___s_T_6[2U] = __Vtemp_h3e17a9bc__0[2U];
    vlSelf->unit__DOT___s_T_6[3U] = __Vtemp_h3e17a9bc__0[3U];
    vlSelf->unit__DOT___s_T_6[4U] = (3U & __Vtemp_h3e17a9bc__0[4U]);
    vlSelf->io_out_valid = ((IData)(vlSelf->unit__DOT__cnt) 
                            == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->unit__DOT__mulBits))));
    vlSelf->unit__DOT__last = ((IData)(vlSelf->unit__DOT__cnt) 
                               == (IData)(vlSelf->unit__DOT__mulBits));
    vlSelf->unit__DOT___a_T_3 = (vlSelf->io_multiplicand 
                                 >> ((IData)(vlSelf->io_mulw)
                                      ? 0x1fU : 0x3fU));
    vlSelf->io_mul_ready = (1U & (~ (IData)(vlSelf->unit__DOT__state)));
    vlSelf->unit__DOT__next_valid = ((IData)(vlSelf->io_mul_ready) 
                                     & (IData)(vlSelf->io_mul_valid));
    if (vlSelf->reset) {
        vlSelf->unit__DOT___GEN_7[0U] = 0U;
        vlSelf->unit__DOT___GEN_7[1U] = 0U;
        vlSelf->unit__DOT___GEN_7[2U] = 0U;
        vlSelf->unit__DOT___GEN_7[3U] = 0U;
        vlSelf->unit__DOT___GEN_7[4U] = 0U;
    } else if (vlSelf->unit__DOT__state) {
        vlSelf->unit__DOT___GEN_7[0U] = (vlSelf->unit__DOT__a[0U] 
                                         << 1U);
        vlSelf->unit__DOT___GEN_7[1U] = ((vlSelf->unit__DOT__a[0U] 
                                          >> 0x1fU) 
                                         | (vlSelf->unit__DOT__a[1U] 
                                            << 1U));
        vlSelf->unit__DOT___GEN_7[2U] = ((vlSelf->unit__DOT__a[1U] 
                                          >> 0x1fU) 
                                         | (vlSelf->unit__DOT__a[2U] 
                                            << 1U));
        vlSelf->unit__DOT___GEN_7[3U] = ((vlSelf->unit__DOT__a[2U] 
                                          >> 0x1fU) 
                                         | (vlSelf->unit__DOT__a[3U] 
                                            << 1U));
        vlSelf->unit__DOT___GEN_7[4U] = ((vlSelf->unit__DOT__a[3U] 
                                          >> 0x1fU) 
                                         | (vlSelf->unit__DOT__a[4U] 
                                            << 1U));
    } else if (vlSelf->unit__DOT__next_valid) {
        if ((2U & (IData)(vlSelf->io_mul_signed))) {
            vlSelf->unit__DOT___GEN_7[0U] = (IData)(vlSelf->io_multiplicand);
            vlSelf->unit__DOT___GEN_7[1U] = (IData)(
                                                    (vlSelf->io_multiplicand 
                                                     >> 0x20U));
            vlSelf->unit__DOT___GEN_7[2U] = (1U & (IData)(vlSelf->unit__DOT___a_T_3));
        } else {
            vlSelf->unit__DOT___GEN_7[0U] = (IData)(vlSelf->io_multiplicand);
            vlSelf->unit__DOT___GEN_7[1U] = (IData)(
                                                    (vlSelf->io_multiplicand 
                                                     >> 0x20U));
            vlSelf->unit__DOT___GEN_7[2U] = 0U;
        }
        vlSelf->unit__DOT___GEN_7[3U] = 0U;
        vlSelf->unit__DOT___GEN_7[4U] = 0U;
    } else {
        vlSelf->unit__DOT___GEN_7[0U] = vlSelf->unit__DOT__a[0U];
        vlSelf->unit__DOT___GEN_7[1U] = vlSelf->unit__DOT__a[1U];
        vlSelf->unit__DOT___GEN_7[2U] = vlSelf->unit__DOT__a[2U];
        vlSelf->unit__DOT___GEN_7[3U] = vlSelf->unit__DOT__a[3U];
        vlSelf->unit__DOT___GEN_7[4U] = vlSelf->unit__DOT__a[4U];
    }
}

VL_ATTR_COLD void Vunit___024root___eval_stl(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vunit___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vunit___024root___dump_triggers__ico(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vunit___024root___dump_triggers__act(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vunit___024root___dump_triggers__nba(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vunit___024root___ctor_var_reset(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_mul_valid = VL_RAND_RESET_I(1);
    vlSelf->io_flush = VL_RAND_RESET_I(1);
    vlSelf->io_mulw = VL_RAND_RESET_I(1);
    vlSelf->io_mul_signed = VL_RAND_RESET_I(2);
    vlSelf->io_multiplicand = VL_RAND_RESET_Q(64);
    vlSelf->io_multiplier = VL_RAND_RESET_Q(64);
    vlSelf->io_mul_ready = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->io_result_hi = VL_RAND_RESET_Q(64);
    vlSelf->io_result_lo = VL_RAND_RESET_Q(64);
    vlSelf->unit__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->unit__DOT__cnt = VL_RAND_RESET_I(8);
    vlSelf->unit__DOT__mulBits = VL_RAND_RESET_I(6);
    vlSelf->unit__DOT__last = VL_RAND_RESET_I(1);
    vlSelf->unit__DOT__next_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, vlSelf->unit__DOT__a);
    VL_RAND_RESET_W(129, vlSelf->unit__DOT__b);
    VL_RAND_RESET_W(130, vlSelf->unit__DOT__result);
    vlSelf->unit__DOT___a_T_3 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(129, vlSelf->unit__DOT___b_T);
    vlSelf->unit__DOT___cnt_T_5 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(130, vlSelf->unit__DOT___s_T_3);
    VL_RAND_RESET_W(130, vlSelf->unit__DOT___s_T_6);
    VL_RAND_RESET_W(130, vlSelf->unit__DOT___GEN_7);
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
