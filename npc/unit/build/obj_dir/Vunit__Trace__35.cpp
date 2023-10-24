// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vunit__Syms.h"


void Vunit___024root__trace_chg_sub_35(Vunit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root__trace_chg_sub_35\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 33190);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_124.__PVT__csa_22__DOT__out_0));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_124.__PVT__csa_23__DOT__out_0));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_124.__PVT__csa_24__DOT__out_0));
        bufp->chgBit(oldp+3,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_124.__PVT__csa_25__DOT__out_0));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_124.__PVT__csa_26__DOT__out_0));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_124.__PVT__csa_27__DOT__out_0));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_124.__PVT__csa_28__DOT__out_0));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_124.__PVT__csa_29__DOT__out_0));
        bufp->chgCData(oldp+8,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_124.__PVT__csa_27__DOT__out_0) 
                                 << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_124.__PVT__csa_28__DOT__out_0))),2);
        bufp->chgCData(oldp+9,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_125 
                                              >> 0x1eU)))),3);
        bufp->chgCData(oldp+10,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_10) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_0__DOT__out_0))),2);
        bufp->chgCData(oldp+11,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_125 
                                               >> 0x1bU)))),3);
        bufp->chgCData(oldp+12,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_9) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_1__DOT__out_0))),2);
        bufp->chgCData(oldp+13,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_125 
                                               >> 0x18U)))),3);
        bufp->chgCData(oldp+14,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_8) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_2__DOT__out_0))),2);
        bufp->chgCData(oldp+15,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_125 
                                               >> 0x15U)))),3);
        bufp->chgCData(oldp+16,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_7) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_3__DOT__out_0))),2);
        bufp->chgCData(oldp+17,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_125 
                                               >> 0x12U)))),3);
        bufp->chgCData(oldp+18,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_6) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_4__DOT__out_0))),2);
        bufp->chgCData(oldp+19,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_125 
                                               >> 0xfU)))),3);
        bufp->chgCData(oldp+20,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_5) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_5__DOT__out_0))),2);
        bufp->chgCData(oldp+21,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_125 
                                               >> 0xcU)))),3);
        bufp->chgCData(oldp+22,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_4) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_6__DOT__out_0))),2);
        bufp->chgCData(oldp+23,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_125 
                                               >> 9U)))),3);
        bufp->chgCData(oldp+24,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_3) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_7__DOT__out_0))),2);
        bufp->chgCData(oldp+25,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_125 
                                               >> 6U)))),3);
        bufp->chgCData(oldp+26,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_2) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_8__DOT__out_0))),2);
        bufp->chgCData(oldp+27,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_125 
                                               >> 3U)))),3);
        bufp->chgCData(oldp+28,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_1) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_9__DOT__out_0))),2);
        bufp->chgCData(oldp+29,((7U & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_125))),3);
        bufp->chgCData(oldp+30,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_0) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_10__DOT__out_0))),2);
        bufp->chgCData(oldp+31,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_0__DOT__out_0) 
                                  << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_1__DOT__out_0) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_2__DOT__out_0)))),3);
        bufp->chgCData(oldp+32,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_19) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_11__DOT__out_0))),2);
        bufp->chgCData(oldp+33,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_3__DOT__out_0) 
                                  << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_4__DOT__out_0) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_5__DOT__out_0)))),3);
        bufp->chgCData(oldp+34,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_18) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_12__DOT__out_0))),2);
        bufp->chgCData(oldp+35,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_6__DOT__out_0) 
                                  << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_7__DOT__out_0) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_8__DOT__out_0)))),3);
        bufp->chgCData(oldp+36,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_17) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_13__DOT__out_0))),2);
        bufp->chgCData(oldp+37,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_9__DOT__out_0) 
                                  << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_10__DOT__out_0) 
                                             << 1U) 
                                            | (1U & 
                                               (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_125_io_cin 
                                                >> 0xfU))))),3);
        bufp->chgCData(oldp+38,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_16) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_14__DOT__out_0))),2);
        bufp->chgCData(oldp+39,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_125_io_cin 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+40,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_15) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_15__DOT__out_0))),2);
        bufp->chgCData(oldp+41,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_125_io_cin 
                                       >> 9U))),3);
        bufp->chgCData(oldp+42,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_14) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_16__DOT__out_0))),2);
        bufp->chgCData(oldp+43,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_125_io_cin 
                                       >> 6U))),3);
        bufp->chgCData(oldp+44,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_13) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_17__DOT__out_0))),2);
        bufp->chgCData(oldp+45,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_125_io_cin 
                                       >> 3U))),3);
        bufp->chgCData(oldp+46,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_12) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_18__DOT__out_0))),2);
        bufp->chgCData(oldp+47,((7U & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_125_io_cin)),3);
        bufp->chgCData(oldp+48,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_11) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_19__DOT__out_0))),2);
        bufp->chgCData(oldp+49,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_11__DOT__out_0) 
                                  << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_12__DOT__out_0) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_13__DOT__out_0)))),3);
        bufp->chgCData(oldp+50,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_26) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_20__DOT__out_0))),2);
        bufp->chgCData(oldp+51,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_14__DOT__out_0) 
                                  << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_15__DOT__out_0) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_16__DOT__out_0)))),3);
        bufp->chgCData(oldp+52,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_25) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_21__DOT__out_0))),2);
        bufp->chgCData(oldp+53,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_17__DOT__out_0) 
                                  << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_18__DOT__out_0) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_19__DOT__out_0)))),3);
        bufp->chgCData(oldp+54,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_24) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_22__DOT__out_0))),2);
        bufp->chgCData(oldp+55,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_125_io_cin 
                                       >> 0x19U))),3);
        bufp->chgCData(oldp+56,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_23) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_23__DOT__out_0))),2);
        bufp->chgCData(oldp+57,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_125_io_cin 
                                       >> 0x16U))),3);
        bufp->chgCData(oldp+58,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_22) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_24__DOT__out_0))),2);
        bufp->chgCData(oldp+59,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_125_io_cin 
                                       >> 0x13U))),3);
        bufp->chgCData(oldp+60,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_21) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_25__DOT__out_0))),2);
        bufp->chgCData(oldp+61,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_125_io_cin 
                                       >> 0x10U))),3);
        bufp->chgCData(oldp+62,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_20) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_26__DOT__out_0))),2);
        bufp->chgCData(oldp+63,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_20__DOT__out_0) 
                                  << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_21__DOT__out_0) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_22__DOT__out_0)))),3);
        bufp->chgCData(oldp+64,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_29) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_27__DOT__out_0))),2);
        bufp->chgCData(oldp+65,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_23__DOT__out_0) 
                                  << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_24__DOT__out_0) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_25__DOT__out_0)))),3);
        bufp->chgCData(oldp+66,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_28) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_28__DOT__out_0))),2);
        bufp->chgCData(oldp+67,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_26__DOT__out_0) 
                                  << 2U) | (3U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_125_io_cin 
                                                  >> 0x1cU)))),3);
        bufp->chgCData(oldp+68,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout_group_27) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_29__DOT__out_0))),2);
        bufp->chgCData(oldp+69,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_27__DOT__out_0) 
                                  << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_28__DOT__out_0) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_29__DOT__out_0)))),3);
        bufp->chgCData(oldp+70,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_cout) 
                                  << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.io_s))),2);
        bufp->chgBit(oldp+71,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_0__DOT__out_0));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_1__DOT__out_0));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_2__DOT__out_0));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_3__DOT__out_0));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_4__DOT__out_0));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_5__DOT__out_0));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_6__DOT__out_0));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_7__DOT__out_0));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_8__DOT__out_0));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_9__DOT__out_0));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_10__DOT__out_0));
        bufp->chgCData(oldp+82,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_6__DOT__out_0) 
                                  << 4U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_7__DOT__out_0) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_8__DOT__out_0) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_9__DOT__out_0) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_10__DOT__out_0)))))),5);
        bufp->chgBit(oldp+83,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_11__DOT__out_0));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_12__DOT__out_0));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_13__DOT__out_0));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_14__DOT__out_0));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_15__DOT__out_0));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_16__DOT__out_0));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_17__DOT__out_0));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_18__DOT__out_0));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_19__DOT__out_0));
        bufp->chgBit(oldp+92,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_20__DOT__out_0));
        bufp->chgBit(oldp+93,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_21__DOT__out_0));
        bufp->chgBit(oldp+94,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_22__DOT__out_0));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_23__DOT__out_0));
        bufp->chgBit(oldp+96,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_24__DOT__out_0));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_25__DOT__out_0));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_26__DOT__out_0));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_27__DOT__out_0));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_28__DOT__out_0));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_29__DOT__out_0));
        bufp->chgCData(oldp+102,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_27__DOT__out_0) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_125.__PVT__csa_28__DOT__out_0))),2);
        bufp->chgCData(oldp+103,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_126 
                                                >> 0x1eU)))),3);
        bufp->chgCData(oldp+104,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_10) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_0__DOT__out_0))),2);
        bufp->chgCData(oldp+105,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_126 
                                                >> 0x1bU)))),3);
        bufp->chgCData(oldp+106,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_9) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_1__DOT__out_0))),2);
        bufp->chgCData(oldp+107,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_126 
                                                >> 0x18U)))),3);
        bufp->chgCData(oldp+108,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_8) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_2__DOT__out_0))),2);
        bufp->chgCData(oldp+109,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_126 
                                                >> 0x15U)))),3);
        bufp->chgCData(oldp+110,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_7) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_3__DOT__out_0))),2);
        bufp->chgCData(oldp+111,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_126 
                                                >> 0x12U)))),3);
        bufp->chgCData(oldp+112,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_6) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_4__DOT__out_0))),2);
        bufp->chgCData(oldp+113,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_126 
                                                >> 0xfU)))),3);
        bufp->chgCData(oldp+114,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_5) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_5__DOT__out_0))),2);
        bufp->chgCData(oldp+115,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_126 
                                                >> 0xcU)))),3);
        bufp->chgCData(oldp+116,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_4) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_6__DOT__out_0))),2);
        bufp->chgCData(oldp+117,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_126 
                                                >> 9U)))),3);
        bufp->chgCData(oldp+118,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_3) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_7__DOT__out_0))),2);
        bufp->chgCData(oldp+119,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_126 
                                                >> 6U)))),3);
        bufp->chgCData(oldp+120,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_2) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_8__DOT__out_0))),2);
        bufp->chgCData(oldp+121,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_126 
                                                >> 3U)))),3);
        bufp->chgCData(oldp+122,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_9__DOT__out_0))),2);
        bufp->chgCData(oldp+123,((7U & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_126))),3);
        bufp->chgCData(oldp+124,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_0) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_10__DOT__out_0))),2);
        bufp->chgCData(oldp+125,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_0__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_1__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_2__DOT__out_0)))),3);
        bufp->chgCData(oldp+126,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_19) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_11__DOT__out_0))),2);
        bufp->chgCData(oldp+127,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_3__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_4__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_5__DOT__out_0)))),3);
        bufp->chgCData(oldp+128,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_18) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_12__DOT__out_0))),2);
        bufp->chgCData(oldp+129,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_6__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_7__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_8__DOT__out_0)))),3);
        bufp->chgCData(oldp+130,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_17) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_13__DOT__out_0))),2);
        bufp->chgCData(oldp+131,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_9__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_10__DOT__out_0) 
                                              << 1U) 
                                             | (1U 
                                                & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                                   >> 0xfU))))),3);
        bufp->chgCData(oldp+132,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_16) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_14__DOT__out_0))),2);
        bufp->chgCData(oldp+133,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+134,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_15) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_15__DOT__out_0))),2);
        bufp->chgCData(oldp+135,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                        >> 9U))),3);
        bufp->chgCData(oldp+136,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_14) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_16__DOT__out_0))),2);
        bufp->chgCData(oldp+137,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                        >> 6U))),3);
        bufp->chgCData(oldp+138,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_13) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_17__DOT__out_0))),2);
        bufp->chgCData(oldp+139,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                        >> 3U))),3);
        bufp->chgCData(oldp+140,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_12) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_18__DOT__out_0))),2);
        bufp->chgCData(oldp+141,((7U & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin)),3);
        bufp->chgCData(oldp+142,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_11) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_19__DOT__out_0))),2);
        bufp->chgCData(oldp+143,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_11__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_12__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_13__DOT__out_0)))),3);
        bufp->chgCData(oldp+144,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_26) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_20__DOT__out_0))),2);
        bufp->chgCData(oldp+145,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_14__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_15__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_16__DOT__out_0)))),3);
        bufp->chgCData(oldp+146,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_25) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_21__DOT__out_0))),2);
        bufp->chgCData(oldp+147,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_17__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_18__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_19__DOT__out_0)))),3);
        bufp->chgCData(oldp+148,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_24) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_22__DOT__out_0))),2);
        bufp->chgCData(oldp+149,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                        >> 0x19U))),3);
        bufp->chgCData(oldp+150,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_23) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_23__DOT__out_0))),2);
        bufp->chgCData(oldp+151,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                        >> 0x16U))),3);
        bufp->chgCData(oldp+152,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_22) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_24__DOT__out_0))),2);
        bufp->chgCData(oldp+153,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                        >> 0x13U))),3);
        bufp->chgCData(oldp+154,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_21) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_25__DOT__out_0))),2);
        bufp->chgCData(oldp+155,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                        >> 0x10U))),3);
        bufp->chgCData(oldp+156,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_20) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_26__DOT__out_0))),2);
        bufp->chgCData(oldp+157,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_20__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_21__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_22__DOT__out_0)))),3);
        bufp->chgCData(oldp+158,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_29) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_27__DOT__out_0))),2);
        bufp->chgCData(oldp+159,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_23__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_24__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_25__DOT__out_0)))),3);
        bufp->chgCData(oldp+160,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_28) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_28__DOT__out_0))),2);
        bufp->chgCData(oldp+161,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_26__DOT__out_0) 
                                   << 2U) | (3U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_126_io_cin 
                                                   >> 0x1cU)))),3);
        bufp->chgCData(oldp+162,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout_group_27) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_29__DOT__out_0))),2);
        bufp->chgCData(oldp+163,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_27__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_28__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_29__DOT__out_0)))),3);
        bufp->chgCData(oldp+164,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_cout) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.io_s))),2);
        bufp->chgBit(oldp+165,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_0__DOT__out_0));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_1__DOT__out_0));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_2__DOT__out_0));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_3__DOT__out_0));
        bufp->chgBit(oldp+169,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_4__DOT__out_0));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_5__DOT__out_0));
        bufp->chgBit(oldp+171,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_6__DOT__out_0));
        bufp->chgBit(oldp+172,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_7__DOT__out_0));
        bufp->chgBit(oldp+173,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_8__DOT__out_0));
        bufp->chgBit(oldp+174,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_9__DOT__out_0));
        bufp->chgBit(oldp+175,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_10__DOT__out_0));
        bufp->chgCData(oldp+176,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_6__DOT__out_0) 
                                   << 4U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_7__DOT__out_0) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_8__DOT__out_0) 
                                                 << 2U) 
                                                | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_9__DOT__out_0) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_10__DOT__out_0)))))),5);
        bufp->chgBit(oldp+177,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_11__DOT__out_0));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_12__DOT__out_0));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_13__DOT__out_0));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_14__DOT__out_0));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_15__DOT__out_0));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_16__DOT__out_0));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_17__DOT__out_0));
        bufp->chgBit(oldp+184,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_18__DOT__out_0));
        bufp->chgBit(oldp+185,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_19__DOT__out_0));
        bufp->chgBit(oldp+186,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_20__DOT__out_0));
        bufp->chgBit(oldp+187,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_21__DOT__out_0));
        bufp->chgBit(oldp+188,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_22__DOT__out_0));
        bufp->chgBit(oldp+189,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_23__DOT__out_0));
        bufp->chgBit(oldp+190,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_24__DOT__out_0));
        bufp->chgBit(oldp+191,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_25__DOT__out_0));
        bufp->chgBit(oldp+192,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_26__DOT__out_0));
        bufp->chgBit(oldp+193,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_27__DOT__out_0));
        bufp->chgBit(oldp+194,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_28__DOT__out_0));
        bufp->chgBit(oldp+195,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_29__DOT__out_0));
        bufp->chgCData(oldp+196,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_27__DOT__out_0) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_126.__PVT__csa_28__DOT__out_0))),2);
        bufp->chgCData(oldp+197,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                >> 0x1eU)))),3);
        bufp->chgCData(oldp+198,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_10) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_0__DOT__out_0))),2);
        bufp->chgCData(oldp+199,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                >> 0x1bU)))),3);
        bufp->chgCData(oldp+200,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_9) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_1__DOT__out_0))),2);
        bufp->chgCData(oldp+201,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                >> 0x18U)))),3);
        bufp->chgCData(oldp+202,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_8) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_2__DOT__out_0))),2);
        bufp->chgCData(oldp+203,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                >> 0x15U)))),3);
        bufp->chgCData(oldp+204,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_7) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_3__DOT__out_0))),2);
        bufp->chgCData(oldp+205,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                >> 0x12U)))),3);
        bufp->chgCData(oldp+206,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_6) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_4__DOT__out_0))),2);
        bufp->chgCData(oldp+207,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                >> 0xfU)))),3);
        bufp->chgCData(oldp+208,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_5) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_5__DOT__out_0))),2);
        bufp->chgCData(oldp+209,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                >> 0xcU)))),3);
        bufp->chgCData(oldp+210,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_4) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_6__DOT__out_0))),2);
        bufp->chgCData(oldp+211,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                >> 9U)))),3);
        bufp->chgCData(oldp+212,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_3) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_7__DOT__out_0))),2);
        bufp->chgCData(oldp+213,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                >> 6U)))),3);
        bufp->chgCData(oldp+214,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_2) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_8__DOT__out_0))),2);
        bufp->chgCData(oldp+215,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127 
                                                >> 3U)))),3);
        bufp->chgCData(oldp+216,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_9__DOT__out_0))),2);
        bufp->chgCData(oldp+217,((7U & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_127))),3);
        bufp->chgCData(oldp+218,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_0) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_10__DOT__out_0))),2);
        bufp->chgCData(oldp+219,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_0__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_1__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_2__DOT__out_0)))),3);
        bufp->chgCData(oldp+220,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_19) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_11__DOT__out_0))),2);
        bufp->chgCData(oldp+221,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_3__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_4__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_5__DOT__out_0)))),3);
        bufp->chgCData(oldp+222,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_18) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_12__DOT__out_0))),2);
        bufp->chgCData(oldp+223,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_6__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_7__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_8__DOT__out_0)))),3);
        bufp->chgCData(oldp+224,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_17) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_13__DOT__out_0))),2);
        bufp->chgCData(oldp+225,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_9__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_10__DOT__out_0) 
                                              << 1U) 
                                             | (1U 
                                                & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                   >> 0xfU))))),3);
        bufp->chgCData(oldp+226,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_16) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_14__DOT__out_0))),2);
        bufp->chgCData(oldp+227,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+228,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_15) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_15__DOT__out_0))),2);
        bufp->chgCData(oldp+229,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                        >> 9U))),3);
        bufp->chgCData(oldp+230,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_14) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_16__DOT__out_0))),2);
        bufp->chgCData(oldp+231,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                        >> 6U))),3);
        bufp->chgCData(oldp+232,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_13) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_17__DOT__out_0))),2);
        bufp->chgCData(oldp+233,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                        >> 3U))),3);
        bufp->chgCData(oldp+234,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_12) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_18__DOT__out_0))),2);
        bufp->chgCData(oldp+235,((7U & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin)),3);
        bufp->chgCData(oldp+236,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_11) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_19__DOT__out_0))),2);
        bufp->chgCData(oldp+237,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_11__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_12__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_13__DOT__out_0)))),3);
        bufp->chgCData(oldp+238,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_26) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_20__DOT__out_0))),2);
        bufp->chgCData(oldp+239,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_14__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_15__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_16__DOT__out_0)))),3);
        bufp->chgCData(oldp+240,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_25) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_21__DOT__out_0))),2);
        bufp->chgCData(oldp+241,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_17__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_18__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_19__DOT__out_0)))),3);
        bufp->chgCData(oldp+242,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_24) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_22__DOT__out_0))),2);
        bufp->chgCData(oldp+243,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                        >> 0x19U))),3);
        bufp->chgCData(oldp+244,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_23) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_23__DOT__out_0))),2);
        bufp->chgCData(oldp+245,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                        >> 0x16U))),3);
        bufp->chgCData(oldp+246,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_22) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_24__DOT__out_0))),2);
        bufp->chgCData(oldp+247,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                        >> 0x13U))),3);
        bufp->chgCData(oldp+248,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_21) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_25__DOT__out_0))),2);
        bufp->chgCData(oldp+249,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                        >> 0x10U))),3);
        bufp->chgCData(oldp+250,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_20) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_26__DOT__out_0))),2);
        bufp->chgCData(oldp+251,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_20__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_21__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_22__DOT__out_0)))),3);
        bufp->chgCData(oldp+252,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_29) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_27__DOT__out_0))),2);
        bufp->chgCData(oldp+253,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_23__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_24__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_25__DOT__out_0)))),3);
        bufp->chgCData(oldp+254,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_28) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_28__DOT__out_0))),2);
        bufp->chgCData(oldp+255,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_26__DOT__out_0) 
                                   << 2U) | (3U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_127_io_cin 
                                                   >> 0x1cU)))),3);
        bufp->chgCData(oldp+256,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout_group_27) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_29__DOT__out_0))),2);
        bufp->chgCData(oldp+257,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_27__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_28__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_29__DOT__out_0)))),3);
        bufp->chgCData(oldp+258,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_cout) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.io_s))),2);
        bufp->chgBit(oldp+259,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_0__DOT__out_0));
        bufp->chgBit(oldp+260,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_1__DOT__out_0));
        bufp->chgBit(oldp+261,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_2__DOT__out_0));
        bufp->chgBit(oldp+262,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_3__DOT__out_0));
        bufp->chgBit(oldp+263,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_4__DOT__out_0));
        bufp->chgBit(oldp+264,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_5__DOT__out_0));
        bufp->chgBit(oldp+265,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_6__DOT__out_0));
        bufp->chgBit(oldp+266,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_7__DOT__out_0));
        bufp->chgBit(oldp+267,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_8__DOT__out_0));
        bufp->chgBit(oldp+268,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_9__DOT__out_0));
        bufp->chgBit(oldp+269,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_10__DOT__out_0));
        bufp->chgCData(oldp+270,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_6__DOT__out_0) 
                                   << 4U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_7__DOT__out_0) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_8__DOT__out_0) 
                                                 << 2U) 
                                                | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_9__DOT__out_0) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_10__DOT__out_0)))))),5);
        bufp->chgBit(oldp+271,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_11__DOT__out_0));
        bufp->chgBit(oldp+272,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_12__DOT__out_0));
        bufp->chgBit(oldp+273,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_13__DOT__out_0));
        bufp->chgBit(oldp+274,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_14__DOT__out_0));
        bufp->chgBit(oldp+275,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_15__DOT__out_0));
        bufp->chgBit(oldp+276,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_16__DOT__out_0));
        bufp->chgBit(oldp+277,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_17__DOT__out_0));
        bufp->chgBit(oldp+278,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_18__DOT__out_0));
        bufp->chgBit(oldp+279,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_19__DOT__out_0));
        bufp->chgBit(oldp+280,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_20__DOT__out_0));
        bufp->chgBit(oldp+281,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_21__DOT__out_0));
        bufp->chgBit(oldp+282,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_22__DOT__out_0));
        bufp->chgBit(oldp+283,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_23__DOT__out_0));
        bufp->chgBit(oldp+284,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_24__DOT__out_0));
        bufp->chgBit(oldp+285,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_25__DOT__out_0));
        bufp->chgBit(oldp+286,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_26__DOT__out_0));
        bufp->chgBit(oldp+287,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_27__DOT__out_0));
        bufp->chgBit(oldp+288,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_28__DOT__out_0));
        bufp->chgBit(oldp+289,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_29__DOT__out_0));
        bufp->chgCData(oldp+290,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_27__DOT__out_0) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_127.__PVT__csa_28__DOT__out_0))),2);
        bufp->chgCData(oldp+291,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                >> 0x1eU)))),3);
        bufp->chgCData(oldp+292,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_10) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_0__DOT__out_0))),2);
        bufp->chgCData(oldp+293,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                >> 0x1bU)))),3);
        bufp->chgCData(oldp+294,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_9) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_1__DOT__out_0))),2);
        bufp->chgCData(oldp+295,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                >> 0x18U)))),3);
        bufp->chgCData(oldp+296,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_8) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_2__DOT__out_0))),2);
        bufp->chgCData(oldp+297,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                >> 0x15U)))),3);
        bufp->chgCData(oldp+298,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_7) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_3__DOT__out_0))),2);
        bufp->chgCData(oldp+299,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                >> 0x12U)))),3);
        bufp->chgCData(oldp+300,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_6) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_4__DOT__out_0))),2);
        bufp->chgCData(oldp+301,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                >> 0xfU)))),3);
        bufp->chgCData(oldp+302,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_5) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_5__DOT__out_0))),2);
        bufp->chgCData(oldp+303,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                >> 0xcU)))),3);
        bufp->chgCData(oldp+304,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_4) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_6__DOT__out_0))),2);
        bufp->chgCData(oldp+305,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                >> 9U)))),3);
        bufp->chgCData(oldp+306,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_3) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_7__DOT__out_0))),2);
        bufp->chgCData(oldp+307,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                >> 6U)))),3);
        bufp->chgCData(oldp+308,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_2) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_8__DOT__out_0))),2);
        bufp->chgCData(oldp+309,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128 
                                                >> 3U)))),3);
        bufp->chgCData(oldp+310,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_9__DOT__out_0))),2);
        bufp->chgCData(oldp+311,((7U & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_128))),3);
        bufp->chgCData(oldp+312,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_0) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_10__DOT__out_0))),2);
        bufp->chgCData(oldp+313,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_0__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_1__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_2__DOT__out_0)))),3);
        bufp->chgCData(oldp+314,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_19) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_11__DOT__out_0))),2);
        bufp->chgCData(oldp+315,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_3__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_4__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_5__DOT__out_0)))),3);
        bufp->chgCData(oldp+316,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_18) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_12__DOT__out_0))),2);
        bufp->chgCData(oldp+317,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_6__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_7__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_8__DOT__out_0)))),3);
        bufp->chgCData(oldp+318,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_17) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_13__DOT__out_0))),2);
        bufp->chgCData(oldp+319,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_9__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_10__DOT__out_0) 
                                              << 1U) 
                                             | (1U 
                                                & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                   >> 0xfU))))),3);
        bufp->chgCData(oldp+320,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_16) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_14__DOT__out_0))),2);
        bufp->chgCData(oldp+321,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+322,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_15) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_15__DOT__out_0))),2);
        bufp->chgCData(oldp+323,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                        >> 9U))),3);
        bufp->chgCData(oldp+324,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_14) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_16__DOT__out_0))),2);
        bufp->chgCData(oldp+325,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                        >> 6U))),3);
        bufp->chgCData(oldp+326,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_13) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_17__DOT__out_0))),2);
        bufp->chgCData(oldp+327,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                        >> 3U))),3);
        bufp->chgCData(oldp+328,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_12) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_18__DOT__out_0))),2);
        bufp->chgCData(oldp+329,((7U & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin)),3);
        bufp->chgCData(oldp+330,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_11) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_19__DOT__out_0))),2);
        bufp->chgCData(oldp+331,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_11__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_12__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_13__DOT__out_0)))),3);
        bufp->chgCData(oldp+332,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_26) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_20__DOT__out_0))),2);
        bufp->chgCData(oldp+333,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_14__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_15__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_16__DOT__out_0)))),3);
        bufp->chgCData(oldp+334,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_25) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_21__DOT__out_0))),2);
        bufp->chgCData(oldp+335,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_17__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_18__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_19__DOT__out_0)))),3);
        bufp->chgCData(oldp+336,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_24) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_22__DOT__out_0))),2);
        bufp->chgCData(oldp+337,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                        >> 0x19U))),3);
        bufp->chgCData(oldp+338,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_23) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_23__DOT__out_0))),2);
        bufp->chgCData(oldp+339,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                        >> 0x16U))),3);
        bufp->chgCData(oldp+340,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_22) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_24__DOT__out_0))),2);
        bufp->chgCData(oldp+341,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                        >> 0x13U))),3);
        bufp->chgCData(oldp+342,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_21) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_25__DOT__out_0))),2);
        bufp->chgCData(oldp+343,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                        >> 0x10U))),3);
        bufp->chgCData(oldp+344,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_20) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_26__DOT__out_0))),2);
        bufp->chgCData(oldp+345,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_20__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_21__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_22__DOT__out_0)))),3);
        bufp->chgCData(oldp+346,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_29) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_27__DOT__out_0))),2);
        bufp->chgCData(oldp+347,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_23__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_24__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_25__DOT__out_0)))),3);
        bufp->chgCData(oldp+348,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_28) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_28__DOT__out_0))),2);
        bufp->chgCData(oldp+349,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_26__DOT__out_0) 
                                   << 2U) | (3U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_128_io_cin 
                                                   >> 0x1cU)))),3);
        bufp->chgCData(oldp+350,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout_group_27) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_29__DOT__out_0))),2);
        bufp->chgCData(oldp+351,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_27__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_28__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_29__DOT__out_0)))),3);
        bufp->chgCData(oldp+352,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_cout) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.io_s))),2);
        bufp->chgBit(oldp+353,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_0__DOT__out_0));
        bufp->chgBit(oldp+354,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_1__DOT__out_0));
        bufp->chgBit(oldp+355,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_2__DOT__out_0));
        bufp->chgBit(oldp+356,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_3__DOT__out_0));
        bufp->chgBit(oldp+357,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_4__DOT__out_0));
        bufp->chgBit(oldp+358,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_5__DOT__out_0));
        bufp->chgBit(oldp+359,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_6__DOT__out_0));
        bufp->chgBit(oldp+360,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_7__DOT__out_0));
        bufp->chgBit(oldp+361,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_8__DOT__out_0));
        bufp->chgBit(oldp+362,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_9__DOT__out_0));
        bufp->chgBit(oldp+363,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_10__DOT__out_0));
        bufp->chgCData(oldp+364,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_6__DOT__out_0) 
                                   << 4U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_7__DOT__out_0) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_8__DOT__out_0) 
                                                 << 2U) 
                                                | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_9__DOT__out_0) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_10__DOT__out_0)))))),5);
        bufp->chgBit(oldp+365,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_11__DOT__out_0));
        bufp->chgBit(oldp+366,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_12__DOT__out_0));
        bufp->chgBit(oldp+367,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_13__DOT__out_0));
        bufp->chgBit(oldp+368,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_14__DOT__out_0));
        bufp->chgBit(oldp+369,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_15__DOT__out_0));
        bufp->chgBit(oldp+370,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_16__DOT__out_0));
        bufp->chgBit(oldp+371,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_17__DOT__out_0));
        bufp->chgBit(oldp+372,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_18__DOT__out_0));
        bufp->chgBit(oldp+373,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_19__DOT__out_0));
        bufp->chgBit(oldp+374,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_20__DOT__out_0));
        bufp->chgBit(oldp+375,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_21__DOT__out_0));
        bufp->chgBit(oldp+376,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_22__DOT__out_0));
        bufp->chgBit(oldp+377,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_23__DOT__out_0));
        bufp->chgBit(oldp+378,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_24__DOT__out_0));
        bufp->chgBit(oldp+379,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_25__DOT__out_0));
        bufp->chgBit(oldp+380,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_26__DOT__out_0));
        bufp->chgBit(oldp+381,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_27__DOT__out_0));
        bufp->chgBit(oldp+382,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_28__DOT__out_0));
        bufp->chgBit(oldp+383,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_29__DOT__out_0));
        bufp->chgCData(oldp+384,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_27__DOT__out_0) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_128.__PVT__csa_28__DOT__out_0))),2);
        bufp->chgCData(oldp+385,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                >> 0x1eU)))),3);
        bufp->chgCData(oldp+386,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_10) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_0__DOT__out_0))),2);
        bufp->chgCData(oldp+387,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                >> 0x1bU)))),3);
        bufp->chgCData(oldp+388,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_9) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_1__DOT__out_0))),2);
        bufp->chgCData(oldp+389,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                >> 0x18U)))),3);
        bufp->chgCData(oldp+390,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_8) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_2__DOT__out_0))),2);
        bufp->chgCData(oldp+391,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                >> 0x15U)))),3);
        bufp->chgCData(oldp+392,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_7) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_3__DOT__out_0))),2);
        bufp->chgCData(oldp+393,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                >> 0x12U)))),3);
        bufp->chgCData(oldp+394,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_6) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_4__DOT__out_0))),2);
        bufp->chgCData(oldp+395,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                >> 0xfU)))),3);
        bufp->chgCData(oldp+396,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_5) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_5__DOT__out_0))),2);
        bufp->chgCData(oldp+397,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                >> 0xcU)))),3);
        bufp->chgCData(oldp+398,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_4) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_6__DOT__out_0))),2);
        bufp->chgCData(oldp+399,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                >> 9U)))),3);
        bufp->chgCData(oldp+400,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_3) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_7__DOT__out_0))),2);
        bufp->chgCData(oldp+401,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                >> 6U)))),3);
        bufp->chgCData(oldp+402,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_2) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_8__DOT__out_0))),2);
        bufp->chgCData(oldp+403,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129 
                                                >> 3U)))),3);
        bufp->chgCData(oldp+404,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_9__DOT__out_0))),2);
        bufp->chgCData(oldp+405,((7U & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_129))),3);
        bufp->chgCData(oldp+406,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_0) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_10__DOT__out_0))),2);
        bufp->chgCData(oldp+407,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_0__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_1__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_2__DOT__out_0)))),3);
        bufp->chgCData(oldp+408,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_19) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_11__DOT__out_0))),2);
        bufp->chgCData(oldp+409,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_3__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_4__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_5__DOT__out_0)))),3);
        bufp->chgCData(oldp+410,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_18) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_12__DOT__out_0))),2);
        bufp->chgCData(oldp+411,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_6__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_7__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_8__DOT__out_0)))),3);
        bufp->chgCData(oldp+412,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_17) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_13__DOT__out_0))),2);
        bufp->chgCData(oldp+413,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_9__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_10__DOT__out_0) 
                                              << 1U) 
                                             | (1U 
                                                & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                   >> 0xfU))))),3);
        bufp->chgCData(oldp+414,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_16) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_14__DOT__out_0))),2);
        bufp->chgCData(oldp+415,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+416,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_15) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_15__DOT__out_0))),2);
        bufp->chgCData(oldp+417,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                        >> 9U))),3);
        bufp->chgCData(oldp+418,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_14) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_16__DOT__out_0))),2);
        bufp->chgCData(oldp+419,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                        >> 6U))),3);
        bufp->chgCData(oldp+420,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_13) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_17__DOT__out_0))),2);
        bufp->chgCData(oldp+421,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                        >> 3U))),3);
        bufp->chgCData(oldp+422,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_12) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_18__DOT__out_0))),2);
        bufp->chgCData(oldp+423,((7U & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin)),3);
        bufp->chgCData(oldp+424,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_11) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_19__DOT__out_0))),2);
        bufp->chgCData(oldp+425,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_11__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_12__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_13__DOT__out_0)))),3);
        bufp->chgCData(oldp+426,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_26) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_20__DOT__out_0))),2);
        bufp->chgCData(oldp+427,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_14__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_15__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_16__DOT__out_0)))),3);
        bufp->chgCData(oldp+428,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_25) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_21__DOT__out_0))),2);
        bufp->chgCData(oldp+429,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_17__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_18__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_19__DOT__out_0)))),3);
        bufp->chgCData(oldp+430,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_24) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_22__DOT__out_0))),2);
        bufp->chgCData(oldp+431,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                        >> 0x19U))),3);
        bufp->chgCData(oldp+432,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_23) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_23__DOT__out_0))),2);
        bufp->chgCData(oldp+433,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                        >> 0x16U))),3);
        bufp->chgCData(oldp+434,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_22) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_24__DOT__out_0))),2);
        bufp->chgCData(oldp+435,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                        >> 0x13U))),3);
        bufp->chgCData(oldp+436,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_21) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_25__DOT__out_0))),2);
        bufp->chgCData(oldp+437,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                        >> 0x10U))),3);
        bufp->chgCData(oldp+438,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_20) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_26__DOT__out_0))),2);
        bufp->chgCData(oldp+439,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_20__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_21__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_22__DOT__out_0)))),3);
        bufp->chgCData(oldp+440,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_29) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_27__DOT__out_0))),2);
        bufp->chgCData(oldp+441,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_23__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_24__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_25__DOT__out_0)))),3);
        bufp->chgCData(oldp+442,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_28) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_28__DOT__out_0))),2);
        bufp->chgCData(oldp+443,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_26__DOT__out_0) 
                                   << 2U) | (3U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_129_io_cin 
                                                   >> 0x1cU)))),3);
        bufp->chgCData(oldp+444,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout_group_27) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_29__DOT__out_0))),2);
        bufp->chgCData(oldp+445,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_27__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_28__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_29__DOT__out_0)))),3);
        bufp->chgCData(oldp+446,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_cout) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.io_s))),2);
        bufp->chgBit(oldp+447,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_0__DOT__out_0));
        bufp->chgBit(oldp+448,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_1__DOT__out_0));
        bufp->chgBit(oldp+449,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_2__DOT__out_0));
        bufp->chgBit(oldp+450,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_3__DOT__out_0));
        bufp->chgBit(oldp+451,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_4__DOT__out_0));
        bufp->chgBit(oldp+452,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_5__DOT__out_0));
        bufp->chgBit(oldp+453,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_6__DOT__out_0));
        bufp->chgBit(oldp+454,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_7__DOT__out_0));
        bufp->chgBit(oldp+455,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_8__DOT__out_0));
        bufp->chgBit(oldp+456,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_9__DOT__out_0));
        bufp->chgBit(oldp+457,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_10__DOT__out_0));
        bufp->chgCData(oldp+458,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_6__DOT__out_0) 
                                   << 4U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_7__DOT__out_0) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_8__DOT__out_0) 
                                                 << 2U) 
                                                | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_9__DOT__out_0) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_10__DOT__out_0)))))),5);
        bufp->chgBit(oldp+459,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_11__DOT__out_0));
        bufp->chgBit(oldp+460,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_12__DOT__out_0));
        bufp->chgBit(oldp+461,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_13__DOT__out_0));
        bufp->chgBit(oldp+462,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_14__DOT__out_0));
        bufp->chgBit(oldp+463,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_15__DOT__out_0));
        bufp->chgBit(oldp+464,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_16__DOT__out_0));
        bufp->chgBit(oldp+465,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_17__DOT__out_0));
        bufp->chgBit(oldp+466,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_18__DOT__out_0));
        bufp->chgBit(oldp+467,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_19__DOT__out_0));
        bufp->chgBit(oldp+468,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_20__DOT__out_0));
        bufp->chgBit(oldp+469,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_21__DOT__out_0));
        bufp->chgBit(oldp+470,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_22__DOT__out_0));
        bufp->chgBit(oldp+471,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_23__DOT__out_0));
        bufp->chgBit(oldp+472,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_24__DOT__out_0));
        bufp->chgBit(oldp+473,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_25__DOT__out_0));
        bufp->chgBit(oldp+474,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_26__DOT__out_0));
        bufp->chgBit(oldp+475,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_27__DOT__out_0));
        bufp->chgBit(oldp+476,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_28__DOT__out_0));
        bufp->chgBit(oldp+477,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_29__DOT__out_0));
        bufp->chgCData(oldp+478,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_27__DOT__out_0) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_129.__PVT__csa_28__DOT__out_0))),2);
        bufp->chgCData(oldp+479,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                >> 0x1eU)))),3);
        bufp->chgCData(oldp+480,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_10) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_0__DOT__out_0))),2);
        bufp->chgCData(oldp+481,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                >> 0x1bU)))),3);
        bufp->chgCData(oldp+482,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_9) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_1__DOT__out_0))),2);
        bufp->chgCData(oldp+483,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                >> 0x18U)))),3);
        bufp->chgCData(oldp+484,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_8) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_2__DOT__out_0))),2);
        bufp->chgCData(oldp+485,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                >> 0x15U)))),3);
        bufp->chgCData(oldp+486,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_7) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_3__DOT__out_0))),2);
        bufp->chgCData(oldp+487,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                >> 0x12U)))),3);
        bufp->chgCData(oldp+488,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_6) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_4__DOT__out_0))),2);
        bufp->chgCData(oldp+489,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                >> 0xfU)))),3);
        bufp->chgCData(oldp+490,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_5) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_5__DOT__out_0))),2);
        bufp->chgCData(oldp+491,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                >> 0xcU)))),3);
        bufp->chgCData(oldp+492,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_4) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_6__DOT__out_0))),2);
        bufp->chgCData(oldp+493,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                >> 9U)))),3);
        bufp->chgCData(oldp+494,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_3) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_7__DOT__out_0))),2);
        bufp->chgCData(oldp+495,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                >> 6U)))),3);
        bufp->chgCData(oldp+496,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_2) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_8__DOT__out_0))),2);
        bufp->chgCData(oldp+497,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130 
                                                >> 3U)))),3);
        bufp->chgCData(oldp+498,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_9__DOT__out_0))),2);
        bufp->chgCData(oldp+499,((7U & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_130))),3);
        bufp->chgCData(oldp+500,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_0) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_10__DOT__out_0))),2);
        bufp->chgCData(oldp+501,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_0__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_1__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_2__DOT__out_0)))),3);
        bufp->chgCData(oldp+502,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_19) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_11__DOT__out_0))),2);
        bufp->chgCData(oldp+503,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_3__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_4__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_5__DOT__out_0)))),3);
        bufp->chgCData(oldp+504,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_18) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_12__DOT__out_0))),2);
        bufp->chgCData(oldp+505,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_6__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_7__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_8__DOT__out_0)))),3);
        bufp->chgCData(oldp+506,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_17) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_13__DOT__out_0))),2);
        bufp->chgCData(oldp+507,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_9__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_10__DOT__out_0) 
                                              << 1U) 
                                             | (1U 
                                                & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                   >> 0xfU))))),3);
        bufp->chgCData(oldp+508,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_16) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_14__DOT__out_0))),2);
        bufp->chgCData(oldp+509,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+510,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_15) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_15__DOT__out_0))),2);
        bufp->chgCData(oldp+511,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                        >> 9U))),3);
        bufp->chgCData(oldp+512,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_14) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_16__DOT__out_0))),2);
        bufp->chgCData(oldp+513,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                        >> 6U))),3);
        bufp->chgCData(oldp+514,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_13) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_17__DOT__out_0))),2);
        bufp->chgCData(oldp+515,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                        >> 3U))),3);
        bufp->chgCData(oldp+516,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_12) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_18__DOT__out_0))),2);
        bufp->chgCData(oldp+517,((7U & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin)),3);
        bufp->chgCData(oldp+518,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_11) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_19__DOT__out_0))),2);
        bufp->chgCData(oldp+519,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_11__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_12__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_13__DOT__out_0)))),3);
        bufp->chgCData(oldp+520,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_26) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_20__DOT__out_0))),2);
        bufp->chgCData(oldp+521,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_14__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_15__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_16__DOT__out_0)))),3);
        bufp->chgCData(oldp+522,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_25) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_21__DOT__out_0))),2);
        bufp->chgCData(oldp+523,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_17__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_18__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_19__DOT__out_0)))),3);
        bufp->chgCData(oldp+524,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_24) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_22__DOT__out_0))),2);
        bufp->chgCData(oldp+525,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                        >> 0x19U))),3);
        bufp->chgCData(oldp+526,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_23) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_23__DOT__out_0))),2);
        bufp->chgCData(oldp+527,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                        >> 0x16U))),3);
        bufp->chgCData(oldp+528,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_22) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_24__DOT__out_0))),2);
        bufp->chgCData(oldp+529,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                        >> 0x13U))),3);
        bufp->chgCData(oldp+530,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_21) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_25__DOT__out_0))),2);
        bufp->chgCData(oldp+531,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                        >> 0x10U))),3);
        bufp->chgCData(oldp+532,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_20) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_26__DOT__out_0))),2);
        bufp->chgCData(oldp+533,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_20__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_21__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_22__DOT__out_0)))),3);
        bufp->chgCData(oldp+534,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_29) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_27__DOT__out_0))),2);
        bufp->chgCData(oldp+535,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_23__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_24__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_25__DOT__out_0)))),3);
        bufp->chgCData(oldp+536,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_28) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_28__DOT__out_0))),2);
        bufp->chgCData(oldp+537,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_26__DOT__out_0) 
                                   << 2U) | (3U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_130_io_cin 
                                                   >> 0x1cU)))),3);
        bufp->chgCData(oldp+538,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout_group_27) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_29__DOT__out_0))),2);
        bufp->chgCData(oldp+539,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_27__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_28__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_29__DOT__out_0)))),3);
        bufp->chgCData(oldp+540,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_cout) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.io_s))),2);
        bufp->chgBit(oldp+541,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_0__DOT__out_0));
        bufp->chgBit(oldp+542,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_1__DOT__out_0));
        bufp->chgBit(oldp+543,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_2__DOT__out_0));
        bufp->chgBit(oldp+544,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_3__DOT__out_0));
        bufp->chgBit(oldp+545,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_4__DOT__out_0));
        bufp->chgBit(oldp+546,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_5__DOT__out_0));
        bufp->chgBit(oldp+547,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_6__DOT__out_0));
        bufp->chgBit(oldp+548,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_7__DOT__out_0));
        bufp->chgBit(oldp+549,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_8__DOT__out_0));
        bufp->chgBit(oldp+550,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_9__DOT__out_0));
        bufp->chgBit(oldp+551,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_10__DOT__out_0));
        bufp->chgCData(oldp+552,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_6__DOT__out_0) 
                                   << 4U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_7__DOT__out_0) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_8__DOT__out_0) 
                                                 << 2U) 
                                                | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_9__DOT__out_0) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_10__DOT__out_0)))))),5);
        bufp->chgBit(oldp+553,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_11__DOT__out_0));
        bufp->chgBit(oldp+554,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_12__DOT__out_0));
        bufp->chgBit(oldp+555,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_13__DOT__out_0));
        bufp->chgBit(oldp+556,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_14__DOT__out_0));
        bufp->chgBit(oldp+557,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_15__DOT__out_0));
        bufp->chgBit(oldp+558,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_16__DOT__out_0));
        bufp->chgBit(oldp+559,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_17__DOT__out_0));
        bufp->chgBit(oldp+560,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_18__DOT__out_0));
        bufp->chgBit(oldp+561,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_19__DOT__out_0));
        bufp->chgBit(oldp+562,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_20__DOT__out_0));
        bufp->chgBit(oldp+563,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_21__DOT__out_0));
        bufp->chgBit(oldp+564,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_22__DOT__out_0));
        bufp->chgBit(oldp+565,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_23__DOT__out_0));
        bufp->chgBit(oldp+566,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_24__DOT__out_0));
        bufp->chgBit(oldp+567,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_25__DOT__out_0));
        bufp->chgBit(oldp+568,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_26__DOT__out_0));
        bufp->chgBit(oldp+569,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_27__DOT__out_0));
        bufp->chgBit(oldp+570,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_28__DOT__out_0));
        bufp->chgBit(oldp+571,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_29__DOT__out_0));
        bufp->chgCData(oldp+572,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_27__DOT__out_0) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_130.__PVT__csa_28__DOT__out_0))),2);
        bufp->chgCData(oldp+573,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                >> 0x1eU)))),3);
        bufp->chgCData(oldp+574,(((2U & (((IData)((0xc0000000ULL 
                                                   == 
                                                   (0xc0000000ULL 
                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))) 
                                          | ((IData)(
                                                     (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                      >> 0x20U)) 
                                             & ((IData)(
                                                        (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                         >> 0x1eU)) 
                                                ^ (IData)(
                                                          (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                           >> 0x1fU))))) 
                                         << 1U)) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_0__DOT__out_0))),2);
        bufp->chgCData(oldp+575,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                >> 0x1bU)))),3);
        bufp->chgCData(oldp+576,(((2U & (((IData)((0x18000000ULL 
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
                                         << 1U)) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_1__DOT__out_0))),2);
        bufp->chgCData(oldp+577,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                >> 0x18U)))),3);
        bufp->chgCData(oldp+578,(((2U & (((IData)((0x3000000ULL 
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
                                         << 1U)) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_2__DOT__out_0))),2);
        bufp->chgCData(oldp+579,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                >> 0x15U)))),3);
        bufp->chgCData(oldp+580,(((2U & (((IData)((0x600000ULL 
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
                                         << 1U)) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_3__DOT__out_0))),2);
        bufp->chgCData(oldp+581,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                >> 0x12U)))),3);
        bufp->chgCData(oldp+582,(((2U & (((IData)((0xc0000ULL 
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
                                         << 1U)) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_4__DOT__out_0))),2);
        bufp->chgCData(oldp+583,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                >> 0xfU)))),3);
        bufp->chgCData(oldp+584,(((2U & (((IData)((0x18000ULL 
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
                                         << 1U)) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_5__DOT__out_0))),2);
        bufp->chgCData(oldp+585,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                >> 0xcU)))),3);
        bufp->chgCData(oldp+586,(((2U & (((IData)((0x3000ULL 
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
                                         << 1U)) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_6__DOT__out_0))),2);
        bufp->chgCData(oldp+587,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                >> 9U)))),3);
        bufp->chgCData(oldp+588,(((2U & (((IData)((0x600ULL 
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
                                         << 1U)) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_7__DOT__out_0))),2);
        bufp->chgCData(oldp+589,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                >> 6U)))),3);
        bufp->chgCData(oldp+590,(((2U & (((IData)((0xc0ULL 
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
                                         << 1U)) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_8__DOT__out_0))),2);
        bufp->chgCData(oldp+591,((7U & (IData)((vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131 
                                                >> 3U)))),3);
        bufp->chgCData(oldp+592,(((2U & (((IData)((0x18ULL 
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
                                         << 1U)) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_9__DOT__out_0))),2);
        bufp->chgCData(oldp+593,((7U & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131))),3);
        bufp->chgCData(oldp+594,(((2U & ((((IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_131) 
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
                                         << 1U)) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_10__DOT__out_0))),2);
        bufp->chgCData(oldp+595,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_0__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_1__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_2__DOT__out_0)))),3);
        bufp->chgCData(oldp+596,((((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_2__DOT__out_0) 
                                     & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_1__DOT__out_0)) 
                                    | ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_0__DOT__out_0) 
                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_2__DOT__out_0) 
                                          ^ (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_1__DOT__out_0)))) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_11__DOT__out_0))),2);
        bufp->chgCData(oldp+597,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_3__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_4__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_5__DOT__out_0)))),3);
        bufp->chgCData(oldp+598,((((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_5__DOT__out_0) 
                                     & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_4__DOT__out_0)) 
                                    | ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_3__DOT__out_0) 
                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_5__DOT__out_0) 
                                          ^ (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_4__DOT__out_0)))) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_12__DOT__out_0))),2);
        bufp->chgCData(oldp+599,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_6__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_7__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_8__DOT__out_0)))),3);
        bufp->chgCData(oldp+600,((((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_8__DOT__out_0) 
                                     & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_7__DOT__out_0)) 
                                    | ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_6__DOT__out_0) 
                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_8__DOT__out_0) 
                                          ^ (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_7__DOT__out_0)))) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_13__DOT__out_0))),2);
        bufp->chgCData(oldp+601,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_9__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_10__DOT__out_0) 
                                              << 1U) 
                                             | (1U 
                                                & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                   >> 0xfU))))),3);
        bufp->chgCData(oldp+602,((((0x3fffeU & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                 >> 0xeU) 
                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_10__DOT__out_0) 
                                                   << 1U))) 
                                   | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_9__DOT__out_0) 
                                       << 1U) & ((0x3fffeU 
                                                  & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                     >> 0xeU)) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_10__DOT__out_0) 
                                                  << 1U)))) 
                                  | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_14__DOT__out_0))),2);
        bufp->chgCData(oldp+603,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+604,(((2U & (((IData)((0x3000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin))) 
                                          << 1U) | 
                                         (0x7fffeU 
                                          & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                              >> 0xdU) 
                                             & ((0x1ffffeU 
                                                 & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                    >> 0xbU)) 
                                                ^ (0xffffeU 
                                                   & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                      >> 0xcU))))))) 
                                  | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_15__DOT__out_0))),2);
        bufp->chgCData(oldp+605,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                        >> 9U))),3);
        bufp->chgCData(oldp+606,(((2U & (((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin))) 
                                          << 1U) | 
                                         (0x3ffffeU 
                                          & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                              >> 0xaU) 
                                             & ((0xfffffeU 
                                                 & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                    >> 8U)) 
                                                ^ (0x7ffffeU 
                                                   & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                      >> 9U))))))) 
                                  | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_16__DOT__out_0))),2);
        bufp->chgCData(oldp+607,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                        >> 6U))),3);
        bufp->chgCData(oldp+608,(((2U & (((IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin))) 
                                          << 1U) | 
                                         (0x1fffffeU 
                                          & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                              >> 7U) 
                                             & ((0x7fffffeU 
                                                 & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                    >> 5U)) 
                                                ^ (0x3fffffeU 
                                                   & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                      >> 6U))))))) 
                                  | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_17__DOT__out_0))),2);
        bufp->chgCData(oldp+609,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                        >> 3U))),3);
        bufp->chgCData(oldp+610,(((2U & (((IData)((0x18U 
                                                   == 
                                                   (0x18U 
                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin))) 
                                          << 1U) | 
                                         (0xffffffeU 
                                          & ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                              >> 4U) 
                                             & ((0x3ffffffeU 
                                                 & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                    >> 2U)) 
                                                ^ (0x1ffffffeU 
                                                   & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                      >> 3U))))))) 
                                  | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_18__DOT__out_0))),2);
        bufp->chgCData(oldp+611,((7U & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin)),3);
        bufp->chgCData(oldp+612,(((2U & ((0xfffffffeU 
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
                                  | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_19__DOT__out_0))),2);
        bufp->chgCData(oldp+613,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_11__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_12__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_13__DOT__out_0)))),3);
        bufp->chgCData(oldp+614,((((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_13__DOT__out_0) 
                                     & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_12__DOT__out_0)) 
                                    | ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_11__DOT__out_0) 
                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_13__DOT__out_0) 
                                          ^ (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_12__DOT__out_0)))) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_20__DOT__out_0))),2);
        bufp->chgCData(oldp+615,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_14__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_15__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_16__DOT__out_0)))),3);
        bufp->chgCData(oldp+616,((((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_16__DOT__out_0) 
                                     & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_15__DOT__out_0)) 
                                    | ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_14__DOT__out_0) 
                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_16__DOT__out_0) 
                                          ^ (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_15__DOT__out_0)))) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_21__DOT__out_0))),2);
        bufp->chgCData(oldp+617,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_17__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_18__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_19__DOT__out_0)))),3);
        bufp->chgCData(oldp+618,((((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_19__DOT__out_0) 
                                     & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_18__DOT__out_0)) 
                                    | ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_17__DOT__out_0) 
                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_19__DOT__out_0) 
                                          ^ (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_18__DOT__out_0)))) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_22__DOT__out_0))),2);
        bufp->chgCData(oldp+619,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                        >> 0x19U))),3);
        bufp->chgCData(oldp+620,(((2U & (((IData)((0x6000000U 
                                                   == 
                                                   (0x6000000U 
                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin))) 
                                          << 1U) | 
                                         (0x3eU & (
                                                   (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                    >> 0x1aU) 
                                                   & ((0xfeU 
                                                       & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                          >> 0x18U)) 
                                                      ^ 
                                                      (0x7eU 
                                                       & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                          >> 0x19U))))))) 
                                  | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_23__DOT__out_0))),2);
        bufp->chgCData(oldp+621,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                        >> 0x16U))),3);
        bufp->chgCData(oldp+622,(((2U & (((IData)((0xc00000U 
                                                   == 
                                                   (0xc00000U 
                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin))) 
                                          << 1U) | 
                                         (0x1feU & 
                                          ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                            >> 0x17U) 
                                           & ((0x7feU 
                                               & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                  >> 0x15U)) 
                                              ^ (0x3feU 
                                                 & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                    >> 0x16U))))))) 
                                  | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_24__DOT__out_0))),2);
        bufp->chgCData(oldp+623,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                        >> 0x13U))),3);
        bufp->chgCData(oldp+624,(((2U & (((IData)((0x180000U 
                                                   == 
                                                   (0x180000U 
                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin))) 
                                          << 1U) | 
                                         (0xffeU & 
                                          ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                            >> 0x14U) 
                                           & ((0x3ffeU 
                                               & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                  >> 0x12U)) 
                                              ^ (0x1ffeU 
                                                 & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                    >> 0x13U))))))) 
                                  | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_25__DOT__out_0))),2);
        bufp->chgCData(oldp+625,((7U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                        >> 0x10U))),3);
        bufp->chgCData(oldp+626,(((2U & (((IData)((0x30000U 
                                                   == 
                                                   (0x30000U 
                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin))) 
                                          << 1U) | 
                                         (0x7ffeU & 
                                          ((vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                            >> 0x11U) 
                                           & ((0x1fffeU 
                                               & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                  >> 0xfU)) 
                                              ^ (0xfffeU 
                                                 & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                    >> 0x10U))))))) 
                                  | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_26__DOT__out_0))),2);
        bufp->chgCData(oldp+627,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_20__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_21__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_22__DOT__out_0)))),3);
        bufp->chgCData(oldp+628,((((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_22__DOT__out_0) 
                                     & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_21__DOT__out_0)) 
                                    | ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_20__DOT__out_0) 
                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_22__DOT__out_0) 
                                          ^ (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_21__DOT__out_0)))) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_27__DOT__out_0))),2);
        bufp->chgCData(oldp+629,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_23__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_24__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_25__DOT__out_0)))),3);
        bufp->chgCData(oldp+630,((((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_25__DOT__out_0) 
                                     & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_24__DOT__out_0)) 
                                    | ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_23__DOT__out_0) 
                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_25__DOT__out_0) 
                                          ^ (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_24__DOT__out_0)))) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_28__DOT__out_0))),2);
        bufp->chgCData(oldp+631,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_26__DOT__out_0) 
                                   << 2U) | (3U & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                   >> 0x1cU)))),3);
        bufp->chgCData(oldp+632,(((2U & (((IData)((0x30000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin))) 
                                          << 1U) | 
                                         (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_26__DOT__out_0) 
                                           << 1U) & 
                                          ((0x1eU & 
                                            (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                             >> 0x1bU)) 
                                           ^ (0xeU 
                                              & (vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_131_io_cin 
                                                 >> 0x1cU)))))) 
                                  | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_29__DOT__out_0))),2);
        bufp->chgCData(oldp+633,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_27__DOT__out_0) 
                                   << 2U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_28__DOT__out_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_29__DOT__out_0)))),3);
        bufp->chgCData(oldp+634,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.io_cout) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.io_s))),2);
        bufp->chgBit(oldp+635,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_0__DOT__out_0));
        bufp->chgBit(oldp+636,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_1__DOT__out_0));
        bufp->chgBit(oldp+637,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_2__DOT__out_0));
        bufp->chgBit(oldp+638,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_3__DOT__out_0));
        bufp->chgBit(oldp+639,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_4__DOT__out_0));
        bufp->chgBit(oldp+640,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_5__DOT__out_0));
        bufp->chgBit(oldp+641,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_6__DOT__out_0));
        bufp->chgBit(oldp+642,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_7__DOT__out_0));
        bufp->chgBit(oldp+643,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_8__DOT__out_0));
        bufp->chgBit(oldp+644,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_9__DOT__out_0));
        bufp->chgBit(oldp+645,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_10__DOT__out_0));
        bufp->chgCData(oldp+646,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_6__DOT__out_0) 
                                   << 4U) | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_7__DOT__out_0) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_8__DOT__out_0) 
                                                 << 2U) 
                                                | (((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_9__DOT__out_0) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_10__DOT__out_0)))))),5);
        bufp->chgBit(oldp+647,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_11__DOT__out_0));
        bufp->chgBit(oldp+648,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_12__DOT__out_0));
        bufp->chgBit(oldp+649,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_13__DOT__out_0));
        bufp->chgBit(oldp+650,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_14__DOT__out_0));
        bufp->chgBit(oldp+651,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_15__DOT__out_0));
        bufp->chgBit(oldp+652,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_16__DOT__out_0));
        bufp->chgBit(oldp+653,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_17__DOT__out_0));
        bufp->chgBit(oldp+654,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_18__DOT__out_0));
        bufp->chgBit(oldp+655,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_19__DOT__out_0));
        bufp->chgBit(oldp+656,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_20__DOT__out_0));
        bufp->chgBit(oldp+657,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_21__DOT__out_0));
        bufp->chgBit(oldp+658,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_22__DOT__out_0));
        bufp->chgBit(oldp+659,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_23__DOT__out_0));
        bufp->chgBit(oldp+660,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_24__DOT__out_0));
        bufp->chgBit(oldp+661,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_25__DOT__out_0));
        bufp->chgBit(oldp+662,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_26__DOT__out_0));
        bufp->chgBit(oldp+663,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_27__DOT__out_0));
        bufp->chgBit(oldp+664,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_28__DOT__out_0));
        bufp->chgBit(oldp+665,(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_29__DOT__out_0));
        bufp->chgCData(oldp+666,((((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_27__DOT__out_0) 
                                   << 1U) | (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_131.__PVT__csa_28__DOT__out_0))),2);
    }
    bufp->chgBit(oldp+667,(vlSelf->clock));
    bufp->chgBit(oldp+668,(vlSelf->reset));
    bufp->chgBit(oldp+669,(vlSelf->io_mul_valid));
    bufp->chgBit(oldp+670,(vlSelf->io_flush));
    bufp->chgBit(oldp+671,(vlSelf->io_mulw));
    bufp->chgCData(oldp+672,(vlSelf->io_mul_signed),2);
    bufp->chgQData(oldp+673,(vlSelf->io_multiplicand),64);
    bufp->chgQData(oldp+675,(vlSelf->io_multiplier),64);
    bufp->chgBit(oldp+677,(vlSelf->io_mul_ready));
    bufp->chgBit(oldp+678,(vlSelf->io_out_valid));
    bufp->chgQData(oldp+679,(vlSelf->io_result_hi),64);
    bufp->chgQData(oldp+681,(vlSelf->io_result_lo),64);
}

void Vunit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root__trace_cleanup\n"); );
    // Init
    Vunit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vunit___024root*>(voidSelf);
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
