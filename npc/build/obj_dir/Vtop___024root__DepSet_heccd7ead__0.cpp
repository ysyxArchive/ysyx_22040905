// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h5ca8612f__0;
    // Body
    __Vtemp_h5ca8612f__0[1U] = ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT____VdfgTmp_h084807ca__0)
                                 ? (IData)(((((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div_io_div_signed) 
                                              & (IData)(
                                                        (vlSelf->top__DOT__exu__DOT__alu_io_src1 
                                                         >> 0x3fU)))
                                              ? (1ULL 
                                                 + 
                                                 (~ vlSelf->top__DOT__exu__DOT__alu_io_src1))
                                              : vlSelf->top__DOT__exu__DOT__alu_io_src1) 
                                            >> 0x20U))
                                 : ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__is_dividing)
                                     ? ((0U == (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__shift_count))
                                         ? vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[1U]
                                         : ((1U & vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__sub[2U])
                                             ? ((vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[0U] 
                                                 >> 0x1fU) 
                                                | (vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[1U] 
                                                   << 1U))
                                             : (((IData)(
                                                         (0x7fffffffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[0U]))))) 
                                                 >> 0x1fU) 
                                                | ((IData)(
                                                           ((0x7fffffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[0U])))) 
                                                            >> 0x20U)) 
                                                   << 1U))))
                                     : vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[1U]));
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__req 
        = (((0U == (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__state)) 
            | (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT___io_in_r_bits_data_T_2)) 
           & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__ifu__DOT__next_valid)));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___req_T_1 
        = ((0U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)) 
           & ((0U == (IData)(vlSelf->top__DOT__exu__DOT__lsu__DOT__wstate)) 
              & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_valid) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__lsu_io_en_w)))));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___req_T 
        = ((0U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)) 
           & ((0U == (IData)(vlSelf->top__DOT__exu__DOT__lsu__DOT__rstate)) 
              & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->top__DOT__exu__DOT__lsu_io_en_r) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_valid)))));
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___addr_T_3 
        = ((1U == (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__state)) 
           & (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__req));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___wmode_T_2 
        = ((0U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)) 
           & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___req_T_1));
    vlSelf->top__DOT__sram_io_w_bits_last = (((IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_uncache) 
                                              & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___req_T_1)) 
                                             | (4U 
                                                == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstate)));
    vlSelf->__VdfgTmp_h9de938e0__0 = (((0U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)) 
                                       & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_uncache)) 
                                      & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___req_T_1));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__req 
        = ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___req_T) 
           | (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___req_T_1));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___io_mem_ar_bits_addr_T_1 
        = ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_uncache) 
           & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___req_T));
    vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_2__DOT__cen 
        = ((0U == (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__state)) 
           | ((IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT___addr_T_3) 
              | (3U == (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__state))));
    vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_aw_valid 
        = ((IData)(vlSelf->__VdfgTmp_h9de938e0__0) 
           | ((2U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)) 
              & ((0U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstate)) 
                 & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___GEN_20))));
    vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_w_valid 
        = ((IData)(vlSelf->__VdfgTmp_h9de938e0__0) 
           | ((2U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)) 
              & (((0U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstate)) 
                  | (4U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstate))) 
                 & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___GEN_20))));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___state_T_22 
        = ((0U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state))
            ? ((IData)(vlSelf->top__DOT__ifu_io_irq)
                ? 0U : ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__req)
                         ? 1U : 0U)) : 0U);
    vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_ar_valid 
        = ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___io_mem_ar_bits_addr_T_1) 
           | ((2U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)) 
              & (0U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__rstate))));
    vlSelf->top__DOT__sram__DOT___wid_T = ((~ (IData)(vlSelf->top__DOT__sram__DOT__wstate)) 
                                           & ((~ (IData)(vlSelf->top__DOT__crossbar__DOT__DeviceArbiter__DOT___T_6)) 
                                              & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_aw_valid)));
    vlSelf->top__DOT__clint__DOT___wstate_T = ((~ (IData)(vlSelf->top__DOT__clint__DOT__wstate)) 
                                               & ((IData)(vlSelf->top__DOT__crossbar__DOT__DeviceArbiter__DOT___T_6) 
                                                  & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_w_valid)));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___wstate_T_4 
        = ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_aw_ready) 
           & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_w_valid));
    vlSelf->top__DOT__sram__DOT___wstate_T = ((~ (IData)(vlSelf->top__DOT__sram__DOT__wstate)) 
                                              & ((~ (IData)(vlSelf->top__DOT__crossbar__DOT__DeviceArbiter__DOT___T_6)) 
                                                 & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_w_valid)));
    if ((1U == ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_ar_valid)
                 ? 2U : 1U))) {
        vlSelf->top__DOT__sram_io_ar_bits_size = 3U;
        vlSelf->top__DOT__sram_io_ar_bits_len = (1U 
                                                 & (~ (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__uncache)));
        vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_ar_valid 
            = (2U == (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__state));
        vlSelf->top__DOT__sram_io_ar_bits_addr = (0xfffffff8U 
                                                  & vlSelf->top__DOT__crossbar__DOT__ICache__DOT__addr);
    } else if ((2U == ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_ar_valid)
                        ? 2U : 1U))) {
        vlSelf->top__DOT__sram_io_ar_bits_size = 3U;
        vlSelf->top__DOT__sram_io_ar_bits_len = (1U 
                                                 & (~ (IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_uncache)));
        vlSelf->top__DOT__sram_io_ar_bits_addr = (IData)(
                                                         ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___io_mem_ar_bits_addr_T_1)
                                                           ? (QData)((IData)(vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_bits_raddr))
                                                           : (QData)((IData)(
                                                                             (0xfffffff8U 
                                                                              & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr)))));
        vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_ar_valid 
            = vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_ar_valid;
    } else {
        vlSelf->top__DOT__sram_io_ar_bits_size = 0U;
        vlSelf->top__DOT__sram_io_ar_bits_len = 0U;
        vlSelf->top__DOT__sram_io_ar_bits_addr = 0U;
        vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_ar_valid = 0U;
    }
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___wstate_T_21 
        = ((0U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstate))
            ? ((IData)(vlSelf->top__DOT__ifu_io_irq)
                ? 0U : (((2U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)) 
                         & ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_aw_ready) 
                            & ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_aw_valid) 
                               & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___wstate_T_4))))
                         ? 4U : 0U)) : 0U);
    vlSelf->__VdfgTmp_h452a76e3__0 = ((QData)((IData)(vlSelf->top__DOT__sram_io_ar_bits_addr)) 
                                      & ((QData)((IData)(
                                                         (~ (IData)(vlSelf->top__DOT__sram_io_ar_bits_len)))) 
                                         << (IData)(vlSelf->top__DOT__sram_io_ar_bits_size)));
    vlSelf->__VdfgTmp_hd24c2de1__0 = ((vlSelf->top__DOT__sram_io_ar_bits_addr 
                                       >> (IData)(vlSelf->top__DOT__sram_io_ar_bits_size)) 
                                      & (IData)(vlSelf->top__DOT__sram_io_ar_bits_len));
    vlSelf->top__DOT__crossbar__DOT__DeviceArbiter__DOT____VdfgTmp_h944f03d4__0 
        = ((0x20000000U <= vlSelf->top__DOT__sram_io_ar_bits_addr) 
           & (0x2000bfffU >= vlSelf->top__DOT__sram_io_ar_bits_addr));
    vlSelf->io_timer_diff_skip = (((IData)(vlSelf->top__DOT__crossbar__DOT__DeviceArbiter__DOT___T_6) 
                                   | (IData)(vlSelf->top__DOT__crossbar__DOT__DeviceArbiter__DOT____VdfgTmp_h944f03d4__0)) 
                                  | (IData)(vlSelf->top__DOT__ifu_io_irq));
    vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_ar_ready 
        = ((IData)(vlSelf->top__DOT__crossbar__DOT__DeviceArbiter__DOT____VdfgTmp_h944f03d4__0)
            ? (IData)(vlSelf->top__DOT__clint_io_in_ar_ready)
            : (IData)(vlSelf->top__DOT__sram_io_ar_ready));
    vlSelf->top__DOT__clint__DOT___rstate_T = ((IData)(vlSelf->top__DOT__clint_io_in_ar_ready) 
                                               & ((IData)(vlSelf->top__DOT__crossbar__DOT__DeviceArbiter__DOT____VdfgTmp_h944f03d4__0) 
                                                  & (IData)(vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_ar_valid)));
    vlSelf->top__DOT__sram__DOT___rstate_T = ((IData)(vlSelf->top__DOT__sram_io_ar_ready) 
                                              & ((~ (IData)(vlSelf->top__DOT__crossbar__DOT__DeviceArbiter__DOT____VdfgTmp_h944f03d4__0)) 
                                                 & (IData)(vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_ar_valid)));
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[0U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[1U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[2U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[3U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[4U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[0U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[1U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[2U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[0U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[1U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[2U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[3U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[4U] = 0U;
        vlSelf->top__DOT__sram__DOT___GEN_10 = 0ULL;
        vlSelf->top__DOT__clint__DOT___GEN_6 = 0ULL;
        vlSelf->top__DOT__clint__DOT___GEN_7 = 0U;
        vlSelf->top__DOT__clint__DOT___GEN_5 = 0ULL;
        vlSelf->top__DOT__sram__DOT___GEN_7 = 0ULL;
        vlSelf->top__DOT__sram__DOT___GEN_5 = 0U;
        vlSelf->top__DOT__sram__DOT___GEN_8 = 0U;
        vlSelf->top__DOT__sram__DOT___GEN_6 = 0ULL;
    } else {
        if (vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__state) {
            vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[0U] 
                = (vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[0U] 
                   << 1U);
            vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[1U] 
                = ((vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[0U] 
                    >> 0x1fU) | (vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[1U] 
                                 << 1U));
            vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[2U] 
                = ((vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[1U] 
                    >> 0x1fU) | (vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[2U] 
                                 << 1U));
            vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[3U] 
                = ((vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[2U] 
                    >> 0x1fU) | (vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[3U] 
                                 << 1U));
            vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[4U] 
                = ((vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[3U] 
                    >> 0x1fU) | (vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[4U] 
                                 << 1U));
        } else if (vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__next_valid) {
            if (vlSelf->top__DOT__exu__DOT__alu__DOT___T_8) {
                vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[0U] 
                    = (IData)(vlSelf->top__DOT__exu__DOT__alu_io_src1);
                vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[1U] 
                    = (IData)((vlSelf->top__DOT__exu__DOT__alu_io_src1 
                               >> 0x20U));
                vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[2U] 
                    = (1U & (IData)((vlSelf->top__DOT__exu__DOT__alu_io_src1 
                                     >> 0x3fU)));
            } else {
                vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[0U] 
                    = (IData)(vlSelf->top__DOT__exu__DOT__alu_io_src1);
                vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[1U] 
                    = (IData)((vlSelf->top__DOT__exu__DOT__alu_io_src1 
                               >> 0x20U));
                vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[2U] = 0U;
            }
            vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[3U] = 0U;
            vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[4U] = 0U;
        } else {
            vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[0U] 
                = vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[0U];
            vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[1U] 
                = vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[1U];
            vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[2U] 
                = vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[2U];
            vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[3U] 
                = vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[3U];
            vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[4U] 
                = vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[4U];
        }
        if (vlSelf->top__DOT__exu__DOT__lsu_io_flush) {
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[0U] 
                = (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__quotient);
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[1U] 
                = (IData)((vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__quotient 
                           >> 0x20U));
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[2U] = 0U;
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[0U] 
                = vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[0U];
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[1U] 
                = vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[1U];
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[2U] 
                = vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[2U];
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[3U] 
                = vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[3U];
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[4U] = 0U;
        } else if (vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT____VdfgTmp_h084807ca__0) {
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[0U] = 0U;
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[1U] = 0U;
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[2U] = 0U;
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[0U] 
                = (IData)((((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div_io_div_signed) 
                            & (IData)((vlSelf->top__DOT__exu__DOT__alu_io_src1 
                                       >> 0x3fU))) ? 
                           (1ULL + (~ vlSelf->top__DOT__exu__DOT__alu_io_src1))
                            : vlSelf->top__DOT__exu__DOT__alu_io_src1));
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[1U] 
                = __Vtemp_h5ca8612f__0[1U];
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[2U] = 0U;
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[3U] = 0U;
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[4U] = 0U;
        } else if (vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__is_dividing) {
            if ((0U == (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__shift_count))) {
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[0U] 
                    = (IData)(((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__quotient_sign)
                                ? (1ULL + (~ vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__quotient))
                                : vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__quotient));
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[1U] 
                    = (IData)((((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__quotient_sign)
                                 ? (1ULL + (~ vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__quotient))
                                 : vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__quotient) 
                               >> 0x20U));
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[2U] = 0U;
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[0U] 
                    = vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[0U];
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[1U] 
                    = __Vtemp_h5ca8612f__0[1U];
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[2U] 
                    = vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[2U];
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[3U] 
                    = vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[3U];
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[4U] = 0U;
            } else if ((1U & vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__sub[2U])) {
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[0U] 
                    = ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__quotient) 
                       << 1U);
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[1U] 
                    = (((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__quotient) 
                        >> 0x1fU) | ((IData)((vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__quotient 
                                              >> 0x20U)) 
                                     << 1U));
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[2U] 
                    = ((IData)((vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__quotient 
                                >> 0x20U)) >> 0x1fU);
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[0U] 
                    = (vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[0U] 
                       << 1U);
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[1U] 
                    = __Vtemp_h5ca8612f__0[1U];
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[2U] 
                    = ((vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[1U] 
                        >> 0x1fU) | (vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[2U] 
                                     << 1U));
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[3U] 
                    = ((vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[2U] 
                        >> 0x1fU) | (vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[3U] 
                                     << 1U));
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[4U] 
                    = (vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[3U] 
                       >> 0x1fU);
            } else {
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[0U] 
                    = (1U | ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__quotient) 
                             << 1U));
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[1U] 
                    = (((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__quotient) 
                        >> 0x1fU) | ((IData)((vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__quotient 
                                              >> 0x20U)) 
                                     << 1U));
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[2U] 
                    = ((IData)((vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__quotient 
                                >> 0x20U)) >> 0x1fU);
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[0U] 
                    = ((IData)((0x7fffffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[0U]))))) 
                       << 1U);
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[1U] 
                    = __Vtemp_h5ca8612f__0[1U];
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[2U] 
                    = (((1U & vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__sub[0U]) 
                        | ((IData)(((0x7fffffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[0U])))) 
                                    >> 0x20U)) >> 0x1fU)) 
                       | (0xfffffffeU & vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__sub[0U]));
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[3U] 
                    = ((1U & vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__sub[1U]) 
                       | (0xfffffffeU & vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__sub[1U]));
                vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[4U] 
                    = (1U & vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__sub[2U]);
            }
        } else {
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[0U] 
                = (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__quotient);
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[1U] 
                = (IData)((vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__quotient 
                           >> 0x20U));
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[2U] = 0U;
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[0U] 
                = vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[0U];
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[1U] 
                = __Vtemp_h5ca8612f__0[1U];
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[2U] 
                = vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[2U];
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[3U] 
                = vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[3U];
            vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[4U] = 0U;
        }
        vlSelf->top__DOT__sram__DOT___GEN_10 = ((IData)(vlSelf->top__DOT__sram_io_w_bits_last)
                                                 ? 0ULL
                                                 : 
                                                (0x7fffffffffULL 
                                                 & (((IData)(vlSelf->top__DOT__sram__DOT___wid_T) 
                                                     & ((~ (IData)(vlSelf->top__DOT__sram__DOT__wstate)) 
                                                        & (IData)(vlSelf->top__DOT__sram__DOT___wstate_T)))
                                                     ? 
                                                    (8ULL 
                                                     + (QData)((IData)(vlSelf->top__DOT__sram_io_aw_bits_addr)))
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__sram__DOT___wstate_T)
                                                      ? 
                                                     ((QData)((IData)(vlSelf->top__DOT__sram__DOT__waddr)) 
                                                      + 
                                                      (1ULL 
                                                       << (IData)(vlSelf->top__DOT__sram__DOT__wsize)))
                                                      : (QData)((IData)(vlSelf->top__DOT__sram__DOT__waddr))))));
        if (vlSelf->top__DOT__clint__DOT___rstate_T) {
            vlSelf->top__DOT__clint__DOT___GEN_6 = vlSelf->__VdfgTmp_h452a76e3__0;
            vlSelf->top__DOT__clint__DOT___GEN_7 = vlSelf->__VdfgTmp_hd24c2de1__0;
            vlSelf->top__DOT__clint__DOT___GEN_5 = 
                (0x7fffffffffULL & (QData)((IData)(vlSelf->top__DOT__sram_io_ar_bits_addr)));
        } else {
            vlSelf->top__DOT__clint__DOT___GEN_6 = (QData)((IData)(vlSelf->top__DOT__clint__DOT__lower_bound_addr));
            vlSelf->top__DOT__clint__DOT___GEN_7 = 
                ((IData)(vlSelf->top__DOT__clint__DOT___raddr_T_5)
                  ? 0U : ((IData)(vlSelf->top__DOT__clint__DOT__rstate)
                           ? (0xffU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__clint__DOT__beatcnt)))
                           : 0U));
            vlSelf->top__DOT__clint__DOT___GEN_5 = 
                (0x7fffffffffULL & ((IData)(vlSelf->top__DOT__clint_io_in_r_bits_last)
                                     ? 0ULL : (((IData)(vlSelf->top__DOT__clint__DOT___rlast_T_1) 
                                                & (IData)(vlSelf->top__DOT__clint__DOT___raddr_T_5))
                                                ? (QData)((IData)(vlSelf->top__DOT__clint__DOT__lower_bound_addr))
                                                : ((IData)(vlSelf->top__DOT__clint__DOT___rlast_T_1)
                                                    ? 
                                                   ((QData)((IData)(vlSelf->top__DOT__clint__DOT__raddr)) 
                                                    + 
                                                    (1ULL 
                                                     << (IData)(vlSelf->top__DOT__clint__DOT__rsize)))
                                                    : (QData)((IData)(vlSelf->top__DOT__clint__DOT__raddr))))));
        }
        if (vlSelf->top__DOT__sram__DOT___rstate_T) {
            vlSelf->top__DOT__sram__DOT___GEN_7 = vlSelf->__VdfgTmp_h452a76e3__0;
            vlSelf->top__DOT__sram__DOT___GEN_5 = ((IData)(vlSelf->top__DOT__crossbar__DOT__DeviceArbiter__DOT____VdfgTmp_h944f03d4__0)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_ar_valid)
                                                       ? 2U
                                                       : 1U))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == 
                                                      ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_ar_valid)
                                                        ? 2U
                                                        : 1U))
                                                      ? 1U
                                                      : 0U)));
            vlSelf->top__DOT__sram__DOT___GEN_8 = vlSelf->__VdfgTmp_hd24c2de1__0;
            vlSelf->top__DOT__sram__DOT___GEN_6 = (0x7fffffffffULL 
                                                   & (QData)((IData)(vlSelf->top__DOT__sram_io_ar_bits_addr)));
        } else {
            vlSelf->top__DOT__sram__DOT___GEN_7 = (QData)((IData)(vlSelf->top__DOT__sram__DOT__lower_bound_addr));
            vlSelf->top__DOT__sram__DOT___GEN_5 = vlSelf->top__DOT__sram__DOT__rid;
            vlSelf->top__DOT__sram__DOT___GEN_8 = ((IData)(vlSelf->top__DOT__sram__DOT___raddr_T_5)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__sram__DOT__rstate)
                                                     ? 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelf->top__DOT__sram__DOT__beatcnt)))
                                                     : 0U));
            vlSelf->top__DOT__sram__DOT___GEN_6 = (0x7fffffffffULL 
                                                   & ((IData)(vlSelf->top__DOT__sram_io_r_bits_last)
                                                       ? 0ULL
                                                       : 
                                                      (((IData)(vlSelf->top__DOT__sram__DOT___rlast_T_1) 
                                                        & (IData)(vlSelf->top__DOT__sram__DOT___raddr_T_5))
                                                        ? (QData)((IData)(vlSelf->top__DOT__sram__DOT__lower_bound_addr))
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__sram__DOT___rlast_T_1)
                                                         ? 
                                                        ((QData)((IData)(vlSelf->top__DOT__sram__DOT__raddr)) 
                                                         + 
                                                         (1ULL 
                                                          << (IData)(vlSelf->top__DOT__sram__DOT__rsize)))
                                                         : (QData)((IData)(vlSelf->top__DOT__sram__DOT__raddr))))));
        }
    }
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___state_T_9 
        = ((((1U == ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_ar_valid)
                      ? 2U : 1U)) & (IData)(vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_ar_ready)) 
            & (2U == (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__state)))
            ? 3U : 2U);
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___rstate_T_19 
        = ((0U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__rstate))
            ? ((IData)(vlSelf->top__DOT__ifu_io_irq)
                ? 0U : (((2U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)) 
                         & (((1U != ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_ar_valid)
                                      ? 2U : 1U)) & 
                             ((2U == ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_ar_valid)
                                       ? 2U : 1U)) 
                              & (IData)(vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_ar_ready))) 
                            & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_ar_valid)))
                         ? 4U : 0U)) : 0U);
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Init
    QData/*63:0*/ top__DOT__exu__DOT__lsu_io_ls_out_bits_rdata;
    top__DOT__exu__DOT__lsu_io_ls_out_bits_rdata = 0;
    QData/*63:0*/ top__DOT__crossbar__DOT__DCache_io_mem_r_bits_data;
    top__DOT__crossbar__DOT__DCache_io_mem_r_bits_data = 0;
    QData/*63:0*/ top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_data;
    top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_data = 0;
    VlWide<4>/*127:0*/ __Vtemp_h7b43cdfd__0;
    VlWide<4>/*127:0*/ __Vtemp_h9a78c636__0;
    VlWide<4>/*127:0*/ __Vtemp_h47273494__0;
    VlWide<4>/*127:0*/ __Vtemp_hb4bd63e1__0;
    VlWide<4>/*127:0*/ __Vtemp_h150adc80__0;
    VlWide<4>/*127:0*/ __Vtemp_hd3d684ad__0;
    VlWide<4>/*127:0*/ __Vtemp_h40f04ae4__0;
    VlWide<4>/*127:0*/ __Vtemp_hab57a7ee__0;
    VlWide<4>/*127:0*/ __Vtemp_h68d6ca44__0;
    // Body
    top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_data 
        = ((2U & (IData)(vlSelf->top__DOT__clint__DOT__rid))
            ? ((0x20004000U == vlSelf->top__DOT__clint__DOT__raddr)
                ? vlSelf->top__DOT__clint__DOT__mtimecmp
                : ((0x2000bff8U == vlSelf->top__DOT__clint__DOT__raddr)
                    ? vlSelf->top__DOT__clint__DOT__mtime
                    : 0ULL)) : vlSelf->top__DOT__sram__DOT__pmem_rdata);
    if ((1U == ((1U == (IData)(vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_id))
                 ? 2U : 1U))) {
        top__DOT__crossbar__DOT__DCache_io_mem_r_bits_data = 0ULL;
        vlSelf->top__DOT__crossbar__DOT__ICache_io_mem_r_bits_data 
            = top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_data;
    } else {
        top__DOT__crossbar__DOT__DCache_io_mem_r_bits_data 
            = ((2U == ((1U == (IData)(vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_id))
                        ? 2U : 1U)) ? top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_data
                : 0ULL);
        vlSelf->top__DOT__crossbar__DOT__ICache_io_mem_r_bits_data = 0ULL;
    }
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___buf_T_7[0U] 
        = (IData)(top__DOT__crossbar__DOT__DCache_io_mem_r_bits_data);
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___buf_T_7[1U] 
        = (IData)((top__DOT__crossbar__DOT__DCache_io_mem_r_bits_data 
                   >> 0x20U));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___buf_T_7[2U] 
        = (IData)((((QData)((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__buf_[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__buf_[2U]))));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___buf_T_7[3U] 
        = (IData)(((((QData)((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__buf_[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__buf_[2U]))) 
                   >> 0x20U));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___buf_T_9[0U] 
        = (IData)((((QData)((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__buf_[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__buf_[0U]))));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___buf_T_9[1U] 
        = (IData)(((((QData)((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__buf_[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__buf_[0U]))) 
                   >> 0x20U));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___buf_T_9[2U] 
        = (IData)(top__DOT__crossbar__DOT__DCache_io_mem_r_bits_data);
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___buf_T_9[3U] 
        = (IData)((top__DOT__crossbar__DOT__DCache_io_mem_r_bits_data 
                   >> 0x20U));
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h7b43cdfd__0, vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q1, 
                  (0x78U & (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr 
                            << 3U)));
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h9a78c636__0, vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q0, 
                  (0x78U & (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr 
                            << 3U)));
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h47273494__0, vlSelf->top__DOT__crossbar__DOT__DCache__DOT__buf_, 
                  (0x78U & (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr 
                            << 3U)));
    vlSelf->top__DOT__exu__DOT__lsu_io_lm_r_bits_data 
        = (((QData)((IData)(((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__uncache)
                              ? (IData)((top__DOT__crossbar__DOT__DCache_io_mem_r_bits_data 
                                         >> 0x20U))
                              : ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___io_in_r_bits_data_T_2)
                                  ? (IData)((((IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_WAY)
                                               ? (((QData)((IData)(
                                                                   __Vtemp_h7b43cdfd__0[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp_h7b43cdfd__0[0U])))
                                               : (((QData)((IData)(
                                                                   __Vtemp_h9a78c636__0[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp_h9a78c636__0[0U])))) 
                                             >> 0x20U))
                                  : ((3U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state))
                                      ? __Vtemp_h47273494__0[1U]
                                      : 0U))))) << 0x20U) 
           | (QData)((IData)(((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__uncache)
                               ? (IData)(top__DOT__crossbar__DOT__DCache_io_mem_r_bits_data)
                               : ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___io_in_r_bits_data_T_2)
                                   ? (IData)(((IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_WAY)
                                               ? (((QData)((IData)(
                                                                   __Vtemp_h7b43cdfd__0[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp_h7b43cdfd__0[0U])))
                                               : (((QData)((IData)(
                                                                   __Vtemp_h9a78c636__0[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp_h9a78c636__0[0U])))))
                                   : ((3U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state))
                                       ? __Vtemp_h47273494__0[0U]
                                       : 0U))))));
    __Vtemp_hb4bd63e1__0[0U] = (IData)(vlSelf->top__DOT__crossbar__DOT__ICache_io_mem_r_bits_data);
    __Vtemp_hb4bd63e1__0[1U] = (IData)((vlSelf->top__DOT__crossbar__DOT__ICache_io_mem_r_bits_data 
                                        >> 0x20U));
    __Vtemp_hb4bd63e1__0[2U] = 0U;
    __Vtemp_hb4bd63e1__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h150adc80__0, __Vtemp_hb4bd63e1__0, 
                  ((IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__cnt) 
                   << 6U));
    if (vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__choose) {
        __Vtemp_hd3d684ad__0[0U] = vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_1_Q[0U];
        __Vtemp_hd3d684ad__0[1U] = vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_1_Q[1U];
        __Vtemp_hd3d684ad__0[2U] = vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_1_Q[2U];
        __Vtemp_hd3d684ad__0[3U] = vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_1_Q[3U];
        __Vtemp_hab57a7ee__0[0U] = vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_3_Q[0U];
        __Vtemp_hab57a7ee__0[1U] = vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_3_Q[1U];
        __Vtemp_hab57a7ee__0[2U] = vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_3_Q[2U];
        __Vtemp_hab57a7ee__0[3U] = vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_3_Q[3U];
    } else {
        __Vtemp_hd3d684ad__0[0U] = vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_Q[0U];
        __Vtemp_hd3d684ad__0[1U] = vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_Q[1U];
        __Vtemp_hd3d684ad__0[2U] = vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_Q[2U];
        __Vtemp_hd3d684ad__0[3U] = vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_Q[3U];
        __Vtemp_hab57a7ee__0[0U] = vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_2_Q[0U];
        __Vtemp_hab57a7ee__0[1U] = vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_2_Q[1U];
        __Vtemp_hab57a7ee__0[2U] = vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_2_Q[2U];
        __Vtemp_hab57a7ee__0[3U] = vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_2_Q[3U];
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h40f04ae4__0, __Vtemp_hd3d684ad__0, 
                  (0x78U & (vlSelf->top__DOT__crossbar__DOT__ICache__DOT__addr 
                            << 3U)));
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h68d6ca44__0, __Vtemp_hab57a7ee__0, 
                  (0x78U & (vlSelf->top__DOT__crossbar__DOT__ICache__DOT__addr 
                            << 3U)));
    vlSelf->top__DOT__ifu_io_lm_r_bits_data = ((IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT___io_in_r_bits_data_T_2)
                                                ? ((IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT____VdfgTmp_h47db3895__0)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     __Vtemp_h40f04ae4__0[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      __Vtemp_h40f04ae4__0[0U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     __Vtemp_h68d6ca44__0[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      __Vtemp_h68d6ca44__0[0U]))))
                                                : (
                                                   ((IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__en_w) 
                                                    & (IData)(vlSelf->top__DOT__crossbar__DOT__ICache_io_mem_r_bits_last))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__uncache)
                                                     ? vlSelf->top__DOT__crossbar__DOT__ICache_io_mem_r_bits_data
                                                     : 
                                                    (vlSelf->top__DOT__crossbar__DOT__ICache__DOT__rdata 
                                                     >> 
                                                     (0x38U 
                                                      & (vlSelf->top__DOT__crossbar__DOT__ICache__DOT__addr 
                                                         << 3U))))
                                                    : 0ULL));
    top__DOT__exu__DOT__lsu_io_ls_out_bits_rdata = 
        ((IData)(vlSelf->top__DOT__exu__DOT__lsu_io_lm_r_valid)
          ? vlSelf->top__DOT__exu__DOT__lsu_io_lm_r_bits_data
          : vlSelf->top__DOT__exu__DOT__lsu__DOT__rdata);
    vlSelf->top__DOT__ifu__DOT__it__DOT__rf[1U] = (QData)((IData)(vlSelf->top__DOT__ifu_io_lm_r_bits_data));
    vlSelf->top__DOT__ifu__DOT__pre_decode_io_j = (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->top__DOT__ifu_io_lm_r_bits_data))) 
                                                   | (IData)(
                                                             ((0x80000063ULL 
                                                               == 
                                                               (0x8000007fULL 
                                                                & vlSelf->top__DOT__ifu_io_lm_r_bits_data)) 
                                                              & ((0U 
                                                                  == 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__ifu_io_lm_r_bits_data 
                                                                              >> 0xcU)))) 
                                                                 | ((1U 
                                                                     == 
                                                                     (7U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__ifu_io_lm_r_bits_data 
                                                                                >> 0xcU)))) 
                                                                    | ((5U 
                                                                        == 
                                                                        (7U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__ifu_io_lm_r_bits_data 
                                                                                >> 0xcU)))) 
                                                                       | ((7U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__ifu_io_lm_r_bits_data 
                                                                                >> 0xcU)))) 
                                                                          | ((4U 
                                                                              == 
                                                                              (7U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__ifu_io_lm_r_bits_data 
                                                                                >> 0xcU)))) 
                                                                             | (6U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ifu_io_lm_r_bits_data 
                                                                                >> 0xcU))))))))))));
    vlSelf->top__DOT__ifu__DOT__pre_decode_io_jump 
        = ((IData)((0x67ULL == (0x707fULL & vlSelf->top__DOT__ifu_io_lm_r_bits_data))) 
           | ((0x73U == (IData)(vlSelf->top__DOT__ifu_io_lm_r_bits_data)) 
              | ((0x30200073U == (IData)(vlSelf->top__DOT__ifu_io_lm_r_bits_data)) 
                 | (0x100073U == (IData)(vlSelf->top__DOT__ifu_io_lm_r_bits_data)))));
    vlSelf->top__DOT__exu_io_out_bits_gpr_val_w = ((IData)(
                                                           (0U 
                                                            != 
                                                            (0xa2a02aU 
                                                             & vlSelf->top__DOT__exu__DOT__EXE_reg_op[0U])))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__alu_io_result 
                                                                                >> 0x1fU)))
                                                                       ? 0xffffffffU
                                                                       : 0U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->top__DOT__exu__DOT__alu_io_result)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x1080000U 
                                                                  & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])) 
                                                                | (IData)(vlSelf->top__DOT__exu__DOT____VdfgTmp_h40d12688__0))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__alu_result 
                                                                                >> 0x1fU)))
                                                                        ? 0xffffffffU
                                                                        : 0U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->top__DOT__exu__DOT__alu_result)))
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__exu__DOT____VdfgTmp_h18c2570c__0)
                                                      ? 
                                                     (vlSelf->top__DOT__exu__DOT__alu_result 
                                                      >> 0x20U)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__exu__DOT___io_csr_en_r_T_2)
                                                       ? vlSelf->top__DOT__exu_io_csr_val_r
                                                       : 
                                                      ((0x40U 
                                                        & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])
                                                        ? 
                                                       ((((1U 
                                                           & (IData)(
                                                                     (top__DOT__exu__DOT__lsu_io_ls_out_bits_rdata 
                                                                      >> 7U)))
                                                           ? 0xffffffffffffffULL
                                                           : 0ULL) 
                                                         << 8U) 
                                                        | (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(top__DOT__exu__DOT__lsu_io_ls_out_bits_rdata)))))
                                                        : 
                                                       ((0x80U 
                                                         & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])
                                                         ? 
                                                        ((((1U 
                                                            & (IData)(
                                                                      (top__DOT__exu__DOT__lsu_io_ls_out_bits_rdata 
                                                                       >> 0xfU)))
                                                            ? 0xffffffffffffULL
                                                            : 0ULL) 
                                                          << 0x10U) 
                                                         | (QData)((IData)(
                                                                           (0xffffU 
                                                                            & (IData)(top__DOT__exu__DOT__lsu_io_ls_out_bits_rdata)))))
                                                         : 
                                                        ((0x100U 
                                                          & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])
                                                          ? 
                                                         (((QData)((IData)(
                                                                           ((1U 
                                                                             & (IData)(
                                                                                (top__DOT__exu__DOT__lsu_io_ls_out_bits_rdata 
                                                                                >> 0x1fU)))
                                                                             ? 0xffffffffU
                                                                             : 0U))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(top__DOT__exu__DOT__lsu_io_ls_out_bits_rdata)))
                                                          : 
                                                         ((0x200U 
                                                           & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])
                                                           ? top__DOT__exu__DOT__lsu_io_ls_out_bits_rdata
                                                           : 
                                                          ((0x4000U 
                                                            & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])
                                                            ? (QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(top__DOT__exu__DOT__lsu_io_ls_out_bits_rdata))))
                                                            : 
                                                           ((0x8000U 
                                                             & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])
                                                             ? (QData)((IData)(
                                                                               (0xffffU 
                                                                                & (IData)(top__DOT__exu__DOT__lsu_io_ls_out_bits_rdata))))
                                                             : 
                                                            ((0x10000U 
                                                              & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])
                                                              ? (QData)((IData)(top__DOT__exu__DOT__lsu_io_ls_out_bits_rdata))
                                                              : 
                                                             ((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x2e840000U 
                                                                        & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])))
                                                               ? vlSelf->top__DOT__exu__DOT__alu_result
                                                               : vlSelf->top__DOT__exu__DOT__alu_io_result))))))))))));
    vlSelf->top__DOT__ifu__DOT___next_pc_T_12 = ((IData)(vlSelf->top__DOT__ifu_io_clearJump)
                                                  ? vlSelf->io_pc
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__ifu__DOT___next_valid_T_5)
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__ifu__DOT__pre_decode_io_j)
                                                    ? 
                                                   (vlSelf->top__DOT__ifu__DOT__IF_reg_pc 
                                                    + (QData)((IData)(
                                                                      ((0x6fU 
                                                                        == 
                                                                        (0x7fU 
                                                                         & (IData)(vlSelf->top__DOT__ifu_io_lm_r_bits_data)))
                                                                        ? 
                                                                       ((((1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__ifu_io_lm_r_bits_data 
                                                                                >> 0x1fU)))
                                                                           ? 0x7ffffffffffULL
                                                                           : 0ULL) 
                                                                         << 0x15U) 
                                                                        | (QData)((IData)(
                                                                                ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_io_lm_r_bits_data 
                                                                                >> 0x1fU)) 
                                                                                << 0x14U)) 
                                                                                | ((0xff000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_io_lm_r_bits_data 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_io_lm_r_bits_data 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | (0x7feU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_io_lm_r_bits_data 
                                                                                >> 0x15U)) 
                                                                                << 1U))))))))
                                                                        : 
                                                                       ((((1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__ifu_io_lm_r_bits_data 
                                                                                >> 0x1fU)))
                                                                           ? 0x7ffffffffffffULL
                                                                           : 0ULL) 
                                                                         << 0xdU) 
                                                                        | (QData)((IData)(
                                                                                ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_io_lm_r_bits_data 
                                                                                >> 0x1fU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_io_lm_r_bits_data 
                                                                                >> 7U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x7e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_io_lm_r_bits_data 
                                                                                >> 0x19U)) 
                                                                                << 5U)) 
                                                                                | (0x1eU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ifu_io_lm_r_bits_data 
                                                                                >> 8U)) 
                                                                                << 1U))))))))))))
                                                    : 
                                                   (4ULL 
                                                    + vlSelf->top__DOT__ifu__DOT__IF_reg_pc))
                                                   : vlSelf->top__DOT__ifu__DOT__IF_reg_pc));
    vlSelf->top__DOT__ifu__DOT__next_valid = ((IData)(vlSelf->top__DOT__ifu_io_irq) 
                                              | ((IData)(vlSelf->top__DOT__ifu_io_clearJump) 
                                                 | ((IData)(vlSelf->top__DOT__ifu_io_p_error) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->top__DOT__ifu__DOT__pre_decode_io_jump) 
                                                         & (IData)(vlSelf->top__DOT__ifu__DOT___next_valid_T_5))) 
                                                       & (IData)(vlSelf->top__DOT__ifu__DOT__IF_reg_valid)))));
    vlSelf->__VdfgTmp_h376cdefd__0 = ((IData)(vlSelf->top__DOT__ifu_io_irq)
                                       ? (QData)((IData)(vlSelf->top__DOT__csr__DOT__csr_1))
                                       : ((IData)(vlSelf->top__DOT__ifu_io_p_error)
                                           ? (QData)((IData)(vlSelf->top__DOT__exu_io_out_bits_pc_dnpc))
                                           : vlSelf->top__DOT__ifu__DOT___next_pc_T_12));
    if (vlSelf->top__DOT__crossbar__DOT__ICache__DOT__en_w) {
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_D[0U] 
            = __Vtemp_h150adc80__0[0U];
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_D[1U] 
            = __Vtemp_h150adc80__0[1U];
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_D[2U] 
            = __Vtemp_h150adc80__0[2U];
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_D[3U] 
            = __Vtemp_h150adc80__0[3U];
        vlSelf->__VdfgTmp_he29ed13b__0 = (1U & (vlSelf->top__DOT__crossbar__DOT__ICache__DOT__addr 
                                                >> 4U));
    } else {
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_D[0U] = 0U;
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_D[1U] = 0U;
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_D[2U] = 0U;
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_D[3U] = 0U;
        vlSelf->__VdfgTmp_he29ed13b__0 = (1U & (IData)(
                                                       (vlSelf->__VdfgTmp_h376cdefd__0 
                                                        >> 4U)));
    }
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__req 
        = (((0U == (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__state)) 
            | (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT___io_in_r_bits_data_T_2)) 
           & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__ifu__DOT__next_valid)));
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___addr_T_3 
        = ((1U == (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__state)) 
           & (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__req));
    vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_2__DOT__cen 
        = ((0U == (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__state)) 
           | ((IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT___addr_T_3) 
              | (3U == (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__state))));
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/cyh/ysyx-workbench/npc/vsrc/top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
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
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/cyh/ysyx-workbench/npc/vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/cyh/ysyx-workbench/npc/vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_mul_sel & 0xfeU))) {
        Verilated::overWidthError("io_mul_sel");}
}
#endif  // VL_DEBUG
