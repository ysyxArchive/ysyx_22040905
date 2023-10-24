// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vunit__Syms.h"


void Vunit___024root__traceChgSub64(Vunit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 41375);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & ((0xc0U == 
                                           (0xc0U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_20_io_in_T))) 
                                          | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_20_io_in_T) 
                                              >> 8U) 
                                             & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_20_io_in_T) 
                                                 >> 6U) 
                                                ^ ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_20_io_in_T) 
                                                   >> 7U)))))));
            tracep->chgBit(oldp+1,((1U & VL_REDXOR_32(
                                                      (0x1c0U 
                                                       & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_20_io_in_T))))));
            tracep->chgBit(oldp+2,((1U & ((0x18U == 
                                           (0x18U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_20_io_in_T))) 
                                          | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_20_io_in_T) 
                                              >> 5U) 
                                             & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_20_io_in_T) 
                                                 >> 3U) 
                                                ^ ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_20_io_in_T) 
                                                   >> 4U)))))));
            tracep->chgBit(oldp+3,((1U & VL_REDXOR_32(
                                                      (0x38U 
                                                       & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_20_io_in_T))))));
            tracep->chgBit(oldp+4,((1U & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_20_io_in_T) 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_20_io_in_T) 
                                              >> 1U)) 
                                          | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_20_io_in_T) 
                                              >> 2U) 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_20_io_in_T) 
                                                ^ ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_20_io_in_T) 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+5,((1U & VL_REDXOR_32(
                                                      (7U 
                                                       & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_20_io_in_T))))));
            tracep->chgBit(oldp+6,((1U & ((0x6000000U 
                                           == (0x6000000U 
                                               & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin)) 
                                          | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                              >> 0x1bU) 
                                             & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                                 >> 0x19U) 
                                                ^ (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                                   >> 0x1aU)))))));
            tracep->chgBit(oldp+7,((1U & VL_REDXOR_32(
                                                      (0xe000000U 
                                                       & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin)))));
            tracep->chgBit(oldp+8,((1U & ((0xc00000U 
                                           == (0xc00000U 
                                               & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin)) 
                                          | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                              >> 0x18U) 
                                             & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                                 >> 0x16U) 
                                                ^ (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                                   >> 0x17U)))))));
            tracep->chgBit(oldp+9,((1U & VL_REDXOR_32(
                                                      (0x1c00000U 
                                                       & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin)))));
            tracep->chgBit(oldp+10,((1U & ((0x180000U 
                                            == (0x180000U 
                                                & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin)) 
                                           | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                               >> 0x15U) 
                                              & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                                  >> 0x13U) 
                                                 ^ 
                                                 (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                                  >> 0x14U)))))));
            tracep->chgBit(oldp+11,((1U & VL_REDXOR_32(
                                                       (0x380000U 
                                                        & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin)))));
            tracep->chgBit(oldp+12,((1U & ((0x30000U 
                                            == (0x30000U 
                                                & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin)) 
                                           | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                               >> 0x12U) 
                                              & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                                  >> 0x10U) 
                                                 ^ 
                                                 (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                                  >> 0x11U)))))));
            tracep->chgBit(oldp+13,((1U & VL_REDXOR_32(
                                                       (0x70000U 
                                                        & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin)))));
            tracep->chgBit(oldp+14,((1U & ((0x30U == 
                                            (0x30U 
                                             & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_27_io_in_T))) 
                                           | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_27_io_in_T) 
                                               >> 6U) 
                                              & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_27_io_in_T) 
                                                  >> 4U) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_27_io_in_T) 
                                                  >> 5U)))))));
            tracep->chgBit(oldp+15,((1U & VL_REDXOR_32(
                                                       (0x70U 
                                                        & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_27_io_in_T))))));
            tracep->chgBit(oldp+16,((1U & ((6U == (6U 
                                                   & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_27_io_in_T))) 
                                           | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_27_io_in_T) 
                                               >> 3U) 
                                              & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_27_io_in_T) 
                                                  >> 1U) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_27_io_in_T) 
                                                  >> 2U)))))));
            tracep->chgBit(oldp+17,((1U & VL_REDXOR_32(
                                                       (0xeU 
                                                        & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT___csa_27_io_in_T))))));
            tracep->chgBit(oldp+18,((1U & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_29_io_in) 
                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_29_io_in) 
                                               >> 1U)) 
                                           | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_29_io_in) 
                                               >> 2U) 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_29_io_in) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_29_io_in) 
                                                  >> 1U)))))));
            tracep->chgBit(oldp+19,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_29_io_in))))));
            tracep->chgBit(oldp+20,((1U & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_30_io_in) 
                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_30_io_in) 
                                               >> 1U)) 
                                           | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_30_io_in) 
                                               >> 2U) 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_30_io_in) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_30_io_in) 
                                                  >> 1U)))))));
            tracep->chgBit(oldp+21,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_30_io_in))))));
            tracep->chgCData(oldp+22,((7U & (IData)(
                                                    (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                     >> 0x1eU)))),3);
            tracep->chgCData(oldp+23,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_0_io_out),2);
            tracep->chgCData(oldp+24,((7U & (IData)(
                                                    (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                     >> 0x1bU)))),3);
            tracep->chgCData(oldp+25,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_1_io_out),2);
            tracep->chgCData(oldp+26,((7U & (IData)(
                                                    (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                     >> 0x18U)))),3);
            tracep->chgCData(oldp+27,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_2_io_out),2);
            tracep->chgCData(oldp+28,((7U & (IData)(
                                                    (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                     >> 0x15U)))),3);
            tracep->chgCData(oldp+29,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_3_io_out),2);
            tracep->chgCData(oldp+30,((7U & (IData)(
                                                    (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                     >> 0x12U)))),3);
            tracep->chgCData(oldp+31,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_4_io_out),2);
            tracep->chgCData(oldp+32,((7U & (IData)(
                                                    (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                     >> 0xfU)))),3);
            tracep->chgCData(oldp+33,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_5_io_out),2);
            tracep->chgCData(oldp+34,((7U & (IData)(
                                                    (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                     >> 0xcU)))),3);
            tracep->chgCData(oldp+35,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_6_io_out),2);
            tracep->chgCData(oldp+36,((7U & (IData)(
                                                    (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                     >> 9U)))),3);
            tracep->chgCData(oldp+37,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_7_io_out),2);
            tracep->chgCData(oldp+38,((7U & (IData)(
                                                    (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                     >> 6U)))),3);
            tracep->chgCData(oldp+39,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_8_io_out),2);
            tracep->chgCData(oldp+40,((7U & (IData)(
                                                    (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                     >> 3U)))),3);
            tracep->chgCData(oldp+41,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_9_io_out),2);
            tracep->chgCData(oldp+42,((7U & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127))),3);
            tracep->chgCData(oldp+43,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_10_io_out),2);
            tracep->chgCData(oldp+44,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_11_io_in_T) 
                                             >> 8U))),3);
            tracep->chgCData(oldp+45,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_11_io_out),2);
            tracep->chgCData(oldp+46,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_11_io_in_T) 
                                             >> 5U))),3);
            tracep->chgCData(oldp+47,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_12_io_out),2);
            tracep->chgCData(oldp+48,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_11_io_in_T) 
                                             >> 2U))),3);
            tracep->chgCData(oldp+49,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_13_io_out),2);
            tracep->chgCData(oldp+50,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_14_io_in),3);
            tracep->chgCData(oldp+51,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_14_io_out),2);
            tracep->chgCData(oldp+52,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+53,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_15_io_out),2);
            tracep->chgCData(oldp+54,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                             >> 9U))),3);
            tracep->chgCData(oldp+55,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_16_io_out),2);
            tracep->chgCData(oldp+56,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                             >> 6U))),3);
            tracep->chgCData(oldp+57,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_17_io_out),2);
            tracep->chgCData(oldp+58,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                             >> 3U))),3);
            tracep->chgCData(oldp+59,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_18_io_out),2);
            tracep->chgCData(oldp+60,((7U & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin)),3);
            tracep->chgCData(oldp+61,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_19_io_out),2);
            tracep->chgCData(oldp+62,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_20_io_in_T) 
                                             >> 6U))),3);
            tracep->chgCData(oldp+63,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_20_io_out),2);
            tracep->chgCData(oldp+64,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_20_io_in_T) 
                                             >> 3U))),3);
            tracep->chgCData(oldp+65,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_21_io_out),2);
            tracep->chgCData(oldp+66,((7U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_20_io_in_T))),3);
            tracep->chgCData(oldp+67,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_22_io_out),2);
            tracep->chgCData(oldp+68,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                             >> 0x19U))),3);
            tracep->chgCData(oldp+69,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_23_io_out),2);
            tracep->chgCData(oldp+70,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                             >> 0x16U))),3);
            tracep->chgCData(oldp+71,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_24_io_out),2);
            tracep->chgCData(oldp+72,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                             >> 0x13U))),3);
            tracep->chgCData(oldp+73,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_25_io_out),2);
            tracep->chgCData(oldp+74,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                             >> 0x10U))),3);
            tracep->chgCData(oldp+75,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_26_io_out),2);
            tracep->chgCData(oldp+76,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_27_io_in_T) 
                                             >> 4U))),3);
            tracep->chgCData(oldp+77,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_27_io_out),2);
            tracep->chgCData(oldp+78,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_27_io_in_T) 
                                             >> 1U))),3);
            tracep->chgCData(oldp+79,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_28_io_out),2);
            tracep->chgCData(oldp+80,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_29_io_in),3);
            tracep->chgCData(oldp+81,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_29_io_out),2);
            tracep->chgCData(oldp+82,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_30_io_in),3);
            tracep->chgCData(oldp+83,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_30_io_out),2);
            tracep->chgBit(oldp+84,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_0_io_out))));
            tracep->chgBit(oldp+85,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_1_io_out))));
            tracep->chgBit(oldp+86,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_2_io_out))));
            tracep->chgBit(oldp+87,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_3_io_out))));
            tracep->chgBit(oldp+88,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_4_io_out))));
            tracep->chgBit(oldp+89,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_5_io_out))));
            tracep->chgBit(oldp+90,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_6_io_out))));
            tracep->chgBit(oldp+91,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_7_io_out))));
            tracep->chgBit(oldp+92,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_8_io_out))));
            tracep->chgBit(oldp+93,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_9_io_out))));
            tracep->chgBit(oldp+94,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_10_io_out))));
            tracep->chgCData(oldp+95,(((0x10U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_6_io_out) 
                                                 << 4U)) 
                                       | ((8U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_7_io_out) 
                                                 << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_8_io_out) 
                                               << 2U)) 
                                             | ((2U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_9_io_out) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_10_io_out))))))),5);
            tracep->chgBit(oldp+96,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_11_io_out))));
            tracep->chgBit(oldp+97,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_12_io_out))));
            tracep->chgBit(oldp+98,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_13_io_out))));
            tracep->chgBit(oldp+99,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_14_io_out))));
            tracep->chgBit(oldp+100,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_15_io_out))));
            tracep->chgBit(oldp+101,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_16_io_out))));
            tracep->chgBit(oldp+102,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_17_io_out))));
            tracep->chgBit(oldp+103,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_18_io_out))));
            tracep->chgBit(oldp+104,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_19_io_out))));
            tracep->chgBit(oldp+105,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_20_io_out))));
            tracep->chgBit(oldp+106,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_21_io_out))));
            tracep->chgBit(oldp+107,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_22_io_out))));
            tracep->chgBit(oldp+108,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_23_io_out))));
            tracep->chgBit(oldp+109,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_24_io_out))));
            tracep->chgBit(oldp+110,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_25_io_out))));
            tracep->chgBit(oldp+111,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_26_io_out))));
            tracep->chgBit(oldp+112,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_27_io_out))));
            tracep->chgBit(oldp+113,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_28_io_out))));
            tracep->chgBit(oldp+114,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_29_io_out))));
            tracep->chgCData(oldp+115,(((2U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_27_io_out) 
                                               << 1U)) 
                                        | (1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_28_io_out)))),2);
            tracep->chgBit(oldp+116,((1U & ((0xc0000000ULL 
                                             == (0xc0000000ULL 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127)) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                        >> 0x20U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                           >> 0x1eU)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                             >> 0x1fU))))))));
            tracep->chgBit(oldp+117,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x1c0000000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127)))))));
            tracep->chgBit(oldp+118,((1U & ((IData)(
                                                    (0x18000000ULL 
                                                     == 
                                                     (0x18000000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                        >> 0x1dU)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                           >> 0x1bU)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                             >> 0x1cU))))))));
            tracep->chgBit(oldp+119,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x38000000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127)))))));
            tracep->chgBit(oldp+120,((1U & ((IData)(
                                                    (0x3000000ULL 
                                                     == 
                                                     (0x3000000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                        >> 0x1aU)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                           >> 0x18U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                             >> 0x19U))))))));
            tracep->chgBit(oldp+121,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x7000000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127)))))));
            tracep->chgBit(oldp+122,((1U & ((IData)(
                                                    (0x600000ULL 
                                                     == 
                                                     (0x600000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                        >> 0x17U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                           >> 0x15U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                             >> 0x16U))))))));
            tracep->chgBit(oldp+123,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0xe00000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127)))))));
            tracep->chgBit(oldp+124,((1U & ((IData)(
                                                    (0xc0000ULL 
                                                     == 
                                                     (0xc0000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                        >> 0x14U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                           >> 0x12U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                             >> 0x13U))))))));
            tracep->chgBit(oldp+125,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x1c0000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127)))))));
            tracep->chgBit(oldp+126,((1U & ((IData)(
                                                    (0x18000ULL 
                                                     == 
                                                     (0x18000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                        >> 0x11U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                           >> 0xfU)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                             >> 0x10U))))))));
            tracep->chgBit(oldp+127,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x38000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127)))))));
            tracep->chgBit(oldp+128,((1U & ((IData)(
                                                    (0x3000ULL 
                                                     == 
                                                     (0x3000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                        >> 0xeU)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                           >> 0xcU)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                             >> 0xdU))))))));
            tracep->chgBit(oldp+129,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x7000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127)))))));
            tracep->chgBit(oldp+130,((1U & ((IData)(
                                                    (0x600ULL 
                                                     == 
                                                     (0x600ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                        >> 0xbU)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                           >> 9U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                             >> 0xaU))))))));
            tracep->chgBit(oldp+131,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0xe00ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127)))))));
            tracep->chgBit(oldp+132,((1U & ((IData)(
                                                    (0xc0ULL 
                                                     == 
                                                     (0xc0ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                        >> 8U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                           >> 6U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                             >> 7U))))))));
            tracep->chgBit(oldp+133,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x1c0ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127)))))));
            tracep->chgBit(oldp+134,((1U & ((IData)(
                                                    (0x18ULL 
                                                     == 
                                                     (0x18ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                        >> 5U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                           >> 3U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                             >> 4U))))))));
            tracep->chgBit(oldp+135,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x38ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127)))))));
            tracep->chgBit(oldp+136,((1U & (((IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127) 
                                             & (IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                        >> 2U)) 
                                               & ((IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                             >> 1U))))))));
            tracep->chgBit(oldp+137,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (7ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127)))))));
            tracep->chgBit(oldp+138,((1U & ((IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_11_io_in_T)))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_11_io_in_T) 
                                                >> 0xaU) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_11_io_in_T) 
                                                   >> 8U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_11_io_in_T) 
                                                   >> 9U)))))));
            tracep->chgBit(oldp+139,((1U & VL_REDXOR_32(
                                                        (0x700U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_11_io_in_T))))));
            tracep->chgBit(oldp+140,((1U & ((0x60U 
                                             == (0x60U 
                                                 & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_11_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_11_io_in_T) 
                                                >> 7U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_11_io_in_T) 
                                                   >> 5U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_11_io_in_T) 
                                                   >> 6U)))))));
            tracep->chgBit(oldp+141,((1U & VL_REDXOR_32(
                                                        (0xe0U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_11_io_in_T))))));
            tracep->chgBit(oldp+142,((1U & ((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_11_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_11_io_in_T) 
                                                >> 4U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_11_io_in_T) 
                                                   >> 2U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_11_io_in_T) 
                                                   >> 3U)))))));
            tracep->chgBit(oldp+143,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_11_io_in_T))))));
            tracep->chgBit(oldp+144,((1U & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_14_io_in) 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_14_io_in) 
                                                >> 1U)) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_14_io_in) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_14_io_in) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_14_io_in) 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+145,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_14_io_in))))));
            tracep->chgBit(oldp+146,((1U & ((0x3000U 
                                             == (0x3000U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                >> 0xeU) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                   >> 0xcU) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                   >> 0xdU)))))));
            tracep->chgBit(oldp+147,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin)))));
            tracep->chgBit(oldp+148,((1U & ((0x600U 
                                             == (0x600U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                >> 0xbU) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                   >> 9U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                   >> 0xaU)))))));
            tracep->chgBit(oldp+149,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin)))));
            tracep->chgBit(oldp+150,((1U & ((0xc0U 
                                             == (0xc0U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                >> 8U) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                   >> 6U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                   >> 7U)))))));
            tracep->chgBit(oldp+151,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin)))));
            tracep->chgBit(oldp+152,((1U & ((0x18U 
                                             == (0x18U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                >> 5U) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                   >> 3U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                   >> 4U)))))));
            tracep->chgBit(oldp+153,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin)))));
            tracep->chgBit(oldp+154,((1U & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                             & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                >> 1U)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                >> 2U) 
                                               & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+155,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin)))));
            tracep->chgBit(oldp+156,((1U & ((0xc0U 
                                             == (0xc0U 
                                                 & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_20_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_20_io_in_T) 
                                                >> 8U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_20_io_in_T) 
                                                   >> 6U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_20_io_in_T) 
                                                   >> 7U)))))));
            tracep->chgBit(oldp+157,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_20_io_in_T))))));
            tracep->chgBit(oldp+158,((1U & ((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_20_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_20_io_in_T) 
                                                >> 5U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_20_io_in_T) 
                                                   >> 3U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_20_io_in_T) 
                                                   >> 4U)))))));
            tracep->chgBit(oldp+159,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_20_io_in_T))))));
            tracep->chgBit(oldp+160,((1U & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_20_io_in_T) 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_20_io_in_T) 
                                                >> 1U)) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_20_io_in_T) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_20_io_in_T) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_20_io_in_T) 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+161,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_20_io_in_T))))));
            tracep->chgBit(oldp+162,((1U & ((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                >> 0x1bU) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                   >> 0x19U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                   >> 0x1aU)))))));
            tracep->chgBit(oldp+163,((1U & VL_REDXOR_32(
                                                        (0xe000000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin)))));
            tracep->chgBit(oldp+164,((1U & ((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                >> 0x18U) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                   >> 0x16U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                   >> 0x17U)))))));
            tracep->chgBit(oldp+165,((1U & VL_REDXOR_32(
                                                        (0x1c00000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin)))));
            tracep->chgBit(oldp+166,((1U & ((0x180000U 
                                             == (0x180000U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                >> 0x15U) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                   >> 0x13U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                   >> 0x14U)))))));
            tracep->chgBit(oldp+167,((1U & VL_REDXOR_32(
                                                        (0x380000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin)))));
            tracep->chgBit(oldp+168,((1U & ((0x30000U 
                                             == (0x30000U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                >> 0x12U) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                   >> 0x10U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                   >> 0x11U)))))));
            tracep->chgBit(oldp+169,((1U & VL_REDXOR_32(
                                                        (0x70000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin)))));
            tracep->chgBit(oldp+170,((1U & ((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_27_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_27_io_in_T) 
                                                >> 6U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_27_io_in_T) 
                                                   >> 4U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_27_io_in_T) 
                                                   >> 5U)))))));
            tracep->chgBit(oldp+171,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_27_io_in_T))))));
            tracep->chgBit(oldp+172,((1U & ((6U == 
                                             (6U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_27_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_27_io_in_T) 
                                                >> 3U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_27_io_in_T) 
                                                   >> 1U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_27_io_in_T) 
                                                   >> 2U)))))));
            tracep->chgBit(oldp+173,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT___csa_27_io_in_T))))));
            tracep->chgBit(oldp+174,((1U & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_29_io_in) 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_29_io_in) 
                                                >> 1U)) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_29_io_in) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_29_io_in) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_29_io_in) 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+175,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_29_io_in))))));
            tracep->chgBit(oldp+176,((1U & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_30_io_in) 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_30_io_in) 
                                                >> 1U)) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_30_io_in) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_30_io_in) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_30_io_in) 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+177,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_30_io_in))))));
            tracep->chgCData(oldp+178,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                      >> 0x1eU)))),3);
            tracep->chgCData(oldp+179,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_0_io_out),2);
            tracep->chgCData(oldp+180,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                      >> 0x1bU)))),3);
            tracep->chgCData(oldp+181,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_1_io_out),2);
            tracep->chgCData(oldp+182,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                      >> 0x18U)))),3);
            tracep->chgCData(oldp+183,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_2_io_out),2);
            tracep->chgCData(oldp+184,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                      >> 0x15U)))),3);
            tracep->chgCData(oldp+185,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_3_io_out),2);
            tracep->chgCData(oldp+186,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                      >> 0x12U)))),3);
            tracep->chgCData(oldp+187,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_4_io_out),2);
            tracep->chgCData(oldp+188,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                      >> 0xfU)))),3);
            tracep->chgCData(oldp+189,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_5_io_out),2);
            tracep->chgCData(oldp+190,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                      >> 0xcU)))),3);
            tracep->chgCData(oldp+191,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_6_io_out),2);
            tracep->chgCData(oldp+192,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                      >> 9U)))),3);
            tracep->chgCData(oldp+193,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_7_io_out),2);
            tracep->chgCData(oldp+194,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                      >> 6U)))),3);
            tracep->chgCData(oldp+195,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_8_io_out),2);
            tracep->chgCData(oldp+196,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                      >> 3U)))),3);
            tracep->chgCData(oldp+197,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_9_io_out),2);
            tracep->chgCData(oldp+198,((7U & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128))),3);
            tracep->chgCData(oldp+199,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_10_io_out),2);
            tracep->chgCData(oldp+200,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_11_io_in_T) 
                                              >> 8U))),3);
            tracep->chgCData(oldp+201,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_11_io_out),2);
            tracep->chgCData(oldp+202,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_11_io_in_T) 
                                              >> 5U))),3);
            tracep->chgCData(oldp+203,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_12_io_out),2);
            tracep->chgCData(oldp+204,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_11_io_in_T) 
                                              >> 2U))),3);
            tracep->chgCData(oldp+205,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_13_io_out),2);
            tracep->chgCData(oldp+206,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_14_io_in),3);
            tracep->chgCData(oldp+207,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_14_io_out),2);
            tracep->chgCData(oldp+208,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+209,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_15_io_out),2);
            tracep->chgCData(oldp+210,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                              >> 9U))),3);
            tracep->chgCData(oldp+211,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_16_io_out),2);
            tracep->chgCData(oldp+212,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                              >> 6U))),3);
            tracep->chgCData(oldp+213,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_17_io_out),2);
            tracep->chgCData(oldp+214,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                              >> 3U))),3);
            tracep->chgCData(oldp+215,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_18_io_out),2);
            tracep->chgCData(oldp+216,((7U & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin)),3);
            tracep->chgCData(oldp+217,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_19_io_out),2);
            tracep->chgCData(oldp+218,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_20_io_in_T) 
                                              >> 6U))),3);
            tracep->chgCData(oldp+219,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_20_io_out),2);
            tracep->chgCData(oldp+220,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_20_io_in_T) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+221,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_21_io_out),2);
            tracep->chgCData(oldp+222,((7U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_20_io_in_T))),3);
            tracep->chgCData(oldp+223,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_22_io_out),2);
            tracep->chgCData(oldp+224,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                              >> 0x19U))),3);
            tracep->chgCData(oldp+225,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_23_io_out),2);
            tracep->chgCData(oldp+226,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                              >> 0x16U))),3);
            tracep->chgCData(oldp+227,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_24_io_out),2);
            tracep->chgCData(oldp+228,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                              >> 0x13U))),3);
            tracep->chgCData(oldp+229,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_25_io_out),2);
            tracep->chgCData(oldp+230,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                              >> 0x10U))),3);
            tracep->chgCData(oldp+231,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_26_io_out),2);
            tracep->chgCData(oldp+232,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_27_io_in_T) 
                                              >> 4U))),3);
            tracep->chgCData(oldp+233,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_27_io_out),2);
            tracep->chgCData(oldp+234,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_27_io_in_T) 
                                              >> 1U))),3);
            tracep->chgCData(oldp+235,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_28_io_out),2);
            tracep->chgCData(oldp+236,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_29_io_in),3);
            tracep->chgCData(oldp+237,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_29_io_out),2);
            tracep->chgCData(oldp+238,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_30_io_in),3);
            tracep->chgCData(oldp+239,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_30_io_out),2);
            tracep->chgBit(oldp+240,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_0_io_out))));
            tracep->chgBit(oldp+241,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_1_io_out))));
            tracep->chgBit(oldp+242,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_2_io_out))));
            tracep->chgBit(oldp+243,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_3_io_out))));
            tracep->chgBit(oldp+244,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_4_io_out))));
            tracep->chgBit(oldp+245,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_5_io_out))));
            tracep->chgBit(oldp+246,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_6_io_out))));
            tracep->chgBit(oldp+247,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_7_io_out))));
            tracep->chgBit(oldp+248,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_8_io_out))));
            tracep->chgBit(oldp+249,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_9_io_out))));
            tracep->chgBit(oldp+250,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_10_io_out))));
            tracep->chgCData(oldp+251,(((0x10U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_6_io_out) 
                                                  << 4U)) 
                                        | ((8U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_7_io_out) 
                                                  << 3U)) 
                                           | ((4U & 
                                               ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_8_io_out) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_9_io_out) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_10_io_out))))))),5);
            tracep->chgBit(oldp+252,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_11_io_out))));
            tracep->chgBit(oldp+253,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_12_io_out))));
            tracep->chgBit(oldp+254,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_13_io_out))));
            tracep->chgBit(oldp+255,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_14_io_out))));
            tracep->chgBit(oldp+256,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_15_io_out))));
            tracep->chgBit(oldp+257,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_16_io_out))));
            tracep->chgBit(oldp+258,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_17_io_out))));
            tracep->chgBit(oldp+259,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_18_io_out))));
            tracep->chgBit(oldp+260,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_19_io_out))));
            tracep->chgBit(oldp+261,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_20_io_out))));
            tracep->chgBit(oldp+262,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_21_io_out))));
            tracep->chgBit(oldp+263,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_22_io_out))));
            tracep->chgBit(oldp+264,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_23_io_out))));
            tracep->chgBit(oldp+265,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_24_io_out))));
            tracep->chgBit(oldp+266,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_25_io_out))));
            tracep->chgBit(oldp+267,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_26_io_out))));
            tracep->chgBit(oldp+268,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_27_io_out))));
            tracep->chgBit(oldp+269,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_28_io_out))));
            tracep->chgBit(oldp+270,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_29_io_out))));
            tracep->chgCData(oldp+271,(((2U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_27_io_out) 
                                               << 1U)) 
                                        | (1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_28_io_out)))),2);
            tracep->chgBit(oldp+272,((1U & ((0xc0000000ULL 
                                             == (0xc0000000ULL 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128)) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                        >> 0x20U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                           >> 0x1eU)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                             >> 0x1fU))))))));
            tracep->chgBit(oldp+273,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x1c0000000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128)))))));
            tracep->chgBit(oldp+274,((1U & ((IData)(
                                                    (0x18000000ULL 
                                                     == 
                                                     (0x18000000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                        >> 0x1dU)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                           >> 0x1bU)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                             >> 0x1cU))))))));
            tracep->chgBit(oldp+275,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x38000000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128)))))));
            tracep->chgBit(oldp+276,((1U & ((IData)(
                                                    (0x3000000ULL 
                                                     == 
                                                     (0x3000000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                        >> 0x1aU)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                           >> 0x18U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                             >> 0x19U))))))));
            tracep->chgBit(oldp+277,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x7000000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128)))))));
            tracep->chgBit(oldp+278,((1U & ((IData)(
                                                    (0x600000ULL 
                                                     == 
                                                     (0x600000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                        >> 0x17U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                           >> 0x15U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                             >> 0x16U))))))));
            tracep->chgBit(oldp+279,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0xe00000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128)))))));
            tracep->chgBit(oldp+280,((1U & ((IData)(
                                                    (0xc0000ULL 
                                                     == 
                                                     (0xc0000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                        >> 0x14U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                           >> 0x12U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                             >> 0x13U))))))));
            tracep->chgBit(oldp+281,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x1c0000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128)))))));
            tracep->chgBit(oldp+282,((1U & ((IData)(
                                                    (0x18000ULL 
                                                     == 
                                                     (0x18000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                        >> 0x11U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                           >> 0xfU)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                             >> 0x10U))))))));
            tracep->chgBit(oldp+283,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x38000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128)))))));
            tracep->chgBit(oldp+284,((1U & ((IData)(
                                                    (0x3000ULL 
                                                     == 
                                                     (0x3000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                        >> 0xeU)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                           >> 0xcU)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                             >> 0xdU))))))));
            tracep->chgBit(oldp+285,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x7000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128)))))));
            tracep->chgBit(oldp+286,((1U & ((IData)(
                                                    (0x600ULL 
                                                     == 
                                                     (0x600ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                        >> 0xbU)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                           >> 9U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                             >> 0xaU))))))));
            tracep->chgBit(oldp+287,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0xe00ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128)))))));
            tracep->chgBit(oldp+288,((1U & ((IData)(
                                                    (0xc0ULL 
                                                     == 
                                                     (0xc0ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                        >> 8U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                           >> 6U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                             >> 7U))))))));
            tracep->chgBit(oldp+289,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x1c0ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128)))))));
            tracep->chgBit(oldp+290,((1U & ((IData)(
                                                    (0x18ULL 
                                                     == 
                                                     (0x18ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                        >> 5U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                           >> 3U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                             >> 4U))))))));
            tracep->chgBit(oldp+291,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x38ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128)))))));
            tracep->chgBit(oldp+292,((1U & (((IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128) 
                                             & (IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                        >> 2U)) 
                                               & ((IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                             >> 1U))))))));
            tracep->chgBit(oldp+293,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (7ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128)))))));
            tracep->chgBit(oldp+294,((1U & ((IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_11_io_in_T)))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_11_io_in_T) 
                                                >> 0xaU) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_11_io_in_T) 
                                                   >> 8U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_11_io_in_T) 
                                                   >> 9U)))))));
            tracep->chgBit(oldp+295,((1U & VL_REDXOR_32(
                                                        (0x700U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_11_io_in_T))))));
            tracep->chgBit(oldp+296,((1U & ((0x60U 
                                             == (0x60U 
                                                 & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_11_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_11_io_in_T) 
                                                >> 7U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_11_io_in_T) 
                                                   >> 5U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_11_io_in_T) 
                                                   >> 6U)))))));
            tracep->chgBit(oldp+297,((1U & VL_REDXOR_32(
                                                        (0xe0U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_11_io_in_T))))));
            tracep->chgBit(oldp+298,((1U & ((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_11_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_11_io_in_T) 
                                                >> 4U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_11_io_in_T) 
                                                   >> 2U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_11_io_in_T) 
                                                   >> 3U)))))));
            tracep->chgBit(oldp+299,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_11_io_in_T))))));
            tracep->chgBit(oldp+300,((1U & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_14_io_in) 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_14_io_in) 
                                                >> 1U)) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_14_io_in) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_14_io_in) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_14_io_in) 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+301,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_14_io_in))))));
            tracep->chgBit(oldp+302,((1U & ((0x3000U 
                                             == (0x3000U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                >> 0xeU) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                   >> 0xcU) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                   >> 0xdU)))))));
            tracep->chgBit(oldp+303,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin)))));
            tracep->chgBit(oldp+304,((1U & ((0x600U 
                                             == (0x600U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                >> 0xbU) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                   >> 9U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                   >> 0xaU)))))));
            tracep->chgBit(oldp+305,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin)))));
            tracep->chgBit(oldp+306,((1U & ((0xc0U 
                                             == (0xc0U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                >> 8U) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                   >> 6U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                   >> 7U)))))));
            tracep->chgBit(oldp+307,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin)))));
            tracep->chgBit(oldp+308,((1U & ((0x18U 
                                             == (0x18U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                >> 5U) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                   >> 3U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                   >> 4U)))))));
            tracep->chgBit(oldp+309,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin)))));
            tracep->chgBit(oldp+310,((1U & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                             & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                >> 1U)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                >> 2U) 
                                               & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+311,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin)))));
            tracep->chgBit(oldp+312,((1U & ((0xc0U 
                                             == (0xc0U 
                                                 & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_20_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_20_io_in_T) 
                                                >> 8U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_20_io_in_T) 
                                                   >> 6U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_20_io_in_T) 
                                                   >> 7U)))))));
            tracep->chgBit(oldp+313,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_20_io_in_T))))));
            tracep->chgBit(oldp+314,((1U & ((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_20_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_20_io_in_T) 
                                                >> 5U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_20_io_in_T) 
                                                   >> 3U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_20_io_in_T) 
                                                   >> 4U)))))));
            tracep->chgBit(oldp+315,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_20_io_in_T))))));
            tracep->chgBit(oldp+316,((1U & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_20_io_in_T) 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_20_io_in_T) 
                                                >> 1U)) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_20_io_in_T) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_20_io_in_T) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_20_io_in_T) 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+317,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_20_io_in_T))))));
            tracep->chgBit(oldp+318,((1U & ((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                >> 0x1bU) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                   >> 0x19U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                   >> 0x1aU)))))));
            tracep->chgBit(oldp+319,((1U & VL_REDXOR_32(
                                                        (0xe000000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin)))));
            tracep->chgBit(oldp+320,((1U & ((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                >> 0x18U) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                   >> 0x16U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                   >> 0x17U)))))));
            tracep->chgBit(oldp+321,((1U & VL_REDXOR_32(
                                                        (0x1c00000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin)))));
            tracep->chgBit(oldp+322,((1U & ((0x180000U 
                                             == (0x180000U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                >> 0x15U) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                   >> 0x13U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                   >> 0x14U)))))));
            tracep->chgBit(oldp+323,((1U & VL_REDXOR_32(
                                                        (0x380000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin)))));
            tracep->chgBit(oldp+324,((1U & ((0x30000U 
                                             == (0x30000U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                >> 0x12U) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                   >> 0x10U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                   >> 0x11U)))))));
            tracep->chgBit(oldp+325,((1U & VL_REDXOR_32(
                                                        (0x70000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin)))));
            tracep->chgBit(oldp+326,((1U & ((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_27_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_27_io_in_T) 
                                                >> 6U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_27_io_in_T) 
                                                   >> 4U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_27_io_in_T) 
                                                   >> 5U)))))));
            tracep->chgBit(oldp+327,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_27_io_in_T))))));
            tracep->chgBit(oldp+328,((1U & ((6U == 
                                             (6U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_27_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_27_io_in_T) 
                                                >> 3U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_27_io_in_T) 
                                                   >> 1U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_27_io_in_T) 
                                                   >> 2U)))))));
            tracep->chgBit(oldp+329,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT___csa_27_io_in_T))))));
            tracep->chgBit(oldp+330,((1U & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_29_io_in) 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_29_io_in) 
                                                >> 1U)) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_29_io_in) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_29_io_in) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_29_io_in) 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+331,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_29_io_in))))));
            tracep->chgBit(oldp+332,((1U & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_30_io_in) 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_30_io_in) 
                                                >> 1U)) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_30_io_in) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_30_io_in) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_30_io_in) 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+333,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_30_io_in))))));
            tracep->chgCData(oldp+334,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                      >> 0x1eU)))),3);
            tracep->chgCData(oldp+335,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_0_io_out),2);
            tracep->chgCData(oldp+336,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                      >> 0x1bU)))),3);
            tracep->chgCData(oldp+337,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_1_io_out),2);
            tracep->chgCData(oldp+338,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                      >> 0x18U)))),3);
            tracep->chgCData(oldp+339,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_2_io_out),2);
            tracep->chgCData(oldp+340,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                      >> 0x15U)))),3);
            tracep->chgCData(oldp+341,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_3_io_out),2);
            tracep->chgCData(oldp+342,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                      >> 0x12U)))),3);
            tracep->chgCData(oldp+343,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_4_io_out),2);
            tracep->chgCData(oldp+344,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                      >> 0xfU)))),3);
            tracep->chgCData(oldp+345,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_5_io_out),2);
            tracep->chgCData(oldp+346,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                      >> 0xcU)))),3);
            tracep->chgCData(oldp+347,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_6_io_out),2);
            tracep->chgCData(oldp+348,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                      >> 9U)))),3);
            tracep->chgCData(oldp+349,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_7_io_out),2);
            tracep->chgCData(oldp+350,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                      >> 6U)))),3);
            tracep->chgCData(oldp+351,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_8_io_out),2);
            tracep->chgCData(oldp+352,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                      >> 3U)))),3);
            tracep->chgCData(oldp+353,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_9_io_out),2);
            tracep->chgCData(oldp+354,((7U & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129))),3);
            tracep->chgCData(oldp+355,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_10_io_out),2);
            tracep->chgCData(oldp+356,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_11_io_in_T) 
                                              >> 8U))),3);
            tracep->chgCData(oldp+357,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_11_io_out),2);
            tracep->chgCData(oldp+358,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_11_io_in_T) 
                                              >> 5U))),3);
            tracep->chgCData(oldp+359,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_12_io_out),2);
            tracep->chgCData(oldp+360,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_11_io_in_T) 
                                              >> 2U))),3);
            tracep->chgCData(oldp+361,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_13_io_out),2);
            tracep->chgCData(oldp+362,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_14_io_in),3);
            tracep->chgCData(oldp+363,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_14_io_out),2);
            tracep->chgCData(oldp+364,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+365,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_15_io_out),2);
            tracep->chgCData(oldp+366,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                              >> 9U))),3);
            tracep->chgCData(oldp+367,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_16_io_out),2);
            tracep->chgCData(oldp+368,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                              >> 6U))),3);
            tracep->chgCData(oldp+369,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_17_io_out),2);
            tracep->chgCData(oldp+370,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                              >> 3U))),3);
            tracep->chgCData(oldp+371,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_18_io_out),2);
            tracep->chgCData(oldp+372,((7U & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin)),3);
            tracep->chgCData(oldp+373,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_19_io_out),2);
            tracep->chgCData(oldp+374,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_20_io_in_T) 
                                              >> 6U))),3);
            tracep->chgCData(oldp+375,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_20_io_out),2);
            tracep->chgCData(oldp+376,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_20_io_in_T) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+377,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_21_io_out),2);
            tracep->chgCData(oldp+378,((7U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_20_io_in_T))),3);
            tracep->chgCData(oldp+379,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_22_io_out),2);
            tracep->chgCData(oldp+380,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                              >> 0x19U))),3);
            tracep->chgCData(oldp+381,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_23_io_out),2);
            tracep->chgCData(oldp+382,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                              >> 0x16U))),3);
            tracep->chgCData(oldp+383,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_24_io_out),2);
            tracep->chgCData(oldp+384,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                              >> 0x13U))),3);
            tracep->chgCData(oldp+385,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_25_io_out),2);
            tracep->chgCData(oldp+386,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                              >> 0x10U))),3);
            tracep->chgCData(oldp+387,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_26_io_out),2);
            tracep->chgCData(oldp+388,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_27_io_in_T) 
                                              >> 4U))),3);
            tracep->chgCData(oldp+389,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_27_io_out),2);
            tracep->chgCData(oldp+390,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_27_io_in_T) 
                                              >> 1U))),3);
            tracep->chgCData(oldp+391,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_28_io_out),2);
            tracep->chgCData(oldp+392,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_29_io_in),3);
            tracep->chgCData(oldp+393,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_29_io_out),2);
            tracep->chgCData(oldp+394,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_30_io_in),3);
            tracep->chgCData(oldp+395,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_30_io_out),2);
            tracep->chgBit(oldp+396,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_0_io_out))));
            tracep->chgBit(oldp+397,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_1_io_out))));
            tracep->chgBit(oldp+398,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_2_io_out))));
            tracep->chgBit(oldp+399,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_3_io_out))));
            tracep->chgBit(oldp+400,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_4_io_out))));
            tracep->chgBit(oldp+401,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_5_io_out))));
            tracep->chgBit(oldp+402,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_6_io_out))));
            tracep->chgBit(oldp+403,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_7_io_out))));
            tracep->chgBit(oldp+404,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_8_io_out))));
            tracep->chgBit(oldp+405,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_9_io_out))));
            tracep->chgBit(oldp+406,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_10_io_out))));
            tracep->chgCData(oldp+407,(((0x10U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_6_io_out) 
                                                  << 4U)) 
                                        | ((8U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_7_io_out) 
                                                  << 3U)) 
                                           | ((4U & 
                                               ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_8_io_out) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_9_io_out) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_10_io_out))))))),5);
            tracep->chgBit(oldp+408,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_11_io_out))));
            tracep->chgBit(oldp+409,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_12_io_out))));
            tracep->chgBit(oldp+410,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_13_io_out))));
            tracep->chgBit(oldp+411,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_14_io_out))));
            tracep->chgBit(oldp+412,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_15_io_out))));
            tracep->chgBit(oldp+413,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_16_io_out))));
            tracep->chgBit(oldp+414,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_17_io_out))));
            tracep->chgBit(oldp+415,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_18_io_out))));
            tracep->chgBit(oldp+416,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_19_io_out))));
            tracep->chgBit(oldp+417,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_20_io_out))));
            tracep->chgBit(oldp+418,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_21_io_out))));
            tracep->chgBit(oldp+419,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_22_io_out))));
            tracep->chgBit(oldp+420,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_23_io_out))));
            tracep->chgBit(oldp+421,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_24_io_out))));
            tracep->chgBit(oldp+422,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_25_io_out))));
            tracep->chgBit(oldp+423,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_26_io_out))));
            tracep->chgBit(oldp+424,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_27_io_out))));
            tracep->chgBit(oldp+425,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_28_io_out))));
            tracep->chgBit(oldp+426,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_29_io_out))));
            tracep->chgCData(oldp+427,(((2U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_27_io_out) 
                                               << 1U)) 
                                        | (1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_28_io_out)))),2);
            tracep->chgBit(oldp+428,((1U & ((0xc0000000ULL 
                                             == (0xc0000000ULL 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129)) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                        >> 0x20U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                           >> 0x1eU)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                             >> 0x1fU))))))));
            tracep->chgBit(oldp+429,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x1c0000000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129)))))));
            tracep->chgBit(oldp+430,((1U & ((IData)(
                                                    (0x18000000ULL 
                                                     == 
                                                     (0x18000000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                        >> 0x1dU)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                           >> 0x1bU)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                             >> 0x1cU))))))));
            tracep->chgBit(oldp+431,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x38000000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129)))))));
            tracep->chgBit(oldp+432,((1U & ((IData)(
                                                    (0x3000000ULL 
                                                     == 
                                                     (0x3000000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                        >> 0x1aU)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                           >> 0x18U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                             >> 0x19U))))))));
            tracep->chgBit(oldp+433,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x7000000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129)))))));
            tracep->chgBit(oldp+434,((1U & ((IData)(
                                                    (0x600000ULL 
                                                     == 
                                                     (0x600000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                        >> 0x17U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                           >> 0x15U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                             >> 0x16U))))))));
            tracep->chgBit(oldp+435,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0xe00000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129)))))));
            tracep->chgBit(oldp+436,((1U & ((IData)(
                                                    (0xc0000ULL 
                                                     == 
                                                     (0xc0000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                        >> 0x14U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                           >> 0x12U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                             >> 0x13U))))))));
            tracep->chgBit(oldp+437,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x1c0000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129)))))));
            tracep->chgBit(oldp+438,((1U & ((IData)(
                                                    (0x18000ULL 
                                                     == 
                                                     (0x18000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                        >> 0x11U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                           >> 0xfU)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                             >> 0x10U))))))));
            tracep->chgBit(oldp+439,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x38000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129)))))));
            tracep->chgBit(oldp+440,((1U & ((IData)(
                                                    (0x3000ULL 
                                                     == 
                                                     (0x3000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                        >> 0xeU)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                           >> 0xcU)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                             >> 0xdU))))))));
            tracep->chgBit(oldp+441,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x7000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129)))))));
            tracep->chgBit(oldp+442,((1U & ((IData)(
                                                    (0x600ULL 
                                                     == 
                                                     (0x600ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                        >> 0xbU)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                           >> 9U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                             >> 0xaU))))))));
            tracep->chgBit(oldp+443,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0xe00ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129)))))));
            tracep->chgBit(oldp+444,((1U & ((IData)(
                                                    (0xc0ULL 
                                                     == 
                                                     (0xc0ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                        >> 8U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                           >> 6U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                             >> 7U))))))));
            tracep->chgBit(oldp+445,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x1c0ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129)))))));
            tracep->chgBit(oldp+446,((1U & ((IData)(
                                                    (0x18ULL 
                                                     == 
                                                     (0x18ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                        >> 5U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                           >> 3U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                             >> 4U))))))));
            tracep->chgBit(oldp+447,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x38ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129)))))));
            tracep->chgBit(oldp+448,((1U & (((IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129) 
                                             & (IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                        >> 2U)) 
                                               & ((IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                             >> 1U))))))));
            tracep->chgBit(oldp+449,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (7ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129)))))));
            tracep->chgBit(oldp+450,((1U & ((IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_11_io_in_T)))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_11_io_in_T) 
                                                >> 0xaU) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_11_io_in_T) 
                                                   >> 8U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_11_io_in_T) 
                                                   >> 9U)))))));
            tracep->chgBit(oldp+451,((1U & VL_REDXOR_32(
                                                        (0x700U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_11_io_in_T))))));
            tracep->chgBit(oldp+452,((1U & ((0x60U 
                                             == (0x60U 
                                                 & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_11_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_11_io_in_T) 
                                                >> 7U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_11_io_in_T) 
                                                   >> 5U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_11_io_in_T) 
                                                   >> 6U)))))));
            tracep->chgBit(oldp+453,((1U & VL_REDXOR_32(
                                                        (0xe0U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_11_io_in_T))))));
            tracep->chgBit(oldp+454,((1U & ((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_11_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_11_io_in_T) 
                                                >> 4U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_11_io_in_T) 
                                                   >> 2U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_11_io_in_T) 
                                                   >> 3U)))))));
            tracep->chgBit(oldp+455,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_11_io_in_T))))));
            tracep->chgBit(oldp+456,((1U & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_14_io_in) 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_14_io_in) 
                                                >> 1U)) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_14_io_in) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_14_io_in) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_14_io_in) 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+457,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_14_io_in))))));
            tracep->chgBit(oldp+458,((1U & ((0x3000U 
                                             == (0x3000U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                >> 0xeU) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                   >> 0xcU) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                   >> 0xdU)))))));
            tracep->chgBit(oldp+459,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin)))));
            tracep->chgBit(oldp+460,((1U & ((0x600U 
                                             == (0x600U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                >> 0xbU) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                   >> 9U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                   >> 0xaU)))))));
            tracep->chgBit(oldp+461,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin)))));
            tracep->chgBit(oldp+462,((1U & ((0xc0U 
                                             == (0xc0U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                >> 8U) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                   >> 6U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                   >> 7U)))))));
            tracep->chgBit(oldp+463,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin)))));
            tracep->chgBit(oldp+464,((1U & ((0x18U 
                                             == (0x18U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                >> 5U) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                   >> 3U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                   >> 4U)))))));
            tracep->chgBit(oldp+465,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin)))));
            tracep->chgBit(oldp+466,((1U & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                             & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                >> 1U)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                >> 2U) 
                                               & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+467,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin)))));
            tracep->chgBit(oldp+468,((1U & ((0xc0U 
                                             == (0xc0U 
                                                 & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_20_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_20_io_in_T) 
                                                >> 8U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_20_io_in_T) 
                                                   >> 6U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_20_io_in_T) 
                                                   >> 7U)))))));
            tracep->chgBit(oldp+469,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_20_io_in_T))))));
            tracep->chgBit(oldp+470,((1U & ((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_20_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_20_io_in_T) 
                                                >> 5U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_20_io_in_T) 
                                                   >> 3U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_20_io_in_T) 
                                                   >> 4U)))))));
            tracep->chgBit(oldp+471,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_20_io_in_T))))));
            tracep->chgBit(oldp+472,((1U & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_20_io_in_T) 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_20_io_in_T) 
                                                >> 1U)) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_20_io_in_T) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_20_io_in_T) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_20_io_in_T) 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+473,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_20_io_in_T))))));
            tracep->chgBit(oldp+474,((1U & ((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                >> 0x1bU) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                   >> 0x19U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                   >> 0x1aU)))))));
            tracep->chgBit(oldp+475,((1U & VL_REDXOR_32(
                                                        (0xe000000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin)))));
            tracep->chgBit(oldp+476,((1U & ((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                >> 0x18U) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                   >> 0x16U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                   >> 0x17U)))))));
            tracep->chgBit(oldp+477,((1U & VL_REDXOR_32(
                                                        (0x1c00000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin)))));
            tracep->chgBit(oldp+478,((1U & ((0x180000U 
                                             == (0x180000U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                >> 0x15U) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                   >> 0x13U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                   >> 0x14U)))))));
            tracep->chgBit(oldp+479,((1U & VL_REDXOR_32(
                                                        (0x380000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin)))));
            tracep->chgBit(oldp+480,((1U & ((0x30000U 
                                             == (0x30000U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                >> 0x12U) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                   >> 0x10U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                   >> 0x11U)))))));
            tracep->chgBit(oldp+481,((1U & VL_REDXOR_32(
                                                        (0x70000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin)))));
            tracep->chgBit(oldp+482,((1U & ((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_27_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_27_io_in_T) 
                                                >> 6U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_27_io_in_T) 
                                                   >> 4U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_27_io_in_T) 
                                                   >> 5U)))))));
            tracep->chgBit(oldp+483,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_27_io_in_T))))));
            tracep->chgBit(oldp+484,((1U & ((6U == 
                                             (6U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_27_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_27_io_in_T) 
                                                >> 3U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_27_io_in_T) 
                                                   >> 1U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_27_io_in_T) 
                                                   >> 2U)))))));
            tracep->chgBit(oldp+485,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT___csa_27_io_in_T))))));
            tracep->chgBit(oldp+486,((1U & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_29_io_in) 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_29_io_in) 
                                                >> 1U)) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_29_io_in) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_29_io_in) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_29_io_in) 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+487,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_29_io_in))))));
            tracep->chgBit(oldp+488,((1U & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_30_io_in) 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_30_io_in) 
                                                >> 1U)) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_30_io_in) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_30_io_in) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_30_io_in) 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+489,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_30_io_in))))));
            tracep->chgCData(oldp+490,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                      >> 0x1eU)))),3);
            tracep->chgCData(oldp+491,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_0_io_out),2);
            tracep->chgCData(oldp+492,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                      >> 0x1bU)))),3);
            tracep->chgCData(oldp+493,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_1_io_out),2);
            tracep->chgCData(oldp+494,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                      >> 0x18U)))),3);
            tracep->chgCData(oldp+495,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_2_io_out),2);
            tracep->chgCData(oldp+496,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                      >> 0x15U)))),3);
            tracep->chgCData(oldp+497,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_3_io_out),2);
            tracep->chgCData(oldp+498,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                      >> 0x12U)))),3);
            tracep->chgCData(oldp+499,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_4_io_out),2);
            tracep->chgCData(oldp+500,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                      >> 0xfU)))),3);
            tracep->chgCData(oldp+501,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_5_io_out),2);
            tracep->chgCData(oldp+502,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                      >> 0xcU)))),3);
            tracep->chgCData(oldp+503,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_6_io_out),2);
            tracep->chgCData(oldp+504,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                      >> 9U)))),3);
            tracep->chgCData(oldp+505,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_7_io_out),2);
            tracep->chgCData(oldp+506,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                      >> 6U)))),3);
            tracep->chgCData(oldp+507,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_8_io_out),2);
            tracep->chgCData(oldp+508,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                      >> 3U)))),3);
            tracep->chgCData(oldp+509,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_9_io_out),2);
            tracep->chgCData(oldp+510,((7U & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130))),3);
            tracep->chgCData(oldp+511,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_10_io_out),2);
            tracep->chgCData(oldp+512,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_11_io_in_T) 
                                              >> 8U))),3);
            tracep->chgCData(oldp+513,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_11_io_out),2);
            tracep->chgCData(oldp+514,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_11_io_in_T) 
                                              >> 5U))),3);
            tracep->chgCData(oldp+515,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_12_io_out),2);
            tracep->chgCData(oldp+516,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_11_io_in_T) 
                                              >> 2U))),3);
            tracep->chgCData(oldp+517,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_13_io_out),2);
            tracep->chgCData(oldp+518,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_14_io_in),3);
            tracep->chgCData(oldp+519,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_14_io_out),2);
            tracep->chgCData(oldp+520,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+521,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_15_io_out),2);
            tracep->chgCData(oldp+522,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                              >> 9U))),3);
            tracep->chgCData(oldp+523,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_16_io_out),2);
            tracep->chgCData(oldp+524,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                              >> 6U))),3);
            tracep->chgCData(oldp+525,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_17_io_out),2);
            tracep->chgCData(oldp+526,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                              >> 3U))),3);
            tracep->chgCData(oldp+527,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_18_io_out),2);
            tracep->chgCData(oldp+528,((7U & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin)),3);
            tracep->chgCData(oldp+529,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_19_io_out),2);
            tracep->chgCData(oldp+530,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_20_io_in_T) 
                                              >> 6U))),3);
            tracep->chgCData(oldp+531,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_20_io_out),2);
            tracep->chgCData(oldp+532,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_20_io_in_T) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+533,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_21_io_out),2);
            tracep->chgCData(oldp+534,((7U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_20_io_in_T))),3);
            tracep->chgCData(oldp+535,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_22_io_out),2);
            tracep->chgCData(oldp+536,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                              >> 0x19U))),3);
            tracep->chgCData(oldp+537,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_23_io_out),2);
            tracep->chgCData(oldp+538,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                              >> 0x16U))),3);
            tracep->chgCData(oldp+539,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_24_io_out),2);
            tracep->chgCData(oldp+540,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                              >> 0x13U))),3);
            tracep->chgCData(oldp+541,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_25_io_out),2);
            tracep->chgCData(oldp+542,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                              >> 0x10U))),3);
            tracep->chgCData(oldp+543,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_26_io_out),2);
            tracep->chgCData(oldp+544,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_27_io_in_T) 
                                              >> 4U))),3);
            tracep->chgCData(oldp+545,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_27_io_out),2);
            tracep->chgCData(oldp+546,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_27_io_in_T) 
                                              >> 1U))),3);
            tracep->chgCData(oldp+547,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_28_io_out),2);
            tracep->chgCData(oldp+548,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_29_io_in),3);
            tracep->chgCData(oldp+549,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_29_io_out),2);
            tracep->chgCData(oldp+550,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_30_io_in),3);
            tracep->chgCData(oldp+551,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_30_io_out),2);
            tracep->chgBit(oldp+552,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_0_io_out))));
            tracep->chgBit(oldp+553,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_1_io_out))));
            tracep->chgBit(oldp+554,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_2_io_out))));
            tracep->chgBit(oldp+555,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_3_io_out))));
            tracep->chgBit(oldp+556,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_4_io_out))));
            tracep->chgBit(oldp+557,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_5_io_out))));
            tracep->chgBit(oldp+558,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_6_io_out))));
            tracep->chgBit(oldp+559,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_7_io_out))));
            tracep->chgBit(oldp+560,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_8_io_out))));
            tracep->chgBit(oldp+561,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_9_io_out))));
            tracep->chgBit(oldp+562,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_10_io_out))));
            tracep->chgCData(oldp+563,(((0x10U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_6_io_out) 
                                                  << 4U)) 
                                        | ((8U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_7_io_out) 
                                                  << 3U)) 
                                           | ((4U & 
                                               ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_8_io_out) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_9_io_out) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_10_io_out))))))),5);
            tracep->chgBit(oldp+564,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_11_io_out))));
            tracep->chgBit(oldp+565,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_12_io_out))));
            tracep->chgBit(oldp+566,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_13_io_out))));
            tracep->chgBit(oldp+567,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_14_io_out))));
            tracep->chgBit(oldp+568,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_15_io_out))));
            tracep->chgBit(oldp+569,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_16_io_out))));
            tracep->chgBit(oldp+570,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_17_io_out))));
            tracep->chgBit(oldp+571,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_18_io_out))));
            tracep->chgBit(oldp+572,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_19_io_out))));
            tracep->chgBit(oldp+573,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_20_io_out))));
            tracep->chgBit(oldp+574,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_21_io_out))));
            tracep->chgBit(oldp+575,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_22_io_out))));
            tracep->chgBit(oldp+576,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_23_io_out))));
            tracep->chgBit(oldp+577,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_24_io_out))));
            tracep->chgBit(oldp+578,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_25_io_out))));
            tracep->chgBit(oldp+579,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_26_io_out))));
            tracep->chgBit(oldp+580,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_27_io_out))));
            tracep->chgBit(oldp+581,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_28_io_out))));
            tracep->chgBit(oldp+582,((1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_29_io_out))));
            tracep->chgCData(oldp+583,(((2U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_27_io_out) 
                                               << 1U)) 
                                        | (1U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_28_io_out)))),2);
            tracep->chgBit(oldp+584,((1U & ((0xc0000000ULL 
                                             == (0xc0000000ULL 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130)) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                        >> 0x20U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                           >> 0x1eU)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                             >> 0x1fU))))))));
            tracep->chgBit(oldp+585,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x1c0000000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130)))))));
            tracep->chgBit(oldp+586,((1U & ((IData)(
                                                    (0x18000000ULL 
                                                     == 
                                                     (0x18000000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                        >> 0x1dU)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                           >> 0x1bU)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                             >> 0x1cU))))))));
            tracep->chgBit(oldp+587,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x38000000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130)))))));
            tracep->chgBit(oldp+588,((1U & ((IData)(
                                                    (0x3000000ULL 
                                                     == 
                                                     (0x3000000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                        >> 0x1aU)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                           >> 0x18U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                             >> 0x19U))))))));
            tracep->chgBit(oldp+589,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x7000000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130)))))));
            tracep->chgBit(oldp+590,((1U & ((IData)(
                                                    (0x600000ULL 
                                                     == 
                                                     (0x600000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                        >> 0x17U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                           >> 0x15U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                             >> 0x16U))))))));
            tracep->chgBit(oldp+591,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0xe00000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130)))))));
            tracep->chgBit(oldp+592,((1U & ((IData)(
                                                    (0xc0000ULL 
                                                     == 
                                                     (0xc0000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                        >> 0x14U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                           >> 0x12U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                             >> 0x13U))))))));
            tracep->chgBit(oldp+593,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x1c0000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130)))))));
            tracep->chgBit(oldp+594,((1U & ((IData)(
                                                    (0x18000ULL 
                                                     == 
                                                     (0x18000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                        >> 0x11U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                           >> 0xfU)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                             >> 0x10U))))))));
            tracep->chgBit(oldp+595,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x38000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130)))))));
            tracep->chgBit(oldp+596,((1U & ((IData)(
                                                    (0x3000ULL 
                                                     == 
                                                     (0x3000ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                        >> 0xeU)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                           >> 0xcU)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                             >> 0xdU))))))));
            tracep->chgBit(oldp+597,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x7000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130)))))));
            tracep->chgBit(oldp+598,((1U & ((IData)(
                                                    (0x600ULL 
                                                     == 
                                                     (0x600ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                        >> 0xbU)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                           >> 9U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                             >> 0xaU))))))));
            tracep->chgBit(oldp+599,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0xe00ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130)))))));
            tracep->chgBit(oldp+600,((1U & ((IData)(
                                                    (0xc0ULL 
                                                     == 
                                                     (0xc0ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                        >> 8U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                           >> 6U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                             >> 7U))))))));
            tracep->chgBit(oldp+601,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x1c0ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130)))))));
            tracep->chgBit(oldp+602,((1U & ((IData)(
                                                    (0x18ULL 
                                                     == 
                                                     (0x18ULL 
                                                      & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                        >> 5U)) 
                                               & ((IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                           >> 3U)) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                             >> 4U))))))));
            tracep->chgBit(oldp+603,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x38ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130)))))));
            tracep->chgBit(oldp+604,((1U & (((IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130) 
                                             & (IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                        >> 2U)) 
                                               & ((IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130) 
                                                  ^ (IData)(
                                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                             >> 1U))))))));
            tracep->chgBit(oldp+605,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (7ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130)))))));
            tracep->chgBit(oldp+606,((1U & ((IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_11_io_in_T)))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_11_io_in_T) 
                                                >> 0xaU) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_11_io_in_T) 
                                                   >> 8U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_11_io_in_T) 
                                                   >> 9U)))))));
            tracep->chgBit(oldp+607,((1U & VL_REDXOR_32(
                                                        (0x700U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_11_io_in_T))))));
            tracep->chgBit(oldp+608,((1U & ((0x60U 
                                             == (0x60U 
                                                 & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_11_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_11_io_in_T) 
                                                >> 7U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_11_io_in_T) 
                                                   >> 5U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_11_io_in_T) 
                                                   >> 6U)))))));
            tracep->chgBit(oldp+609,((1U & VL_REDXOR_32(
                                                        (0xe0U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_11_io_in_T))))));
            tracep->chgBit(oldp+610,((1U & ((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_11_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_11_io_in_T) 
                                                >> 4U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_11_io_in_T) 
                                                   >> 2U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_11_io_in_T) 
                                                   >> 3U)))))));
            tracep->chgBit(oldp+611,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_11_io_in_T))))));
            tracep->chgBit(oldp+612,((1U & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_14_io_in) 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_14_io_in) 
                                                >> 1U)) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_14_io_in) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_14_io_in) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_14_io_in) 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+613,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_14_io_in))))));
            tracep->chgBit(oldp+614,((1U & ((0x3000U 
                                             == (0x3000U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                >> 0xeU) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                   >> 0xcU) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                   >> 0xdU)))))));
            tracep->chgBit(oldp+615,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin)))));
            tracep->chgBit(oldp+616,((1U & ((0x600U 
                                             == (0x600U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                >> 0xbU) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                   >> 9U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                   >> 0xaU)))))));
            tracep->chgBit(oldp+617,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin)))));
            tracep->chgBit(oldp+618,((1U & ((0xc0U 
                                             == (0xc0U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                >> 8U) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                   >> 6U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                   >> 7U)))))));
            tracep->chgBit(oldp+619,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin)))));
            tracep->chgBit(oldp+620,((1U & ((0x18U 
                                             == (0x18U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                >> 5U) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                   >> 3U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                   >> 4U)))))));
            tracep->chgBit(oldp+621,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin)))));
            tracep->chgBit(oldp+622,((1U & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                             & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                >> 1U)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                >> 2U) 
                                               & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+623,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin)))));
            tracep->chgBit(oldp+624,((1U & ((0xc0U 
                                             == (0xc0U 
                                                 & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_20_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_20_io_in_T) 
                                                >> 8U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_20_io_in_T) 
                                                   >> 6U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_20_io_in_T) 
                                                   >> 7U)))))));
            tracep->chgBit(oldp+625,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_20_io_in_T))))));
            tracep->chgBit(oldp+626,((1U & ((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_20_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_20_io_in_T) 
                                                >> 5U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_20_io_in_T) 
                                                   >> 3U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_20_io_in_T) 
                                                   >> 4U)))))));
            tracep->chgBit(oldp+627,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_20_io_in_T))))));
            tracep->chgBit(oldp+628,((1U & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_20_io_in_T) 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_20_io_in_T) 
                                                >> 1U)) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_20_io_in_T) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_20_io_in_T) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_20_io_in_T) 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+629,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_20_io_in_T))))));
            tracep->chgBit(oldp+630,((1U & ((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                >> 0x1bU) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                   >> 0x19U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                   >> 0x1aU)))))));
            tracep->chgBit(oldp+631,((1U & VL_REDXOR_32(
                                                        (0xe000000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin)))));
            tracep->chgBit(oldp+632,((1U & ((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                >> 0x18U) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                   >> 0x16U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                   >> 0x17U)))))));
            tracep->chgBit(oldp+633,((1U & VL_REDXOR_32(
                                                        (0x1c00000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin)))));
            tracep->chgBit(oldp+634,((1U & ((0x180000U 
                                             == (0x180000U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                >> 0x15U) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                   >> 0x13U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                   >> 0x14U)))))));
            tracep->chgBit(oldp+635,((1U & VL_REDXOR_32(
                                                        (0x380000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin)))));
            tracep->chgBit(oldp+636,((1U & ((0x30000U 
                                             == (0x30000U 
                                                 & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin)) 
                                            | ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                >> 0x12U) 
                                               & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                   >> 0x10U) 
                                                  ^ 
                                                  (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                   >> 0x11U)))))));
            tracep->chgBit(oldp+637,((1U & VL_REDXOR_32(
                                                        (0x70000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin)))));
            tracep->chgBit(oldp+638,((1U & ((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_27_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_27_io_in_T) 
                                                >> 6U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_27_io_in_T) 
                                                   >> 4U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_27_io_in_T) 
                                                   >> 5U)))))));
            tracep->chgBit(oldp+639,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_27_io_in_T))))));
            tracep->chgBit(oldp+640,((1U & ((6U == 
                                             (6U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_27_io_in_T))) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_27_io_in_T) 
                                                >> 3U) 
                                               & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_27_io_in_T) 
                                                   >> 1U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_27_io_in_T) 
                                                   >> 2U)))))));
            tracep->chgBit(oldp+641,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT___csa_27_io_in_T))))));
            tracep->chgBit(oldp+642,((1U & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_29_io_in) 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_29_io_in) 
                                                >> 1U)) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_29_io_in) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_29_io_in) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_29_io_in) 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+643,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_29_io_in))))));
            tracep->chgBit(oldp+644,((1U & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_30_io_in) 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_30_io_in) 
                                                >> 1U)) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_30_io_in) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_30_io_in) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_30_io_in) 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+645,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_30_io_in))))));
            tracep->chgCData(oldp+646,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                      >> 0x1eU)))),3);
            tracep->chgCData(oldp+647,(((2U & (((0xc0000000ULL 
                                                 == 
                                                 (0xc0000000ULL 
                                                  & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131)) 
                                                | ((IData)(
                                                           (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                            >> 0x20U)) 
                                                   & ((IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                               >> 0x1eU)) 
                                                      ^ (IData)(
                                                                (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                                 >> 0x1fU))))) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (1ULL 
                                                         & VL_REDXOR_64(
                                                                        (0x1c0000000ULL 
                                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))))))),2);
            tracep->chgCData(oldp+648,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                      >> 0x1bU)))),3);
            tracep->chgCData(oldp+649,(((2U & (((IData)(
                                                        (0x18000000ULL 
                                                         == 
                                                         (0x18000000ULL 
                                                          & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))) 
                                                | ((IData)(
                                                           (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                            >> 0x1dU)) 
                                                   & ((IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                               >> 0x1bU)) 
                                                      ^ (IData)(
                                                                (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                                 >> 0x1cU))))) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (1ULL 
                                                         & VL_REDXOR_64(
                                                                        (0x38000000ULL 
                                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))))))),2);
            tracep->chgCData(oldp+650,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                      >> 0x18U)))),3);
            tracep->chgCData(oldp+651,(((2U & (((IData)(
                                                        (0x3000000ULL 
                                                         == 
                                                         (0x3000000ULL 
                                                          & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))) 
                                                | ((IData)(
                                                           (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                            >> 0x1aU)) 
                                                   & ((IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                               >> 0x18U)) 
                                                      ^ (IData)(
                                                                (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                                 >> 0x19U))))) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (1ULL 
                                                         & VL_REDXOR_64(
                                                                        (0x7000000ULL 
                                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))))))),2);
            tracep->chgCData(oldp+652,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                      >> 0x15U)))),3);
            tracep->chgCData(oldp+653,(((2U & (((IData)(
                                                        (0x600000ULL 
                                                         == 
                                                         (0x600000ULL 
                                                          & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))) 
                                                | ((IData)(
                                                           (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                            >> 0x17U)) 
                                                   & ((IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                               >> 0x15U)) 
                                                      ^ (IData)(
                                                                (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                                 >> 0x16U))))) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (1ULL 
                                                         & VL_REDXOR_64(
                                                                        (0xe00000ULL 
                                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))))))),2);
            tracep->chgCData(oldp+654,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                      >> 0x12U)))),3);
            tracep->chgCData(oldp+655,(((2U & (((IData)(
                                                        (0xc0000ULL 
                                                         == 
                                                         (0xc0000ULL 
                                                          & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))) 
                                                | ((IData)(
                                                           (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                            >> 0x14U)) 
                                                   & ((IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                               >> 0x12U)) 
                                                      ^ (IData)(
                                                                (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                                 >> 0x13U))))) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (1ULL 
                                                         & VL_REDXOR_64(
                                                                        (0x1c0000ULL 
                                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))))))),2);
            tracep->chgCData(oldp+656,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                      >> 0xfU)))),3);
            tracep->chgCData(oldp+657,(((2U & (((IData)(
                                                        (0x18000ULL 
                                                         == 
                                                         (0x18000ULL 
                                                          & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))) 
                                                | ((IData)(
                                                           (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                            >> 0x11U)) 
                                                   & ((IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                               >> 0xfU)) 
                                                      ^ (IData)(
                                                                (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                                 >> 0x10U))))) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (1ULL 
                                                         & VL_REDXOR_64(
                                                                        (0x38000ULL 
                                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))))))),2);
            tracep->chgCData(oldp+658,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                      >> 0xcU)))),3);
            tracep->chgCData(oldp+659,(((2U & (((IData)(
                                                        (0x3000ULL 
                                                         == 
                                                         (0x3000ULL 
                                                          & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))) 
                                                | ((IData)(
                                                           (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                            >> 0xeU)) 
                                                   & ((IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                               >> 0xcU)) 
                                                      ^ (IData)(
                                                                (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                                 >> 0xdU))))) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (1ULL 
                                                         & VL_REDXOR_64(
                                                                        (0x7000ULL 
                                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))))))),2);
            tracep->chgCData(oldp+660,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                      >> 9U)))),3);
            tracep->chgCData(oldp+661,(((2U & (((IData)(
                                                        (0x600ULL 
                                                         == 
                                                         (0x600ULL 
                                                          & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))) 
                                                | ((IData)(
                                                           (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                            >> 0xbU)) 
                                                   & ((IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                               >> 9U)) 
                                                      ^ (IData)(
                                                                (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                                 >> 0xaU))))) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (1ULL 
                                                         & VL_REDXOR_64(
                                                                        (0xe00ULL 
                                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))))))),2);
            tracep->chgCData(oldp+662,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                      >> 6U)))),3);
            tracep->chgCData(oldp+663,(((2U & (((IData)(
                                                        (0xc0ULL 
                                                         == 
                                                         (0xc0ULL 
                                                          & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))) 
                                                | ((IData)(
                                                           (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                            >> 8U)) 
                                                   & ((IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                               >> 6U)) 
                                                      ^ (IData)(
                                                                (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                                 >> 7U))))) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (1ULL 
                                                         & VL_REDXOR_64(
                                                                        (0x1c0ULL 
                                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))))))),2);
            tracep->chgCData(oldp+664,((7U & (IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                      >> 3U)))),3);
            tracep->chgCData(oldp+665,(((2U & (((IData)(
                                                        (0x18ULL 
                                                         == 
                                                         (0x18ULL 
                                                          & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))) 
                                                | ((IData)(
                                                           (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                            >> 5U)) 
                                                   & ((IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                               >> 3U)) 
                                                      ^ (IData)(
                                                                (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                                 >> 4U))))) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (1ULL 
                                                         & VL_REDXOR_64(
                                                                        (0x38ULL 
                                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))))))),2);
            tracep->chgCData(oldp+666,((7U & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))),3);
            tracep->chgCData(oldp+667,(((2U & ((((IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131) 
                                                 & (IData)(
                                                           (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                            >> 1U))) 
                                                | ((IData)(
                                                           (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                            >> 2U)) 
                                                   & ((IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131) 
                                                      ^ (IData)(
                                                                (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                                 >> 1U))))) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (1ULL 
                                                         & VL_REDXOR_64(
                                                                        (7ULL 
                                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))))))),2);
            tracep->chgCData(oldp+668,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_11_io_in_T) 
                                              >> 8U))),3);
            tracep->chgCData(oldp+669,(((2U & (((IData)(
                                                        (0x300U 
                                                         == 
                                                         (0x300U 
                                                          & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_11_io_in_T)))) 
                                                << 1U) 
                                               | (0x7ffffeU 
                                                  & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_11_io_in_T) 
                                                      >> 9U) 
                                                     & ((0x1fffffeU 
                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_11_io_in_T) 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0xfffffeU 
                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_11_io_in_T) 
                                                            >> 8U))))))) 
                                        | (1U & VL_REDXOR_32(
                                                             (0x700U 
                                                              & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_11_io_in_T)))))),2);
            tracep->chgCData(oldp+670,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_11_io_in_T) 
                                              >> 5U))),3);
            tracep->chgCData(oldp+671,(((2U & (((0x60U 
                                                 == 
                                                 (0x60U 
                                                  & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_11_io_in_T))) 
                                                << 1U) 
                                               | (0x3fffffeU 
                                                  & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_11_io_in_T) 
                                                      >> 6U) 
                                                     & ((0xffffffeU 
                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_11_io_in_T) 
                                                            >> 4U)) 
                                                        ^ 
                                                        (0x7fffffeU 
                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_11_io_in_T) 
                                                            >> 5U))))))) 
                                        | (1U & VL_REDXOR_32(
                                                             (0xe0U 
                                                              & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_11_io_in_T)))))),2);
            tracep->chgCData(oldp+672,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_11_io_in_T) 
                                              >> 2U))),3);
            tracep->chgCData(oldp+673,(((2U & (((0xcU 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_11_io_in_T))) 
                                                << 1U) 
                                               | (0x1ffffffeU 
                                                  & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_11_io_in_T) 
                                                      >> 3U) 
                                                     & ((0x7ffffffeU 
                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_11_io_in_T) 
                                                            >> 1U)) 
                                                        ^ 
                                                        (0x3ffffffeU 
                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_11_io_in_T) 
                                                            >> 2U))))))) 
                                        | (1U & VL_REDXOR_32(
                                                             (0x1cU 
                                                              & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_11_io_in_T)))))),2);
            tracep->chgCData(oldp+674,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_14_io_in),3);
            tracep->chgCData(oldp+675,(((2U & ((0xfffffffeU 
                                                & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_14_io_in) 
                                                    << 1U) 
                                                   & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_14_io_in))) 
                                               | (0x7ffffffeU 
                                                  & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_14_io_in) 
                                                      >> 1U) 
                                                     & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_14_io_in) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xfffffffeU 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_14_io_in))))))) 
                                        | (1U & VL_REDXOR_32(
                                                             (7U 
                                                              & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_14_io_in)))))),2);
            tracep->chgCData(oldp+676,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+677,(((2U & (((0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin)) 
                                                << 1U) 
                                               | (0x7fffeU 
                                                  & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                      >> 0xdU) 
                                                     & ((0x1ffffeU 
                                                         & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                            >> 0xbU)) 
                                                        ^ 
                                                        (0xffffeU 
                                                         & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                            >> 0xcU))))))) 
                                        | (1U & VL_REDXOR_32(
                                                             (0x7000U 
                                                              & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin))))),2);
            tracep->chgCData(oldp+678,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                              >> 9U))),3);
            tracep->chgCData(oldp+679,(((2U & (((0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin)) 
                                                << 1U) 
                                               | (0x3ffffeU 
                                                  & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                      >> 0xaU) 
                                                     & ((0xfffffeU 
                                                         & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                            >> 8U)) 
                                                        ^ 
                                                        (0x7ffffeU 
                                                         & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                            >> 9U))))))) 
                                        | (1U & VL_REDXOR_32(
                                                             (0xe00U 
                                                              & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin))))),2);
            tracep->chgCData(oldp+680,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                              >> 6U))),3);
            tracep->chgCData(oldp+681,(((2U & (((0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin)) 
                                                << 1U) 
                                               | (0x1fffffeU 
                                                  & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                      >> 7U) 
                                                     & ((0x7fffffeU 
                                                         & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                            >> 5U)) 
                                                        ^ 
                                                        (0x3fffffeU 
                                                         & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                            >> 6U))))))) 
                                        | (1U & VL_REDXOR_32(
                                                             (0x1c0U 
                                                              & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin))))),2);
            tracep->chgCData(oldp+682,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                              >> 3U))),3);
            tracep->chgCData(oldp+683,(((2U & (((0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin)) 
                                                << 1U) 
                                               | (0xffffffeU 
                                                  & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                      >> 4U) 
                                                     & ((0x3ffffffeU 
                                                         & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                            >> 2U)) 
                                                        ^ 
                                                        (0x1ffffffeU 
                                                         & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                            >> 3U))))))) 
                                        | (1U & VL_REDXOR_32(
                                                             (0x38U 
                                                              & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin))))),2);
            tracep->chgCData(oldp+684,((7U & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin)),3);
            tracep->chgCData(oldp+685,(((2U & ((0xfffffffeU 
                                                & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                    << 1U) 
                                                   & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin)) 
                                               | (0x7ffffffeU 
                                                  & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                      >> 1U) 
                                                     & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                         << 1U) 
                                                        ^ 
                                                        (0xfffffffeU 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin)))))) 
                                        | (1U & VL_REDXOR_32(
                                                             (7U 
                                                              & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin))))),2);
            tracep->chgCData(oldp+686,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T) 
                                              >> 6U))),3);
            tracep->chgCData(oldp+687,(((2U & (((0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T))) 
                                                << 1U) 
                                               | (0x1fffffeU 
                                                  & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T) 
                                                      >> 7U) 
                                                     & ((0x7fffffeU 
                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T) 
                                                            >> 5U)) 
                                                        ^ 
                                                        (0x3fffffeU 
                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T) 
                                                            >> 6U))))))) 
                                        | (1U & VL_REDXOR_32(
                                                             (0x1c0U 
                                                              & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T)))))),2);
            tracep->chgCData(oldp+688,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+689,(((2U & (((0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T))) 
                                                << 1U) 
                                               | (0xffffffeU 
                                                  & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T) 
                                                      >> 4U) 
                                                     & ((0x3ffffffeU 
                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T) 
                                                            >> 2U)) 
                                                        ^ 
                                                        (0x1ffffffeU 
                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T) 
                                                            >> 3U))))))) 
                                        | (1U & VL_REDXOR_32(
                                                             (0x38U 
                                                              & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T)))))),2);
            tracep->chgCData(oldp+690,((7U & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T))),3);
            tracep->chgCData(oldp+691,(((2U & ((0xfffffffeU 
                                                & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T) 
                                                    << 1U) 
                                                   & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T))) 
                                               | (0x7ffffffeU 
                                                  & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T) 
                                                      >> 1U) 
                                                     & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xfffffffeU 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T))))))) 
                                        | (1U & VL_REDXOR_32(
                                                             (7U 
                                                              & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T)))))),2);
            tracep->chgCData(oldp+692,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                              >> 0x19U))),3);
            tracep->chgCData(oldp+693,(((2U & (((0x6000000U 
                                                 == 
                                                 (0x6000000U 
                                                  & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin)) 
                                                << 1U) 
                                               | (0x3eU 
                                                  & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                      >> 0x1aU) 
                                                     & ((0xfeU 
                                                         & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                            >> 0x18U)) 
                                                        ^ 
                                                        (0x7eU 
                                                         & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                            >> 0x19U))))))) 
                                        | (1U & VL_REDXOR_32(
                                                             (0xe000000U 
                                                              & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin))))),2);
            tracep->chgCData(oldp+694,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                              >> 0x16U))),3);
            tracep->chgCData(oldp+695,(((2U & (((0xc00000U 
                                                 == 
                                                 (0xc00000U 
                                                  & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin)) 
                                                << 1U) 
                                               | (0x1feU 
                                                  & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                      >> 0x17U) 
                                                     & ((0x7feU 
                                                         & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                            >> 0x15U)) 
                                                        ^ 
                                                        (0x3feU 
                                                         & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                            >> 0x16U))))))) 
                                        | (1U & VL_REDXOR_32(
                                                             (0x1c00000U 
                                                              & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin))))),2);
            tracep->chgCData(oldp+696,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                              >> 0x13U))),3);
            tracep->chgCData(oldp+697,(((2U & (((0x180000U 
                                                 == 
                                                 (0x180000U 
                                                  & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin)) 
                                                << 1U) 
                                               | (0xffeU 
                                                  & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                      >> 0x14U) 
                                                     & ((0x3ffeU 
                                                         & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                            >> 0x12U)) 
                                                        ^ 
                                                        (0x1ffeU 
                                                         & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                            >> 0x13U))))))) 
                                        | (1U & VL_REDXOR_32(
                                                             (0x380000U 
                                                              & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin))))),2);
            tracep->chgCData(oldp+698,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                              >> 0x10U))),3);
            tracep->chgCData(oldp+699,(((2U & (((0x30000U 
                                                 == 
                                                 (0x30000U 
                                                  & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin)) 
                                                << 1U) 
                                               | (0x7ffeU 
                                                  & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                      >> 0x11U) 
                                                     & ((0x1fffeU 
                                                         & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                            >> 0xfU)) 
                                                        ^ 
                                                        (0xfffeU 
                                                         & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                            >> 0x10U))))))) 
                                        | (1U & VL_REDXOR_32(
                                                             (0x70000U 
                                                              & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin))))),2);
            tracep->chgCData(oldp+700,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_27_io_in_T) 
                                              >> 4U))),3);
            tracep->chgCData(oldp+701,(((2U & (((0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_27_io_in_T))) 
                                                << 1U) 
                                               | (0x7fffffeU 
                                                  & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_27_io_in_T) 
                                                      >> 5U) 
                                                     & ((0x1ffffffeU 
                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_27_io_in_T) 
                                                            >> 3U)) 
                                                        ^ 
                                                        (0xffffffeU 
                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_27_io_in_T) 
                                                            >> 4U))))))) 
                                        | (1U & VL_REDXOR_32(
                                                             (0x70U 
                                                              & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_27_io_in_T)))))),2);
            tracep->chgCData(oldp+702,((7U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_27_io_in_T) 
                                              >> 1U))),3);
            tracep->chgCData(oldp+703,(((2U & (((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_27_io_in_T))) 
                                                << 1U) 
                                               | (0x3ffffffeU 
                                                  & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_27_io_in_T) 
                                                      >> 2U) 
                                                     & ((0xfffffffeU 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_27_io_in_T)) 
                                                        ^ 
                                                        (0x7ffffffeU 
                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_27_io_in_T) 
                                                            >> 1U))))))) 
                                        | (1U & VL_REDXOR_32(
                                                             (0xeU 
                                                              & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_27_io_in_T)))))),2);
            tracep->chgCData(oldp+704,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_29_io_in),3);
            tracep->chgCData(oldp+705,(((2U & ((0xfffffffeU 
                                                & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_29_io_in) 
                                                    << 1U) 
                                                   & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_29_io_in))) 
                                               | (0x7ffffffeU 
                                                  & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_29_io_in) 
                                                      >> 1U) 
                                                     & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_29_io_in) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xfffffffeU 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_29_io_in))))))) 
                                        | (1U & VL_REDXOR_32(
                                                             (7U 
                                                              & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_29_io_in)))))),2);
            tracep->chgCData(oldp+706,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_30_io_in),3);
            tracep->chgCData(oldp+707,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_30_io_out),2);
            tracep->chgBit(oldp+708,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x1c0000000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131)))))));
            tracep->chgBit(oldp+709,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x38000000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131)))))));
            tracep->chgBit(oldp+710,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x7000000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131)))))));
            tracep->chgBit(oldp+711,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0xe00000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131)))))));
            tracep->chgBit(oldp+712,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x1c0000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131)))))));
            tracep->chgBit(oldp+713,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x38000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131)))))));
            tracep->chgBit(oldp+714,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x7000ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131)))))));
            tracep->chgBit(oldp+715,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0xe00ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131)))))));
            tracep->chgBit(oldp+716,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x1c0ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131)))))));
            tracep->chgBit(oldp+717,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (0x38ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131)))))));
            tracep->chgBit(oldp+718,((1U & (IData)(
                                                   (1ULL 
                                                    & VL_REDXOR_64(
                                                                   (7ULL 
                                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131)))))));
            tracep->chgCData(oldp+719,(((0x10U & ((IData)(
                                                          (1ULL 
                                                           & VL_REDXOR_64(
                                                                          (0x7000ULL 
                                                                           & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131)))) 
                                                  << 4U)) 
                                        | ((8U & ((IData)(
                                                          (1ULL 
                                                           & VL_REDXOR_64(
                                                                          (0xe00ULL 
                                                                           & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131)))) 
                                                  << 3U)) 
                                           | ((4U & 
                                               ((IData)(
                                                        (1ULL 
                                                         & VL_REDXOR_64(
                                                                        (0x1c0ULL 
                                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131)))) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((IData)(
                                                             (1ULL 
                                                              & VL_REDXOR_64(
                                                                             (0x38ULL 
                                                                              & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131)))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (1ULL 
                                                               & VL_REDXOR_64(
                                                                              (7ULL 
                                                                               & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131)))))))))),5);
            tracep->chgBit(oldp+720,((1U & VL_REDXOR_32(
                                                        (0x700U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_11_io_in_T))))));
            tracep->chgBit(oldp+721,((1U & VL_REDXOR_32(
                                                        (0xe0U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_11_io_in_T))))));
            tracep->chgBit(oldp+722,((1U & VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_11_io_in_T))))));
            tracep->chgBit(oldp+723,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_14_io_in))))));
            tracep->chgBit(oldp+724,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin)))));
            tracep->chgBit(oldp+725,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin)))));
            tracep->chgBit(oldp+726,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin)))));
            tracep->chgBit(oldp+727,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin)))));
            tracep->chgBit(oldp+728,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin)))));
            tracep->chgBit(oldp+729,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T))))));
            tracep->chgBit(oldp+730,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T))))));
            tracep->chgBit(oldp+731,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_20_io_in_T))))));
            tracep->chgBit(oldp+732,((1U & VL_REDXOR_32(
                                                        (0xe000000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin)))));
            tracep->chgBit(oldp+733,((1U & VL_REDXOR_32(
                                                        (0x1c00000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin)))));
            tracep->chgBit(oldp+734,((1U & VL_REDXOR_32(
                                                        (0x380000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin)))));
            tracep->chgBit(oldp+735,((1U & VL_REDXOR_32(
                                                        (0x70000U 
                                                         & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin)))));
            tracep->chgBit(oldp+736,((1U & VL_REDXOR_32(
                                                        (0x70U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_27_io_in_T))))));
            tracep->chgBit(oldp+737,((1U & VL_REDXOR_32(
                                                        (0xeU 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_27_io_in_T))))));
            tracep->chgBit(oldp+738,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_29_io_in))))));
            tracep->chgCData(oldp+739,(((2U & (VL_REDXOR_32(
                                                            (0x70U 
                                                             & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_27_io_in_T))) 
                                               << 1U)) 
                                        | (1U & VL_REDXOR_32(
                                                             (0xeU 
                                                              & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT___csa_27_io_in_T)))))),2);
            tracep->chgBit(oldp+740,((1U & (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_30_io_in) 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_30_io_in) 
                                                >> 1U)) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_30_io_in) 
                                                >> 2U) 
                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_30_io_in) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_30_io_in) 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+741,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_30_io_in))))));
        }
        tracep->chgBit(oldp+742,(vlSelf->clock));
        tracep->chgBit(oldp+743,(vlSelf->reset));
        tracep->chgBit(oldp+744,(vlSelf->io_mul_valid));
        tracep->chgBit(oldp+745,(vlSelf->io_flush));
        tracep->chgBit(oldp+746,(vlSelf->io_mulw));
        tracep->chgCData(oldp+747,(vlSelf->io_mul_signed),2);
        tracep->chgQData(oldp+748,(vlSelf->io_multiplicand),64);
        tracep->chgQData(oldp+750,(vlSelf->io_multiplier),64);
        tracep->chgBit(oldp+752,(vlSelf->io_mul_ready));
        tracep->chgBit(oldp+753,(vlSelf->io_out_valid));
        tracep->chgQData(oldp+754,(vlSelf->io_result_hi),64);
        tracep->chgQData(oldp+756,(vlSelf->io_result_lo),64);
    }
}

void Vunit___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vunit___024root* const __restrict vlSelf = static_cast<Vunit___024root*>(voidSelf);
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
