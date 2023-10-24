// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vunit.h for the primary calling header

#include "Vunit_Walloc33bits.h"
#include "Vunit__Syms.h"

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14__146(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14__146\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin))));
    vlSelf->__PVT__csa_14_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_14_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_14_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_14_io_in)))));
    vlSelf->__PVT___csa_20_io_in_T = ((0x100U & ((IData)(vlSelf->__PVT__csa_11_io_out) 
                                                 << 8U)) 
                                      | ((0x80U & ((IData)(vlSelf->__PVT__csa_12_io_out) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->__PVT__csa_13_io_out) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->__PVT__csa_14_io_out) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->__PVT__csa_15_io_out) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->__PVT__csa_16_io_out) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->__PVT__csa_17_io_out) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->__PVT__csa_18_io_out) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(vlSelf->__PVT__csa_19_io_out))))))))));
    vlSelf->__PVT__csa_20_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_21_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_22_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_20_io_in_T))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT___csa_27_io_in_T = ((0x40U & ((IData)(vlSelf->__PVT__csa_20_io_out) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(vlSelf->__PVT__csa_21_io_out) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(vlSelf->__PVT__csa_22_io_out) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(vlSelf->__PVT__csa_23_io_out) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->__PVT__csa_24_io_out) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->__PVT__csa_25_io_out) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->__PVT__csa_26_io_out))))))));
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
                                          >> 0x1cU)));
    vlSelf->__PVT__csa_27_io_out = ((2U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x7fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 5U) 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 3U)) 
                                                    ^ 
                                                    (0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 4U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_28_io_out = ((2U & (((6U == 
                                             (6U & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x3ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 2U) 
                                                 & ((0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_27_io_in_T)) 
                                                    ^ 
                                                    (0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 1U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_29_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_29_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_29_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_29_io_in)))));
    vlSelf->__PVT__csa_30_io_in = ((4U & ((IData)(vlSelf->__PVT__csa_27_io_out) 
                                          << 2U)) | 
                                   ((2U & ((IData)(vlSelf->__PVT__csa_28_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->__PVT__csa_29_io_out))));
    vlSelf->__PVT__csa_30_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_30_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_30_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_30_io_in)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15__96(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15__96\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_15))))));
    vlSelf->__PVT___csa_11_io_in_T = ((0x400U & ((IData)(vlSelf->__PVT__csa_0_io_out) 
                                                 << 0xaU)) 
                                      | ((0x200U & 
                                          ((IData)(vlSelf->__PVT__csa_1_io_out) 
                                           << 9U)) 
                                         | ((0x100U 
                                             & ((IData)(vlSelf->__PVT__csa_2_io_out) 
                                                << 8U)) 
                                            | ((0x80U 
                                                & ((IData)(vlSelf->__PVT__csa_3_io_out) 
                                                   << 7U)) 
                                               | ((0x40U 
                                                   & ((IData)(vlSelf->__PVT__csa_4_io_out) 
                                                      << 6U)) 
                                                  | ((0x20U 
                                                      & ((IData)(vlSelf->__PVT__csa_5_io_out) 
                                                         << 5U)) 
                                                     | ((0x10U 
                                                         & ((IData)(vlSelf->__PVT__csa_6_io_out) 
                                                            << 4U)) 
                                                        | ((8U 
                                                            & ((IData)(vlSelf->__PVT__csa_7_io_out) 
                                                               << 3U)) 
                                                           | ((4U 
                                                               & ((IData)(vlSelf->__PVT__csa_8_io_out) 
                                                                  << 2U)) 
                                                              | ((2U 
                                                                  & ((IData)(vlSelf->__PVT__csa_9_io_out) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->__PVT__csa_10_io_out))))))))))));
    vlSelf->__PVT__csa_11_io_out = ((2U & (((IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT___csa_11_io_in_T)))) 
                                            << 1U) 
                                           | (0x7ffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 9U) 
                                                 & ((0x1fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 7U)) 
                                                    ^ 
                                                    (0xfffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 8U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x700U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_12_io_out = ((2U & (((0x60U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x3fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 6U) 
                                                 & ((0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 4U)) 
                                                    ^ 
                                                    (0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 5U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe0U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_13_io_out = ((2U & (((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x1ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 3U) 
                                                 & ((0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 1U)) 
                                                    ^ 
                                                    (0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 2U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15__147(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15__147\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin))));
    vlSelf->__PVT__csa_14_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_14_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_14_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_14_io_in)))));
    vlSelf->__PVT___csa_20_io_in_T = ((0x100U & ((IData)(vlSelf->__PVT__csa_11_io_out) 
                                                 << 8U)) 
                                      | ((0x80U & ((IData)(vlSelf->__PVT__csa_12_io_out) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->__PVT__csa_13_io_out) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->__PVT__csa_14_io_out) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->__PVT__csa_15_io_out) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->__PVT__csa_16_io_out) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->__PVT__csa_17_io_out) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->__PVT__csa_18_io_out) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(vlSelf->__PVT__csa_19_io_out))))))))));
    vlSelf->__PVT__csa_20_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_21_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_22_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_20_io_in_T))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT___csa_27_io_in_T = ((0x40U & ((IData)(vlSelf->__PVT__csa_20_io_out) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(vlSelf->__PVT__csa_21_io_out) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(vlSelf->__PVT__csa_22_io_out) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(vlSelf->__PVT__csa_23_io_out) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->__PVT__csa_24_io_out) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->__PVT__csa_25_io_out) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->__PVT__csa_26_io_out))))))));
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
                                          >> 0x1cU)));
    vlSelf->__PVT__csa_27_io_out = ((2U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x7fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 5U) 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 3U)) 
                                                    ^ 
                                                    (0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 4U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_28_io_out = ((2U & (((6U == 
                                             (6U & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x3ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 2U) 
                                                 & ((0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_27_io_in_T)) 
                                                    ^ 
                                                    (0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 1U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_29_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_29_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_29_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_29_io_in)))));
    vlSelf->__PVT__csa_30_io_in = ((4U & ((IData)(vlSelf->__PVT__csa_27_io_out) 
                                          << 2U)) | 
                                   ((2U & ((IData)(vlSelf->__PVT__csa_28_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->__PVT__csa_29_io_out))));
    vlSelf->__PVT__csa_30_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_30_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_30_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_30_io_in)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16__97(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16__97\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_16))))));
    vlSelf->__PVT___csa_11_io_in_T = ((0x400U & ((IData)(vlSelf->__PVT__csa_0_io_out) 
                                                 << 0xaU)) 
                                      | ((0x200U & 
                                          ((IData)(vlSelf->__PVT__csa_1_io_out) 
                                           << 9U)) 
                                         | ((0x100U 
                                             & ((IData)(vlSelf->__PVT__csa_2_io_out) 
                                                << 8U)) 
                                            | ((0x80U 
                                                & ((IData)(vlSelf->__PVT__csa_3_io_out) 
                                                   << 7U)) 
                                               | ((0x40U 
                                                   & ((IData)(vlSelf->__PVT__csa_4_io_out) 
                                                      << 6U)) 
                                                  | ((0x20U 
                                                      & ((IData)(vlSelf->__PVT__csa_5_io_out) 
                                                         << 5U)) 
                                                     | ((0x10U 
                                                         & ((IData)(vlSelf->__PVT__csa_6_io_out) 
                                                            << 4U)) 
                                                        | ((8U 
                                                            & ((IData)(vlSelf->__PVT__csa_7_io_out) 
                                                               << 3U)) 
                                                           | ((4U 
                                                               & ((IData)(vlSelf->__PVT__csa_8_io_out) 
                                                                  << 2U)) 
                                                              | ((2U 
                                                                  & ((IData)(vlSelf->__PVT__csa_9_io_out) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->__PVT__csa_10_io_out))))))))))));
    vlSelf->__PVT__csa_11_io_out = ((2U & (((IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT___csa_11_io_in_T)))) 
                                            << 1U) 
                                           | (0x7ffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 9U) 
                                                 & ((0x1fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 7U)) 
                                                    ^ 
                                                    (0xfffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 8U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x700U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_12_io_out = ((2U & (((0x60U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x3fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 6U) 
                                                 & ((0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 4U)) 
                                                    ^ 
                                                    (0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 5U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe0U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_13_io_out = ((2U & (((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x1ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 3U) 
                                                 & ((0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 1U)) 
                                                    ^ 
                                                    (0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 2U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16__148(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16__148\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin))));
    vlSelf->__PVT__csa_14_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_14_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_14_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_14_io_in)))));
    vlSelf->__PVT___csa_20_io_in_T = ((0x100U & ((IData)(vlSelf->__PVT__csa_11_io_out) 
                                                 << 8U)) 
                                      | ((0x80U & ((IData)(vlSelf->__PVT__csa_12_io_out) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->__PVT__csa_13_io_out) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->__PVT__csa_14_io_out) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->__PVT__csa_15_io_out) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->__PVT__csa_16_io_out) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->__PVT__csa_17_io_out) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->__PVT__csa_18_io_out) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(vlSelf->__PVT__csa_19_io_out))))))))));
    vlSelf->__PVT__csa_20_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_21_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_22_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_20_io_in_T))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT___csa_27_io_in_T = ((0x40U & ((IData)(vlSelf->__PVT__csa_20_io_out) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(vlSelf->__PVT__csa_21_io_out) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(vlSelf->__PVT__csa_22_io_out) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(vlSelf->__PVT__csa_23_io_out) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->__PVT__csa_24_io_out) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->__PVT__csa_25_io_out) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->__PVT__csa_26_io_out))))))));
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
                                          >> 0x1cU)));
    vlSelf->__PVT__csa_27_io_out = ((2U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x7fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 5U) 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 3U)) 
                                                    ^ 
                                                    (0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 4U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_28_io_out = ((2U & (((6U == 
                                             (6U & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x3ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 2U) 
                                                 & ((0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_27_io_in_T)) 
                                                    ^ 
                                                    (0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 1U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_29_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_29_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_29_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_29_io_in)))));
    vlSelf->__PVT__csa_30_io_in = ((4U & ((IData)(vlSelf->__PVT__csa_27_io_out) 
                                          << 2U)) | 
                                   ((2U & ((IData)(vlSelf->__PVT__csa_28_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->__PVT__csa_29_io_out))));
    vlSelf->__PVT__csa_30_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_30_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_30_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_30_io_in)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17__98(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17__98\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_17))))));
    vlSelf->__PVT___csa_11_io_in_T = ((0x400U & ((IData)(vlSelf->__PVT__csa_0_io_out) 
                                                 << 0xaU)) 
                                      | ((0x200U & 
                                          ((IData)(vlSelf->__PVT__csa_1_io_out) 
                                           << 9U)) 
                                         | ((0x100U 
                                             & ((IData)(vlSelf->__PVT__csa_2_io_out) 
                                                << 8U)) 
                                            | ((0x80U 
                                                & ((IData)(vlSelf->__PVT__csa_3_io_out) 
                                                   << 7U)) 
                                               | ((0x40U 
                                                   & ((IData)(vlSelf->__PVT__csa_4_io_out) 
                                                      << 6U)) 
                                                  | ((0x20U 
                                                      & ((IData)(vlSelf->__PVT__csa_5_io_out) 
                                                         << 5U)) 
                                                     | ((0x10U 
                                                         & ((IData)(vlSelf->__PVT__csa_6_io_out) 
                                                            << 4U)) 
                                                        | ((8U 
                                                            & ((IData)(vlSelf->__PVT__csa_7_io_out) 
                                                               << 3U)) 
                                                           | ((4U 
                                                               & ((IData)(vlSelf->__PVT__csa_8_io_out) 
                                                                  << 2U)) 
                                                              | ((2U 
                                                                  & ((IData)(vlSelf->__PVT__csa_9_io_out) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->__PVT__csa_10_io_out))))))))))));
    vlSelf->__PVT__csa_11_io_out = ((2U & (((IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT___csa_11_io_in_T)))) 
                                            << 1U) 
                                           | (0x7ffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 9U) 
                                                 & ((0x1fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 7U)) 
                                                    ^ 
                                                    (0xfffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 8U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x700U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_12_io_out = ((2U & (((0x60U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x3fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 6U) 
                                                 & ((0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 4U)) 
                                                    ^ 
                                                    (0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 5U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe0U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_13_io_out = ((2U & (((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x1ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 3U) 
                                                 & ((0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 1U)) 
                                                    ^ 
                                                    (0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 2U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17__149(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17__149\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin))));
    vlSelf->__PVT__csa_14_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_14_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_14_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_14_io_in)))));
    vlSelf->__PVT___csa_20_io_in_T = ((0x100U & ((IData)(vlSelf->__PVT__csa_11_io_out) 
                                                 << 8U)) 
                                      | ((0x80U & ((IData)(vlSelf->__PVT__csa_12_io_out) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->__PVT__csa_13_io_out) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->__PVT__csa_14_io_out) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->__PVT__csa_15_io_out) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->__PVT__csa_16_io_out) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->__PVT__csa_17_io_out) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->__PVT__csa_18_io_out) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(vlSelf->__PVT__csa_19_io_out))))))))));
    vlSelf->__PVT__csa_20_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_21_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_22_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_20_io_in_T))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT___csa_27_io_in_T = ((0x40U & ((IData)(vlSelf->__PVT__csa_20_io_out) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(vlSelf->__PVT__csa_21_io_out) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(vlSelf->__PVT__csa_22_io_out) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(vlSelf->__PVT__csa_23_io_out) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->__PVT__csa_24_io_out) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->__PVT__csa_25_io_out) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->__PVT__csa_26_io_out))))))));
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
                                          >> 0x1cU)));
    vlSelf->__PVT__csa_27_io_out = ((2U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x7fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 5U) 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 3U)) 
                                                    ^ 
                                                    (0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 4U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_28_io_out = ((2U & (((6U == 
                                             (6U & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x3ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 2U) 
                                                 & ((0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_27_io_in_T)) 
                                                    ^ 
                                                    (0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 1U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_29_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_29_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_29_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_29_io_in)))));
    vlSelf->__PVT__csa_30_io_in = ((4U & ((IData)(vlSelf->__PVT__csa_27_io_out) 
                                          << 2U)) | 
                                   ((2U & ((IData)(vlSelf->__PVT__csa_28_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->__PVT__csa_29_io_out))));
    vlSelf->__PVT__csa_30_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_30_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_30_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_30_io_in)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18__99(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18__99\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_18))))));
    vlSelf->__PVT___csa_11_io_in_T = ((0x400U & ((IData)(vlSelf->__PVT__csa_0_io_out) 
                                                 << 0xaU)) 
                                      | ((0x200U & 
                                          ((IData)(vlSelf->__PVT__csa_1_io_out) 
                                           << 9U)) 
                                         | ((0x100U 
                                             & ((IData)(vlSelf->__PVT__csa_2_io_out) 
                                                << 8U)) 
                                            | ((0x80U 
                                                & ((IData)(vlSelf->__PVT__csa_3_io_out) 
                                                   << 7U)) 
                                               | ((0x40U 
                                                   & ((IData)(vlSelf->__PVT__csa_4_io_out) 
                                                      << 6U)) 
                                                  | ((0x20U 
                                                      & ((IData)(vlSelf->__PVT__csa_5_io_out) 
                                                         << 5U)) 
                                                     | ((0x10U 
                                                         & ((IData)(vlSelf->__PVT__csa_6_io_out) 
                                                            << 4U)) 
                                                        | ((8U 
                                                            & ((IData)(vlSelf->__PVT__csa_7_io_out) 
                                                               << 3U)) 
                                                           | ((4U 
                                                               & ((IData)(vlSelf->__PVT__csa_8_io_out) 
                                                                  << 2U)) 
                                                              | ((2U 
                                                                  & ((IData)(vlSelf->__PVT__csa_9_io_out) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->__PVT__csa_10_io_out))))))))))));
    vlSelf->__PVT__csa_11_io_out = ((2U & (((IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT___csa_11_io_in_T)))) 
                                            << 1U) 
                                           | (0x7ffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 9U) 
                                                 & ((0x1fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 7U)) 
                                                    ^ 
                                                    (0xfffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 8U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x700U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_12_io_out = ((2U & (((0x60U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x3fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 6U) 
                                                 & ((0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 4U)) 
                                                    ^ 
                                                    (0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 5U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe0U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_13_io_out = ((2U & (((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x1ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 3U) 
                                                 & ((0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 1U)) 
                                                    ^ 
                                                    (0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 2U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18__150(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18__150\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin))));
    vlSelf->__PVT__csa_14_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_14_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_14_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_14_io_in)))));
    vlSelf->__PVT___csa_20_io_in_T = ((0x100U & ((IData)(vlSelf->__PVT__csa_11_io_out) 
                                                 << 8U)) 
                                      | ((0x80U & ((IData)(vlSelf->__PVT__csa_12_io_out) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->__PVT__csa_13_io_out) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->__PVT__csa_14_io_out) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->__PVT__csa_15_io_out) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->__PVT__csa_16_io_out) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->__PVT__csa_17_io_out) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->__PVT__csa_18_io_out) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(vlSelf->__PVT__csa_19_io_out))))))))));
    vlSelf->__PVT__csa_20_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_21_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_22_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_20_io_in_T))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT___csa_27_io_in_T = ((0x40U & ((IData)(vlSelf->__PVT__csa_20_io_out) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(vlSelf->__PVT__csa_21_io_out) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(vlSelf->__PVT__csa_22_io_out) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(vlSelf->__PVT__csa_23_io_out) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->__PVT__csa_24_io_out) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->__PVT__csa_25_io_out) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->__PVT__csa_26_io_out))))))));
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
                                          >> 0x1cU)));
    vlSelf->__PVT__csa_27_io_out = ((2U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x7fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 5U) 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 3U)) 
                                                    ^ 
                                                    (0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 4U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_28_io_out = ((2U & (((6U == 
                                             (6U & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x3ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 2U) 
                                                 & ((0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_27_io_in_T)) 
                                                    ^ 
                                                    (0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 1U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_29_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_29_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_29_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_29_io_in)))));
    vlSelf->__PVT__csa_30_io_in = ((4U & ((IData)(vlSelf->__PVT__csa_27_io_out) 
                                          << 2U)) | 
                                   ((2U & ((IData)(vlSelf->__PVT__csa_28_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->__PVT__csa_29_io_out))));
    vlSelf->__PVT__csa_30_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_30_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_30_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_30_io_in)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19__100(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19__100\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_19))))));
    vlSelf->__PVT___csa_11_io_in_T = ((0x400U & ((IData)(vlSelf->__PVT__csa_0_io_out) 
                                                 << 0xaU)) 
                                      | ((0x200U & 
                                          ((IData)(vlSelf->__PVT__csa_1_io_out) 
                                           << 9U)) 
                                         | ((0x100U 
                                             & ((IData)(vlSelf->__PVT__csa_2_io_out) 
                                                << 8U)) 
                                            | ((0x80U 
                                                & ((IData)(vlSelf->__PVT__csa_3_io_out) 
                                                   << 7U)) 
                                               | ((0x40U 
                                                   & ((IData)(vlSelf->__PVT__csa_4_io_out) 
                                                      << 6U)) 
                                                  | ((0x20U 
                                                      & ((IData)(vlSelf->__PVT__csa_5_io_out) 
                                                         << 5U)) 
                                                     | ((0x10U 
                                                         & ((IData)(vlSelf->__PVT__csa_6_io_out) 
                                                            << 4U)) 
                                                        | ((8U 
                                                            & ((IData)(vlSelf->__PVT__csa_7_io_out) 
                                                               << 3U)) 
                                                           | ((4U 
                                                               & ((IData)(vlSelf->__PVT__csa_8_io_out) 
                                                                  << 2U)) 
                                                              | ((2U 
                                                                  & ((IData)(vlSelf->__PVT__csa_9_io_out) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->__PVT__csa_10_io_out))))))))))));
    vlSelf->__PVT__csa_11_io_out = ((2U & (((IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT___csa_11_io_in_T)))) 
                                            << 1U) 
                                           | (0x7ffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 9U) 
                                                 & ((0x1fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 7U)) 
                                                    ^ 
                                                    (0xfffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 8U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x700U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_12_io_out = ((2U & (((0x60U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x3fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 6U) 
                                                 & ((0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 4U)) 
                                                    ^ 
                                                    (0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 5U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe0U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_13_io_out = ((2U & (((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x1ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 3U) 
                                                 & ((0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 1U)) 
                                                    ^ 
                                                    (0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 2U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19__151(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19__151\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin))));
    vlSelf->__PVT__csa_14_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_14_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_14_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_14_io_in)))));
    vlSelf->__PVT___csa_20_io_in_T = ((0x100U & ((IData)(vlSelf->__PVT__csa_11_io_out) 
                                                 << 8U)) 
                                      | ((0x80U & ((IData)(vlSelf->__PVT__csa_12_io_out) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->__PVT__csa_13_io_out) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->__PVT__csa_14_io_out) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->__PVT__csa_15_io_out) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->__PVT__csa_16_io_out) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->__PVT__csa_17_io_out) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->__PVT__csa_18_io_out) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(vlSelf->__PVT__csa_19_io_out))))))))));
    vlSelf->__PVT__csa_20_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_21_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_22_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_20_io_in_T))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT___csa_27_io_in_T = ((0x40U & ((IData)(vlSelf->__PVT__csa_20_io_out) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(vlSelf->__PVT__csa_21_io_out) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(vlSelf->__PVT__csa_22_io_out) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(vlSelf->__PVT__csa_23_io_out) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->__PVT__csa_24_io_out) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->__PVT__csa_25_io_out) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->__PVT__csa_26_io_out))))))));
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
                                          >> 0x1cU)));
    vlSelf->__PVT__csa_27_io_out = ((2U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x7fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 5U) 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 3U)) 
                                                    ^ 
                                                    (0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 4U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_28_io_out = ((2U & (((6U == 
                                             (6U & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x3ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 2U) 
                                                 & ((0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_27_io_in_T)) 
                                                    ^ 
                                                    (0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 1U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_29_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_29_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_29_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_29_io_in)))));
    vlSelf->__PVT__csa_30_io_in = ((4U & ((IData)(vlSelf->__PVT__csa_27_io_out) 
                                          << 2U)) | 
                                   ((2U & ((IData)(vlSelf->__PVT__csa_28_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->__PVT__csa_29_io_out))));
    vlSelf->__PVT__csa_30_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_30_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_30_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_30_io_in)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20__101(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20__101\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_20))))));
    vlSelf->__PVT___csa_11_io_in_T = ((0x400U & ((IData)(vlSelf->__PVT__csa_0_io_out) 
                                                 << 0xaU)) 
                                      | ((0x200U & 
                                          ((IData)(vlSelf->__PVT__csa_1_io_out) 
                                           << 9U)) 
                                         | ((0x100U 
                                             & ((IData)(vlSelf->__PVT__csa_2_io_out) 
                                                << 8U)) 
                                            | ((0x80U 
                                                & ((IData)(vlSelf->__PVT__csa_3_io_out) 
                                                   << 7U)) 
                                               | ((0x40U 
                                                   & ((IData)(vlSelf->__PVT__csa_4_io_out) 
                                                      << 6U)) 
                                                  | ((0x20U 
                                                      & ((IData)(vlSelf->__PVT__csa_5_io_out) 
                                                         << 5U)) 
                                                     | ((0x10U 
                                                         & ((IData)(vlSelf->__PVT__csa_6_io_out) 
                                                            << 4U)) 
                                                        | ((8U 
                                                            & ((IData)(vlSelf->__PVT__csa_7_io_out) 
                                                               << 3U)) 
                                                           | ((4U 
                                                               & ((IData)(vlSelf->__PVT__csa_8_io_out) 
                                                                  << 2U)) 
                                                              | ((2U 
                                                                  & ((IData)(vlSelf->__PVT__csa_9_io_out) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->__PVT__csa_10_io_out))))))))))));
    vlSelf->__PVT__csa_11_io_out = ((2U & (((IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT___csa_11_io_in_T)))) 
                                            << 1U) 
                                           | (0x7ffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 9U) 
                                                 & ((0x1fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 7U)) 
                                                    ^ 
                                                    (0xfffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 8U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x700U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_12_io_out = ((2U & (((0x60U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x3fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 6U) 
                                                 & ((0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 4U)) 
                                                    ^ 
                                                    (0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 5U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe0U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_13_io_out = ((2U & (((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x1ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 3U) 
                                                 & ((0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 1U)) 
                                                    ^ 
                                                    (0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 2U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20__152(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20__152\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin))));
    vlSelf->__PVT__csa_14_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_14_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_14_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_14_io_in)))));
    vlSelf->__PVT___csa_20_io_in_T = ((0x100U & ((IData)(vlSelf->__PVT__csa_11_io_out) 
                                                 << 8U)) 
                                      | ((0x80U & ((IData)(vlSelf->__PVT__csa_12_io_out) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->__PVT__csa_13_io_out) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->__PVT__csa_14_io_out) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->__PVT__csa_15_io_out) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->__PVT__csa_16_io_out) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->__PVT__csa_17_io_out) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->__PVT__csa_18_io_out) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(vlSelf->__PVT__csa_19_io_out))))))))));
    vlSelf->__PVT__csa_20_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_21_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_22_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_20_io_in_T))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT___csa_27_io_in_T = ((0x40U & ((IData)(vlSelf->__PVT__csa_20_io_out) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(vlSelf->__PVT__csa_21_io_out) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(vlSelf->__PVT__csa_22_io_out) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(vlSelf->__PVT__csa_23_io_out) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->__PVT__csa_24_io_out) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->__PVT__csa_25_io_out) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->__PVT__csa_26_io_out))))))));
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
                                          >> 0x1cU)));
    vlSelf->__PVT__csa_27_io_out = ((2U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x7fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 5U) 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 3U)) 
                                                    ^ 
                                                    (0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 4U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_28_io_out = ((2U & (((6U == 
                                             (6U & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x3ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 2U) 
                                                 & ((0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_27_io_in_T)) 
                                                    ^ 
                                                    (0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 1U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_29_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_29_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_29_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_29_io_in)))));
    vlSelf->__PVT__csa_30_io_in = ((4U & ((IData)(vlSelf->__PVT__csa_27_io_out) 
                                          << 2U)) | 
                                   ((2U & ((IData)(vlSelf->__PVT__csa_28_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->__PVT__csa_29_io_out))));
    vlSelf->__PVT__csa_30_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_30_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_30_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_30_io_in)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21__102(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21__102\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_21))))));
    vlSelf->__PVT___csa_11_io_in_T = ((0x400U & ((IData)(vlSelf->__PVT__csa_0_io_out) 
                                                 << 0xaU)) 
                                      | ((0x200U & 
                                          ((IData)(vlSelf->__PVT__csa_1_io_out) 
                                           << 9U)) 
                                         | ((0x100U 
                                             & ((IData)(vlSelf->__PVT__csa_2_io_out) 
                                                << 8U)) 
                                            | ((0x80U 
                                                & ((IData)(vlSelf->__PVT__csa_3_io_out) 
                                                   << 7U)) 
                                               | ((0x40U 
                                                   & ((IData)(vlSelf->__PVT__csa_4_io_out) 
                                                      << 6U)) 
                                                  | ((0x20U 
                                                      & ((IData)(vlSelf->__PVT__csa_5_io_out) 
                                                         << 5U)) 
                                                     | ((0x10U 
                                                         & ((IData)(vlSelf->__PVT__csa_6_io_out) 
                                                            << 4U)) 
                                                        | ((8U 
                                                            & ((IData)(vlSelf->__PVT__csa_7_io_out) 
                                                               << 3U)) 
                                                           | ((4U 
                                                               & ((IData)(vlSelf->__PVT__csa_8_io_out) 
                                                                  << 2U)) 
                                                              | ((2U 
                                                                  & ((IData)(vlSelf->__PVT__csa_9_io_out) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->__PVT__csa_10_io_out))))))))))));
    vlSelf->__PVT__csa_11_io_out = ((2U & (((IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT___csa_11_io_in_T)))) 
                                            << 1U) 
                                           | (0x7ffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 9U) 
                                                 & ((0x1fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 7U)) 
                                                    ^ 
                                                    (0xfffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 8U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x700U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_12_io_out = ((2U & (((0x60U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x3fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 6U) 
                                                 & ((0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 4U)) 
                                                    ^ 
                                                    (0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 5U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe0U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_13_io_out = ((2U & (((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x1ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 3U) 
                                                 & ((0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 1U)) 
                                                    ^ 
                                                    (0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 2U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21__153(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21__153\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin))));
    vlSelf->__PVT__csa_14_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_14_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_14_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_14_io_in)))));
    vlSelf->__PVT___csa_20_io_in_T = ((0x100U & ((IData)(vlSelf->__PVT__csa_11_io_out) 
                                                 << 8U)) 
                                      | ((0x80U & ((IData)(vlSelf->__PVT__csa_12_io_out) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->__PVT__csa_13_io_out) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->__PVT__csa_14_io_out) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->__PVT__csa_15_io_out) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->__PVT__csa_16_io_out) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->__PVT__csa_17_io_out) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->__PVT__csa_18_io_out) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(vlSelf->__PVT__csa_19_io_out))))))))));
    vlSelf->__PVT__csa_20_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_21_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_22_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_20_io_in_T))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT___csa_27_io_in_T = ((0x40U & ((IData)(vlSelf->__PVT__csa_20_io_out) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(vlSelf->__PVT__csa_21_io_out) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(vlSelf->__PVT__csa_22_io_out) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(vlSelf->__PVT__csa_23_io_out) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->__PVT__csa_24_io_out) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->__PVT__csa_25_io_out) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->__PVT__csa_26_io_out))))))));
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
                                          >> 0x1cU)));
    vlSelf->__PVT__csa_27_io_out = ((2U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x7fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 5U) 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 3U)) 
                                                    ^ 
                                                    (0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 4U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_28_io_out = ((2U & (((6U == 
                                             (6U & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x3ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 2U) 
                                                 & ((0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_27_io_in_T)) 
                                                    ^ 
                                                    (0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 1U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_29_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_29_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_29_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_29_io_in)))));
    vlSelf->__PVT__csa_30_io_in = ((4U & ((IData)(vlSelf->__PVT__csa_27_io_out) 
                                          << 2U)) | 
                                   ((2U & ((IData)(vlSelf->__PVT__csa_28_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->__PVT__csa_29_io_out))));
    vlSelf->__PVT__csa_30_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_30_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_30_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_30_io_in)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22__103(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22__103\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_22))))));
    vlSelf->__PVT___csa_11_io_in_T = ((0x400U & ((IData)(vlSelf->__PVT__csa_0_io_out) 
                                                 << 0xaU)) 
                                      | ((0x200U & 
                                          ((IData)(vlSelf->__PVT__csa_1_io_out) 
                                           << 9U)) 
                                         | ((0x100U 
                                             & ((IData)(vlSelf->__PVT__csa_2_io_out) 
                                                << 8U)) 
                                            | ((0x80U 
                                                & ((IData)(vlSelf->__PVT__csa_3_io_out) 
                                                   << 7U)) 
                                               | ((0x40U 
                                                   & ((IData)(vlSelf->__PVT__csa_4_io_out) 
                                                      << 6U)) 
                                                  | ((0x20U 
                                                      & ((IData)(vlSelf->__PVT__csa_5_io_out) 
                                                         << 5U)) 
                                                     | ((0x10U 
                                                         & ((IData)(vlSelf->__PVT__csa_6_io_out) 
                                                            << 4U)) 
                                                        | ((8U 
                                                            & ((IData)(vlSelf->__PVT__csa_7_io_out) 
                                                               << 3U)) 
                                                           | ((4U 
                                                               & ((IData)(vlSelf->__PVT__csa_8_io_out) 
                                                                  << 2U)) 
                                                              | ((2U 
                                                                  & ((IData)(vlSelf->__PVT__csa_9_io_out) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->__PVT__csa_10_io_out))))))))))));
    vlSelf->__PVT__csa_11_io_out = ((2U & (((IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT___csa_11_io_in_T)))) 
                                            << 1U) 
                                           | (0x7ffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 9U) 
                                                 & ((0x1fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 7U)) 
                                                    ^ 
                                                    (0xfffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 8U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x700U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_12_io_out = ((2U & (((0x60U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x3fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 6U) 
                                                 & ((0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 4U)) 
                                                    ^ 
                                                    (0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 5U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe0U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_13_io_out = ((2U & (((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x1ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 3U) 
                                                 & ((0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 1U)) 
                                                    ^ 
                                                    (0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 2U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22__154(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22__154\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin))));
    vlSelf->__PVT__csa_14_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_14_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_14_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_14_io_in)))));
    vlSelf->__PVT___csa_20_io_in_T = ((0x100U & ((IData)(vlSelf->__PVT__csa_11_io_out) 
                                                 << 8U)) 
                                      | ((0x80U & ((IData)(vlSelf->__PVT__csa_12_io_out) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->__PVT__csa_13_io_out) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->__PVT__csa_14_io_out) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->__PVT__csa_15_io_out) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->__PVT__csa_16_io_out) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->__PVT__csa_17_io_out) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->__PVT__csa_18_io_out) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(vlSelf->__PVT__csa_19_io_out))))))))));
    vlSelf->__PVT__csa_20_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_21_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_22_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_20_io_in_T))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT___csa_27_io_in_T = ((0x40U & ((IData)(vlSelf->__PVT__csa_20_io_out) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(vlSelf->__PVT__csa_21_io_out) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(vlSelf->__PVT__csa_22_io_out) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(vlSelf->__PVT__csa_23_io_out) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->__PVT__csa_24_io_out) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->__PVT__csa_25_io_out) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->__PVT__csa_26_io_out))))))));
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
                                          >> 0x1cU)));
    vlSelf->__PVT__csa_27_io_out = ((2U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x7fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 5U) 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 3U)) 
                                                    ^ 
                                                    (0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 4U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_28_io_out = ((2U & (((6U == 
                                             (6U & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x3ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 2U) 
                                                 & ((0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_27_io_in_T)) 
                                                    ^ 
                                                    (0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 1U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_29_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_29_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_29_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_29_io_in)))));
    vlSelf->__PVT__csa_30_io_in = ((4U & ((IData)(vlSelf->__PVT__csa_27_io_out) 
                                          << 2U)) | 
                                   ((2U & ((IData)(vlSelf->__PVT__csa_28_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->__PVT__csa_29_io_out))));
    vlSelf->__PVT__csa_30_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_30_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_30_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_30_io_in)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23__104(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23__104\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_23))))));
    vlSelf->__PVT___csa_11_io_in_T = ((0x400U & ((IData)(vlSelf->__PVT__csa_0_io_out) 
                                                 << 0xaU)) 
                                      | ((0x200U & 
                                          ((IData)(vlSelf->__PVT__csa_1_io_out) 
                                           << 9U)) 
                                         | ((0x100U 
                                             & ((IData)(vlSelf->__PVT__csa_2_io_out) 
                                                << 8U)) 
                                            | ((0x80U 
                                                & ((IData)(vlSelf->__PVT__csa_3_io_out) 
                                                   << 7U)) 
                                               | ((0x40U 
                                                   & ((IData)(vlSelf->__PVT__csa_4_io_out) 
                                                      << 6U)) 
                                                  | ((0x20U 
                                                      & ((IData)(vlSelf->__PVT__csa_5_io_out) 
                                                         << 5U)) 
                                                     | ((0x10U 
                                                         & ((IData)(vlSelf->__PVT__csa_6_io_out) 
                                                            << 4U)) 
                                                        | ((8U 
                                                            & ((IData)(vlSelf->__PVT__csa_7_io_out) 
                                                               << 3U)) 
                                                           | ((4U 
                                                               & ((IData)(vlSelf->__PVT__csa_8_io_out) 
                                                                  << 2U)) 
                                                              | ((2U 
                                                                  & ((IData)(vlSelf->__PVT__csa_9_io_out) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->__PVT__csa_10_io_out))))))))))));
    vlSelf->__PVT__csa_11_io_out = ((2U & (((IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT___csa_11_io_in_T)))) 
                                            << 1U) 
                                           | (0x7ffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 9U) 
                                                 & ((0x1fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 7U)) 
                                                    ^ 
                                                    (0xfffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 8U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x700U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_12_io_out = ((2U & (((0x60U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x3fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 6U) 
                                                 & ((0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 4U)) 
                                                    ^ 
                                                    (0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 5U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe0U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_13_io_out = ((2U & (((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x1ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 3U) 
                                                 & ((0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 1U)) 
                                                    ^ 
                                                    (0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 2U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23__155(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23__155\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin))));
    vlSelf->__PVT__csa_14_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_14_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_14_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_14_io_in)))));
    vlSelf->__PVT___csa_20_io_in_T = ((0x100U & ((IData)(vlSelf->__PVT__csa_11_io_out) 
                                                 << 8U)) 
                                      | ((0x80U & ((IData)(vlSelf->__PVT__csa_12_io_out) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->__PVT__csa_13_io_out) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->__PVT__csa_14_io_out) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->__PVT__csa_15_io_out) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->__PVT__csa_16_io_out) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->__PVT__csa_17_io_out) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->__PVT__csa_18_io_out) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(vlSelf->__PVT__csa_19_io_out))))))))));
    vlSelf->__PVT__csa_20_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_21_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_22_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_20_io_in_T))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT___csa_27_io_in_T = ((0x40U & ((IData)(vlSelf->__PVT__csa_20_io_out) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(vlSelf->__PVT__csa_21_io_out) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(vlSelf->__PVT__csa_22_io_out) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(vlSelf->__PVT__csa_23_io_out) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->__PVT__csa_24_io_out) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->__PVT__csa_25_io_out) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->__PVT__csa_26_io_out))))))));
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
                                          >> 0x1cU)));
    vlSelf->__PVT__csa_27_io_out = ((2U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x7fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 5U) 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 3U)) 
                                                    ^ 
                                                    (0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 4U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_28_io_out = ((2U & (((6U == 
                                             (6U & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x3ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 2U) 
                                                 & ((0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_27_io_in_T)) 
                                                    ^ 
                                                    (0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 1U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_29_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_29_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_29_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_29_io_in)))));
    vlSelf->__PVT__csa_30_io_in = ((4U & ((IData)(vlSelf->__PVT__csa_27_io_out) 
                                          << 2U)) | 
                                   ((2U & ((IData)(vlSelf->__PVT__csa_28_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->__PVT__csa_29_io_out))));
    vlSelf->__PVT__csa_30_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_30_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_30_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_30_io_in)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24__105(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24__105\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_24))))));
    vlSelf->__PVT___csa_11_io_in_T = ((0x400U & ((IData)(vlSelf->__PVT__csa_0_io_out) 
                                                 << 0xaU)) 
                                      | ((0x200U & 
                                          ((IData)(vlSelf->__PVT__csa_1_io_out) 
                                           << 9U)) 
                                         | ((0x100U 
                                             & ((IData)(vlSelf->__PVT__csa_2_io_out) 
                                                << 8U)) 
                                            | ((0x80U 
                                                & ((IData)(vlSelf->__PVT__csa_3_io_out) 
                                                   << 7U)) 
                                               | ((0x40U 
                                                   & ((IData)(vlSelf->__PVT__csa_4_io_out) 
                                                      << 6U)) 
                                                  | ((0x20U 
                                                      & ((IData)(vlSelf->__PVT__csa_5_io_out) 
                                                         << 5U)) 
                                                     | ((0x10U 
                                                         & ((IData)(vlSelf->__PVT__csa_6_io_out) 
                                                            << 4U)) 
                                                        | ((8U 
                                                            & ((IData)(vlSelf->__PVT__csa_7_io_out) 
                                                               << 3U)) 
                                                           | ((4U 
                                                               & ((IData)(vlSelf->__PVT__csa_8_io_out) 
                                                                  << 2U)) 
                                                              | ((2U 
                                                                  & ((IData)(vlSelf->__PVT__csa_9_io_out) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->__PVT__csa_10_io_out))))))))))));
    vlSelf->__PVT__csa_11_io_out = ((2U & (((IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT___csa_11_io_in_T)))) 
                                            << 1U) 
                                           | (0x7ffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 9U) 
                                                 & ((0x1fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 7U)) 
                                                    ^ 
                                                    (0xfffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 8U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x700U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_12_io_out = ((2U & (((0x60U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x3fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 6U) 
                                                 & ((0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 4U)) 
                                                    ^ 
                                                    (0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 5U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe0U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_13_io_out = ((2U & (((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x1ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 3U) 
                                                 & ((0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 1U)) 
                                                    ^ 
                                                    (0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 2U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24__156(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24__156\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin))));
    vlSelf->__PVT__csa_14_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_14_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_14_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_14_io_in)))));
    vlSelf->__PVT___csa_20_io_in_T = ((0x100U & ((IData)(vlSelf->__PVT__csa_11_io_out) 
                                                 << 8U)) 
                                      | ((0x80U & ((IData)(vlSelf->__PVT__csa_12_io_out) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->__PVT__csa_13_io_out) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->__PVT__csa_14_io_out) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->__PVT__csa_15_io_out) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->__PVT__csa_16_io_out) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->__PVT__csa_17_io_out) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->__PVT__csa_18_io_out) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(vlSelf->__PVT__csa_19_io_out))))))))));
    vlSelf->__PVT__csa_20_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_21_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_22_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_20_io_in_T))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT___csa_27_io_in_T = ((0x40U & ((IData)(vlSelf->__PVT__csa_20_io_out) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(vlSelf->__PVT__csa_21_io_out) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(vlSelf->__PVT__csa_22_io_out) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(vlSelf->__PVT__csa_23_io_out) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->__PVT__csa_24_io_out) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->__PVT__csa_25_io_out) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->__PVT__csa_26_io_out))))))));
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
                                          >> 0x1cU)));
    vlSelf->__PVT__csa_27_io_out = ((2U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x7fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 5U) 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 3U)) 
                                                    ^ 
                                                    (0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 4U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_28_io_out = ((2U & (((6U == 
                                             (6U & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x3ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 2U) 
                                                 & ((0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_27_io_in_T)) 
                                                    ^ 
                                                    (0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 1U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_29_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_29_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_29_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_29_io_in)))));
    vlSelf->__PVT__csa_30_io_in = ((4U & ((IData)(vlSelf->__PVT__csa_27_io_out) 
                                          << 2U)) | 
                                   ((2U & ((IData)(vlSelf->__PVT__csa_28_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->__PVT__csa_29_io_out))));
    vlSelf->__PVT__csa_30_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_30_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_30_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_30_io_in)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25__106(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25__106\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_25))))));
    vlSelf->__PVT___csa_11_io_in_T = ((0x400U & ((IData)(vlSelf->__PVT__csa_0_io_out) 
                                                 << 0xaU)) 
                                      | ((0x200U & 
                                          ((IData)(vlSelf->__PVT__csa_1_io_out) 
                                           << 9U)) 
                                         | ((0x100U 
                                             & ((IData)(vlSelf->__PVT__csa_2_io_out) 
                                                << 8U)) 
                                            | ((0x80U 
                                                & ((IData)(vlSelf->__PVT__csa_3_io_out) 
                                                   << 7U)) 
                                               | ((0x40U 
                                                   & ((IData)(vlSelf->__PVT__csa_4_io_out) 
                                                      << 6U)) 
                                                  | ((0x20U 
                                                      & ((IData)(vlSelf->__PVT__csa_5_io_out) 
                                                         << 5U)) 
                                                     | ((0x10U 
                                                         & ((IData)(vlSelf->__PVT__csa_6_io_out) 
                                                            << 4U)) 
                                                        | ((8U 
                                                            & ((IData)(vlSelf->__PVT__csa_7_io_out) 
                                                               << 3U)) 
                                                           | ((4U 
                                                               & ((IData)(vlSelf->__PVT__csa_8_io_out) 
                                                                  << 2U)) 
                                                              | ((2U 
                                                                  & ((IData)(vlSelf->__PVT__csa_9_io_out) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->__PVT__csa_10_io_out))))))))))));
    vlSelf->__PVT__csa_11_io_out = ((2U & (((IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT___csa_11_io_in_T)))) 
                                            << 1U) 
                                           | (0x7ffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 9U) 
                                                 & ((0x1fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 7U)) 
                                                    ^ 
                                                    (0xfffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 8U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x700U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_12_io_out = ((2U & (((0x60U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x3fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 6U) 
                                                 & ((0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 4U)) 
                                                    ^ 
                                                    (0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 5U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe0U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_13_io_out = ((2U & (((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x1ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 3U) 
                                                 & ((0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 1U)) 
                                                    ^ 
                                                    (0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 2U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25__157(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25__157\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin))));
    vlSelf->__PVT__csa_14_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_14_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_14_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_14_io_in)))));
    vlSelf->__PVT___csa_20_io_in_T = ((0x100U & ((IData)(vlSelf->__PVT__csa_11_io_out) 
                                                 << 8U)) 
                                      | ((0x80U & ((IData)(vlSelf->__PVT__csa_12_io_out) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->__PVT__csa_13_io_out) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->__PVT__csa_14_io_out) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->__PVT__csa_15_io_out) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->__PVT__csa_16_io_out) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->__PVT__csa_17_io_out) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->__PVT__csa_18_io_out) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(vlSelf->__PVT__csa_19_io_out))))))))));
    vlSelf->__PVT__csa_20_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_21_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_22_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_20_io_in_T))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT___csa_27_io_in_T = ((0x40U & ((IData)(vlSelf->__PVT__csa_20_io_out) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(vlSelf->__PVT__csa_21_io_out) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(vlSelf->__PVT__csa_22_io_out) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(vlSelf->__PVT__csa_23_io_out) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->__PVT__csa_24_io_out) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->__PVT__csa_25_io_out) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->__PVT__csa_26_io_out))))))));
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
                                          >> 0x1cU)));
    vlSelf->__PVT__csa_27_io_out = ((2U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x7fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 5U) 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 3U)) 
                                                    ^ 
                                                    (0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 4U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_28_io_out = ((2U & (((6U == 
                                             (6U & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x3ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 2U) 
                                                 & ((0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_27_io_in_T)) 
                                                    ^ 
                                                    (0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 1U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_29_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_29_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_29_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_29_io_in)))));
    vlSelf->__PVT__csa_30_io_in = ((4U & ((IData)(vlSelf->__PVT__csa_27_io_out) 
                                          << 2U)) | 
                                   ((2U & ((IData)(vlSelf->__PVT__csa_28_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->__PVT__csa_29_io_out))));
    vlSelf->__PVT__csa_30_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_30_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_30_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_30_io_in)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26__107(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26__107\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_26))))));
    vlSelf->__PVT___csa_11_io_in_T = ((0x400U & ((IData)(vlSelf->__PVT__csa_0_io_out) 
                                                 << 0xaU)) 
                                      | ((0x200U & 
                                          ((IData)(vlSelf->__PVT__csa_1_io_out) 
                                           << 9U)) 
                                         | ((0x100U 
                                             & ((IData)(vlSelf->__PVT__csa_2_io_out) 
                                                << 8U)) 
                                            | ((0x80U 
                                                & ((IData)(vlSelf->__PVT__csa_3_io_out) 
                                                   << 7U)) 
                                               | ((0x40U 
                                                   & ((IData)(vlSelf->__PVT__csa_4_io_out) 
                                                      << 6U)) 
                                                  | ((0x20U 
                                                      & ((IData)(vlSelf->__PVT__csa_5_io_out) 
                                                         << 5U)) 
                                                     | ((0x10U 
                                                         & ((IData)(vlSelf->__PVT__csa_6_io_out) 
                                                            << 4U)) 
                                                        | ((8U 
                                                            & ((IData)(vlSelf->__PVT__csa_7_io_out) 
                                                               << 3U)) 
                                                           | ((4U 
                                                               & ((IData)(vlSelf->__PVT__csa_8_io_out) 
                                                                  << 2U)) 
                                                              | ((2U 
                                                                  & ((IData)(vlSelf->__PVT__csa_9_io_out) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->__PVT__csa_10_io_out))))))))))));
    vlSelf->__PVT__csa_11_io_out = ((2U & (((IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT___csa_11_io_in_T)))) 
                                            << 1U) 
                                           | (0x7ffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 9U) 
                                                 & ((0x1fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 7U)) 
                                                    ^ 
                                                    (0xfffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 8U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x700U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_12_io_out = ((2U & (((0x60U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x3fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 6U) 
                                                 & ((0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 4U)) 
                                                    ^ 
                                                    (0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 5U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe0U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_13_io_out = ((2U & (((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x1ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 3U) 
                                                 & ((0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 1U)) 
                                                    ^ 
                                                    (0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 2U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26__158(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26__158\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin))));
    vlSelf->__PVT__csa_14_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_14_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_14_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_14_io_in)))));
    vlSelf->__PVT___csa_20_io_in_T = ((0x100U & ((IData)(vlSelf->__PVT__csa_11_io_out) 
                                                 << 8U)) 
                                      | ((0x80U & ((IData)(vlSelf->__PVT__csa_12_io_out) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->__PVT__csa_13_io_out) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->__PVT__csa_14_io_out) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->__PVT__csa_15_io_out) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->__PVT__csa_16_io_out) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->__PVT__csa_17_io_out) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->__PVT__csa_18_io_out) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(vlSelf->__PVT__csa_19_io_out))))))))));
    vlSelf->__PVT__csa_20_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_21_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_22_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_20_io_in_T))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT___csa_27_io_in_T = ((0x40U & ((IData)(vlSelf->__PVT__csa_20_io_out) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(vlSelf->__PVT__csa_21_io_out) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(vlSelf->__PVT__csa_22_io_out) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(vlSelf->__PVT__csa_23_io_out) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->__PVT__csa_24_io_out) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->__PVT__csa_25_io_out) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->__PVT__csa_26_io_out))))))));
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
                                          >> 0x1cU)));
    vlSelf->__PVT__csa_27_io_out = ((2U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x7fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 5U) 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 3U)) 
                                                    ^ 
                                                    (0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 4U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_28_io_out = ((2U & (((6U == 
                                             (6U & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x3ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 2U) 
                                                 & ((0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_27_io_in_T)) 
                                                    ^ 
                                                    (0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 1U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_29_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_29_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_29_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_29_io_in)))));
    vlSelf->__PVT__csa_30_io_in = ((4U & ((IData)(vlSelf->__PVT__csa_27_io_out) 
                                          << 2U)) | 
                                   ((2U & ((IData)(vlSelf->__PVT__csa_28_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->__PVT__csa_29_io_out))));
    vlSelf->__PVT__csa_30_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_30_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_30_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_30_io_in)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27__108(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27__108\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_27))))));
    vlSelf->__PVT___csa_11_io_in_T = ((0x400U & ((IData)(vlSelf->__PVT__csa_0_io_out) 
                                                 << 0xaU)) 
                                      | ((0x200U & 
                                          ((IData)(vlSelf->__PVT__csa_1_io_out) 
                                           << 9U)) 
                                         | ((0x100U 
                                             & ((IData)(vlSelf->__PVT__csa_2_io_out) 
                                                << 8U)) 
                                            | ((0x80U 
                                                & ((IData)(vlSelf->__PVT__csa_3_io_out) 
                                                   << 7U)) 
                                               | ((0x40U 
                                                   & ((IData)(vlSelf->__PVT__csa_4_io_out) 
                                                      << 6U)) 
                                                  | ((0x20U 
                                                      & ((IData)(vlSelf->__PVT__csa_5_io_out) 
                                                         << 5U)) 
                                                     | ((0x10U 
                                                         & ((IData)(vlSelf->__PVT__csa_6_io_out) 
                                                            << 4U)) 
                                                        | ((8U 
                                                            & ((IData)(vlSelf->__PVT__csa_7_io_out) 
                                                               << 3U)) 
                                                           | ((4U 
                                                               & ((IData)(vlSelf->__PVT__csa_8_io_out) 
                                                                  << 2U)) 
                                                              | ((2U 
                                                                  & ((IData)(vlSelf->__PVT__csa_9_io_out) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->__PVT__csa_10_io_out))))))))))));
    vlSelf->__PVT__csa_11_io_out = ((2U & (((IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT___csa_11_io_in_T)))) 
                                            << 1U) 
                                           | (0x7ffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 9U) 
                                                 & ((0x1fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 7U)) 
                                                    ^ 
                                                    (0xfffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 8U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x700U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_12_io_out = ((2U & (((0x60U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x3fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 6U) 
                                                 & ((0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 4U)) 
                                                    ^ 
                                                    (0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 5U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe0U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_13_io_out = ((2U & (((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x1ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 3U) 
                                                 & ((0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 1U)) 
                                                    ^ 
                                                    (0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 2U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27__159(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27__159\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin))));
    vlSelf->__PVT__csa_14_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_14_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_14_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_14_io_in)))));
    vlSelf->__PVT___csa_20_io_in_T = ((0x100U & ((IData)(vlSelf->__PVT__csa_11_io_out) 
                                                 << 8U)) 
                                      | ((0x80U & ((IData)(vlSelf->__PVT__csa_12_io_out) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->__PVT__csa_13_io_out) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->__PVT__csa_14_io_out) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->__PVT__csa_15_io_out) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->__PVT__csa_16_io_out) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->__PVT__csa_17_io_out) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->__PVT__csa_18_io_out) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(vlSelf->__PVT__csa_19_io_out))))))))));
    vlSelf->__PVT__csa_20_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_21_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_22_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_20_io_in_T))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT___csa_27_io_in_T = ((0x40U & ((IData)(vlSelf->__PVT__csa_20_io_out) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(vlSelf->__PVT__csa_21_io_out) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(vlSelf->__PVT__csa_22_io_out) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(vlSelf->__PVT__csa_23_io_out) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->__PVT__csa_24_io_out) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->__PVT__csa_25_io_out) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->__PVT__csa_26_io_out))))))));
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
                                          >> 0x1cU)));
    vlSelf->__PVT__csa_27_io_out = ((2U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x7fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 5U) 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 3U)) 
                                                    ^ 
                                                    (0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 4U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_28_io_out = ((2U & (((6U == 
                                             (6U & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x3ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 2U) 
                                                 & ((0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_27_io_in_T)) 
                                                    ^ 
                                                    (0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 1U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_29_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_29_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_29_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_29_io_in)))));
    vlSelf->__PVT__csa_30_io_in = ((4U & ((IData)(vlSelf->__PVT__csa_27_io_out) 
                                          << 2U)) | 
                                   ((2U & ((IData)(vlSelf->__PVT__csa_28_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->__PVT__csa_29_io_out))));
    vlSelf->__PVT__csa_30_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_30_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_30_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_30_io_in)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28__109(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28__109\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_28))))));
    vlSelf->__PVT___csa_11_io_in_T = ((0x400U & ((IData)(vlSelf->__PVT__csa_0_io_out) 
                                                 << 0xaU)) 
                                      | ((0x200U & 
                                          ((IData)(vlSelf->__PVT__csa_1_io_out) 
                                           << 9U)) 
                                         | ((0x100U 
                                             & ((IData)(vlSelf->__PVT__csa_2_io_out) 
                                                << 8U)) 
                                            | ((0x80U 
                                                & ((IData)(vlSelf->__PVT__csa_3_io_out) 
                                                   << 7U)) 
                                               | ((0x40U 
                                                   & ((IData)(vlSelf->__PVT__csa_4_io_out) 
                                                      << 6U)) 
                                                  | ((0x20U 
                                                      & ((IData)(vlSelf->__PVT__csa_5_io_out) 
                                                         << 5U)) 
                                                     | ((0x10U 
                                                         & ((IData)(vlSelf->__PVT__csa_6_io_out) 
                                                            << 4U)) 
                                                        | ((8U 
                                                            & ((IData)(vlSelf->__PVT__csa_7_io_out) 
                                                               << 3U)) 
                                                           | ((4U 
                                                               & ((IData)(vlSelf->__PVT__csa_8_io_out) 
                                                                  << 2U)) 
                                                              | ((2U 
                                                                  & ((IData)(vlSelf->__PVT__csa_9_io_out) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(vlSelf->__PVT__csa_10_io_out))))))))))));
    vlSelf->__PVT__csa_11_io_out = ((2U & (((IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT___csa_11_io_in_T)))) 
                                            << 1U) 
                                           | (0x7ffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 9U) 
                                                 & ((0x1fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 7U)) 
                                                    ^ 
                                                    (0xfffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 8U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x700U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_12_io_out = ((2U & (((0x60U 
                                             == (0x60U 
                                                 & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x3fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 6U) 
                                                 & ((0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 4U)) 
                                                    ^ 
                                                    (0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 5U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe0U 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
    vlSelf->__PVT__csa_13_io_out = ((2U & (((0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->__PVT___csa_11_io_in_T))) 
                                            << 1U) 
                                           | (0x1ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                  >> 3U) 
                                                 & ((0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 1U)) 
                                                    ^ 
                                                    (0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                                        >> 2U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1cU 
                                                          & (IData)(vlSelf->__PVT___csa_11_io_in_T)))));
}

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28__160(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28__160\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin))));
    vlSelf->__PVT__csa_14_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_14_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_14_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_14_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_14_io_in)))));
    vlSelf->__PVT___csa_20_io_in_T = ((0x100U & ((IData)(vlSelf->__PVT__csa_11_io_out) 
                                                 << 8U)) 
                                      | ((0x80U & ((IData)(vlSelf->__PVT__csa_12_io_out) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->__PVT__csa_13_io_out) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->__PVT__csa_14_io_out) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->__PVT__csa_15_io_out) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->__PVT__csa_16_io_out) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->__PVT__csa_17_io_out) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->__PVT__csa_18_io_out) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(vlSelf->__PVT__csa_19_io_out))))))))));
    vlSelf->__PVT__csa_20_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_21_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT__csa_22_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT___csa_20_io_in_T))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT___csa_20_io_in_T) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_20_io_in_T))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT___csa_20_io_in_T)))));
    vlSelf->__PVT___csa_27_io_in_T = ((0x40U & ((IData)(vlSelf->__PVT__csa_20_io_out) 
                                                << 6U)) 
                                      | ((0x20U & ((IData)(vlSelf->__PVT__csa_21_io_out) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & ((IData)(vlSelf->__PVT__csa_22_io_out) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(vlSelf->__PVT__csa_23_io_out) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->__PVT__csa_24_io_out) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->__PVT__csa_25_io_out) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->__PVT__csa_26_io_out))))))));
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
                                          >> 0x1cU)));
    vlSelf->__PVT__csa_27_io_out = ((2U & (((0x30U 
                                             == (0x30U 
                                                 & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x7fffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 5U) 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 3U)) 
                                                    ^ 
                                                    (0xffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 4U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70U 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_28_io_out = ((2U & (((6U == 
                                             (6U & (IData)(vlSelf->__PVT___csa_27_io_in_T))) 
                                            << 1U) 
                                           | (0x3ffffffeU 
                                              & (((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                  >> 2U) 
                                                 & ((0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT___csa_27_io_in_T)) 
                                                    ^ 
                                                    (0x7ffffffeU 
                                                     & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                                        >> 1U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xeU 
                                                          & (IData)(vlSelf->__PVT___csa_27_io_in_T)))));
    vlSelf->__PVT__csa_29_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_29_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_29_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_29_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_29_io_in)))));
    vlSelf->__PVT__csa_30_io_in = ((4U & ((IData)(vlSelf->__PVT__csa_27_io_out) 
                                          << 2U)) | 
                                   ((2U & ((IData)(vlSelf->__PVT__csa_28_io_out) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelf->__PVT__csa_29_io_out))));
    vlSelf->__PVT__csa_30_io_out = ((2U & ((0xfffffffeU 
                                            & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                << 1U) 
                                               & (IData)(vlSelf->__PVT__csa_30_io_in))) 
                                           | (0x7ffffffeU 
                                              & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                  >> 1U) 
                                                 & (((IData)(vlSelf->__PVT__csa_30_io_in) 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & (IData)(vlSelf->__PVT__csa_30_io_in))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->__PVT__csa_30_io_in)))));
}
