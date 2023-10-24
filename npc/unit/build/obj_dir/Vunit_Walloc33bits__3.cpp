// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vunit.h for the primary calling header

#include "Vunit_Walloc33bits.h"
#include "Vunit__Syms.h"

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43__175(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43__175\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin))));
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
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44__125(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44__125\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_44))))));
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44__176(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44__176\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin))));
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
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45__126(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45__126\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_45))))));
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45__177(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45__177\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin))));
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
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46__127(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46__127\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_46))))));
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46__178(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46__178\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin))));
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
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47__128(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47__128\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_47))))));
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47__179(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47__179\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin))));
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
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48__129(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48__129\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_48))))));
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48__180(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48__180\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin))));
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
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49__130(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49__130\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_49))))));
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49__181(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49__181\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin))));
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
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50__131(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50__131\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_50))))));
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50__182(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50__182\n"); );
    // Body
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                          >> 0xfU)));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin))));
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin))));
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
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
                                          >> 0x1cU)));
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51__132(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51__132\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_51))))));
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51__183(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51__183\n"); );
    // Body
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin))));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin))));
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                          >> 0xfU)));
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
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
                                          >> 0x1cU)));
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52__80(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52__80\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_52))))));
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52__184(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52__184\n"); );
    // Body
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin))));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin))));
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                          >> 0xfU)));
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
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
                                          >> 0x1cU)));
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53__79(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53__79\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_53))))));
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53__185(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53__185\n"); );
    // Body
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin))));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin))));
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                          >> 0xfU)));
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
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
                                          >> 0x1cU)));
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54__78(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54__78\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_54))))));
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54__186(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54__186\n"); );
    // Body
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin))));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin))));
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                          >> 0xfU)));
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
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
                                          >> 0x1cU)));
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55__77(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55__77\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_55))))));
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55__187(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55__187\n"); );
    // Body
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin))));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin))));
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                          >> 0xfU)));
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
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
                                          >> 0x1cU)));
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56__76(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56__76\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_56))))));
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56__188(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56__188\n"); );
    // Body
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin))));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin))));
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                          >> 0xfU)));
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
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
                                          >> 0x1cU)));
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57__75(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57__75\n"); );
    // Body
    vlSelf->__PVT__csa_0_io_out = ((2U & (((0xc0000000ULL 
                                            == (0xc0000000ULL 
                                                & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                            >> 0x1fU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57))))));
    vlSelf->__PVT__csa_1_io_out = ((2U & (((IData)(
                                                   (0x18000000ULL 
                                                    == 
                                                    (0x18000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                          >> 0x1bU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                            >> 0x1cU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57))))));
    vlSelf->__PVT__csa_2_io_out = ((2U & (((IData)(
                                                   (0x3000000ULL 
                                                    == 
                                                    (0x3000000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                          >> 0x18U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                            >> 0x19U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57))))));
    vlSelf->__PVT__csa_3_io_out = ((2U & (((IData)(
                                                   (0x600000ULL 
                                                    == 
                                                    (0x600000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                          >> 0x15U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                            >> 0x16U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57))))));
    vlSelf->__PVT__csa_4_io_out = ((2U & (((IData)(
                                                   (0xc0000ULL 
                                                    == 
                                                    (0xc0000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                          >> 0x12U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                            >> 0x13U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57))))));
    vlSelf->__PVT__csa_5_io_out = ((2U & (((IData)(
                                                   (0x18000ULL 
                                                    == 
                                                    (0x18000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                          >> 0xfU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                            >> 0x10U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57))))));
    vlSelf->__PVT__csa_6_io_out = ((2U & (((IData)(
                                                   (0x3000ULL 
                                                    == 
                                                    (0x3000ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                          >> 0xcU)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                            >> 0xdU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x7000ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57))))));
    vlSelf->__PVT__csa_7_io_out = ((2U & (((IData)(
                                                   (0x600ULL 
                                                    == 
                                                    (0x600ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                          >> 9U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                            >> 0xaU))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0xe00ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57))))));
    vlSelf->__PVT__csa_8_io_out = ((2U & (((IData)(
                                                   (0xc0ULL 
                                                    == 
                                                    (0xc0ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                          >> 6U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                            >> 7U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x1c0ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57))))));
    vlSelf->__PVT__csa_9_io_out = ((2U & (((IData)(
                                                   (0x18ULL 
                                                    == 
                                                    (0x18ULL 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57))) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                          >> 3U)) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                            >> 4U))))) 
                                          << 1U)) | 
                                   (1U & (IData)((1ULL 
                                                  & VL_REDXOR_64(
                                                                 (0x38ULL 
                                                                  & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57))))));
    vlSelf->__PVT__csa_10_io_out = ((2U & ((((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57) 
                                             & (IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                        >> 1U))) 
                                            | ((IData)(
                                                       (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57 
                                                             >> 1U))))) 
                                           << 1U)) 
                                    | (1U & (IData)(
                                                    (1ULL 
                                                     & VL_REDXOR_64(
                                                                    (7ULL 
                                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__switch_io_out_57))))));
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

VL_INLINE_OPT void Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57__189(Vunit_Walloc33bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vunit_Walloc33bits___sequent__TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57__189\n"); );
    // Body
    vlSelf->__PVT__csa_23_io_out = ((2U & (((0x6000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin)) 
                                            << 1U) 
                                           | (0x3eU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                  >> 0x1aU) 
                                                 & ((0xfeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                        >> 0x18U)) 
                                                    ^ 
                                                    (0x7eU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                        >> 0x19U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe000000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin))));
    vlSelf->__PVT__csa_24_io_out = ((2U & (((0xc00000U 
                                             == (0xc00000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin)) 
                                            << 1U) 
                                           | (0x1feU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                  >> 0x17U) 
                                                 & ((0x7feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    (0x3feU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                        >> 0x16U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c00000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin))));
    vlSelf->__PVT__csa_25_io_out = ((2U & (((0x180000U 
                                             == (0x180000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin)) 
                                            << 1U) 
                                           | (0xffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                  >> 0x14U) 
                                                 & ((0x3ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                        >> 0x12U)) 
                                                    ^ 
                                                    (0x1ffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                        >> 0x13U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x380000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin))));
    vlSelf->__PVT__csa_26_io_out = ((2U & (((0x30000U 
                                             == (0x30000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin)) 
                                            << 1U) 
                                           | (0x7ffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                  >> 0x11U) 
                                                 & ((0x1fffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (0xfffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                        >> 0x10U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x70000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin))));
    vlSelf->__PVT__csa_15_io_out = ((2U & (((0x3000U 
                                             == (0x3000U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin)) 
                                            << 1U) 
                                           | (0x7fffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                  >> 0xdU) 
                                                 & ((0x1ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    (0xffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                        >> 0xcU))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin))));
    vlSelf->__PVT__csa_16_io_out = ((2U & (((0x600U 
                                             == (0x600U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin)) 
                                            << 1U) 
                                           | (0x3ffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                  >> 0xaU) 
                                                 & ((0xfffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                        >> 8U)) 
                                                    ^ 
                                                    (0x7ffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                        >> 9U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin))));
    vlSelf->__PVT__csa_17_io_out = ((2U & (((0xc0U 
                                             == (0xc0U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin)) 
                                            << 1U) 
                                           | (0x1fffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                  >> 7U) 
                                                 & ((0x7fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                        >> 5U)) 
                                                    ^ 
                                                    (0x3fffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                        >> 6U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin))));
    vlSelf->__PVT__csa_18_io_out = ((2U & (((0x18U 
                                             == (0x18U 
                                                 & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin)) 
                                            << 1U) 
                                           | (0xffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                  >> 4U) 
                                                 & ((0x3ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x1ffffffeU 
                                                     & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                        >> 3U))))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin))));
    vlSelf->__PVT__csa_19_io_out = ((2U & ((0xfffffffeU 
                                            & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                << 1U) 
                                               & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin)) 
                                           | (0x7ffffffeU 
                                              & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                  >> 1U) 
                                                 & ((vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                                     << 1U) 
                                                    ^ 
                                                    (0xfffffffeU 
                                                     & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin)))))) 
                                    | (1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin))));
    vlSelf->__PVT__csa_14_io_in = ((6U & ((IData)(vlSelf->__PVT___csa_11_io_in_T) 
                                          << 1U)) | 
                                   (1U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                          >> 0xfU)));
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
    vlSelf->__PVT__csa_29_io_in = ((4U & ((IData)(vlSelf->__PVT___csa_27_io_in_T) 
                                          << 2U)) | 
                                   (3U & (vlSymsp->TOP.unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
                                          >> 0x1cU)));
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
