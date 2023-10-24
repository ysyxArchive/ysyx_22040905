// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vunit.h for the primary calling header

#include "verilated.h"

#include "Vunit___024root.h"

VL_INLINE_OPT void Vunit___024root___ico_sequent__TOP__0(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->unit__DOT__next_valid = ((IData)(vlSelf->io_mul_ready) 
                                     & (IData)(vlSelf->io_mul_valid));
    vlSelf->unit__DOT___a_T_3 = (vlSelf->io_multiplicand 
                                 >> ((IData)(vlSelf->io_mulw)
                                      ? 0x1fU : 0x3fU));
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

void Vunit___024root___eval_ico(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vunit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vunit___024root___eval_act(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vunit___024root___nba_sequent__TOP__0(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__unit__DOT__state;
    __Vdly__unit__DOT__state = 0;
    VlWide<5>/*128:0*/ __Vdly__unit__DOT__b;
    VL_ZERO_W(129, __Vdly__unit__DOT__b);
    VlWide<5>/*159:0*/ __Vtemp_h9ca31a1f__0;
    VlWide<5>/*159:0*/ __Vtemp_h202d6a15__0;
    VlWide<5>/*159:0*/ __Vtemp_h626ca6a0__0;
    VlWide<5>/*159:0*/ __Vtemp_h202d6a15__1;
    VlWide<5>/*159:0*/ __Vtemp_h3e17a9bc__0;
    // Body
    __Vdly__unit__DOT__b[0U] = vlSelf->unit__DOT__b[0U];
    __Vdly__unit__DOT__b[1U] = vlSelf->unit__DOT__b[1U];
    __Vdly__unit__DOT__b[2U] = vlSelf->unit__DOT__b[2U];
    __Vdly__unit__DOT__b[3U] = vlSelf->unit__DOT__b[3U];
    __Vdly__unit__DOT__b[4U] = vlSelf->unit__DOT__b[4U];
    __Vdly__unit__DOT__state = vlSelf->unit__DOT__state;
    vlSelf->unit__DOT__a[0U] = vlSelf->unit__DOT___GEN_7[0U];
    vlSelf->unit__DOT__a[1U] = vlSelf->unit__DOT___GEN_7[1U];
    vlSelf->unit__DOT__a[2U] = vlSelf->unit__DOT___GEN_7[2U];
    vlSelf->unit__DOT__a[3U] = vlSelf->unit__DOT___GEN_7[3U];
    vlSelf->unit__DOT__a[4U] = (1U & vlSelf->unit__DOT___GEN_7[4U]);
    __Vdly__unit__DOT__state = (1U & ((~ (IData)(vlSelf->reset)) 
                                      & ((IData)(vlSelf->unit__DOT__state)
                                          ? ((~ (IData)(vlSelf->io_flush)) 
                                             & (~ (IData)(vlSelf->unit__DOT__last)))
                                          : ((~ (IData)(vlSelf->io_flush)) 
                                             & (IData)(vlSelf->io_mul_valid)))));
    if (vlSelf->reset) {
        vlSelf->unit__DOT__cnt = 0U;
        __Vdly__unit__DOT__b[0U] = 0U;
        __Vdly__unit__DOT__b[1U] = 0U;
        __Vdly__unit__DOT__b[2U] = 0U;
        __Vdly__unit__DOT__b[3U] = 0U;
        __Vdly__unit__DOT__b[4U] = 0U;
        vlSelf->unit__DOT__result[0U] = 0U;
        vlSelf->unit__DOT__result[1U] = 0U;
        vlSelf->unit__DOT__result[2U] = 0U;
        vlSelf->unit__DOT__result[3U] = 0U;
        vlSelf->unit__DOT__result[4U] = 0U;
        vlSelf->unit__DOT__mulBits = 0U;
    } else {
        vlSelf->unit__DOT__cnt = ((IData)(vlSelf->io_mul_ready)
                                   ? 0U : (((0U == 
                                             ((((vlSelf->unit__DOT__b[0U] 
                                                 | vlSelf->unit__DOT__b[1U]) 
                                                | vlSelf->unit__DOT__b[2U]) 
                                               | vlSelf->unit__DOT__b[3U]) 
                                              | vlSelf->unit__DOT__b[4U])) 
                                            & ((IData)(vlSelf->unit__DOT__cnt) 
                                               != (IData)(vlSelf->unit__DOT__mulBits)))
                                            ? (IData)(vlSelf->unit__DOT__mulBits)
                                            : (IData)(vlSelf->unit__DOT___cnt_T_5)));
        if (vlSelf->unit__DOT__state) {
            __Vdly__unit__DOT__b[0U] = vlSelf->unit__DOT___b_T[0U];
            __Vdly__unit__DOT__b[1U] = vlSelf->unit__DOT___b_T[1U];
            __Vdly__unit__DOT__b[2U] = vlSelf->unit__DOT___b_T[2U];
            __Vdly__unit__DOT__b[3U] = vlSelf->unit__DOT___b_T[3U];
            __Vdly__unit__DOT__b[4U] = vlSelf->unit__DOT___b_T[4U];
            if (((IData)(vlSelf->unit__DOT__last) & 
                 vlSelf->unit__DOT__b[0U])) {
                vlSelf->unit__DOT__result[0U] = vlSelf->unit__DOT___s_T_3[0U];
                vlSelf->unit__DOT__result[1U] = vlSelf->unit__DOT___s_T_3[1U];
                vlSelf->unit__DOT__result[2U] = vlSelf->unit__DOT___s_T_3[2U];
                vlSelf->unit__DOT__result[3U] = vlSelf->unit__DOT___s_T_3[3U];
                vlSelf->unit__DOT__result[4U] = vlSelf->unit__DOT___s_T_3[4U];
            } else if ((1U & vlSelf->unit__DOT__b[0U])) {
                vlSelf->unit__DOT__result[0U] = vlSelf->unit__DOT___s_T_6[0U];
                vlSelf->unit__DOT__result[1U] = vlSelf->unit__DOT___s_T_6[1U];
                vlSelf->unit__DOT__result[2U] = vlSelf->unit__DOT___s_T_6[2U];
                vlSelf->unit__DOT__result[3U] = vlSelf->unit__DOT___s_T_6[3U];
                vlSelf->unit__DOT__result[4U] = vlSelf->unit__DOT___s_T_6[4U];
            }
        } else {
            if (vlSelf->unit__DOT__next_valid) {
                if ((1U & (IData)(vlSelf->io_mul_signed))) {
                    __Vdly__unit__DOT__b[0U] = (IData)(vlSelf->io_multiplier);
                    __Vdly__unit__DOT__b[1U] = (IData)(
                                                       (vlSelf->io_multiplier 
                                                        >> 0x20U));
                    __Vdly__unit__DOT__b[2U] = (1U 
                                                & (IData)(vlSelf->unit__DOT___a_T_3));
                } else {
                    __Vdly__unit__DOT__b[0U] = (IData)(vlSelf->io_multiplier);
                    __Vdly__unit__DOT__b[1U] = (IData)(
                                                       (vlSelf->io_multiplier 
                                                        >> 0x20U));
                    __Vdly__unit__DOT__b[2U] = 0U;
                }
                __Vdly__unit__DOT__b[3U] = 0U;
                __Vdly__unit__DOT__b[4U] = 0U;
            }
            vlSelf->unit__DOT__result[0U] = 0U;
            vlSelf->unit__DOT__result[1U] = 0U;
            vlSelf->unit__DOT__result[2U] = 0U;
            vlSelf->unit__DOT__result[3U] = 0U;
            vlSelf->unit__DOT__result[4U] = 0U;
        }
        if (((IData)(vlSelf->io_mul_ready) & (IData)(vlSelf->io_mul_valid))) {
            vlSelf->unit__DOT__mulBits = ((IData)(vlSelf->io_mulw)
                                           ? 0x1fU : 0x3fU);
        }
    }
    vlSelf->unit__DOT__b[0U] = __Vdly__unit__DOT__b[0U];
    vlSelf->unit__DOT__b[1U] = __Vdly__unit__DOT__b[1U];
    vlSelf->unit__DOT__b[2U] = __Vdly__unit__DOT__b[2U];
    vlSelf->unit__DOT__b[3U] = __Vdly__unit__DOT__b[3U];
    vlSelf->unit__DOT__b[4U] = __Vdly__unit__DOT__b[4U];
    vlSelf->unit__DOT__state = __Vdly__unit__DOT__state;
    VL_SHIFTR_WWI(129,129,32, __Vtemp_h9ca31a1f__0, vlSelf->unit__DOT__b, 1U);
    vlSelf->unit__DOT___b_T[0U] = __Vtemp_h9ca31a1f__0[0U];
    vlSelf->unit__DOT___b_T[1U] = __Vtemp_h9ca31a1f__0[1U];
    vlSelf->unit__DOT___b_T[2U] = __Vtemp_h9ca31a1f__0[2U];
    vlSelf->unit__DOT___b_T[3U] = __Vtemp_h9ca31a1f__0[3U];
    vlSelf->unit__DOT___b_T[4U] = (1U & __Vtemp_h9ca31a1f__0[4U]);
    vlSelf->unit__DOT___cnt_T_5 = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->unit__DOT__cnt)));
    vlSelf->io_result_hi = (((QData)((IData)(vlSelf->unit__DOT__result[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->unit__DOT__result[2U])));
    vlSelf->io_result_lo = (((QData)((IData)(vlSelf->unit__DOT__result[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->unit__DOT__result[0U])));
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
    vlSelf->io_mul_ready = (1U & (~ (IData)(vlSelf->unit__DOT__state)));
    vlSelf->io_out_valid = ((IData)(vlSelf->unit__DOT__cnt) 
                            == (0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->unit__DOT__mulBits))));
    vlSelf->unit__DOT__last = ((IData)(vlSelf->unit__DOT__cnt) 
                               == (IData)(vlSelf->unit__DOT__mulBits));
    vlSelf->unit__DOT__next_valid = ((IData)(vlSelf->io_mul_ready) 
                                     & (IData)(vlSelf->io_mul_valid));
}

VL_INLINE_OPT void Vunit___024root___nba_sequent__TOP__1(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___nba_sequent__TOP__1\n"); );
    // Body
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

void Vunit___024root___eval_nba(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vunit___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vunit___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vunit___024root___eval_triggers__ico(Vunit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vunit___024root___dump_triggers__ico(Vunit___024root* vlSelf);
#endif  // VL_DEBUG
void Vunit___024root___eval_triggers__act(Vunit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vunit___024root___dump_triggers__act(Vunit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vunit___024root___dump_triggers__nba(Vunit___024root* vlSelf);
#endif  // VL_DEBUG

void Vunit___024root___eval(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vunit___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vunit___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vunit___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vunit___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vunit___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vunit___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vunit___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vunit___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vunit___024root___eval_debug_assertions(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_mul_valid & 0xfeU))) {
        Verilated::overWidthError("io_mul_valid");}
    if (VL_UNLIKELY((vlSelf->io_flush & 0xfeU))) {
        Verilated::overWidthError("io_flush");}
    if (VL_UNLIKELY((vlSelf->io_mulw & 0xfeU))) {
        Verilated::overWidthError("io_mulw");}
    if (VL_UNLIKELY((vlSelf->io_mul_signed & 0xfcU))) {
        Verilated::overWidthError("io_mul_signed");}
}
#endif  // VL_DEBUG
