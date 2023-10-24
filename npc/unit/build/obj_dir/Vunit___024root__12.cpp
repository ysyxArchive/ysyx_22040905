// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vunit.h for the primary calling header

#include "Vunit___024root.h"
#include "Vunit__Syms.h"

VL_INLINE_OPT void Vunit___024root___sequent__TOP__16(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__16\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_1_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__17(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__17\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_2_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__18(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__18\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_3_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__19(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__19\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_4_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__20(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__20\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_5_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__21(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__21\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_6_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__22(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__22\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_7_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__23(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__23\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_8_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__24(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__24\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_9_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__25(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__25\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_10_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__26(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__26\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_11_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__27(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__27\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_12_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__28(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__28\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_13_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__29(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__29\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_14_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__30(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__30\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_15_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__31(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__31\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_16_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__32(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__32\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_17_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__33(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__33\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_18_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__34(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__34\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_19_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__35(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__35\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_20_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__36(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__36\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_21_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__37(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__37\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_22_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__38(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__38\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_23_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__39(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__39\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_24_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__40(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__40\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_25_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__41(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__41\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_26_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__42(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__42\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_27_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__43(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__43\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_28_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__44(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__44\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_29_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__45(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__45\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_30_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__46(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__46\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_31_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__47(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__47\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_32_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
    vlSelf->unit__DOT__walloc_64_mul__DOT__src2_lo_lo 
        = (((QData)((IData)(((0x10000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_30_io_out) 
                                          << 0xfU)) 
                             | ((0x8000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_30_io_out) 
                                            << 0xeU)) 
                                | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_30_io_out) 
                                               << 0xdU)) 
                                   | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_30_io_out) 
                                                  << 0xcU)) 
                                      | ((0x1000U & 
                                          ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_30_io_out) 
                                           << 0xbU)) 
                                         | ((0x800U 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_30_io_out) 
                                                << 0xaU)) 
                                            | ((0x400U 
                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_30_io_out) 
                                                   << 9U)) 
                                               | ((0x200U 
                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_30_io_out) 
                                                      << 8U)) 
                                                  | ((0x100U 
                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_30_io_out) 
                                                         << 7U)) 
                                                     | ((0x80U 
                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_30_io_out) 
                                                            << 6U)) 
                                                        | ((0x40U 
                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_30_io_out) 
                                                               << 5U)) 
                                                           | ((0x20U 
                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_30_io_out) 
                                                                  << 4U)) 
                                                              | ((0x10U 
                                                                  & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_30_io_out) 
                                                                     << 3U)) 
                                                                 | ((8U 
                                                                     & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_30_io_out) 
                                                                        << 2U)) 
                                                                    | ((4U 
                                                                        & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_30_io_out) 
                                                                           << 1U)) 
                                                                       | ((2U 
                                                                           & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_30_io_out)) 
                                                                          | (1U 
                                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_30_io_out) 
                                                                                >> 1U)))))))))))))))))))) 
            << 0x10U) | (QData)((IData)(((0x8000U & 
                                          ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_30_io_out) 
                                           << 0xeU)) 
                                         | ((0x4000U 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_30_io_out) 
                                                << 0xdU)) 
                                            | ((0x2000U 
                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_30_io_out) 
                                                   << 0xcU)) 
                                               | ((0x1000U 
                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_30_io_out) 
                                                      << 0xbU)) 
                                                  | ((0x800U 
                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_30_io_out) 
                                                         << 0xaU)) 
                                                     | ((0x400U 
                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_30_io_out) 
                                                            << 9U)) 
                                                        | ((0x200U 
                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_30_io_out) 
                                                               << 8U)) 
                                                           | ((0x100U 
                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_30_io_out) 
                                                                  << 7U)) 
                                                              | ((0x80U 
                                                                  & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_30_io_out) 
                                                                     << 6U)) 
                                                                 | ((0x40U 
                                                                     & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_30_io_out) 
                                                                        << 5U)) 
                                                                    | ((0x20U 
                                                                        & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_30_io_out) 
                                                                           << 4U)) 
                                                                       | ((0x10U 
                                                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_30_io_out) 
                                                                              << 3U)) 
                                                                          | ((8U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_30_io_out) 
                                                                                << 2U)) 
                                                                             | ((4U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_30_io_out) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_30_io_out)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->unit__DOT__walloc_64_mul__DOT__switch__DOT___io_cout_T 
                                                                                >> 1U)))))))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__48(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__48\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_33_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
    vlSelf->unit__DOT__walloc_64_mul__DOT__src1_lo_lo 
        = (((QData)((IData)(((0x10000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_30_io_out) 
                                          << 0x10U)) 
                             | ((0x8000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_31.__PVT__csa_30_io_out) 
                                            << 0xfU)) 
                                | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_30.__PVT__csa_30_io_out) 
                                               << 0xeU)) 
                                   | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_29.__PVT__csa_30_io_out) 
                                                  << 0xdU)) 
                                      | ((0x1000U & 
                                          ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_28.__PVT__csa_30_io_out) 
                                           << 0xcU)) 
                                         | ((0x800U 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_27.__PVT__csa_30_io_out) 
                                                << 0xbU)) 
                                            | ((0x400U 
                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_26.__PVT__csa_30_io_out) 
                                                   << 0xaU)) 
                                               | ((0x200U 
                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_25.__PVT__csa_30_io_out) 
                                                      << 9U)) 
                                                  | ((0x100U 
                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_24.__PVT__csa_30_io_out) 
                                                         << 8U)) 
                                                     | ((0x80U 
                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_23.__PVT__csa_30_io_out) 
                                                            << 7U)) 
                                                        | ((0x40U 
                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_22.__PVT__csa_30_io_out) 
                                                               << 6U)) 
                                                           | ((0x20U 
                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_21.__PVT__csa_30_io_out) 
                                                                  << 5U)) 
                                                              | ((0x10U 
                                                                  & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_20.__PVT__csa_30_io_out) 
                                                                     << 4U)) 
                                                                 | ((8U 
                                                                     & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_19.__PVT__csa_30_io_out) 
                                                                        << 3U)) 
                                                                    | ((4U 
                                                                        & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_18.__PVT__csa_30_io_out) 
                                                                           << 2U)) 
                                                                       | ((2U 
                                                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_17.__PVT__csa_30_io_out) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_16.__PVT__csa_30_io_out)))))))))))))))))))) 
            << 0x10U) | (QData)((IData)(((0x8000U & 
                                          ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_15.__PVT__csa_30_io_out) 
                                           << 0xfU)) 
                                         | ((0x4000U 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_14.__PVT__csa_30_io_out) 
                                                << 0xeU)) 
                                            | ((0x2000U 
                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_13.__PVT__csa_30_io_out) 
                                                   << 0xdU)) 
                                               | ((0x1000U 
                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_12.__PVT__csa_30_io_out) 
                                                      << 0xcU)) 
                                                  | ((0x800U 
                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_11.__PVT__csa_30_io_out) 
                                                         << 0xbU)) 
                                                     | ((0x400U 
                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_10.__PVT__csa_30_io_out) 
                                                            << 0xaU)) 
                                                        | ((0x200U 
                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_9.__PVT__csa_30_io_out) 
                                                               << 9U)) 
                                                           | ((0x100U 
                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_8.__PVT__csa_30_io_out) 
                                                                  << 8U)) 
                                                              | ((0x80U 
                                                                  & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_7.__PVT__csa_30_io_out) 
                                                                     << 7U)) 
                                                                 | ((0x40U 
                                                                     & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_6.__PVT__csa_30_io_out) 
                                                                        << 6U)) 
                                                                    | ((0x20U 
                                                                        & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_5.__PVT__csa_30_io_out) 
                                                                           << 5U)) 
                                                                       | ((0x10U 
                                                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_4.__PVT__csa_30_io_out) 
                                                                              << 4U)) 
                                                                          | ((8U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_3.__PVT__csa_30_io_out) 
                                                                                << 3U)) 
                                                                             | ((4U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_2.__PVT__csa_30_io_out) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_1.__PVT__csa_30_io_out) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits.__PVT__csa_30_io_out))))))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__49(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__49\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_34_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__50(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__50\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_35_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__51(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__51\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_36_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__52(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__52\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_37_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__53(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__53\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_38_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__54(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__54\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_39_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__55(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__55\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_40_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__56(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__56\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_41_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__57(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__57\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_42_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__58(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__58\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_43_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__59(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__59\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_44_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__60(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__60\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_45_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__61(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__61\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_46_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__62(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__62\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_47_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__63(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__63\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_48_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__64(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__64\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_49_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__65(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__65\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_50_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__66(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__66\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_51_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__67(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__67\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_52_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__68(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__68\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_53_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__69(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__69\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_54_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__70(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__70\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_55_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__71(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__71\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_56_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__72(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__72\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_57_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__73(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__73\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_58_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__74(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__74\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_59_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__75(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__75\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_60_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__76(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__76\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_61_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__77(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__77\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_62_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__78(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__78\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_63_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__79(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__79\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_64_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__80(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__80\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_65_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
    vlSelf->unit__DOT__walloc_64_mul__DOT__src2_lo_hi 
        = (((QData)((IData)(((0x10000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_30_io_out) 
                                          << 0xfU)) 
                             | ((0x8000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_30_io_out) 
                                            << 0xeU)) 
                                | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_30_io_out) 
                                               << 0xdU)) 
                                   | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_30_io_out) 
                                                  << 0xcU)) 
                                      | ((0x1000U & 
                                          ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_30_io_out) 
                                           << 0xbU)) 
                                         | ((0x800U 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_30_io_out) 
                                                << 0xaU)) 
                                            | ((0x400U 
                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_30_io_out) 
                                                   << 9U)) 
                                               | ((0x200U 
                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_30_io_out) 
                                                      << 8U)) 
                                                  | ((0x100U 
                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_30_io_out) 
                                                         << 7U)) 
                                                     | ((0x80U 
                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_30_io_out) 
                                                            << 6U)) 
                                                        | ((0x40U 
                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_30_io_out) 
                                                               << 5U)) 
                                                           | ((0x20U 
                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_30_io_out) 
                                                                  << 4U)) 
                                                              | ((0x10U 
                                                                  & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_30_io_out) 
                                                                     << 3U)) 
                                                                 | ((8U 
                                                                     & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_30_io_out) 
                                                                        << 2U)) 
                                                                    | ((4U 
                                                                        & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_30_io_out) 
                                                                           << 1U)) 
                                                                       | ((2U 
                                                                           & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_30_io_out)) 
                                                                          | (1U 
                                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_30_io_out) 
                                                                                >> 1U)))))))))))))))))))) 
            << 0x10U) | (QData)((IData)(((0x8000U & 
                                          ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_30_io_out) 
                                           << 0xeU)) 
                                         | ((0x4000U 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_30_io_out) 
                                                << 0xdU)) 
                                            | ((0x2000U 
                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_30_io_out) 
                                                   << 0xcU)) 
                                               | ((0x1000U 
                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_30_io_out) 
                                                      << 0xbU)) 
                                                  | ((0x800U 
                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_30_io_out) 
                                                         << 0xaU)) 
                                                     | ((0x400U 
                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_30_io_out) 
                                                            << 9U)) 
                                                        | ((0x200U 
                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_30_io_out) 
                                                               << 8U)) 
                                                           | ((0x100U 
                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_30_io_out) 
                                                                  << 7U)) 
                                                              | ((0x80U 
                                                                  & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_30_io_out) 
                                                                     << 6U)) 
                                                                 | ((0x40U 
                                                                     & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_30_io_out) 
                                                                        << 5U)) 
                                                                    | ((0x20U 
                                                                        & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_30_io_out) 
                                                                           << 4U)) 
                                                                       | ((0x10U 
                                                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_30_io_out) 
                                                                              << 3U)) 
                                                                          | ((8U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_30_io_out) 
                                                                                << 2U)) 
                                                                             | ((4U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_30_io_out) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_30_io_out)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_32.__PVT__csa_30_io_out) 
                                                                                >> 1U))))))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__81(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__81\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_66_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
    vlSelf->unit__DOT__walloc_64_mul__DOT__src1_lo_hi 
        = (((QData)((IData)(((0x10000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_65.__PVT__csa_30_io_out) 
                                          << 0x10U)) 
                             | ((0x8000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_64.__PVT__csa_30_io_out) 
                                            << 0xfU)) 
                                | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_63.__PVT__csa_30_io_out) 
                                               << 0xeU)) 
                                   | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_62.__PVT__csa_30_io_out) 
                                                  << 0xdU)) 
                                      | ((0x1000U & 
                                          ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_61.__PVT__csa_30_io_out) 
                                           << 0xcU)) 
                                         | ((0x800U 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_60.__PVT__csa_30_io_out) 
                                                << 0xbU)) 
                                            | ((0x400U 
                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_59.__PVT__csa_30_io_out) 
                                                   << 0xaU)) 
                                               | ((0x200U 
                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_58.__PVT__csa_30_io_out) 
                                                      << 9U)) 
                                                  | ((0x100U 
                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_57.__PVT__csa_30_io_out) 
                                                         << 8U)) 
                                                     | ((0x80U 
                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_56.__PVT__csa_30_io_out) 
                                                            << 7U)) 
                                                        | ((0x40U 
                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_55.__PVT__csa_30_io_out) 
                                                               << 6U)) 
                                                           | ((0x20U 
                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_54.__PVT__csa_30_io_out) 
                                                                  << 5U)) 
                                                              | ((0x10U 
                                                                  & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_53.__PVT__csa_30_io_out) 
                                                                     << 4U)) 
                                                                 | ((8U 
                                                                     & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_52.__PVT__csa_30_io_out) 
                                                                        << 3U)) 
                                                                    | ((4U 
                                                                        & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_51.__PVT__csa_30_io_out) 
                                                                           << 2U)) 
                                                                       | ((2U 
                                                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_50.__PVT__csa_30_io_out) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_49.__PVT__csa_30_io_out)))))))))))))))))))) 
            << 0x10U) | (QData)((IData)(((0x8000U & 
                                          ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_48.__PVT__csa_30_io_out) 
                                           << 0xfU)) 
                                         | ((0x4000U 
                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_47.__PVT__csa_30_io_out) 
                                                << 0xeU)) 
                                            | ((0x2000U 
                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_46.__PVT__csa_30_io_out) 
                                                   << 0xdU)) 
                                               | ((0x1000U 
                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_45.__PVT__csa_30_io_out) 
                                                      << 0xcU)) 
                                                  | ((0x800U 
                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_44.__PVT__csa_30_io_out) 
                                                         << 0xbU)) 
                                                     | ((0x400U 
                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_43.__PVT__csa_30_io_out) 
                                                            << 0xaU)) 
                                                        | ((0x200U 
                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_42.__PVT__csa_30_io_out) 
                                                               << 9U)) 
                                                           | ((0x100U 
                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_41.__PVT__csa_30_io_out) 
                                                                  << 8U)) 
                                                              | ((0x80U 
                                                                  & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_40.__PVT__csa_30_io_out) 
                                                                     << 7U)) 
                                                                 | ((0x40U 
                                                                     & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_39.__PVT__csa_30_io_out) 
                                                                        << 6U)) 
                                                                    | ((0x20U 
                                                                        & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_38.__PVT__csa_30_io_out) 
                                                                           << 5U)) 
                                                                       | ((0x10U 
                                                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_37.__PVT__csa_30_io_out) 
                                                                              << 4U)) 
                                                                          | ((8U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_36.__PVT__csa_30_io_out) 
                                                                                << 3U)) 
                                                                             | ((4U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_35.__PVT__csa_30_io_out) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_34.__PVT__csa_30_io_out) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_33.__PVT__csa_30_io_out))))))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__82(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__82\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_67_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_66.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__83(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__83\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_68_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_67.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__84(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__84\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_69_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_68.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__85(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__85\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_70_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_69.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__86(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__86\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_71_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_70.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__87(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__87\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_72_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_71.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__88(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__88\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_73_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_72.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__89(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__89\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_74_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_73.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__90(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__90\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_75_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_74.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__91(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__91\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_76_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_75.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__92(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__92\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_77_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_76.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__93(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__93\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_78_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_77.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__94(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__94\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_79_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_78.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__95(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__95\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_80_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_79.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__96(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__96\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_81_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_80.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__97(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__97\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_82_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_81.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__98(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__98\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_83_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_82.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__99(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__99\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_84_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_83.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__100(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__100\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_85_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_84.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__101(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__101\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_86_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_85.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__102(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__102\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_87_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_86.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__103(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__103\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_88_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_87.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__104(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__104\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_89_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_88.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__105(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__105\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_90_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_89.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}

VL_INLINE_OPT void Vunit___024root___sequent__TOP__106(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__106\n"); );
    // Body
    vlSelf->unit__DOT__walloc_64_mul__DOT__Walloc33bits_91_io_cin 
        = (((0x20000000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_27_io_out) 
                            << 0x1cU)) | ((0x10000000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_28_io_out) 
                                              << 0x1bU)) 
                                          | ((0x8000000U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_29_io_out) 
                                                 << 0x1aU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_20_io_out) 
                                                    << 0x19U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_21_io_out) 
                                                       << 0x18U)) 
                                                   | ((0x1000000U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_22_io_out) 
                                                          << 0x17U)) 
                                                      | ((0x800000U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_23_io_out) 
                                                             << 0x16U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_24_io_out) 
                                                                << 0x15U)) 
                                                            | ((0x200000U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_25_io_out) 
                                                                   << 0x14U)) 
                                                               | ((0x100000U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_26_io_out) 
                                                                      << 0x13U)) 
                                                                  | ((0x80000U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_11_io_out) 
                                                                         << 0x12U)) 
                                                                     | ((0x40000U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_12_io_out) 
                                                                            << 0x11U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_13_io_out) 
                                                                               << 0x10U)) 
                                                                           | ((0x10000U 
                                                                               & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_14_io_out) 
                                                                                << 0xfU)) 
                                                                              | (0x8000U 
                                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_15_io_out) 
                                                                                << 0xeU)))))))))))))))) 
           | ((0x4000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_16_io_out) 
                          << 0xdU)) | ((0x2000U & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_17_io_out) 
                                                   << 0xcU)) 
                                       | ((0x1000U 
                                           & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_18_io_out) 
                                              << 0xbU)) 
                                          | ((0x800U 
                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_19_io_out) 
                                                 << 0xaU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_0_io_out) 
                                                    << 9U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_1_io_out) 
                                                       << 8U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_2_io_out) 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_3_io_out) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_4_io_out) 
                                                                << 5U)) 
                                                            | ((0x20U 
                                                                & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_5_io_out) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_6_io_out) 
                                                                      << 3U)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_7_io_out) 
                                                                         << 2U)) 
                                                                     | ((4U 
                                                                         & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_8_io_out) 
                                                                            << 1U)) 
                                                                        | ((2U 
                                                                            & (IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_9_io_out)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__Walloc33bits_90.__PVT__csa_10_io_out) 
                                                                                >> 1U)))))))))))))))));
}
