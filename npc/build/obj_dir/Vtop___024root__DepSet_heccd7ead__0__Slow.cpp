// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/cyh/ysyx-workbench/npc/vsrc/top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlWide<12>/*383:0*/ Vtop__ConstPool__CONST_h39778408_0;
extern const VlWide<12>/*383:0*/ Vtop__ConstPool__CONST_h9ba48564_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ top__DOT__exu__DOT__lsu_io_ls_out_bits_rdata;
    top__DOT__exu__DOT__lsu_io_ls_out_bits_rdata = 0;
    QData/*63:0*/ top__DOT__crossbar__DOT__DCache_io_mem_r_bits_data;
    top__DOT__crossbar__DOT__DCache_io_mem_r_bits_data = 0;
    QData/*63:0*/ top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_data;
    top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_data = 0;
    VlWide<5>/*159:0*/ __Vtemp_hecc4542b__0;
    VlWide<5>/*159:0*/ __Vtemp_h6177589a__0;
    VlWide<5>/*159:0*/ __Vtemp_hf9e17fd9__0;
    VlWide<5>/*159:0*/ __Vtemp_h6177589a__1;
    VlWide<5>/*159:0*/ __Vtemp_h7553f48b__0;
    VlWide<4>/*127:0*/ __Vtemp_haf05d848__0;
    VlWide<4>/*127:0*/ __Vtemp_h420812a0__0;
    VlWide<4>/*127:0*/ __Vtemp_h95a545f6__0;
    VlWide<4>/*127:0*/ __Vtemp_h07c7a8b2__0;
    VlWide<3>/*95:0*/ __Vtemp_hfdacfbe1__0;
    VlWide<3>/*95:0*/ __Vtemp_h343d5488__0;
    VlWide<3>/*95:0*/ __Vtemp_h32d8c54f__0;
    VlWide<12>/*383:0*/ __Vtemp_h534a28cd__0;
    VlWide<4>/*127:0*/ __Vtemp_hb4bd63e1__0;
    VlWide<4>/*127:0*/ __Vtemp_h150adc80__0;
    VlWide<4>/*127:0*/ __Vtemp_hd3d684ad__0;
    VlWide<4>/*127:0*/ __Vtemp_h40f04ae4__0;
    VlWide<4>/*127:0*/ __Vtemp_hab57a7ee__0;
    VlWide<4>/*127:0*/ __Vtemp_h68d6ca44__0;
    VlWide<4>/*127:0*/ __Vtemp_h7b43cdfd__0;
    VlWide<4>/*127:0*/ __Vtemp_h9a78c636__0;
    VlWide<4>/*127:0*/ __Vtemp_h47273494__0;
    VlWide<5>/*159:0*/ __Vtemp_h5ca8612f__0;
    VlWide<3>/*95:0*/ __Vtemp_h8acdfc31__1;
    VlWide<3>/*95:0*/ __Vtemp_haa34cb33__0;
    VlWide<3>/*95:0*/ __Vtemp_hb8308970__0;
    VlWide<3>/*95:0*/ __Vtemp_h42d850f5__0;
    VlWide<3>/*95:0*/ __Vtemp_h435fb019__0;
    VlWide<3>/*95:0*/ __Vtemp_h9decc0cb__0;
    // Body
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul_io_mul_ready 
        = (1U & (~ (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__state)));
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___cnt_T_5 
        = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__cnt)));
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___shift_count_T_1 
        = (0x7fU & ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__shift_count) 
                    - (IData)(1U)));
    vlSelf->top__DOT__csr__DOT___csr_0_T_10 = ((0xffffffffffffff00ULL 
                                                & vlSelf->top__DOT__csr__DOT__csr_0) 
                                               | (QData)((IData)(
                                                                 ((0x80U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT__csr__DOT__csr_0 
                                                                               >> 3U)) 
                                                                      << 7U)) 
                                                                  | ((0x70U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT__csr__DOT__csr_0 
                                                                                >> 4U)) 
                                                                         << 4U)) 
                                                                     | (7U 
                                                                        & (IData)(vlSelf->top__DOT__csr__DOT__csr_0)))))));
    vlSelf->top__DOT__csr__DOT___csr_0_T_19 = ((0xffffffffffffff00ULL 
                                                & vlSelf->top__DOT__csr__DOT__csr_0) 
                                               | (QData)((IData)(
                                                                 (0x80U 
                                                                  | ((0x70U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT__csr__DOT__csr_0 
                                                                                >> 4U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT__csr__DOT__csr_0 
                                                                                >> 7U)) 
                                                                            << 3U)) 
                                                                        | (7U 
                                                                           & (IData)(vlSelf->top__DOT__csr__DOT__csr_0))))))));
    vlSelf->top__DOT__sram__DOT___rcnt_T_7 = (0xffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sram__DOT__rcnt)));
    vlSelf->top__DOT__clint__DOT___mtime_T_8 = (1ULL 
                                                + vlSelf->top__DOT__clint__DOT__mtime);
    vlSelf->top__DOT__clint__DOT___rcnt_T_7 = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__clint__DOT__rcnt)));
    vlSelf->io_valid = vlSelf->top__DOT__wbu__DOT__WB_reg_valid;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___hit_num_T_4 
        = ((IData)(1U) + vlSelf->top__DOT__crossbar__DOT__ICache__DOT__hit_num);
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___inst_num_T_4 
        = ((IData)(1U) + vlSelf->top__DOT__crossbar__DOT__ICache__DOT__inst_num);
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___hit_num_T_4 
        = ((IData)(1U) + vlSelf->top__DOT__crossbar__DOT__DCache__DOT__hit_num);
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___inst_num_T_4 
        = ((IData)(1U) + vlSelf->top__DOT__crossbar__DOT__DCache__DOT__inst_num);
    vlSelf->io_B_num = vlSelf->top__DOT__ifu__DOT__B_num;
    vlSelf->top__DOT__ifu__DOT___B_num_T_4 = (1ULL 
                                              + vlSelf->top__DOT__ifu__DOT__B_num);
    vlSelf->io_B_Error = vlSelf->top__DOT__ifu__DOT__B_Error;
    vlSelf->top__DOT__ifu__DOT___B_Error_T_2 = (1ULL 
                                                + vlSelf->top__DOT__ifu__DOT__B_Error);
    vlSelf->io_block_num = vlSelf->top__DOT__ifu__DOT__block_num;
    vlSelf->top__DOT__ifu__DOT___block_num_T_4 = (1ULL 
                                                  + vlSelf->top__DOT__ifu__DOT__block_num);
    vlSelf->io_mul_num = vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__mul_num;
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT___mul_num_T_1 
        = (1ULL + vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__mul_num);
    vlSelf->io_div_num = vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__div_num;
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___div_num_T_1 
        = (1ULL + vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__div_num);
    VL_SHIFTR_WWI(129,129,32, __Vtemp_hecc4542b__0, vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__b, 1U);
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___b_T[0U] 
        = __Vtemp_hecc4542b__0[0U];
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___b_T[1U] 
        = __Vtemp_hecc4542b__0[1U];
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___b_T[2U] 
        = __Vtemp_hecc4542b__0[2U];
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___b_T[3U] 
        = __Vtemp_hecc4542b__0[3U];
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___b_T[4U] 
        = (1U & __Vtemp_hecc4542b__0[4U]);
    vlSelf->top__DOT__clint__DOT___cnt_T_2 = (1ULL 
                                              + vlSelf->top__DOT__clint__DOT__cnt);
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__lfsr8__DOT___x_T_8 
        = ((0x80U & (VL_REDXOR_8((0x1dU & (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__lfsr8__DOT__x))) 
                     << 7U)) | (0x7fU & ((IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__lfsr8__DOT__x) 
                                         >> 1U)));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__lfsr8__DOT___x_T_8 
        = ((0x80U & (VL_REDXOR_8((0x1dU & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__lfsr8__DOT__x))) 
                     << 7U)) | (0x7fU & ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__lfsr8__DOT__x) 
                                         >> 1U)));
    if (vlSelf->top__DOT__wbu__DOT__state) {
        vlSelf->top__DOT__wbu_io_gpr_en_w = vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_en_w;
        vlSelf->top__DOT__wbu_io_csr_en_w = vlSelf->top__DOT__wbu__DOT__WB_reg_csr_en_w;
        vlSelf->top__DOT__wbu_io_csr_no = vlSelf->top__DOT__wbu__DOT__WB_reg_csr_no;
    } else {
        vlSelf->top__DOT__wbu_io_gpr_en_w = 0U;
        vlSelf->top__DOT__wbu_io_csr_en_w = 0U;
        vlSelf->top__DOT__wbu_io_csr_no = 0ULL;
    }
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__last 
        = ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__cnt) 
           == (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__mulBits));
    __Vtemp_h6177589a__0[0U] = vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[0U];
    __Vtemp_h6177589a__0[1U] = vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[1U];
    __Vtemp_h6177589a__0[2U] = vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[2U];
    __Vtemp_h6177589a__0[3U] = vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[3U];
    __Vtemp_h6177589a__0[4U] = vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[4U];
    VL_SUB_W(5, __Vtemp_hf9e17fd9__0, vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__result, __Vtemp_h6177589a__0);
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___s_T_3[0U] 
        = __Vtemp_hf9e17fd9__0[0U];
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___s_T_3[1U] 
        = __Vtemp_hf9e17fd9__0[1U];
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___s_T_3[2U] 
        = __Vtemp_hf9e17fd9__0[2U];
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___s_T_3[3U] 
        = __Vtemp_hf9e17fd9__0[3U];
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___s_T_3[4U] 
        = (3U & __Vtemp_hf9e17fd9__0[4U]);
    __Vtemp_h6177589a__1[0U] = vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[0U];
    __Vtemp_h6177589a__1[1U] = vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[1U];
    __Vtemp_h6177589a__1[2U] = vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[2U];
    __Vtemp_h6177589a__1[3U] = vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[3U];
    __Vtemp_h6177589a__1[4U] = vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a[4U];
    VL_ADD_W(5, __Vtemp_h7553f48b__0, vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__result, __Vtemp_h6177589a__1);
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___s_T_6[0U] 
        = __Vtemp_h7553f48b__0[0U];
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___s_T_6[1U] 
        = __Vtemp_h7553f48b__0[1U];
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___s_T_6[2U] 
        = __Vtemp_h7553f48b__0[2U];
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___s_T_6[3U] 
        = __Vtemp_h7553f48b__0[3U];
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___s_T_6[4U] 
        = (3U & __Vtemp_h7553f48b__0[4U]);
    vlSelf->top__DOT__sram__DOT___wstate_T_4 = ((~ 
                                                 ((IData)(vlSelf->top__DOT__clint__DOT__wid) 
                                                  >> 1U)) 
                                                & (IData)(vlSelf->top__DOT__sram__DOT__wstate));
    vlSelf->top__DOT__clint__DOT___wstate_T_4 = (((IData)(vlSelf->top__DOT__clint__DOT__wid) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->top__DOT__clint__DOT__wstate));
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___valid_T_2 
        = ((~ (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__uncache)) 
           & (2U == (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__state)));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___rmode_T_4 
        = ((0U != (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)) 
           & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__rmode));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___wmode_T_4 
        = ((0U != (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)) 
           & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wmode));
    vlSelf->io_hitrate_i = (((QData)((IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__inst_num)) 
                             << 0x20U) | (QData)((IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__hit_num)));
    vlSelf->io_hitrate_d = (((QData)((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__inst_num)) 
                             << 0x20U) | (QData)((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__hit_num)));
    vlSelf->top__DOT__ifu__DOT__it__DOT__rf[0U] = (QData)((IData)(vlSelf->top__DOT__ifu__DOT__IF_reg_pc));
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_11 
        = ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__is_dividing) 
           & ((0U == (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__shift_count)) 
              | (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__out_valid)));
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_5 
        = ((0U == (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__shift_count))
            ? ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__remainder_sign)
                ? (1ULL + (~ (((QData)((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[2U])))))
                : (((QData)((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[2U]))))
            : vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__remainder);
    vlSelf->top__DOT__csr__DOT__p__DOT__rf[0U] = vlSelf->top__DOT__csr__DOT__csr_0;
    vlSelf->top__DOT__csr__DOT__p__DOT__rf[1U] = vlSelf->top__DOT__csr__DOT__csr_1;
    vlSelf->top__DOT__csr__DOT__p__DOT__rf[2U] = vlSelf->top__DOT__csr__DOT__csr_2;
    vlSelf->top__DOT__csr__DOT__p__DOT__rf[3U] = vlSelf->top__DOT__csr__DOT__csr_3;
    vlSelf->top__DOT__csr__DOT__p__DOT__rf[4U] = vlSelf->top__DOT__csr__DOT__csr_4;
    vlSelf->top__DOT__csr__DOT__p__DOT__rf[5U] = vlSelf->top__DOT__csr__DOT__csr_5;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___GEN_10 
        = (((vlSelf->top__DOT__crossbar__DOT__ICache__DOT__addr 
             >> 4U) & (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__way))
            ? (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__valid_1_1)
            : ((1U & ((~ (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__way)) 
                      & (vlSelf->top__DOT__crossbar__DOT__ICache__DOT__addr 
                         >> 4U))) ? (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__valid_1_0)
                : (((~ (vlSelf->top__DOT__crossbar__DOT__ICache__DOT__addr 
                        >> 4U)) & (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__way))
                    ? (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__valid_0_1)
                    : (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__valid_0_0))));
    vlSelf->top__DOT__idu__DOT__typ_t_1 = ((0x37U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__idu__DOT__ID_reg_inst)) 
                                           | (0x17U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_bits_wmask 
        = ((0x400U & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])
            ? 1U : ((0x800U & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])
                     ? 3U : ((0x1000U & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])
                              ? 0xfU : ((0x2000U & 
                                         vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])
                                         ? 0xffU : 0U))));
    vlSelf->top__DOT__csr__DOT___map_w_T_11 = ((0x300U 
                                                == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_csr_idx_w))
                                                ? 0U
                                                : (
                                                   (0x305U 
                                                    == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_csr_idx_w))
                                                    ? 1U
                                                    : 
                                                   ((0x341U 
                                                     == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_csr_idx_w))
                                                     ? 2U
                                                     : 
                                                    ((0x342U 
                                                      == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_csr_idx_w))
                                                      ? 3U
                                                      : 
                                                     ((0x304U 
                                                       == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_csr_idx_w))
                                                       ? 4U
                                                       : 
                                                      ((0x344U 
                                                        == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_csr_idx_w))
                                                        ? 5U
                                                        : 0U))))));
    __Vtemp_haf05d848__0[0U] = (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wdata);
    __Vtemp_haf05d848__0[1U] = (IData)((vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wdata 
                                        >> 0x20U));
    __Vtemp_haf05d848__0[2U] = 0U;
    __Vtemp_haf05d848__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h420812a0__0, __Vtemp_haf05d848__0, 
                  (0x78U & (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr 
                            << 3U)));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wdata_map[0U] 
        = __Vtemp_h420812a0__0[0U];
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wdata_map[1U] 
        = __Vtemp_h420812a0__0[1U];
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wdata_map[2U] 
        = __Vtemp_h420812a0__0[2U];
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wdata_map[3U] 
        = __Vtemp_h420812a0__0[3U];
    __Vtemp_h95a545f6__0[0U] = (IData)(((1U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb))
                                         ? 0xffULL : 
                                        ((3U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb))
                                          ? 0xffffULL
                                          : ((0xfU 
                                              == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb))
                                              ? 0xffffffffULL
                                              : ((0xffU 
                                                  == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb))
                                                  ? 0xffffffffffffffffULL
                                                  : 0ULL)))));
    __Vtemp_h95a545f6__0[1U] = (IData)((((1U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb))
                                          ? 0xffULL
                                          : ((3U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb))
                                              ? 0xffffULL
                                              : ((0xfU 
                                                  == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb))
                                                  ? 0xffffffffULL
                                                  : 
                                                 ((0xffU 
                                                   == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb))
                                                   ? 0xffffffffffffffffULL
                                                   : 0ULL)))) 
                                        >> 0x20U));
    __Vtemp_h95a545f6__0[2U] = 0U;
    __Vtemp_h95a545f6__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h07c7a8b2__0, __Vtemp_h95a545f6__0, 
                  (0x78U & (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr 
                            << 3U)));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb_map[0U] 
        = __Vtemp_h07c7a8b2__0[0U];
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb_map[1U] 
        = __Vtemp_h07c7a8b2__0[1U];
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb_map[2U] 
        = __Vtemp_h07c7a8b2__0[2U];
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb_map[3U] 
        = __Vtemp_h07c7a8b2__0[3U];
    vlSelf->io_pc = (QData)((IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_pc_dnpc));
    vlSelf->top__DOT__sram__DOT___raddr_T_5 = ((0xffU 
                                                == (IData)(vlSelf->top__DOT__sram__DOT__beatcnt)) 
                                               | ((IData)(vlSelf->top__DOT__sram__DOT__beatcnt) 
                                                  == (IData)(vlSelf->top__DOT__sram__DOT__rlen)));
    vlSelf->top__DOT__clint__DOT___raddr_T_5 = ((0xffU 
                                                 == (IData)(vlSelf->top__DOT__clint__DOT__beatcnt)) 
                                                | ((IData)(vlSelf->top__DOT__clint__DOT__beatcnt) 
                                                   == (IData)(vlSelf->top__DOT__clint__DOT__rlen)));
    __Vtemp_hfdacfbe1__0[0U] = ((vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[2U] 
                                 << 1U) | (vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[1U] 
                                           >> 0x1fU));
    __Vtemp_hfdacfbe1__0[1U] = ((vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[3U] 
                                 << 1U) | (vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[2U] 
                                           >> 0x1fU));
    __Vtemp_hfdacfbe1__0[2U] = (vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend[3U] 
                                >> 0x1fU);
    VL_SUB_W(3, __Vtemp_h343d5488__0, __Vtemp_hfdacfbe1__0, vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__divisor);
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__sub[0U] 
        = __Vtemp_h343d5488__0[0U];
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__sub[1U] 
        = __Vtemp_h343d5488__0[1U];
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__sub[2U] 
        = (1U & __Vtemp_h343d5488__0[2U]);
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___dirty_T_2 
        = ((1U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)) 
           & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wmode));
    vlSelf->top__DOT__gpr__DOT___GEN_94 = ((0x1eU == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                            ? vlSelf->top__DOT__gpr__DOT__gpr_30
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                ? vlSelf->top__DOT__gpr__DOT__gpr_29
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                    ? vlSelf->top__DOT__gpr__DOT__gpr_28
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                     ? vlSelf->top__DOT__gpr__DOT__gpr_27
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                      ? vlSelf->top__DOT__gpr__DOT__gpr_26
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                       ? vlSelf->top__DOT__gpr__DOT__gpr_25
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                        ? vlSelf->top__DOT__gpr__DOT__gpr_24
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                         ? vlSelf->top__DOT__gpr__DOT__gpr_23
                                                         : 
                                                        ((0x16U 
                                                          == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                          ? vlSelf->top__DOT__gpr__DOT__gpr_22
                                                          : 
                                                         ((0x15U 
                                                           == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                           ? vlSelf->top__DOT__gpr__DOT__gpr_21
                                                           : 
                                                          ((0x14U 
                                                            == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                            ? vlSelf->top__DOT__gpr__DOT__gpr_20
                                                            : 
                                                           ((0x13U 
                                                             == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                             ? vlSelf->top__DOT__gpr__DOT__gpr_19
                                                             : 
                                                            ((0x12U 
                                                              == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                              ? vlSelf->top__DOT__gpr__DOT__gpr_18
                                                              : 
                                                             ((0x11U 
                                                               == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                               ? vlSelf->top__DOT__gpr__DOT__gpr_17
                                                               : 
                                                              ((0x10U 
                                                                == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                                ? vlSelf->top__DOT__gpr__DOT__gpr_16
                                                                : 
                                                               ((0xfU 
                                                                 == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                                 ? vlSelf->top__DOT__gpr__DOT__gpr_15
                                                                 : 
                                                                ((0xeU 
                                                                  == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                                  ? vlSelf->top__DOT__gpr__DOT__gpr_14
                                                                  : 
                                                                 ((0xdU 
                                                                   == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                                   ? vlSelf->top__DOT__gpr__DOT__gpr_13
                                                                   : 
                                                                  ((0xcU 
                                                                    == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                                    ? vlSelf->top__DOT__gpr__DOT__gpr_12
                                                                    : 
                                                                   ((0xbU 
                                                                     == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                                     ? vlSelf->top__DOT__gpr__DOT__gpr_11
                                                                     : 
                                                                    ((0xaU 
                                                                      == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                                      ? vlSelf->top__DOT__gpr__DOT__gpr_10
                                                                      : 
                                                                     ((9U 
                                                                       == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                                       ? vlSelf->top__DOT__gpr__DOT__gpr_9
                                                                       : 
                                                                      ((8U 
                                                                        == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                                        ? vlSelf->top__DOT__gpr__DOT__gpr_8
                                                                        : 
                                                                       ((7U 
                                                                         == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                                         ? vlSelf->top__DOT__gpr__DOT__gpr_7
                                                                         : 
                                                                        ((6U 
                                                                          == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                                          ? vlSelf->top__DOT__gpr__DOT__gpr_6
                                                                          : 
                                                                         ((5U 
                                                                           == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                                           ? vlSelf->top__DOT__gpr__DOT__gpr_5
                                                                           : 
                                                                          ((4U 
                                                                            == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                                            ? vlSelf->top__DOT__gpr__DOT__gpr_4
                                                                            : 
                                                                           ((3U 
                                                                             == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                                             ? vlSelf->top__DOT__gpr__DOT__gpr_3
                                                                             : 
                                                                            ((2U 
                                                                              == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                                              ? vlSelf->top__DOT__gpr__DOT__gpr_2
                                                                              : 
                                                                             ((1U 
                                                                               == (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w))
                                                                               ? vlSelf->top__DOT__gpr__DOT__gpr_1
                                                                               : 0ULL))))))))))))))))))))))))))))));
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[1U] = vlSelf->top__DOT__gpr__DOT__gpr_1;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[2U] = vlSelf->top__DOT__gpr__DOT__gpr_2;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[3U] = vlSelf->top__DOT__gpr__DOT__gpr_3;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[4U] = vlSelf->top__DOT__gpr__DOT__gpr_4;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[5U] = vlSelf->top__DOT__gpr__DOT__gpr_5;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[6U] = vlSelf->top__DOT__gpr__DOT__gpr_6;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[7U] = vlSelf->top__DOT__gpr__DOT__gpr_7;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[8U] = vlSelf->top__DOT__gpr__DOT__gpr_8;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[9U] = vlSelf->top__DOT__gpr__DOT__gpr_9;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0xaU] = vlSelf->top__DOT__gpr__DOT__gpr_10;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0xbU] = vlSelf->top__DOT__gpr__DOT__gpr_11;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0xcU] = vlSelf->top__DOT__gpr__DOT__gpr_12;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0xdU] = vlSelf->top__DOT__gpr__DOT__gpr_13;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0xeU] = vlSelf->top__DOT__gpr__DOT__gpr_14;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0xfU] = vlSelf->top__DOT__gpr__DOT__gpr_15;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0x10U] = vlSelf->top__DOT__gpr__DOT__gpr_16;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0x11U] = vlSelf->top__DOT__gpr__DOT__gpr_17;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0x12U] = vlSelf->top__DOT__gpr__DOT__gpr_18;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0x13U] = vlSelf->top__DOT__gpr__DOT__gpr_19;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0x14U] = vlSelf->top__DOT__gpr__DOT__gpr_20;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0x15U] = vlSelf->top__DOT__gpr__DOT__gpr_21;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0x16U] = vlSelf->top__DOT__gpr__DOT__gpr_22;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0x17U] = vlSelf->top__DOT__gpr__DOT__gpr_23;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0x18U] = vlSelf->top__DOT__gpr__DOT__gpr_24;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0x19U] = vlSelf->top__DOT__gpr__DOT__gpr_25;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0x1aU] = vlSelf->top__DOT__gpr__DOT__gpr_26;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0x1bU] = vlSelf->top__DOT__gpr__DOT__gpr_27;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0x1cU] = vlSelf->top__DOT__gpr__DOT__gpr_28;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0x1dU] = vlSelf->top__DOT__gpr__DOT__gpr_29;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0x1eU] = vlSelf->top__DOT__gpr__DOT__gpr_30;
    vlSelf->top__DOT__gpr__DOT__p__DOT__rf[0x1fU] = vlSelf->top__DOT__gpr__DOT__gpr_31;
    if (vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__choose) {
        vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q0[0U] 
            = vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_1_Q[0U];
        vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q0[1U] 
            = vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_1_Q[1U];
        vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q0[2U] 
            = vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_1_Q[2U];
        vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q0[3U] 
            = vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_1_Q[3U];
        vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q1[0U] 
            = vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_3_Q[0U];
        vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q1[1U] 
            = vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_3_Q[1U];
        vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q1[2U] 
            = vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_3_Q[2U];
        vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q1[3U] 
            = vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_3_Q[3U];
    } else {
        vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q0[0U] 
            = vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_Q[0U];
        vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q0[1U] 
            = vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_Q[1U];
        vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q0[2U] 
            = vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_Q[2U];
        vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q0[3U] 
            = vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_Q[3U];
        vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q1[0U] 
            = vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_2_Q[0U];
        vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q1[1U] 
            = vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_2_Q[1U];
        vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q1[2U] 
            = vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_2_Q[2U];
        vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q1[3U] 
            = vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_2_Q[3U];
    }
    vlSelf->top__DOT__ifu_io_clearJump = ((IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_isJump) 
                                          & (IData)(vlSelf->top__DOT__wbu__DOT__state));
    vlSelf->top__DOT__idu__DOT__op_t_13 = (IData)((0x103bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_35 = (IData)((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_34 = (IData)((0x4063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_33 = (IData)((0x7063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_32 = (IData)((0x5063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_31 = (IData)((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_30 = (IData)((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__exu__DOT____VdfgTmp_h18c2570c__0 
        = (IData)((0U != (0x700000U & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___GEN_20 
        = ((IData)(((0x30U == (0x30U & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr)) 
                    & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__way)))
            ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_3_1)
            : (((~ (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__way)) 
                & (0x30U == (0x30U & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr)))
                ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_3_0)
                : ((IData)(((0x20U == (0x30U & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr)) 
                            & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__way)))
                    ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_2_1)
                    : (((~ (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__way)) 
                        & (0x20U == (0x30U & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr)))
                        ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_2_0)
                        : ((IData)(((0x10U == (0x30U 
                                               & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr)) 
                                    & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__way)))
                            ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_1_1)
                            : (((~ (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__way)) 
                                & (0x10U == (0x30U 
                                             & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr)))
                                ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_1_0)
                                : ((IData)(((0U == 
                                             (0x30U 
                                              & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr)) 
                                            & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__way)))
                                    ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_0_1)
                                    : (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_0_0))))))));
    vlSelf->top__DOT__idu__DOT__op_t_45 = (IData)((0x3023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_44 = (IData)((0x2023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_43 = (IData)((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_42 = (IData)((0x23U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_62 = (IData)((0x200703bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_60 = (IData)((0x200603bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_56 = (IData)((0x200403bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_64 = (IData)((0x2073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_63 = (IData)((0x1073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_37 = (IData)((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_29 = (IData)((0x3013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_28 = (IData)((0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_11 = (IData)((0x4013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_9 = (IData)((0x6013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_7 = (IData)((0x7013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_3 = (IData)((0x1bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_2 = (IData)((0x13U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_48 = (IData)((0x6003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_47 = (IData)((0x5003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_46 = (IData)((0x4003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_41 = (IData)((0x3003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_40 = (IData)((0x2003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_39 = (IData)((0x1003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT__op_t_38 = (IData)((3U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    if ((2U & (IData)(vlSelf->top__DOT__clint__DOT__rid))) {
        top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_data 
            = ((0x20004000U == vlSelf->top__DOT__clint__DOT__raddr)
                ? vlSelf->top__DOT__clint__DOT__mtimecmp
                : ((0x2000bff8U == vlSelf->top__DOT__clint__DOT__raddr)
                    ? vlSelf->top__DOT__clint__DOT__mtime
                    : 0ULL));
        vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_r_valid 
            = vlSelf->top__DOT__clint__DOT__rstate;
        vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_id 
            = (1U & (IData)(vlSelf->top__DOT__clint__DOT__rid));
    } else {
        top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_data 
            = vlSelf->top__DOT__sram__DOT__pmem_rdata;
        vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_r_valid 
            = vlSelf->top__DOT__sram__DOT__rstate;
        vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_id 
            = vlSelf->top__DOT__sram__DOT__rid;
    }
    vlSelf->top__DOT__idu__DOT___op_t_6_T_4 = (IData)(
                                                      (0x7033U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT___op_t_8_T_4 = (IData)(
                                                      (0x6033U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT___op_t_10_T_4 = (IData)(
                                                       (0x4033U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT___op_t_12_T_4 = (IData)(
                                                       (0x1033U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT___op_t_26_T_4 = (IData)(
                                                       (0x2033U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT___op_t_27_T_4 = (IData)(
                                                       (0x3033U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT____VdfgTmp_hdbd884e4__0 
        = (IData)((0x1000U == (0xfc007000U & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT___op_t_18_T_4 = (IData)(
                                                       (0x5013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT___op_t_19_T_4 = (IData)(
                                                       (0x501bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT___op_t_0_T_4 = (IData)(
                                                      (0x33U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT___op_t_1_T_4 = (IData)(
                                                      (0x3bU 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT___op_t_16_T_4 = (IData)(
                                                       (0x5033U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__idu__DOT___op_t_17_T_4 = (IData)(
                                                       (0x503bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__idu__DOT__ID_reg_inst)));
    vlSelf->top__DOT__exu__DOT__alu_io_validout = ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__out_valid) 
                                                   | ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__cnt) 
                                                      == 
                                                      (0x7fU 
                                                       & ((IData)(1U) 
                                                          + (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__mulBits)))));
    vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_b_valid 
        = ((2U & (IData)(vlSelf->top__DOT__clint__DOT__wid))
            ? (IData)(vlSelf->top__DOT__clint__DOT__wstate)
            : (IData)(vlSelf->top__DOT__sram__DOT__wstate));
    vlSelf->top__DOT__csr_io_clint_mtip = (vlSelf->top__DOT__clint__DOT__mtime 
                                           >= vlSelf->top__DOT__clint__DOT__mtimecmp);
    vlSelf->top__DOT__csr_io_en_mtip = (1U & ((IData)(
                                                      (vlSelf->top__DOT__csr__DOT__csr_0 
                                                       >> 3U)) 
                                              & (IData)(
                                                        (vlSelf->top__DOT__csr__DOT__csr_4 
                                                         >> 7U))));
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___GEN_1 
        = ((0x10U & vlSelf->top__DOT__crossbar__DOT__ICache__DOT__addr)
            ? vlSelf->top__DOT__crossbar__DOT__ICache__DOT__cache_tag_1
            : vlSelf->top__DOT__crossbar__DOT__ICache__DOT__cache_tag_0);
    vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_valid 
        = ((~ (IData)(vlSelf->top__DOT__exu__DOT__lsu_finish)) 
           & (2U == (IData)(vlSelf->top__DOT__exu__DOT__state)));
    vlSelf->top__DOT__exu__DOT____VdfgTmp_h4bc831cd__0 
        = (IData)((0U != (0x60000000U & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___GEN_2 
        = ((2U == (3U & (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr 
                         >> 4U))) ? vlSelf->top__DOT__crossbar__DOT__DCache__DOT__cache_tag_2
            : ((1U == (3U & (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr 
                             >> 4U))) ? vlSelf->top__DOT__crossbar__DOT__DCache__DOT__cache_tag_1
                : vlSelf->top__DOT__crossbar__DOT__DCache__DOT__cache_tag_0));
    vlSelf->__VdfgTmp_h887ff1f5__0 = (IData)((0U != 
                                              (0x18000000U 
                                               & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])));
    vlSelf->top__DOT__exu__DOT____VdfgTmp_h02ad16ce__0 
        = (IData)((0U != (6U & vlSelf->top__DOT__exu__DOT__EXE_reg_op[2U])));
    vlSelf->top__DOT__exu__DOT__lsu_io_en_w = (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3c00U 
                                                        & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])));
    vlSelf->__VdfgTmp_h82555d9e__0 = (IData)((0U != 
                                              (0x6000000U 
                                               & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])));
    vlSelf->top__DOT__exu__DOT___alu_io_src1_T_26 = (IData)(
                                                            (0U 
                                                             != 
                                                             (0x30U 
                                                              & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])));
    vlSelf->top__DOT__exu__DOT____VdfgTmp_h40d12688__0 
        = (IData)((0U != (0x50000000U & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])));
    vlSelf->top__DOT__exu__DOT___op_div_T_2 = (IData)(
                                                      (0U 
                                                       != 
                                                       (0x1800000U 
                                                        & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])));
    vlSelf->top__DOT__exu__DOT___io_csr_en_r_T_2 = 
        (1U & ((vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U] 
                >> 0x1fU) | vlSelf->top__DOT__exu__DOT__EXE_reg_op[2U]));
    vlSelf->top__DOT__exu_io_bypass_idx = ((IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_en_w)
                                            ? (IData)(vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w)
                                            : 0U);
    vlSelf->top__DOT__exu__DOT___op_mul_T_2 = (IData)(
                                                      (0U 
                                                       != 
                                                       (0xc0000U 
                                                        & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])));
    vlSelf->__VdfgTmp_h6ebf051a__0 = (IData)((0U != 
                                              (0xc0000000U 
                                               & vlSelf->top__DOT__exu__DOT__EXE_reg_op[0U])));
    vlSelf->__VdfgTmp_hb8d77901__0 = (1U & (IData)(
                                                   ((0U 
                                                     != 
                                                     (0x28000000U 
                                                      & vlSelf->top__DOT__exu__DOT__EXE_reg_op[0U])) 
                                                    | (0U 
                                                       != 
                                                       (0xaU 
                                                        & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])))));
    vlSelf->__VdfgTmp_h6ef580c5__0 = (1U & (IData)(
                                                   ((0U 
                                                     != 
                                                     (0x14000000U 
                                                      & vlSelf->top__DOT__exu__DOT__EXE_reg_op[0U])) 
                                                    | (0U 
                                                       != 
                                                       (5U 
                                                        & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])))));
    vlSelf->__VdfgTmp_h983d62b8__0 = (IData)((0U != 
                                              (0xc0U 
                                               & vlSelf->top__DOT__exu__DOT__EXE_reg_op[0U])));
    vlSelf->__VdfgTmp_h38508cf3__0 = (1U & ((0U != 
                                             (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__EXE_reg_op[0U])) 
                                            | vlSelf->top__DOT__exu__DOT__EXE_reg_op[2U]));
    vlSelf->__VdfgTmp_h9fd488de__0 = (IData)((0U != 
                                              (0xc00U 
                                               & vlSelf->top__DOT__exu__DOT__EXE_reg_op[0U])));
    vlSelf->__VdfgTmp_h86f020bc__0 = (IData)((0U != 
                                              (0xf000U 
                                               & vlSelf->top__DOT__exu__DOT__EXE_reg_op[0U])));
    vlSelf->__VdfgTmp_h6abc90f0__0 = (IData)((0U != 
                                              (0xf00000U 
                                               & vlSelf->top__DOT__exu__DOT__EXE_reg_op[0U])));
    vlSelf->__VdfgTmp_h6bd19a8d__0 = (IData)((0U != 
                                              (0xf0000U 
                                               & vlSelf->top__DOT__exu__DOT__EXE_reg_op[0U])));
    vlSelf->top__DOT__exu__DOT___src2_T_2 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x14U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_typ))));
    vlSelf->__VdfgTmp_h91ae477b__0 = (IData)((0U != 
                                              (0x30U 
                                               & vlSelf->top__DOT__exu__DOT__EXE_reg_op[0U])));
    vlSelf->top__DOT__exu__DOT____VdfgTmp_hd5869584__0 
        = (IData)((0U != (0x1c000U & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])));
    vlSelf->top__DOT__csr__DOT___GEN_10 = ((4U == (IData)(vlSelf->top__DOT__csr__DOT___map_w_T_11))
                                            ? vlSelf->top__DOT__csr__DOT__csr_4
                                            : ((3U 
                                                == (IData)(vlSelf->top__DOT__csr__DOT___map_w_T_11))
                                                ? vlSelf->top__DOT__csr__DOT__csr_3
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->top__DOT__csr__DOT___map_w_T_11))
                                                    ? vlSelf->top__DOT__csr__DOT__csr_2
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__csr__DOT___map_w_T_11))
                                                     ? vlSelf->top__DOT__csr__DOT__csr_1
                                                     : vlSelf->top__DOT__csr__DOT__csr_0))));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___io_ram_bits_BWEN_T_4 
        = ((~ (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__uncache)) 
           & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___dirty_T_2));
    vlSelf->top__DOT__idu__DOT__typ_t_4 = ((IData)(vlSelf->top__DOT__idu__DOT__op_t_30) 
                                           | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_31) 
                                              | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_32) 
                                                 | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_33) 
                                                    | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_34) 
                                                       | (IData)(vlSelf->top__DOT__idu__DOT__op_t_35))))));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___state_T_19 
        = (((6U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__rstate)) 
            & ((~ (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___GEN_20)) 
               | ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___GEN_20) 
                  & (6U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstate)))))
            ? 3U : 2U);
    vlSelf->top__DOT__idu__DOT__typ_t_2 = ((IData)(vlSelf->top__DOT__idu__DOT__op_t_42) 
                                           | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_43) 
                                              | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_44) 
                                                 | (IData)(vlSelf->top__DOT__idu__DOT__op_t_45))));
    vlSelf->top__DOT__idu__DOT__op_t_6 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_6_T_4) 
                                          & (0U == 
                                             (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                              >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_61 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_6_T_4) 
                                           & (1U == 
                                              (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                               >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_8 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_8_T_4) 
                                          & (0U == 
                                             (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                              >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_59 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_8_T_4) 
                                           & (1U == 
                                              (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                               >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_10 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_10_T_4) 
                                           & (0U == 
                                              (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                               >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_55 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_10_T_4) 
                                           & (1U == 
                                              (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                               >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_12 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_12_T_4) 
                                           & (0U == 
                                              (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                               >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_52 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_12_T_4) 
                                           & (1U == 
                                              (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                               >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_26 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_26_T_4) 
                                           & (0U == 
                                              (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                               >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_54 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_26_T_4) 
                                           & (1U == 
                                              (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                               >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_27 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_27_T_4) 
                                           & (0U == 
                                              (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                               >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_53 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_27_T_4) 
                                           & (1U == 
                                              (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                               >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_15 = ((0x1bU == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__idu__DOT__ID_reg_inst)) 
                                           & (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hdbd884e4__0));
    vlSelf->top__DOT__idu__DOT__op_t_14 = ((0x13U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__idu__DOT__ID_reg_inst)) 
                                           & (IData)(vlSelf->top__DOT__idu__DOT____VdfgTmp_hdbd884e4__0));
    vlSelf->top__DOT__idu__DOT__op_t_22 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_18_T_4) 
                                           & (0U == 
                                              (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                               >> 0x1aU)));
    vlSelf->top__DOT__idu__DOT__op_t_18 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_18_T_4) 
                                           & (0x10U 
                                              == (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                                  >> 0x1aU)));
    vlSelf->top__DOT__idu__DOT__op_t_23 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_19_T_4) 
                                           & (0U == 
                                              (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                               >> 0x1aU)));
    vlSelf->top__DOT__idu__DOT__op_t_19 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_19_T_4) 
                                           & (0x10U 
                                              == (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                                  >> 0x1aU)));
    vlSelf->top__DOT__idu__DOT__op_t_4 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_0_T_4) 
                                          & (0x20U 
                                             == (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                                 >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_0 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_0_T_4) 
                                          & (0U == 
                                             (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                              >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_50 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_0_T_4) 
                                           & (1U == 
                                              (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                               >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_5 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_1_T_4) 
                                          & (0x20U 
                                             == (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                                 >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_1 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_1_T_4) 
                                          & (0U == 
                                             (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                              >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_51 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_1_T_4) 
                                           & (1U == 
                                              (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                               >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_20 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_16_T_4) 
                                           & (0U == 
                                              (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                               >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_16 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_16_T_4) 
                                           & (0x20U 
                                              == (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                                  >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_57 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_16_T_4) 
                                           & (1U == 
                                              (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                               >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_21 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_17_T_4) 
                                           & (0U == 
                                              (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                               >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_17 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_17_T_4) 
                                           & (0x20U 
                                              == (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                                  >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__op_t_58 = ((IData)(vlSelf->top__DOT__idu__DOT___op_t_17_T_4) 
                                           & (1U == 
                                              (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                               >> 0x19U)));
    vlSelf->top__DOT__exu__DOT___io_in_ready_T_3 = 
        ((IData)(vlSelf->top__DOT__exu__DOT__alu_finish) 
         | (IData)(vlSelf->top__DOT__exu__DOT__alu_io_validout));
    vlSelf->top__DOT__ifu_io_irq = ((IData)(vlSelf->top__DOT__csr_io_en_mtip) 
                                    & ((~ (IData)(vlSelf->top__DOT__csr__DOT__clint_mtip)) 
                                       & (IData)(vlSelf->top__DOT__csr_io_clint_mtip)));
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___cache_tag_T_5 
        = (((QData)((IData)((0x7ffffffU & (IData)((vlSelf->top__DOT__crossbar__DOT__ICache__DOT___GEN_1 
                                                   >> 0x1bU))))) 
            << 0x1bU) | (QData)((IData)((vlSelf->top__DOT__crossbar__DOT__ICache__DOT__addr 
                                         >> 5U))));
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___cache_tag_T_7 
        = (((QData)((IData)((vlSelf->top__DOT__crossbar__DOT__ICache__DOT__addr 
                             >> 5U))) << 0x1bU) | (QData)((IData)(
                                                                  (0x7ffffffU 
                                                                   & (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT___GEN_1)))));
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT____VdfgTmp_h47db3895__0 
        = (((0x7ffffffU & (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT___GEN_1)) 
            == (vlSelf->top__DOT__crossbar__DOT__ICache__DOT__addr 
                >> 5U)) & ((0x10U & vlSelf->top__DOT__crossbar__DOT__ICache__DOT__addr)
                            ? (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__valid_1_0)
                            : (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__valid_0_0)));
    if ((1U == ((1U == (IData)(vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_id))
                 ? 2U : 1U))) {
        top__DOT__crossbar__DOT__DCache_io_mem_r_bits_data = 0ULL;
        vlSelf->top__DOT__crossbar__DOT__ICache_io_mem_r_bits_data 
            = top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_data;
        vlSelf->top__DOT__crossbar__DOT__ICache_io_mem_r_valid 
            = vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_r_valid;
    } else {
        top__DOT__crossbar__DOT__DCache_io_mem_r_bits_data 
            = ((2U == ((1U == (IData)(vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_id))
                        ? 2U : 1U)) ? top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_data
                : 0ULL);
        vlSelf->top__DOT__crossbar__DOT__ICache_io_mem_r_bits_data = 0ULL;
        vlSelf->top__DOT__crossbar__DOT__ICache_io_mem_r_valid = 0U;
    }
    vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_r_valid 
        = ((1U != ((1U == (IData)(vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_id))
                    ? 2U : 1U)) & ((2U == ((1U == (IData)(vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_id))
                                            ? 2U : 1U)) 
                                   & (IData)(vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_r_valid)));
    vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_r_ready 
        = ((1U == ((1U == (IData)(vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_id))
                    ? 2U : 1U)) | (2U == ((1U == (IData)(vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_id))
                                           ? 2U : 1U)));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___GEN_3 
        = ((3U == (3U & (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr 
                         >> 4U))) ? vlSelf->top__DOT__crossbar__DOT__DCache__DOT__cache_tag_3
            : vlSelf->top__DOT__crossbar__DOT__DCache__DOT___GEN_2);
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___req_T_1 
        = ((0U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)) 
           & ((0U == (IData)(vlSelf->top__DOT__exu__DOT__lsu__DOT__wstate)) 
              & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_valid) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__lsu_io_en_w)))));
    vlSelf->top__DOT__exu__DOT____VdfgTmp_hbef24655__0 
        = (1U & (IData)(((0U != (0x5000000U & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])) 
                         | (IData)(vlSelf->top__DOT__exu__DOT____VdfgTmp_h40d12688__0))));
    vlSelf->top__DOT__exu__DOT____VdfgTmp_h890f4290__0 
        = (((((IData)(vlSelf->top__DOT__exu__DOT___op_mul_T_2) 
              | (IData)(vlSelf->top__DOT__exu__DOT____VdfgTmp_h18c2570c__0)) 
             | (IData)(vlSelf->top__DOT__exu__DOT___op_div_T_2)) 
            | (0U != (0x1e000000U & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U]))) 
           | (IData)(vlSelf->top__DOT__exu__DOT____VdfgTmp_h4bc831cd__0));
    vlSelf->__VdfgTmp_h4e79a829__0 = (1U & ((IData)(vlSelf->top__DOT__exu__DOT___op_mul_T_2) 
                                            | (vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U] 
                                               >> 0x15U)));
    vlSelf->top__DOT__exu__DOT__dest = ((IData)(vlSelf->top__DOT__exu__DOT___src2_T_2)
                                         ? vlSelf->top__DOT__exu__DOT__EXE_reg_imm
                                         : (QData)((IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rd)));
    vlSelf->top__DOT__exu_io_gpr_en_r2 = ((IData)(vlSelf->top__DOT__exu__DOT___src2_T_2) 
                                          | ((IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_typ) 
                                             >> 5U));
    vlSelf->top__DOT__exu__DOT__lsu_io_en_r = (1U & (IData)(
                                                            ((0U 
                                                              != 
                                                              (0x3c0U 
                                                               & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])) 
                                                             | (IData)(vlSelf->top__DOT__exu__DOT____VdfgTmp_hd5869584__0))));
    vlSelf->__VdfgTmp_h017bc6aa__0 = (1U & (IData)(
                                                   (((0U 
                                                      != 
                                                      (0x300000fU 
                                                       & vlSelf->top__DOT__exu__DOT__EXE_reg_op[0U])) 
                                                     | (0U 
                                                        != 
                                                        (0x3ff0U 
                                                         & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U]))) 
                                                    | (IData)(vlSelf->top__DOT__exu__DOT____VdfgTmp_hd5869584__0))));
    if (vlSelf->top__DOT__crossbar__DOT__DCache__DOT___io_ram_bits_BWEN_T_4) {
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_1__DOT__bwen[0U] 
            = vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb_map[0U];
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_1__DOT__bwen[1U] 
            = vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb_map[1U];
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_1__DOT__bwen[2U] 
            = vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb_map[2U];
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_1__DOT__bwen[3U] 
            = vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb_map[3U];
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_D[0U] 
            = vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wdata_map[0U];
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_D[1U] 
            = vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wdata_map[1U];
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_D[2U] 
            = vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wdata_map[2U];
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_D[3U] 
            = vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wdata_map[3U];
    } else {
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_1__DOT__bwen[0U] = 0xffffffffU;
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_1__DOT__bwen[1U] = 0xffffffffU;
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_1__DOT__bwen[2U] = 0xffffffffU;
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_1__DOT__bwen[3U] = 0xffffffffU;
        if (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wmode) {
            vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_D[0U] 
                = (((~ vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb_map[0U]) 
                    & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__buf_[0U]) 
                   | (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wdata_map[0U] 
                      & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb_map[0U]));
            vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_D[1U] 
                = (((~ vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb_map[1U]) 
                    & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__buf_[1U]) 
                   | (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wdata_map[1U] 
                      & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb_map[1U]));
            vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_D[2U] 
                = (((~ vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb_map[2U]) 
                    & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__buf_[2U]) 
                   | (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wdata_map[2U] 
                      & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb_map[2U]));
            vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_D[3U] 
                = (((~ vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb_map[3U]) 
                    & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__buf_[3U]) 
                   | (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wdata_map[3U] 
                      & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb_map[3U]));
        } else {
            vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_D[0U] 
                = vlSelf->top__DOT__crossbar__DOT__DCache__DOT__buf_[0U];
            vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_D[1U] 
                = vlSelf->top__DOT__crossbar__DOT__DCache__DOT__buf_[1U];
            vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_D[2U] 
                = vlSelf->top__DOT__crossbar__DOT__DCache__DOT__buf_[2U];
            vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_D[3U] 
                = vlSelf->top__DOT__crossbar__DOT__DCache__DOT__buf_[3U];
        }
    }
    vlSelf->top__DOT__idu__DOT__typ_t_0 = ((IData)(vlSelf->top__DOT__idu__DOT__op_t_2) 
                                           | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_3) 
                                              | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_7) 
                                                 | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_9) 
                                                    | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_11) 
                                                       | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_14) 
                                                          | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_15) 
                                                             | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_18) 
                                                                | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_19) 
                                                                   | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_22) 
                                                                      | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_23) 
                                                                         | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_28) 
                                                                            | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_29) 
                                                                               | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_37) 
                                                                                | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_38) 
                                                                                | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_39) 
                                                                                | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_40) 
                                                                                | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_41) 
                                                                                | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_46) 
                                                                                | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_47) 
                                                                                | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_48) 
                                                                                | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_63) 
                                                                                | (IData)(vlSelf->top__DOT__idu__DOT__op_t_64)))))))))))))))))))))));
    vlSelf->__VdfgTmp_h1455dd83__0 = ((IData)(vlSelf->top__DOT__idu__DOT__op_t_50) 
                                      | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_51) 
                                         | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_52) 
                                            | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_53) 
                                               | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_54) 
                                                  | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_55) 
                                                     | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_56) 
                                                        | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_57) 
                                                           | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_58) 
                                                              | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_59) 
                                                                 | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_60) 
                                                                    | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_61) 
                                                                       | (IData)(vlSelf->top__DOT__idu__DOT__op_t_62)))))))))))));
    __Vtemp_h32d8c54f__0[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_63)) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_62)) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_61)) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_60)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_59)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_58)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_57)) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_56)) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_55)) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_54)) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_53)) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_52)) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_51)) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_50)) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (0x100073U 
                                                                                == vlSelf->top__DOT__idu__DOT__ID_reg_inst))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_48)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_47)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_46)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_45)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_44)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_43)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_42)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_41)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_40)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_39)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_38)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_37)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__idu__DOT__ID_reg_inst)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_35)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_34)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_33)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_32)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT__idu__DOT__op_t_31) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_30) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_29) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_28) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_27) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_26) 
                                                                                << 0x1aU) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__idu__DOT__ID_reg_inst)) 
                                                                                << 0x19U) 
                                                                                | (((0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__idu__DOT__ID_reg_inst)) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_23) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_22) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_21) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_20) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_19) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_18) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_17) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_16) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_15) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_14) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_13) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_12) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_11) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_10) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_9) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_8) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_7) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_6) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_5) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT__idu__DOT__op_t_0)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_h32d8c54f__0[1U] = (IData)(((((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_63)) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_62)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_61)) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_60)) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_59)) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_58)) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_57)) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_56)) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_55)) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_54)) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_53)) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_52)) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_51)) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_50)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (0x100073U 
                                                                                == vlSelf->top__DOT__idu__DOT__ID_reg_inst))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_48)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_47)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_46)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_45)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_44)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_43)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_42)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_41)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_40)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_39)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_38)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_37)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__idu__DOT__ID_reg_inst)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_35)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_34)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_33)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT__idu__DOT__op_t_32)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT__idu__DOT__op_t_31) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_30) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_29) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_28) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_27) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_26) 
                                                                                << 0x1aU) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__idu__DOT__ID_reg_inst)) 
                                                                                << 0x19U) 
                                                                                | (((0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__idu__DOT__ID_reg_inst)) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_23) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_22) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_21) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_20) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_19) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_18) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_17) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_16) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_15) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_14) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_13) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_12) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_11) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_10) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_9) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_8) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_7) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_6) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_5) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__idu__DOT__op_t_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT__idu__DOT__op_t_0)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    vlSelf->top__DOT__idu_io_out_bits_op[0U] = __Vtemp_h32d8c54f__0[0U];
    vlSelf->top__DOT__idu_io_out_bits_op[1U] = __Vtemp_h32d8c54f__0[1U];
    vlSelf->top__DOT__idu_io_out_bits_op[2U] = (((0x30200073U 
                                                  == vlSelf->top__DOT__idu__DOT__ID_reg_inst) 
                                                 << 2U) 
                                                | (((0x73U 
                                                     == vlSelf->top__DOT__idu__DOT__ID_reg_inst) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT__idu__DOT__op_t_64)));
    vlSelf->top__DOT__exu__DOT__lsu_io_flush = ((IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_flush) 
                                                | (IData)(vlSelf->top__DOT__ifu_io_irq));
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__miss 
        = (1U & ((~ ((IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT____VdfgTmp_h47db3895__0) 
                     | (((0x7ffffffU & (IData)((vlSelf->top__DOT__crossbar__DOT__ICache__DOT___GEN_1 
                                                >> 0x1bU))) 
                         == (vlSelf->top__DOT__crossbar__DOT__ICache__DOT__addr 
                             >> 5U)) & ((0x10U & vlSelf->top__DOT__crossbar__DOT__ICache__DOT__addr)
                                         ? (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__valid_1_1)
                                         : (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__valid_0_1))))) 
                 | (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__uncache)));
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
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__en_w 
        = ((3U == (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__state)) 
           & (IData)(vlSelf->top__DOT__crossbar__DOT__ICache_io_mem_r_valid));
    vlSelf->top__DOT__clint__DOT___rlast_T_1 = ((((IData)(vlSelf->top__DOT__clint__DOT__rid) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_r_ready)) 
                                                & (IData)(vlSelf->top__DOT__clint__DOT__rstate));
    vlSelf->top__DOT__sram__DOT___rlast_T_1 = (((~ 
                                                 ((IData)(vlSelf->top__DOT__clint__DOT__rid) 
                                                  >> 1U)) 
                                                & (IData)(vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_r_ready)) 
                                               & (IData)(vlSelf->top__DOT__sram__DOT__rstate));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___cache_tag_T_5 
        = (((QData)((IData)((0x3ffffffU & (IData)((vlSelf->top__DOT__crossbar__DOT__DCache__DOT___GEN_3 
                                                   >> 0x1aU))))) 
            << 0x1aU) | (QData)((IData)((vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr 
                                         >> 6U))));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___cache_tag_T_7 
        = (((QData)((IData)((vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr 
                             >> 6U))) << 0x1aU) | (QData)((IData)(
                                                                  (0x3ffffffU 
                                                                   & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___GEN_3)))));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h4dba6170__0 
        = (1U & (~ (((0x3ffffffU & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___GEN_3)) 
                     == (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr 
                         >> 6U)) & ((3U == (3U & (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr 
                                                  >> 4U)))
                                     ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_3_0)
                                     : ((2U == (3U 
                                                & (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr 
                                                   >> 4U)))
                                         ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_2_0)
                                         : ((1U == 
                                             (3U & 
                                              (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr 
                                               >> 4U)))
                                             ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_1_0)
                                             : (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_0_0)))))));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___wmode_T_2 
        = ((0U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)) 
           & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___req_T_1));
    vlSelf->top__DOT__exu__DOT__alu_io_validin = ((2U 
                                                   == (IData)(vlSelf->top__DOT__exu__DOT__state)) 
                                                  & ((IData)(vlSelf->top__DOT__exu__DOT____VdfgTmp_h890f4290__0) 
                                                     & ((~ (IData)(vlSelf->top__DOT__exu__DOT__alu_finish)) 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__alu_valid))));
    vlSelf->top__DOT__exu_io_gpr_en_r1 = (1U & ((IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_typ) 
                                                | (IData)(vlSelf->top__DOT__exu_io_gpr_en_r2)));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___req_T 
        = ((0U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)) 
           & ((0U == (IData)(vlSelf->top__DOT__exu__DOT__lsu__DOT__rstate)) 
              & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->top__DOT__exu__DOT__lsu_io_en_r) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_valid)))));
    vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hccd30e34__0 
        = (1U & ((~ (IData)(vlSelf->__VdfgTmp_h017bc6aa__0)) 
                 & ((~ (IData)(vlSelf->__VdfgTmp_h91ae477b__0)) 
                    & ((~ (IData)(vlSelf->__VdfgTmp_h983d62b8__0)) 
                       & ((~ (IData)(vlSelf->__VdfgTmp_h38508cf3__0)) 
                          & ((~ (IData)(vlSelf->__VdfgTmp_h9fd488de__0)) 
                             & ((~ (IData)(vlSelf->__VdfgTmp_h86f020bc__0)) 
                                & ((~ (IData)(vlSelf->__VdfgTmp_h6abc90f0__0)) 
                                   & ((~ (IData)(vlSelf->__VdfgTmp_h6bd19a8d__0)) 
                                      & ((~ (IData)(vlSelf->__VdfgTmp_h6ef580c5__0)) 
                                         & ((~ (IData)(vlSelf->__VdfgTmp_hb8d77901__0)) 
                                            & ((~ (IData)(vlSelf->__VdfgTmp_h6ebf051a__0)) 
                                               & ((~ (IData)(vlSelf->__VdfgTmp_h4e79a829__0)) 
                                                  & (vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U] 
                                                     >> 0x14U))))))))))))));
    vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hccab2d5e__0 
        = ((~ (IData)(vlSelf->__VdfgTmp_h017bc6aa__0)) 
           & ((~ (IData)(vlSelf->__VdfgTmp_h91ae477b__0)) 
              & ((~ (IData)(vlSelf->__VdfgTmp_h983d62b8__0)) 
                 & ((~ (IData)(vlSelf->__VdfgTmp_h38508cf3__0)) 
                    & ((~ (IData)(vlSelf->__VdfgTmp_h9fd488de__0)) 
                       & ((~ (IData)(vlSelf->__VdfgTmp_h86f020bc__0)) 
                          & ((~ (IData)(vlSelf->__VdfgTmp_h6abc90f0__0)) 
                             & ((~ (IData)(vlSelf->__VdfgTmp_h6bd19a8d__0)) 
                                & ((~ (IData)(vlSelf->__VdfgTmp_h6ef580c5__0)) 
                                   & ((~ (IData)(vlSelf->__VdfgTmp_hb8d77901__0)) 
                                      & ((~ (IData)(vlSelf->__VdfgTmp_h6ebf051a__0)) 
                                         & ((~ (IData)(vlSelf->__VdfgTmp_h4e79a829__0)) 
                                            & (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x500000U 
                                                         & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])) 
                                                       & (IData)(vlSelf->top__DOT__exu__DOT___op_div_T_2)))))))))))))));
    vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hccbcf5d5__0 
        = ((~ (IData)(vlSelf->__VdfgTmp_h017bc6aa__0)) 
           & ((~ (IData)(vlSelf->__VdfgTmp_h91ae477b__0)) 
              & ((~ (IData)(vlSelf->__VdfgTmp_h983d62b8__0)) 
                 & ((~ (IData)(vlSelf->__VdfgTmp_h38508cf3__0)) 
                    & ((~ (IData)(vlSelf->__VdfgTmp_h9fd488de__0)) 
                       & ((~ (IData)(vlSelf->__VdfgTmp_h86f020bc__0)) 
                          & ((~ (IData)(vlSelf->__VdfgTmp_h6abc90f0__0)) 
                             & ((~ (IData)(vlSelf->__VdfgTmp_h6bd19a8d__0)) 
                                & ((~ (IData)(vlSelf->__VdfgTmp_h6ef580c5__0)) 
                                   & ((~ (IData)(vlSelf->__VdfgTmp_hb8d77901__0)) 
                                      & ((~ (IData)(vlSelf->__VdfgTmp_h6ebf051a__0)) 
                                         & ((~ (IData)(vlSelf->__VdfgTmp_h4e79a829__0)) 
                                            & (IData)(
                                                      ((((0U 
                                                          == 
                                                          (0x500000U 
                                                           & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])) 
                                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT___op_div_T_2))) 
                                                        & (~ (IData)(vlSelf->__VdfgTmp_h82555d9e__0))) 
                                                       & (IData)(vlSelf->__VdfgTmp_h887ff1f5__0)))))))))))))));
    vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hcce4bab8__0 
        = ((~ (IData)(vlSelf->__VdfgTmp_h017bc6aa__0)) 
           & (IData)(vlSelf->__VdfgTmp_h91ae477b__0));
    vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hcc87cf9a__0 
        = ((~ (IData)(vlSelf->__VdfgTmp_h017bc6aa__0)) 
           & ((~ (IData)(vlSelf->__VdfgTmp_h91ae477b__0)) 
              & ((~ (IData)(vlSelf->__VdfgTmp_h983d62b8__0)) 
                 & ((~ (IData)(vlSelf->__VdfgTmp_h38508cf3__0)) 
                    & ((~ (IData)(vlSelf->__VdfgTmp_h9fd488de__0)) 
                       & ((~ (IData)(vlSelf->__VdfgTmp_h86f020bc__0)) 
                          & ((~ (IData)(vlSelf->__VdfgTmp_h6abc90f0__0)) 
                             & ((~ (IData)(vlSelf->__VdfgTmp_h6bd19a8d__0)) 
                                & (IData)(vlSelf->__VdfgTmp_h6ef580c5__0)))))))));
    vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hcc9c168f__0 
        = ((~ (IData)(vlSelf->__VdfgTmp_h017bc6aa__0)) 
           & ((~ (IData)(vlSelf->__VdfgTmp_h91ae477b__0)) 
              & ((~ (IData)(vlSelf->__VdfgTmp_h983d62b8__0)) 
                 & ((~ (IData)(vlSelf->__VdfgTmp_h38508cf3__0)) 
                    & ((~ (IData)(vlSelf->__VdfgTmp_h9fd488de__0)) 
                       & ((~ (IData)(vlSelf->__VdfgTmp_h86f020bc__0)) 
                          & ((~ (IData)(vlSelf->__VdfgTmp_h6abc90f0__0)) 
                             & ((~ (IData)(vlSelf->__VdfgTmp_h6bd19a8d__0)) 
                                & ((~ (IData)(vlSelf->__VdfgTmp_h6ef580c5__0)) 
                                   & (IData)(vlSelf->__VdfgTmp_hb8d77901__0))))))))));
    vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hccd47755__0 
        = ((~ (IData)(vlSelf->__VdfgTmp_h017bc6aa__0)) 
           & ((~ (IData)(vlSelf->__VdfgTmp_h91ae477b__0)) 
              & ((~ (IData)(vlSelf->__VdfgTmp_h983d62b8__0)) 
                 & ((~ (IData)(vlSelf->__VdfgTmp_h38508cf3__0)) 
                    & ((~ (IData)(vlSelf->__VdfgTmp_h9fd488de__0)) 
                       & ((~ (IData)(vlSelf->__VdfgTmp_h86f020bc__0)) 
                          & ((~ (IData)(vlSelf->__VdfgTmp_h6abc90f0__0)) 
                             & ((~ (IData)(vlSelf->__VdfgTmp_h6bd19a8d__0)) 
                                & ((~ (IData)(vlSelf->__VdfgTmp_h6ef580c5__0)) 
                                   & ((~ (IData)(vlSelf->__VdfgTmp_hb8d77901__0)) 
                                      & (IData)(vlSelf->__VdfgTmp_h6ebf051a__0)))))))))));
    vlSelf->top__DOT__idu_io_out_bits_imm = ((IData)(vlSelf->top__DOT__idu__DOT__typ_t_0)
                                              ? (((
                                                   (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                                    >> 0x1fU)
                                                    ? 0xfffffffffffffULL
                                                    : 0ULL) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                                                    >> 0x14U))))
                                              : ((IData)(vlSelf->top__DOT__idu__DOT__typ_t_1)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                                                     >> 0x1fU)
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (0xfffff000U 
                                                                     & vlSelf->top__DOT__idu__DOT__ID_reg_inst))))
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__idu__DOT__typ_t_2)
                                                   ? 
                                                  ((((vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                                      >> 0x1fU)
                                                      ? 0xfffffffffffffULL
                                                      : 0ULL) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0xfe0U 
                                                                       & (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                                                          >> 0x14U)) 
                                                                      | (0x1fU 
                                                                         & (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                                                            >> 7U))))))
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__idu__DOT__ID_reg_inst))
                                                    ? 
                                                   ((((vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                                       >> 0x1fU)
                                                       ? 0x7ffffffffffULL
                                                       : 0ULL) 
                                                     << 0x15U) 
                                                    | (QData)((IData)(
                                                                      ((0x100000U 
                                                                        & (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                                                           >> 0xbU)) 
                                                                       | ((0xff000U 
                                                                           & vlSelf->top__DOT__idu__DOT__ID_reg_inst) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                                                                >> 9U)) 
                                                                             | (0x7feU 
                                                                                & (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                                                                >> 0x14U))))))))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__idu__DOT__typ_t_4)
                                                     ? 
                                                    ((((vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                                        >> 0x1fU)
                                                        ? 0x7ffffffffffffULL
                                                        : 0ULL) 
                                                      << 0xdU) 
                                                     | (QData)((IData)(
                                                                       ((0x1000U 
                                                                         & (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                                                            >> 0x13U)) 
                                                                        | ((0x800U 
                                                                            & (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                                                               << 4U)) 
                                                                           | ((0x7e0U 
                                                                               & (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                                                                >> 0x14U)) 
                                                                              | (0x1eU 
                                                                                & (vlSelf->top__DOT__idu__DOT__ID_reg_inst 
                                                                                >> 7U))))))))
                                                     : 0ULL)))));
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___io_in_r_bits_data_T_2 
        = ((~ (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__miss)) 
           & (1U == (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__state)));
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___flag_T_4 
        = ((~ (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__en_w)) 
           & (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__flag));
    VL_SHIFTL_WWI(383,383,7, __Vtemp_h534a28cd__0, Vtop__ConstPool__CONST_h39778408_0, 
                  ((IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__cnt) 
                   << 6U));
    __Vtemp_hb4bd63e1__0[0U] = (IData)(vlSelf->top__DOT__crossbar__DOT__ICache_io_mem_r_bits_data);
    __Vtemp_hb4bd63e1__0[1U] = (IData)((vlSelf->top__DOT__crossbar__DOT__ICache_io_mem_r_bits_data 
                                        >> 0x20U));
    __Vtemp_hb4bd63e1__0[2U] = 0U;
    __Vtemp_hb4bd63e1__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h150adc80__0, __Vtemp_hb4bd63e1__0, 
                  ((IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__cnt) 
                   << 6U));
    vlSelf->top__DOT__clint_io_in_r_bits_last = (((IData)(vlSelf->top__DOT__clint__DOT__rcnt) 
                                                  == (IData)(vlSelf->top__DOT__clint__DOT__rlen)) 
                                                 & (IData)(vlSelf->top__DOT__clint__DOT___rlast_T_1));
    vlSelf->top__DOT__sram_io_r_bits_last = (((IData)(vlSelf->top__DOT__sram__DOT__rcnt) 
                                              == (IData)(vlSelf->top__DOT__sram__DOT__rlen)) 
                                             & (IData)(vlSelf->top__DOT__sram__DOT___rlast_T_1));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h4e1c6f31__0 
        = ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h4dba6170__0) 
           & (~ (((0x3ffffffU & (IData)((vlSelf->top__DOT__crossbar__DOT__DCache__DOT___GEN_3 
                                         >> 0x1aU))) 
                  == (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr 
                      >> 6U)) & ((3U == (3U & (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr 
                                               >> 4U)))
                                  ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_3_1)
                                  : ((2U == (3U & (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr 
                                                   >> 4U)))
                                      ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_2_1)
                                      : ((1U == (3U 
                                                 & (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr 
                                                    >> 4U)))
                                          ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_1_1)
                                          : (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_0_1)))))));
    vlSelf->top__DOT__exu_io_gpr_val_r2 = ((IData)(vlSelf->top__DOT__exu_io_gpr_en_r2)
                                            ? ((0x1fU 
                                                == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                ? vlSelf->top__DOT__gpr__DOT__gpr_31
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                    ? vlSelf->top__DOT__gpr__DOT__gpr_30
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                     ? vlSelf->top__DOT__gpr__DOT__gpr_29
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                      ? vlSelf->top__DOT__gpr__DOT__gpr_28
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                       ? vlSelf->top__DOT__gpr__DOT__gpr_27
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                        ? vlSelf->top__DOT__gpr__DOT__gpr_26
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                         ? vlSelf->top__DOT__gpr__DOT__gpr_25
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                          ? vlSelf->top__DOT__gpr__DOT__gpr_24
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                           ? vlSelf->top__DOT__gpr__DOT__gpr_23
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                            ? vlSelf->top__DOT__gpr__DOT__gpr_22
                                                            : 
                                                           ((0x15U 
                                                             == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                             ? vlSelf->top__DOT__gpr__DOT__gpr_21
                                                             : 
                                                            ((0x14U 
                                                              == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                              ? vlSelf->top__DOT__gpr__DOT__gpr_20
                                                              : 
                                                             ((0x13U 
                                                               == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                               ? vlSelf->top__DOT__gpr__DOT__gpr_19
                                                               : 
                                                              ((0x12U 
                                                                == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                                ? vlSelf->top__DOT__gpr__DOT__gpr_18
                                                                : 
                                                               ((0x11U 
                                                                 == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                                 ? vlSelf->top__DOT__gpr__DOT__gpr_17
                                                                 : 
                                                                ((0x10U 
                                                                  == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                                  ? vlSelf->top__DOT__gpr__DOT__gpr_16
                                                                  : 
                                                                 ((0xfU 
                                                                   == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                                   ? vlSelf->top__DOT__gpr__DOT__gpr_15
                                                                   : 
                                                                  ((0xeU 
                                                                    == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                                    ? vlSelf->top__DOT__gpr__DOT__gpr_14
                                                                    : 
                                                                   ((0xdU 
                                                                     == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                                     ? vlSelf->top__DOT__gpr__DOT__gpr_13
                                                                     : 
                                                                    ((0xcU 
                                                                      == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                                      ? vlSelf->top__DOT__gpr__DOT__gpr_12
                                                                      : 
                                                                     ((0xbU 
                                                                       == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                                       ? vlSelf->top__DOT__gpr__DOT__gpr_11
                                                                       : 
                                                                      ((0xaU 
                                                                        == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                                        ? vlSelf->top__DOT__gpr__DOT__gpr_10
                                                                        : 
                                                                       ((9U 
                                                                         == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                                         ? vlSelf->top__DOT__gpr__DOT__gpr_9
                                                                         : 
                                                                        ((8U 
                                                                          == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                                          ? vlSelf->top__DOT__gpr__DOT__gpr_8
                                                                          : 
                                                                         ((7U 
                                                                           == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                                           ? vlSelf->top__DOT__gpr__DOT__gpr_7
                                                                           : 
                                                                          ((6U 
                                                                            == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                                            ? vlSelf->top__DOT__gpr__DOT__gpr_6
                                                                            : 
                                                                           ((5U 
                                                                             == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                                             ? vlSelf->top__DOT__gpr__DOT__gpr_5
                                                                             : 
                                                                            ((4U 
                                                                              == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                                              ? vlSelf->top__DOT__gpr__DOT__gpr_4
                                                                              : 
                                                                             ((3U 
                                                                               == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                                               ? vlSelf->top__DOT__gpr__DOT__gpr_3
                                                                               : 
                                                                              ((2U 
                                                                                == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                                                ? vlSelf->top__DOT__gpr__DOT__gpr_2
                                                                                : 
                                                                               ((1U 
                                                                                == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2))
                                                                                 ? vlSelf->top__DOT__gpr__DOT__gpr_1
                                                                                 : 0ULL)))))))))))))))))))))))))))))))
                                            : 0ULL);
    vlSelf->top__DOT__exu__DOT__gpr_val_r2 = ((((IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs2) 
                                                == (IData)(vlSelf->top__DOT__exu_io_bypass_idx)) 
                                               & (0U 
                                                  != (IData)(vlSelf->top__DOT__exu_io_bypass_idx)))
                                               ? vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_val_w
                                               : vlSelf->top__DOT__exu_io_gpr_val_r2);
    vlSelf->top__DOT__exu__DOT__src2 = ((IData)(vlSelf->top__DOT__exu_io_gpr_en_r2)
                                         ? vlSelf->top__DOT__exu__DOT__gpr_val_r2
                                         : ((1U & (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_typ))
                                             ? vlSelf->top__DOT__exu__DOT__EXE_reg_imm
                                             : 0ULL));
    if (vlSelf->top__DOT__exu_io_gpr_en_r1) {
        vlSelf->top__DOT__exu_io_gpr_val_r1 = ((0x1fU 
                                                == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                ? vlSelf->top__DOT__gpr__DOT__gpr_31
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                    ? vlSelf->top__DOT__gpr__DOT__gpr_30
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                     ? vlSelf->top__DOT__gpr__DOT__gpr_29
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                      ? vlSelf->top__DOT__gpr__DOT__gpr_28
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                       ? vlSelf->top__DOT__gpr__DOT__gpr_27
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                        ? vlSelf->top__DOT__gpr__DOT__gpr_26
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                         ? vlSelf->top__DOT__gpr__DOT__gpr_25
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                          ? vlSelf->top__DOT__gpr__DOT__gpr_24
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                           ? vlSelf->top__DOT__gpr__DOT__gpr_23
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                            ? vlSelf->top__DOT__gpr__DOT__gpr_22
                                                            : 
                                                           ((0x15U 
                                                             == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                             ? vlSelf->top__DOT__gpr__DOT__gpr_21
                                                             : 
                                                            ((0x14U 
                                                              == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                              ? vlSelf->top__DOT__gpr__DOT__gpr_20
                                                              : 
                                                             ((0x13U 
                                                               == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                               ? vlSelf->top__DOT__gpr__DOT__gpr_19
                                                               : 
                                                              ((0x12U 
                                                                == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                                ? vlSelf->top__DOT__gpr__DOT__gpr_18
                                                                : 
                                                               ((0x11U 
                                                                 == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                                 ? vlSelf->top__DOT__gpr__DOT__gpr_17
                                                                 : 
                                                                ((0x10U 
                                                                  == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                                  ? vlSelf->top__DOT__gpr__DOT__gpr_16
                                                                  : 
                                                                 ((0xfU 
                                                                   == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                                   ? vlSelf->top__DOT__gpr__DOT__gpr_15
                                                                   : 
                                                                  ((0xeU 
                                                                    == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                                    ? vlSelf->top__DOT__gpr__DOT__gpr_14
                                                                    : 
                                                                   ((0xdU 
                                                                     == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                                     ? vlSelf->top__DOT__gpr__DOT__gpr_13
                                                                     : 
                                                                    ((0xcU 
                                                                      == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                                      ? vlSelf->top__DOT__gpr__DOT__gpr_12
                                                                      : 
                                                                     ((0xbU 
                                                                       == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                                       ? vlSelf->top__DOT__gpr__DOT__gpr_11
                                                                       : 
                                                                      ((0xaU 
                                                                        == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                                        ? vlSelf->top__DOT__gpr__DOT__gpr_10
                                                                        : 
                                                                       ((9U 
                                                                         == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                                         ? vlSelf->top__DOT__gpr__DOT__gpr_9
                                                                         : 
                                                                        ((8U 
                                                                          == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                                          ? vlSelf->top__DOT__gpr__DOT__gpr_8
                                                                          : 
                                                                         ((7U 
                                                                           == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                                           ? vlSelf->top__DOT__gpr__DOT__gpr_7
                                                                           : 
                                                                          ((6U 
                                                                            == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                                            ? vlSelf->top__DOT__gpr__DOT__gpr_6
                                                                            : 
                                                                           ((5U 
                                                                             == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                                             ? vlSelf->top__DOT__gpr__DOT__gpr_5
                                                                             : 
                                                                            ((4U 
                                                                              == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                                              ? vlSelf->top__DOT__gpr__DOT__gpr_4
                                                                              : 
                                                                             ((3U 
                                                                               == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                                               ? vlSelf->top__DOT__gpr__DOT__gpr_3
                                                                               : 
                                                                              ((2U 
                                                                                == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                                                ? vlSelf->top__DOT__gpr__DOT__gpr_2
                                                                                : 
                                                                               ((1U 
                                                                                == (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1))
                                                                                 ? vlSelf->top__DOT__gpr__DOT__gpr_1
                                                                                 : 0ULL)))))))))))))))))))))))))))))));
        vlSelf->top__DOT__exu__DOT__src1 = ((((IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_rs1) 
                                              == (IData)(vlSelf->top__DOT__exu_io_bypass_idx)) 
                                             & (0U 
                                                != (IData)(vlSelf->top__DOT__exu_io_bypass_idx)))
                                             ? vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_val_w
                                             : vlSelf->top__DOT__exu_io_gpr_val_r1);
    } else {
        vlSelf->top__DOT__exu_io_gpr_val_r1 = 0ULL;
        vlSelf->top__DOT__exu__DOT__src1 = ((IData)(
                                                    (0U 
                                                     != 
                                                     (0xaU 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_typ))))
                                             ? vlSelf->top__DOT__exu__DOT__EXE_reg_imm
                                             : 0ULL);
    }
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__req 
        = ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___req_T) 
           | (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___req_T_1));
    vlSelf->top__DOT__exu__DOT__alu__DOT___T_8 = (1U 
                                                  & ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hccd30e34__0) 
                                                     | ((~ (IData)(vlSelf->__VdfgTmp_h017bc6aa__0)) 
                                                        & ((~ (IData)(vlSelf->__VdfgTmp_h91ae477b__0)) 
                                                           & ((~ (IData)(vlSelf->__VdfgTmp_h983d62b8__0)) 
                                                              & ((~ (IData)(vlSelf->__VdfgTmp_h38508cf3__0)) 
                                                                 & ((~ (IData)(vlSelf->__VdfgTmp_h9fd488de__0)) 
                                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h86f020bc__0)) 
                                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h6abc90f0__0)) 
                                                                          & ((~ (IData)(vlSelf->__VdfgTmp_h6bd19a8d__0)) 
                                                                             & ((~ (IData)(vlSelf->__VdfgTmp_h6ef580c5__0)) 
                                                                                & ((~ (IData)(vlSelf->__VdfgTmp_hb8d77901__0)) 
                                                                                & ((~ (IData)(vlSelf->__VdfgTmp_h6ebf051a__0)) 
                                                                                & ((~ (IData)(vlSelf->__VdfgTmp_h4e79a829__0)) 
                                                                                & (IData)(
                                                                                (0x400000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])))))))))))))))));
    vlSelf->top__DOT__exu__DOT__alu__DOT___T_13 = ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hccab2d5e__0) 
                                                   | ((~ (IData)(vlSelf->__VdfgTmp_h017bc6aa__0)) 
                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h91ae477b__0)) 
                                                         & ((~ (IData)(vlSelf->__VdfgTmp_h983d62b8__0)) 
                                                            & ((~ (IData)(vlSelf->__VdfgTmp_h38508cf3__0)) 
                                                               & ((~ (IData)(vlSelf->__VdfgTmp_h9fd488de__0)) 
                                                                  & ((~ (IData)(vlSelf->__VdfgTmp_h86f020bc__0)) 
                                                                     & ((~ (IData)(vlSelf->__VdfgTmp_h6abc90f0__0)) 
                                                                        & ((~ (IData)(vlSelf->__VdfgTmp_h6bd19a8d__0)) 
                                                                           & ((~ (IData)(vlSelf->__VdfgTmp_h6ef580c5__0)) 
                                                                              & ((~ (IData)(vlSelf->__VdfgTmp_hb8d77901__0)) 
                                                                                & ((~ (IData)(vlSelf->__VdfgTmp_h6ebf051a__0)) 
                                                                                & ((~ (IData)(vlSelf->__VdfgTmp_h4e79a829__0)) 
                                                                                & (IData)(
                                                                                (((0U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])) 
                                                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT___op_div_T_2))) 
                                                                                & (IData)(vlSelf->__VdfgTmp_h82555d9e__0))))))))))))))));
    vlSelf->top__DOT__exu__DOT__alu__DOT__div_io_div_signed 
        = ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hccab2d5e__0) 
           | (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hccbcf5d5__0));
    vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hed5181a0__0 
        = ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hccbcf5d5__0) 
           | ((~ (IData)(vlSelf->__VdfgTmp_h017bc6aa__0)) 
              & ((~ (IData)(vlSelf->__VdfgTmp_h91ae477b__0)) 
                 & ((~ (IData)(vlSelf->__VdfgTmp_h983d62b8__0)) 
                    & ((~ (IData)(vlSelf->__VdfgTmp_h38508cf3__0)) 
                       & ((~ (IData)(vlSelf->__VdfgTmp_h9fd488de__0)) 
                          & ((~ (IData)(vlSelf->__VdfgTmp_h86f020bc__0)) 
                             & ((~ (IData)(vlSelf->__VdfgTmp_h6abc90f0__0)) 
                                & ((~ (IData)(vlSelf->__VdfgTmp_h6bd19a8d__0)) 
                                   & ((~ (IData)(vlSelf->__VdfgTmp_h6ef580c5__0)) 
                                      & ((~ (IData)(vlSelf->__VdfgTmp_hb8d77901__0)) 
                                         & ((~ (IData)(vlSelf->__VdfgTmp_h6ebf051a__0)) 
                                            & ((~ (IData)(vlSelf->__VdfgTmp_h4e79a829__0)) 
                                               & (IData)(
                                                         (((((0U 
                                                              == 
                                                              (0x500000U 
                                                               & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])) 
                                                             & (~ (IData)(vlSelf->top__DOT__exu__DOT___op_div_T_2))) 
                                                            & (~ (IData)(vlSelf->__VdfgTmp_h82555d9e__0))) 
                                                           & (~ (IData)(vlSelf->__VdfgTmp_h887ff1f5__0))) 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT____VdfgTmp_h4bc831cd__0))))))))))))))));
    vlSelf->top__DOT__exu__DOT__alu__DOT___adder_b_T_6 
        = ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hcce4bab8__0) 
           | ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hcc87cf9a__0) 
              | ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hcc9c168f__0) 
                 | (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hccd47755__0))));
    vlSelf->top__DOT__clint_io_in_ar_ready = (1U & 
                                              ((~ (IData)(vlSelf->top__DOT__clint__DOT__rstate)) 
                                               | ((IData)(vlSelf->top__DOT__clint_io_in_r_bits_last) 
                                                  & (IData)(vlSelf->top__DOT__clint__DOT__rstate))));
    vlSelf->top__DOT__sram_io_ar_ready = (1U & ((~ (IData)(vlSelf->top__DOT__sram__DOT__rstate)) 
                                                | ((IData)(vlSelf->top__DOT__sram_io_r_bits_last) 
                                                   & (IData)(vlSelf->top__DOT__sram__DOT__rstate))));
    vlSelf->top__DOT__crossbar__DOT__ICache_io_mem_r_bits_last 
        = ((1U == ((1U == (IData)(vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_id))
                    ? 2U : 1U)) & ((2U & (IData)(vlSelf->top__DOT__clint__DOT__rid))
                                    ? (IData)(vlSelf->top__DOT__clint_io_in_r_bits_last)
                                    : (IData)(vlSelf->top__DOT__sram_io_r_bits_last)));
    if (vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h4e1c6f31__0) {
        vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_WAY 
            = vlSelf->top__DOT__crossbar__DOT__DCache__DOT__way;
        vlSelf->top__DOT__crossbar__DOT__DCache__DOT__lfsr8_io_en 
            = (1U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state));
    } else {
        vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_WAY 
            = vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h4dba6170__0;
        vlSelf->top__DOT__crossbar__DOT__DCache__DOT__lfsr8_io_en = 0U;
    }
    vlSelf->top__DOT__exu__DOT__alu__DOT___T_4 = ((
                                                   (~ (IData)(vlSelf->__VdfgTmp_h017bc6aa__0)) 
                                                   & ((~ (IData)(vlSelf->__VdfgTmp_h91ae477b__0)) 
                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h983d62b8__0)) 
                                                         & ((~ (IData)(vlSelf->__VdfgTmp_h38508cf3__0)) 
                                                            & ((~ (IData)(vlSelf->__VdfgTmp_h9fd488de__0)) 
                                                               & ((~ (IData)(vlSelf->__VdfgTmp_h86f020bc__0)) 
                                                                  & ((~ (IData)(vlSelf->__VdfgTmp_h6abc90f0__0)) 
                                                                     & ((~ (IData)(vlSelf->__VdfgTmp_h6bd19a8d__0)) 
                                                                        & ((~ (IData)(vlSelf->__VdfgTmp_h6ef580c5__0)) 
                                                                           & ((~ (IData)(vlSelf->__VdfgTmp_hb8d77901__0)) 
                                                                              & ((~ (IData)(vlSelf->__VdfgTmp_h6ebf051a__0)) 
                                                                                & (IData)(vlSelf->__VdfgTmp_h4e79a829__0)))))))))))) 
                                                  | (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT___T_8));
    vlSelf->top__DOT__exu__DOT__alu__DOT__div_io_div_valid 
        = (((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT___T_13) 
            | (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hed5181a0__0)) 
           & (IData)(vlSelf->top__DOT__exu__DOT__alu_io_validin));
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
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h3f9fcbfd__0 
        = (IData)(((0x30U == (0x30U & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr)) 
                   & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_WAY)));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_hf762c244__0 
        = ((~ (IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_WAY)) 
           & (0x30U == (0x30U & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr)));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h13b34008__0 
        = (IData)(((0x20U == (0x30U & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr)) 
                   & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_WAY)));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_hfe277d00__0 
        = ((~ (IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_WAY)) 
           & (0x20U == (0x30U & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr)));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h12c480bb__0 
        = (IData)(((0x10U == (0x30U & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr)) 
                   & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_WAY)));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_hfe2b5047__0 
        = ((~ (IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_WAY)) 
           & (0x10U == (0x30U & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr)));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h0bdb7ac3__0 
        = (IData)(((0U == (0x30U & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr)) 
                   & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_WAY)));
    vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_WEN 
        = (1U & (~ ((~ (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__uncache)) 
                    & ((3U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)) 
                       | ((~ (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__lfsr8_io_en)) 
                          & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___dirty_T_2))))));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___io_in_r_bits_data_T_2 
        = ((~ (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__lfsr8_io_en)) 
           & (1U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)));
    vlSelf->top__DOT__exu_io_csr_idx_r = (0xfffU & (IData)(
                                                           ((IData)(vlSelf->top__DOT__exu__DOT___io_csr_en_r_T_2)
                                                             ? vlSelf->top__DOT__exu__DOT__src2
                                                             : (QData)((IData)(
                                                                               ((2U 
                                                                                & vlSelf->top__DOT__exu__DOT__EXE_reg_op[2U])
                                                                                 ? 0x305U
                                                                                 : 
                                                                                ((4U 
                                                                                & vlSelf->top__DOT__exu__DOT__EXE_reg_op[2U])
                                                                                 ? 0x341U
                                                                                 : 0U)))))));
    vlSelf->top__DOT__exu__DOT__alu_io_src1 = ((1U 
                                                & (IData)(
                                                          ((0U 
                                                            != 
                                                            (0xa02000U 
                                                             & vlSelf->top__DOT__exu__DOT__EXE_reg_op[0U])) 
                                                           | (IData)(vlSelf->top__DOT__exu__DOT____VdfgTmp_hbef24655__0))))
                                                ? (QData)((IData)(vlSelf->top__DOT__exu__DOT__src1))
                                                : ((IData)(
                                                           (0U 
                                                            != 
                                                            (0xa0000U 
                                                             & vlSelf->top__DOT__exu__DOT__EXE_reg_op[0U])))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__src1 
                                                                                >> 0x1fU)))
                                                                       ? 0xffffffffU
                                                                       : 0U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->top__DOT__exu__DOT__src1)))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__exu__DOT___alu_io_src1_T_26)
                                                     ? (QData)((IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_pc))
                                                     : vlSelf->top__DOT__exu__DOT__src1)));
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul_io_mul_valid 
        = ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT___T_4) 
           & (IData)(vlSelf->top__DOT__exu__DOT__alu_io_validin));
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT____VdfgTmp_h084807ca__0 
        = ((~ (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__is_dividing)) 
           & (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div_io_div_valid));
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
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___GEN_36 
        = ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h3f9fcbfd__0)
            ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_3_1)
            : ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_hf762c244__0)
                ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_3_0)
                : ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h13b34008__0)
                    ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_2_1)
                    : ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_hfe277d00__0)
                        ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_2_0)
                        : ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h12c480bb__0)
                            ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_1_1)
                            : ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_hfe2b5047__0)
                                ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_1_0)
                                : ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h0bdb7ac3__0)
                                    ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_0_1)
                                    : (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_0_0))))))));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___dirty_T_12 
        = ((3U != (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)) 
           & ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h3f9fcbfd__0)
               ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_3_1)
               : ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_hf762c244__0)
                   ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_3_0)
                   : ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h13b34008__0)
                       ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_2_1)
                       : ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_hfe277d00__0)
                           ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_2_0)
                           : ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h12c480bb__0)
                               ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_1_1)
                               : ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_hfe2b5047__0)
                                   ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_1_0)
                                   : ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h0bdb7ac3__0)
                                       ? (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_0_1)
                                       : (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_0_0)))))))));
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
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___io_in_r_valid_T_4 
        = ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___io_in_r_bits_data_T_2) 
           | (3U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)));
    vlSelf->top__DOT__csr__DOT___map_r_T_11 = ((0x300U 
                                                == (IData)(vlSelf->top__DOT__exu_io_csr_idx_r))
                                                ? 0U
                                                : (
                                                   (0x305U 
                                                    == (IData)(vlSelf->top__DOT__exu_io_csr_idx_r))
                                                    ? 1U
                                                    : 
                                                   ((0x341U 
                                                     == (IData)(vlSelf->top__DOT__exu_io_csr_idx_r))
                                                     ? 2U
                                                     : 
                                                    ((0x342U 
                                                      == (IData)(vlSelf->top__DOT__exu_io_csr_idx_r))
                                                      ? 3U
                                                      : 
                                                     ((0x304U 
                                                       == (IData)(vlSelf->top__DOT__exu_io_csr_idx_r))
                                                       ? 4U
                                                       : 
                                                      ((0x344U 
                                                        == (IData)(vlSelf->top__DOT__exu_io_csr_idx_r))
                                                        ? 5U
                                                        : 0U))))));
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend_sign 
        = ((IData)((vlSelf->top__DOT__exu__DOT__alu_io_src1 
                    >> 0x3fU)) & (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__is_dividing_signed));
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__next_valid 
        = ((~ (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__state)) 
           & (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul_io_mul_valid));
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_14 
        = ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT____VdfgTmp_h084807ca__0) 
           | ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__is_dividing)
               ? ((0U != (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__shift_count)) 
                  & (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__is_dividing))
               : (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__is_dividing)));
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
    vlSelf->top__DOT__exu__DOT__lsu_io_lm_b_valid = 
        (((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___io_in_r_valid_T_4) 
          | ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_b_valid) 
             & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__uncache))) 
         & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wmode));
    vlSelf->top__DOT__exu__DOT__lsu_io_lm_r_valid = 
        (((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___io_in_r_valid_T_4) 
          | ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_r_valid) 
             & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__uncache))) 
         & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__rmode));
    vlSelf->top__DOT__exu_io_csr_val_r = (((IData)(vlSelf->top__DOT__exu__DOT___io_csr_en_r_T_2) 
                                           | (IData)(vlSelf->top__DOT__exu__DOT____VdfgTmp_h02ad16ce__0))
                                           ? ((5U == (IData)(vlSelf->top__DOT__csr__DOT___map_r_T_11))
                                               ? vlSelf->top__DOT__csr__DOT__csr_5
                                               : ((4U 
                                                   == (IData)(vlSelf->top__DOT__csr__DOT___map_r_T_11))
                                                   ? vlSelf->top__DOT__csr__DOT__csr_4
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->top__DOT__csr__DOT___map_r_T_11))
                                                    ? vlSelf->top__DOT__csr__DOT__csr_3
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__csr__DOT___map_r_T_11))
                                                     ? vlSelf->top__DOT__csr__DOT__csr_2
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->top__DOT__csr__DOT___map_r_T_11))
                                                      ? vlSelf->top__DOT__csr__DOT__csr_1
                                                      : vlSelf->top__DOT__csr__DOT__csr_0)))))
                                           : 0ULL);
    top__DOT__exu__DOT__lsu_io_ls_out_bits_rdata = 
        ((IData)(vlSelf->top__DOT__exu__DOT__lsu_io_lm_r_valid)
          ? vlSelf->top__DOT__exu__DOT__lsu_io_lm_r_bits_data
          : vlSelf->top__DOT__exu__DOT__lsu__DOT__rdata);
    vlSelf->top__DOT__exu__DOT__lsu_io_ls_out_valid 
        = ((IData)(vlSelf->top__DOT__exu__DOT__lsu_io_lm_r_valid) 
           | (IData)(vlSelf->top__DOT__exu__DOT__lsu_io_lm_b_valid));
    vlSelf->top__DOT__exu__DOT__alu_io_src2 = ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x222000U 
                                                         & vlSelf->top__DOT__exu__DOT__EXE_reg_op[0U])))
                                                ? (QData)((IData)(
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->top__DOT__exu__DOT__src2))))
                                                : (
                                                   (0x2000000U 
                                                    & vlSelf->top__DOT__exu__DOT__EXE_reg_op[0U])
                                                    ? (QData)((IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_pc))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__exu__DOT___alu_io_src1_T_26)
                                                     ? 4ULL
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__exu__DOT__lsu_io_en_w)
                                                      ? vlSelf->top__DOT__exu__DOT__dest
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__exu__DOT____VdfgTmp_hbef24655__0)
                                                       ? (QData)((IData)(vlSelf->top__DOT__exu__DOT__src2))
                                                       : 
                                                      ((1U 
                                                        & vlSelf->top__DOT__exu__DOT__EXE_reg_op[2U])
                                                        ? vlSelf->top__DOT__exu_io_csr_val_r
                                                        : vlSelf->top__DOT__exu__DOT__src2))))));
    vlSelf->top__DOT__exu__DOT___io_in_ready_T_1 = 
        ((IData)(vlSelf->top__DOT__exu__DOT__lsu_finish) 
         | (IData)(vlSelf->top__DOT__exu__DOT__lsu_io_ls_out_valid));
    __Vtemp_h8acdfc31__1[0U] = (IData)(vlSelf->top__DOT__exu__DOT__alu_io_src1);
    __Vtemp_h8acdfc31__1[1U] = (IData)((vlSelf->top__DOT__exu__DOT__alu_io_src1 
                                        >> 0x20U));
    __Vtemp_h8acdfc31__1[2U] = 0U;
    __Vtemp_haa34cb33__0[0U] = (IData)(((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT___adder_b_T_6)
                                         ? (~ vlSelf->top__DOT__exu__DOT__alu_io_src2)
                                         : vlSelf->top__DOT__exu__DOT__alu_io_src2));
    __Vtemp_haa34cb33__0[1U] = (IData)((((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT___adder_b_T_6)
                                          ? (~ vlSelf->top__DOT__exu__DOT__alu_io_src2)
                                          : vlSelf->top__DOT__exu__DOT__alu_io_src2) 
                                        >> 0x20U));
    __Vtemp_haa34cb33__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_hb8308970__0, __Vtemp_h8acdfc31__1, __Vtemp_haa34cb33__0);
    __Vtemp_h42d850f5__0[0U] = __Vtemp_hb8308970__0[0U];
    __Vtemp_h42d850f5__0[1U] = __Vtemp_hb8308970__0[1U];
    __Vtemp_h42d850f5__0[2U] = (1U & __Vtemp_hb8308970__0[2U]);
    __Vtemp_h435fb019__0[0U] = vlSelf->top__DOT__exu__DOT__alu__DOT___adder_b_T_6;
    __Vtemp_h435fb019__0[1U] = 0U;
    __Vtemp_h435fb019__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h9decc0cb__0, __Vtemp_h42d850f5__0, __Vtemp_h435fb019__0);
    vlSelf->top__DOT__exu__DOT__alu__DOT___sum_T_1[0U] 
        = __Vtemp_h9decc0cb__0[0U];
    vlSelf->top__DOT__exu__DOT__alu__DOT___sum_T_1[1U] 
        = __Vtemp_h9decc0cb__0[1U];
    vlSelf->top__DOT__exu__DOT__alu__DOT___sum_T_1[2U] 
        = (3U & __Vtemp_h9decc0cb__0[2U]);
    vlSelf->top__DOT__ifu_io_out_ready = ((IData)(vlSelf->top__DOT__exu__DOT___io_in_ready_T_1) 
                                          & (IData)(vlSelf->top__DOT__exu__DOT___io_in_ready_T_3));
    vlSelf->top__DOT__exu_io_out_valid = ((2U == (IData)(vlSelf->top__DOT__exu__DOT__state)) 
                                          & ((IData)(vlSelf->top__DOT__exu__DOT___io_in_ready_T_1) 
                                             & ((~ (IData)(vlSelf->top__DOT__exu__DOT__lsu_io_flush)) 
                                                & (IData)(vlSelf->top__DOT__exu__DOT___io_in_ready_T_3))));
    vlSelf->top__DOT__exu__DOT__alu_io_result = (((IData)(vlSelf->__VdfgTmp_h017bc6aa__0) 
                                                  | (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hcce4bab8__0))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__exu__DOT__alu__DOT___sum_T_1[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__exu__DOT__alu__DOT___sum_T_1[0U])))
                                                  : 
                                                 (((~ (IData)(vlSelf->__VdfgTmp_h017bc6aa__0)) 
                                                   & ((~ (IData)(vlSelf->__VdfgTmp_h91ae477b__0)) 
                                                      & (IData)(vlSelf->__VdfgTmp_h983d62b8__0)))
                                                   ? 
                                                  (vlSelf->top__DOT__exu__DOT__alu_io_src1 
                                                   & vlSelf->top__DOT__exu__DOT__alu_io_src2)
                                                   : 
                                                  (((~ (IData)(vlSelf->__VdfgTmp_h017bc6aa__0)) 
                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h91ae477b__0)) 
                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h983d62b8__0)) 
                                                          & (IData)(vlSelf->__VdfgTmp_h38508cf3__0))))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__alu_io_src1 
                                                    | vlSelf->top__DOT__exu__DOT__alu_io_src2)
                                                    : 
                                                   (((~ (IData)(vlSelf->__VdfgTmp_h017bc6aa__0)) 
                                                     & ((~ (IData)(vlSelf->__VdfgTmp_h91ae477b__0)) 
                                                        & ((~ (IData)(vlSelf->__VdfgTmp_h983d62b8__0)) 
                                                           & ((~ (IData)(vlSelf->__VdfgTmp_h38508cf3__0)) 
                                                              & (IData)(vlSelf->__VdfgTmp_h9fd488de__0)))))
                                                     ? 
                                                    (vlSelf->top__DOT__exu__DOT__alu_io_src1 
                                                     ^ vlSelf->top__DOT__exu__DOT__alu_io_src2)
                                                     : 
                                                    (((~ (IData)(vlSelf->__VdfgTmp_h017bc6aa__0)) 
                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h91ae477b__0)) 
                                                         & ((~ (IData)(vlSelf->__VdfgTmp_h983d62b8__0)) 
                                                            & ((~ (IData)(vlSelf->__VdfgTmp_h38508cf3__0)) 
                                                               & ((~ (IData)(vlSelf->__VdfgTmp_h9fd488de__0)) 
                                                                  & (IData)(vlSelf->__VdfgTmp_h86f020bc__0))))))
                                                      ? 
                                                     (vlSelf->top__DOT__exu__DOT__alu_io_src1 
                                                      << 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->top__DOT__exu__DOT__alu_io_src2)))
                                                      : 
                                                     (((~ (IData)(vlSelf->__VdfgTmp_h017bc6aa__0)) 
                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h91ae477b__0)) 
                                                          & ((~ (IData)(vlSelf->__VdfgTmp_h983d62b8__0)) 
                                                             & ((~ (IData)(vlSelf->__VdfgTmp_h38508cf3__0)) 
                                                                & ((~ (IData)(vlSelf->__VdfgTmp_h9fd488de__0)) 
                                                                   & ((~ (IData)(vlSelf->__VdfgTmp_h86f020bc__0)) 
                                                                      & (IData)(vlSelf->__VdfgTmp_h6abc90f0__0)))))))
                                                       ? 
                                                      (vlSelf->top__DOT__exu__DOT__alu_io_src1 
                                                       >> 
                                                       (0x3fU 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__alu_io_src2)))
                                                       : 
                                                      (((~ (IData)(vlSelf->__VdfgTmp_h017bc6aa__0)) 
                                                        & ((~ (IData)(vlSelf->__VdfgTmp_h91ae477b__0)) 
                                                           & ((~ (IData)(vlSelf->__VdfgTmp_h983d62b8__0)) 
                                                              & ((~ (IData)(vlSelf->__VdfgTmp_h38508cf3__0)) 
                                                                 & ((~ (IData)(vlSelf->__VdfgTmp_h9fd488de__0)) 
                                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h86f020bc__0)) 
                                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h6abc90f0__0)) 
                                                                          & (IData)(vlSelf->__VdfgTmp_h6bd19a8d__0))))))))
                                                        ? 
                                                       VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__exu__DOT__alu_io_src1, 
                                                                      (0x3fU 
                                                                       & (IData)(vlSelf->top__DOT__exu__DOT__alu_io_src2)))
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hcc87cf9a__0)
                                                         ? (QData)((IData)(
                                                                           (1U 
                                                                            & (((~ (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__alu_io_src2 
                                                                                >> 0x3fU))) 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__alu_io_src1 
                                                                                >> 0x3fU))) 
                                                                               | ((~ 
                                                                                ((IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__alu_io_src1 
                                                                                >> 0x3fU)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__alu_io_src2 
                                                                                >> 0x3fU)))) 
                                                                                & (vlSelf->top__DOT__exu__DOT__alu__DOT___sum_T_1[1U] 
                                                                                >> 0x1fU))))))
                                                         : 
                                                        ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hcc9c168f__0)
                                                          ? (QData)((IData)(
                                                                            (1U 
                                                                             & (~ 
                                                                                vlSelf->top__DOT__exu__DOT__alu__DOT___sum_T_1[2U]))))
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hccd47755__0)
                                                           ? (QData)((IData)(
                                                                             (0ULL 
                                                                              == 
                                                                              (((QData)((IData)(
                                                                                vlSelf->top__DOT__exu__DOT__alu__DOT___sum_T_1[1U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->top__DOT__exu__DOT__alu__DOT___sum_T_1[0U]))))))
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT___T_4)
                                                            ? 
                                                           (((QData)((IData)(
                                                                             vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__result[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__result[0U])))
                                                            : 
                                                           ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT___T_13)
                                                             ? vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__quotient
                                                             : 
                                                            ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hed5181a0__0)
                                                              ? vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__remainder
                                                              : 0ULL)))))))))))));
    if (vlSelf->top__DOT__exu__DOT__lsu_io_en_w) {
        vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_bits_wdata 
            = vlSelf->top__DOT__exu__DOT__gpr_val_r2;
        vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_bits_waddr 
            = (IData)(vlSelf->top__DOT__exu__DOT__alu_io_result);
    } else {
        vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_bits_wdata = 0ULL;
        vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_bits_waddr = 0U;
    }
    if ((0U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state))) {
        vlSelf->top__DOT__crossbar__DOT__DCache__DOT___state_T_22 
            = ((IData)(vlSelf->top__DOT__ifu_io_irq)
                ? 0U : ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__req)
                         ? 1U : 0U));
        vlSelf->__VdfgTmp_h19a80e75__0 = (3U & ((IData)(vlSelf->top__DOT__exu__DOT__lsu_io_en_r)
                                                 ? (IData)(
                                                           (vlSelf->top__DOT__exu__DOT__alu_io_result 
                                                            >> 4U))
                                                 : 0U));
    } else {
        vlSelf->top__DOT__crossbar__DOT__DCache__DOT___state_T_22 = 0U;
        vlSelf->__VdfgTmp_h19a80e75__0 = (3U & (vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr 
                                                >> 4U));
    }
    vlSelf->top__DOT__exu__DOT__alu_result = ((IData)(vlSelf->top__DOT__exu_io_out_valid)
                                               ? vlSelf->top__DOT__exu__DOT__alu_io_result
                                               : vlSelf->top__DOT__exu__DOT__alu_res);
    vlSelf->top__DOT__exu__DOT__next_pc_sum = (((0x20U 
                                                 & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])
                                                 ? vlSelf->top__DOT__exu__DOT__src1
                                                 : (QData)((IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_pc))) 
                                               + ((1U 
                                                   & ((vlSelf->top__DOT__exu__DOT__EXE_reg_op[0U] 
                                                       >> 0x1eU) 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__alu_io_result)))
                                                   ? vlSelf->top__DOT__exu__DOT__dest
                                                   : 
                                                  ((IData)(
                                                           ((~ vlSelf->top__DOT__exu__DOT__alu_io_result) 
                                                            & (vlSelf->top__DOT__exu__DOT__EXE_reg_op[0U] 
                                                               >> 0x1fU)))
                                                    ? vlSelf->top__DOT__exu__DOT__dest
                                                    : 
                                                   ((1U 
                                                     & ((~ (IData)(vlSelf->top__DOT__exu__DOT__alu_io_result)) 
                                                        & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U]))
                                                     ? vlSelf->top__DOT__exu__DOT__dest
                                                     : 
                                                    ((1U 
                                                      & ((~ (IData)(vlSelf->top__DOT__exu__DOT__alu_io_result)) 
                                                         & (vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U] 
                                                            >> 1U)))
                                                      ? vlSelf->top__DOT__exu__DOT__dest
                                                      : 
                                                     ((1U 
                                                       & ((vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U] 
                                                           >> 2U) 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__alu_io_result)))
                                                       ? vlSelf->top__DOT__exu__DOT__dest
                                                       : 
                                                      ((1U 
                                                        & ((vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U] 
                                                            >> 3U) 
                                                           & (IData)(vlSelf->top__DOT__exu__DOT__alu_io_result)))
                                                        ? vlSelf->top__DOT__exu__DOT__dest
                                                        : 
                                                       ((0x10U 
                                                         & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])
                                                         ? vlSelf->top__DOT__exu__DOT__src1
                                                         : 
                                                        ((0x20U 
                                                          & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])
                                                          ? vlSelf->top__DOT__exu__DOT__src2
                                                          : 4ULL)))))))));
    vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_bits_raddr 
        = ((IData)(vlSelf->top__DOT__exu__DOT__lsu_io_en_r)
            ? (IData)(vlSelf->top__DOT__exu__DOT__alu_io_result)
            : 0U);
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
    vlSelf->top__DOT__exu_io_out_bits_pc_dnpc = ((IData)(vlSelf->top__DOT__exu__DOT____VdfgTmp_h02ad16ce__0)
                                                  ? vlSelf->top__DOT__exu_io_csr_val_r
                                                  : 
                                                 ((0x20U 
                                                   & vlSelf->top__DOT__exu__DOT__EXE_reg_op[1U])
                                                   ? 
                                                  (0xfffffffffffffffeULL 
                                                   & vlSelf->top__DOT__exu__DOT__next_pc_sum)
                                                   : vlSelf->top__DOT__exu__DOT__next_pc_sum));
    vlSelf->top__DOT__crossbar__DOT__DCache_io_uncache 
        = ((0xa0000000U <= vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_bits_raddr) 
           | ((0xa0000000U <= vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_bits_waddr) 
              | (((0x20000000U <= vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_bits_raddr) 
                  & (0x2000bfffU >= vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_bits_raddr)) 
                 | ((0x20000000U <= vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_bits_waddr) 
                    & (0x2000bfffU >= vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_bits_waddr)))));
    vlSelf->top__DOT__ifu_io_p_error = ((~ ((IData)(vlSelf->top__DOT__exu__DOT__EXE_reg_isJump) 
                                            | ((0U 
                                                == vlSelf->top__DOT__exu__DOT__EXE_reg_pc) 
                                               | (vlSelf->top__DOT__exu_io_out_bits_pc_dnpc 
                                                  == (QData)((IData)(vlSelf->top__DOT__idu__DOT__ID_reg_pc)))))) 
                                        & (IData)(vlSelf->top__DOT__exu_io_out_valid));
    if (vlSelf->top__DOT__crossbar__DOT__DCache_io_uncache) {
        vlSelf->top__DOT__sram_io_w_bits_strb = vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_bits_wmask;
        vlSelf->top__DOT__sram__DOT__pmem_wdata = vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_bits_wdata;
        vlSelf->top__DOT__sram_io_aw_bits_addr = vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_bits_waddr;
    } else {
        vlSelf->top__DOT__sram_io_w_bits_strb = 0xffU;
        vlSelf->top__DOT__sram__DOT__pmem_wdata = (
                                                   (4U 
                                                    == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstate))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__way)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q1[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q1[2U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q0[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q0[2U]))))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__way)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q1[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q1[0U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q0[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q0[0U])))));
        vlSelf->top__DOT__sram_io_aw_bits_addr = ((
                                                   ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__way)
                                                     ? (IData)(
                                                               (vlSelf->top__DOT__crossbar__DOT__DCache__DOT___GEN_3 
                                                                >> 0x1aU))
                                                     : (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___GEN_3)) 
                                                   << 6U) 
                                                  | (0x30U 
                                                     & vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr));
    }
    vlSelf->top__DOT__sram_io_w_bits_last = (((IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_uncache) 
                                              & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___req_T_1)) 
                                             | (4U 
                                                == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstate)));
    vlSelf->__VdfgTmp_h9de938e0__0 = (((0U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)) 
                                       & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_uncache)) 
                                      & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___req_T_1));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___io_mem_ar_bits_addr_T_1 
        = ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_uncache) 
           & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___req_T));
    vlSelf->top__DOT__idu_io_flush = ((IData)(vlSelf->top__DOT__ifu_io_irq) 
                                      | (IData)(vlSelf->top__DOT__ifu_io_p_error));
    vlSelf->top__DOT__clint__DOT___mtimecmp_T_3 = (vlSelf->top__DOT__sram__DOT__pmem_wdata 
                                                   & ((1U 
                                                       == (IData)(vlSelf->top__DOT__sram_io_w_bits_strb))
                                                       ? 0xffULL
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSelf->top__DOT__sram_io_w_bits_strb))
                                                        ? 0xffffULL
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(vlSelf->top__DOT__sram_io_w_bits_strb))
                                                         ? 0xffffffffULL
                                                         : 
                                                        ((0xffU 
                                                          == (IData)(vlSelf->top__DOT__sram_io_w_bits_strb))
                                                          ? 0xffffffffffffffffULL
                                                          : 0ULL)))));
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
    vlSelf->top__DOT__crossbar__DOT__DeviceArbiter__DOT___T_6 
        = ((0x20000000U <= vlSelf->top__DOT__sram_io_aw_bits_addr) 
           & (0x2000bfffU >= vlSelf->top__DOT__sram_io_aw_bits_addr));
    vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_ar_valid 
        = ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___io_mem_ar_bits_addr_T_1) 
           | ((2U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)) 
              & (0U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__rstate))));
    vlSelf->top__DOT__ifu_io_out_valid = (1U & (((IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT___io_in_r_bits_data_T_2) 
                                                 | ((IData)(vlSelf->top__DOT__crossbar__DOT__ICache_io_mem_r_valid) 
                                                    & (IData)(vlSelf->top__DOT__crossbar__DOT__ICache_io_mem_r_bits_last))) 
                                                | ((~ (IData)(vlSelf->top__DOT__ifu__DOT__IF_reg_valid)) 
                                                   | (IData)(vlSelf->top__DOT__idu_io_flush))));
    vlSelf->top__DOT__clint__DOT___wstate_T = ((~ (IData)(vlSelf->top__DOT__clint__DOT__wstate)) 
                                               & ((IData)(vlSelf->top__DOT__crossbar__DOT__DeviceArbiter__DOT___T_6) 
                                                  & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_w_valid)));
    vlSelf->top__DOT__sram__DOT___wid_T = ((~ (IData)(vlSelf->top__DOT__sram__DOT__wstate)) 
                                           & ((~ (IData)(vlSelf->top__DOT__crossbar__DOT__DeviceArbiter__DOT___T_6)) 
                                              & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_aw_valid)));
    vlSelf->top__DOT__sram__DOT___wstate_T = ((~ (IData)(vlSelf->top__DOT__sram__DOT__wstate)) 
                                              & ((~ (IData)(vlSelf->top__DOT__crossbar__DOT__DeviceArbiter__DOT___T_6)) 
                                                 & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_w_valid)));
    vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_aw_ready 
        = (1U & ((IData)(vlSelf->top__DOT__crossbar__DOT__DeviceArbiter__DOT___T_6)
                  ? (~ (IData)(vlSelf->top__DOT__clint__DOT__wstate))
                  : (~ (IData)(vlSelf->top__DOT__sram__DOT__wstate))));
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
    vlSelf->top__DOT__idu__DOT___ID_reg_inst_T = ((IData)(vlSelf->top__DOT__ifu_io_out_valid) 
                                                  & (IData)(vlSelf->top__DOT__ifu_io_out_ready));
    vlSelf->top__DOT__exu__DOT___EXE_reg_pc_T = ((IData)(vlSelf->top__DOT__ifu_io_out_ready) 
                                                 & ((IData)(vlSelf->top__DOT__idu__DOT__state) 
                                                    & ((~ (IData)(vlSelf->top__DOT__idu_io_flush)) 
                                                       & (IData)(vlSelf->top__DOT__ifu_io_out_valid))));
    vlSelf->top__DOT__ifu__DOT___next_valid_T_5 = ((IData)(vlSelf->top__DOT__ifu_io_out_ready) 
                                                   & (IData)(vlSelf->top__DOT__ifu_io_out_valid));
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___wstate_T_4 
        = ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_aw_ready) 
           & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_w_valid));
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
    vlSelf->top__DOT__exu__DOT___lsu_finish_T_11 = 
        (1U & ((~ ((IData)(vlSelf->top__DOT__exu__DOT___EXE_reg_pc_T) 
                   & ((IData)(vlSelf->top__DOT__idu__DOT__op_t_38) 
                      | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_39) 
                         | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_40) 
                            | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_41) 
                               | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_46) 
                                  | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_47) 
                                     | ((IData)(vlSelf->top__DOT__idu__DOT__op_t_48) 
                                        | (IData)(vlSelf->top__DOT__idu__DOT__typ_t_2)))))))))) 
               & ((IData)(vlSelf->top__DOT__exu__DOT__lsu_io_ls_out_valid) 
                  | ((~ ((IData)(vlSelf->top__DOT__exu__DOT__lsu_io_en_r) 
                         | (IData)(vlSelf->top__DOT__exu__DOT__lsu_io_en_w))) 
                     | (IData)(vlSelf->top__DOT__exu__DOT__lsu_finish)))));
    vlSelf->top__DOT__exu__DOT___alu_finish_T_3 = ((IData)(vlSelf->top__DOT__exu__DOT___EXE_reg_pc_T) 
                                                   & (IData)(vlSelf->__VdfgTmp_h1455dd83__0));
    vlSelf->top__DOT__ifu__DOT__it__DOT__rf[2U] = (QData)((IData)(
                                                                  ((IData)(vlSelf->top__DOT__ifu__DOT___next_valid_T_5) 
                                                                   & (IData)(vlSelf->top__DOT__ifu__DOT__IF_reg_valid))));
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
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___wstate_T_21 
        = ((0U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstate))
            ? ((IData)(vlSelf->top__DOT__ifu_io_irq)
                ? 0U : (((2U == (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state)) 
                         & ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_aw_ready) 
                            & ((IData)(vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_aw_valid) 
                               & (IData)(vlSelf->top__DOT__crossbar__DOT__DCache__DOT___wstate_T_4))))
                         ? 4U : 0U)) : 0U);
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
        vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[0U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[1U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36[2U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[0U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[1U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[2U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[3U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37[4U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[0U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[1U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[2U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[3U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9[4U] = 0U;
        vlSelf->top__DOT__sram__DOT___GEN_10 = 0ULL;
        vlSelf->top__DOT__clint__DOT___GEN_6 = 0ULL;
        vlSelf->top__DOT__clint__DOT___GEN_7 = 0U;
        vlSelf->top__DOT__clint__DOT___GEN_5 = 0ULL;
        vlSelf->top__DOT__sram__DOT___GEN_7 = 0ULL;
        vlSelf->top__DOT__sram__DOT___GEN_5 = 0U;
        vlSelf->top__DOT__sram__DOT___GEN_8 = 0U;
        vlSelf->top__DOT__sram__DOT___GEN_6 = 0ULL;
    } else {
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
    vlSelf->top__DOT__exu__DOT___alu_finish_T_10 = 
        (1U & ((~ (IData)(vlSelf->top__DOT__exu__DOT___alu_finish_T_3)) 
               & ((IData)(vlSelf->top__DOT__exu__DOT__alu_io_validout) 
                  | ((~ (IData)(vlSelf->top__DOT__exu__DOT____VdfgTmp_h890f4290__0)) 
                     | (IData)(vlSelf->top__DOT__exu__DOT__alu_finish)))));
    vlSelf->top__DOT__exu__DOT___alu_valid_T_6 = ((IData)(vlSelf->top__DOT__exu__DOT___alu_finish_T_3) 
                                                  | ((~ 
                                                      ((~ (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__is_dividing)) 
                                                       & (~ (IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__state)))) 
                                                     & (IData)(vlSelf->top__DOT__exu__DOT__alu_valid)));
    vlSelf->__VdfgTmp_h376cdefd__0 = ((IData)(vlSelf->top__DOT__ifu_io_irq)
                                       ? (QData)((IData)(vlSelf->top__DOT__csr__DOT__csr_1))
                                       : ((IData)(vlSelf->top__DOT__ifu_io_p_error)
                                           ? (QData)((IData)(vlSelf->top__DOT__exu_io_out_bits_pc_dnpc))
                                           : vlSelf->top__DOT__ifu__DOT___next_pc_T_12));
    if (vlSelf->top__DOT__crossbar__DOT__ICache__DOT__en_w) {
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_1__DOT__bwen[0U] 
            = (Vtop__ConstPool__CONST_h9ba48564_0[0U] 
               & __Vtemp_h534a28cd__0[0U]);
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_1__DOT__bwen[1U] 
            = (Vtop__ConstPool__CONST_h9ba48564_0[1U] 
               & __Vtemp_h534a28cd__0[1U]);
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_1__DOT__bwen[2U] 
            = (Vtop__ConstPool__CONST_h9ba48564_0[2U] 
               & __Vtemp_h534a28cd__0[2U]);
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_1__DOT__bwen[3U] 
            = (Vtop__ConstPool__CONST_h9ba48564_0[3U] 
               & __Vtemp_h534a28cd__0[3U]);
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
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_1__DOT__bwen[0U] = 0U;
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_1__DOT__bwen[1U] = 0U;
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_1__DOT__bwen[2U] = 0U;
        vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_1__DOT__bwen[3U] = 0U;
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
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___addr_T_3 
        = ((1U == (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__state)) 
           & (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__req));
    vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_2__DOT__cen 
        = ((0U == (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__state)) 
           | ((IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT___addr_T_3) 
              | (3U == (IData)(vlSelf->top__DOT__crossbar__DOT__ICache__DOT__state))));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = 0;
    vlSelf->reset = 0;
    vlSelf->io_pc = 0;
    vlSelf->io_valid = 0;
    vlSelf->io_hitrate_i = 0;
    vlSelf->io_hitrate_d = 0;
    vlSelf->io_mul_sel = 0;
    vlSelf->io_timer_diff_skip = 0;
    vlSelf->io_B_num = 0;
    vlSelf->io_B_Error = 0;
    vlSelf->io_block_num = 0;
    vlSelf->io_mul_num = 0;
    vlSelf->io_div_num = 0;
    vlSelf->top__DOT__ifu_io_clearJump = 0;
    vlSelf->top__DOT__ifu_io_lm_r_bits_data = 0;
    vlSelf->top__DOT__ifu_io_out_ready = 0;
    vlSelf->top__DOT__ifu_io_out_valid = 0;
    vlSelf->top__DOT__ifu_io_irq = 0;
    vlSelf->top__DOT__ifu_io_p_error = 0;
    vlSelf->top__DOT__idu_io_out_bits_imm = 0;
    VL_ZERO_RESET_W(80, vlSelf->top__DOT__idu_io_out_bits_op);
    vlSelf->top__DOT__idu_io_flush = 0;
    vlSelf->top__DOT__exu_io_out_valid = 0;
    vlSelf->top__DOT__exu_io_out_bits_pc_dnpc = 0;
    vlSelf->top__DOT__exu_io_out_bits_gpr_val_w = 0;
    vlSelf->top__DOT__exu_io_gpr_en_r1 = 0;
    vlSelf->top__DOT__exu_io_gpr_en_r2 = 0;
    vlSelf->top__DOT__exu_io_gpr_val_r1 = 0;
    vlSelf->top__DOT__exu_io_gpr_val_r2 = 0;
    vlSelf->top__DOT__exu_io_csr_idx_r = 0;
    vlSelf->top__DOT__exu_io_csr_val_r = 0;
    vlSelf->top__DOT__exu_io_bypass_idx = 0;
    vlSelf->top__DOT__wbu_io_gpr_en_w = 0;
    vlSelf->top__DOT__wbu_io_csr_en_w = 0;
    vlSelf->top__DOT__wbu_io_csr_no = 0;
    vlSelf->top__DOT__csr_io_clint_mtip = 0;
    vlSelf->top__DOT__csr_io_en_mtip = 0;
    vlSelf->top__DOT__sram_io_ar_ready = 0;
    vlSelf->top__DOT__sram_io_ar_bits_addr = 0;
    vlSelf->top__DOT__sram_io_ar_bits_len = 0;
    vlSelf->top__DOT__sram_io_ar_bits_size = 0;
    vlSelf->top__DOT__sram_io_r_bits_last = 0;
    vlSelf->top__DOT__sram_io_aw_bits_addr = 0;
    vlSelf->top__DOT__sram_io_w_bits_strb = 0;
    vlSelf->top__DOT__sram_io_w_bits_last = 0;
    vlSelf->top__DOT__clint_io_in_ar_ready = 0;
    vlSelf->top__DOT__clint_io_in_r_bits_last = 0;
    vlSelf->top__DOT__ifu__DOT__pre_decode_io_jump = 0;
    vlSelf->top__DOT__ifu__DOT__pre_decode_io_j = 0;
    vlSelf->top__DOT__ifu__DOT__IF_reg_valid = 0;
    vlSelf->top__DOT__ifu__DOT___next_valid_T_5 = 0;
    vlSelf->top__DOT__ifu__DOT__next_valid = 0;
    vlSelf->top__DOT__ifu__DOT__IF_reg_pc = 0;
    vlSelf->top__DOT__ifu__DOT___next_pc_T_12 = 0;
    vlSelf->top__DOT__ifu__DOT__B_num = 0;
    vlSelf->top__DOT__ifu__DOT__B_Error = 0;
    vlSelf->top__DOT__ifu__DOT___B_num_T_4 = 0;
    vlSelf->top__DOT__ifu__DOT___B_Error_T_2 = 0;
    vlSelf->top__DOT__ifu__DOT__block_num = 0;
    vlSelf->top__DOT__ifu__DOT___block_num_T_4 = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__ifu__DOT__it__DOT__rf[__Vi0] = 0;
    }
    vlSelf->top__DOT__idu__DOT___ID_reg_inst_T = 0;
    vlSelf->top__DOT__idu__DOT__ID_reg_inst = 0;
    vlSelf->top__DOT__idu__DOT__ID_reg_pc = 0;
    vlSelf->top__DOT__idu__DOT__ID_reg_isJump = 0;
    vlSelf->top__DOT__idu__DOT__state = 0;
    vlSelf->top__DOT__idu__DOT___op_t_0_T_4 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_0 = 0;
    vlSelf->top__DOT__idu__DOT___op_t_1_T_4 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_1 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_2 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_3 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_4 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_5 = 0;
    vlSelf->top__DOT__idu__DOT___op_t_6_T_4 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_6 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_7 = 0;
    vlSelf->top__DOT__idu__DOT___op_t_8_T_4 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_8 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_9 = 0;
    vlSelf->top__DOT__idu__DOT___op_t_10_T_4 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_10 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_11 = 0;
    vlSelf->top__DOT__idu__DOT___op_t_12_T_4 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_12 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_13 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_14 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_15 = 0;
    vlSelf->top__DOT__idu__DOT___op_t_16_T_4 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_16 = 0;
    vlSelf->top__DOT__idu__DOT___op_t_17_T_4 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_17 = 0;
    vlSelf->top__DOT__idu__DOT___op_t_18_T_4 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_18 = 0;
    vlSelf->top__DOT__idu__DOT___op_t_19_T_4 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_19 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_20 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_21 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_22 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_23 = 0;
    vlSelf->top__DOT__idu__DOT___op_t_26_T_4 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_26 = 0;
    vlSelf->top__DOT__idu__DOT___op_t_27_T_4 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_27 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_28 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_29 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_30 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_31 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_32 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_33 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_34 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_35 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_37 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_38 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_39 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_40 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_41 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_42 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_43 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_44 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_45 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_46 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_47 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_48 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_50 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_51 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_52 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_53 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_54 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_55 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_56 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_57 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_58 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_59 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_60 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_61 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_62 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_63 = 0;
    vlSelf->top__DOT__idu__DOT__op_t_64 = 0;
    vlSelf->top__DOT__idu__DOT__typ_t_0 = 0;
    vlSelf->top__DOT__idu__DOT__typ_t_1 = 0;
    vlSelf->top__DOT__idu__DOT__typ_t_2 = 0;
    vlSelf->top__DOT__idu__DOT__typ_t_4 = 0;
    vlSelf->top__DOT__idu__DOT____VdfgTmp_hdbd884e4__0 = 0;
    vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_valid = 0;
    vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_bits_raddr = 0;
    vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_bits_waddr = 0;
    vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_bits_wdata = 0;
    vlSelf->top__DOT__exu__DOT__lsu_io_ls_in_bits_wmask = 0;
    vlSelf->top__DOT__exu__DOT__lsu_io_ls_out_valid = 0;
    vlSelf->top__DOT__exu__DOT__lsu_io_en_r = 0;
    vlSelf->top__DOT__exu__DOT__lsu_io_en_w = 0;
    vlSelf->top__DOT__exu__DOT__lsu_io_lm_r_valid = 0;
    vlSelf->top__DOT__exu__DOT__lsu_io_lm_r_bits_data = 0;
    vlSelf->top__DOT__exu__DOT__lsu_io_lm_b_valid = 0;
    vlSelf->top__DOT__exu__DOT__lsu_io_flush = 0;
    vlSelf->top__DOT__exu__DOT__alu_io_src1 = 0;
    vlSelf->top__DOT__exu__DOT__alu_io_src2 = 0;
    vlSelf->top__DOT__exu__DOT__alu_io_result = 0;
    vlSelf->top__DOT__exu__DOT__alu_io_validin = 0;
    vlSelf->top__DOT__exu__DOT__alu_io_validout = 0;
    vlSelf->top__DOT__exu__DOT__EXE_reg_flush = 0;
    vlSelf->top__DOT__exu__DOT__gpr_val_r2 = 0;
    vlSelf->top__DOT__exu__DOT___EXE_reg_pc_T = 0;
    vlSelf->top__DOT__exu__DOT__EXE_reg_pc = 0;
    vlSelf->top__DOT__exu__DOT__EXE_reg_rs1 = 0;
    vlSelf->top__DOT__exu__DOT__EXE_reg_rs2 = 0;
    vlSelf->top__DOT__exu__DOT__EXE_reg_rd = 0;
    vlSelf->top__DOT__exu__DOT__EXE_reg_imm = 0;
    VL_ZERO_RESET_W(80, vlSelf->top__DOT__exu__DOT__EXE_reg_op);
    vlSelf->top__DOT__exu__DOT__EXE_reg_typ = 0;
    vlSelf->top__DOT__exu__DOT__EXE_reg_isJump = 0;
    vlSelf->top__DOT__exu__DOT___op_mul_T_2 = 0;
    vlSelf->top__DOT__exu__DOT___op_div_T_2 = 0;
    vlSelf->top__DOT__exu__DOT__src1 = 0;
    vlSelf->top__DOT__exu__DOT___src2_T_2 = 0;
    vlSelf->top__DOT__exu__DOT__src2 = 0;
    vlSelf->top__DOT__exu__DOT__dest = 0;
    vlSelf->top__DOT__exu__DOT__lsu_finish = 0;
    vlSelf->top__DOT__exu__DOT__alu_finish = 0;
    vlSelf->top__DOT__exu__DOT__alu_valid = 0;
    vlSelf->top__DOT__exu__DOT__state = 0;
    vlSelf->top__DOT__exu__DOT___lsu_finish_T_11 = 0;
    vlSelf->top__DOT__exu__DOT___alu_finish_T_3 = 0;
    vlSelf->top__DOT__exu__DOT___alu_finish_T_10 = 0;
    vlSelf->top__DOT__exu__DOT___alu_valid_T_6 = 0;
    vlSelf->top__DOT__exu__DOT__alu_res = 0;
    vlSelf->top__DOT__exu__DOT__alu_result = 0;
    vlSelf->top__DOT__exu__DOT___io_in_ready_T_1 = 0;
    vlSelf->top__DOT__exu__DOT___io_in_ready_T_3 = 0;
    vlSelf->top__DOT__exu__DOT___io_csr_en_r_T_2 = 0;
    vlSelf->top__DOT__exu__DOT___alu_io_src1_T_26 = 0;
    vlSelf->top__DOT__exu__DOT__next_pc_sum = 0;
    vlSelf->top__DOT__exu__DOT____VdfgTmp_h02ad16ce__0 = 0;
    vlSelf->top__DOT__exu__DOT____VdfgTmp_h40d12688__0 = 0;
    vlSelf->top__DOT__exu__DOT____VdfgTmp_h18c2570c__0 = 0;
    vlSelf->top__DOT__exu__DOT____VdfgTmp_h890f4290__0 = 0;
    vlSelf->top__DOT__exu__DOT____VdfgTmp_hd5869584__0 = 0;
    vlSelf->top__DOT__exu__DOT____VdfgTmp_hbef24655__0 = 0;
    vlSelf->top__DOT__exu__DOT____VdfgTmp_h4bc831cd__0 = 0;
    vlSelf->top__DOT__exu__DOT__lsu__DOT__rstate = 0;
    vlSelf->top__DOT__exu__DOT__lsu__DOT__wstate = 0;
    vlSelf->top__DOT__exu__DOT__lsu__DOT__rdata = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__div_io_div_valid = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__div_io_div_signed = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT___adder_b_T_6 = 0;
    VL_ZERO_RESET_W(66, vlSelf->top__DOT__exu__DOT__alu__DOT___sum_T_1);
    vlSelf->top__DOT__exu__DOT__alu__DOT___T_4 = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT___T_8 = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT___T_13 = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hcce4bab8__0 = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hcc87cf9a__0 = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hcc9c168f__0 = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hccd47755__0 = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hed5181a0__0 = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hccd30e34__0 = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hccab2d5e__0 = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_hccbcf5d5__0 = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul_io_mul_valid = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul_io_mul_ready = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__mul_num = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT___mul_num_T_1 = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__state = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__cnt = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__mulBits = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__last = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__next_valid = 0;
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__a);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__b);
    VL_ZERO_RESET_W(130, vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT__result);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___b_T);
    vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___cnt_T_5 = 0;
    VL_ZERO_RESET_W(130, vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___s_T_3);
    VL_ZERO_RESET_W(130, vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___s_T_6);
    VL_ZERO_RESET_W(130, vlSelf->top__DOT__exu__DOT__alu__DOT__mul__DOT__base_mul__DOT___GEN_9);
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__div_num = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___div_num_T_1 = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__quotient = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__remainder = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend);
    VL_ZERO_RESET_W(65, vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__divisor);
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__shift_count = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__is_dividing = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__is_dividing_signed = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__dividend_sign = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__quotient_sign = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__remainder_sign = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__out_valid = 0;
    VL_ZERO_RESET_W(65, vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT__sub);
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_5 = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___shift_count_T_1 = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_11 = 0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_14 = 0;
    VL_ZERO_RESET_W(65, vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_36);
    VL_ZERO_RESET_W(129, vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT___GEN_37);
    vlSelf->top__DOT__exu__DOT__alu__DOT__div__DOT____VdfgTmp_h084807ca__0 = 0;
    vlSelf->top__DOT__wbu__DOT__WB_reg_pc_dnpc = 0;
    vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_en_w = 0;
    vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_idx_w = 0;
    vlSelf->top__DOT__wbu__DOT__WB_reg_gpr_val_w = 0;
    vlSelf->top__DOT__wbu__DOT__WB_reg_csr_en_w = 0;
    vlSelf->top__DOT__wbu__DOT__WB_reg_csr_idx_w = 0;
    vlSelf->top__DOT__wbu__DOT__WB_reg_csr_val_w = 0;
    vlSelf->top__DOT__wbu__DOT__WB_reg_csr_no = 0;
    vlSelf->top__DOT__wbu__DOT__WB_reg_csr_epc = 0;
    vlSelf->top__DOT__wbu__DOT__WB_reg_valid = 0;
    vlSelf->top__DOT__wbu__DOT__WB_reg_isJump = 0;
    vlSelf->top__DOT__wbu__DOT__state = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_1 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_2 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_3 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_4 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_5 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_6 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_7 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_8 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_9 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_10 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_11 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_12 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_13 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_14 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_15 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_16 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_17 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_18 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_19 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_20 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_21 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_22 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_23 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_24 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_25 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_26 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_27 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_28 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_29 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_30 = 0;
    vlSelf->top__DOT__gpr__DOT__gpr_31 = 0;
    vlSelf->top__DOT__gpr__DOT___GEN_94 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__gpr__DOT__p__DOT__rf[__Vi0] = 0;
    }
    vlSelf->top__DOT__csr__DOT__csr_0 = 0;
    vlSelf->top__DOT__csr__DOT__csr_1 = 0;
    vlSelf->top__DOT__csr__DOT__csr_2 = 0;
    vlSelf->top__DOT__csr__DOT__csr_3 = 0;
    vlSelf->top__DOT__csr__DOT__csr_4 = 0;
    vlSelf->top__DOT__csr__DOT__csr_5 = 0;
    vlSelf->top__DOT__csr__DOT__clint_mtip = 0;
    vlSelf->top__DOT__csr__DOT___map_r_T_11 = 0;
    vlSelf->top__DOT__csr__DOT___map_w_T_11 = 0;
    vlSelf->top__DOT__csr__DOT___csr_0_T_10 = 0;
    vlSelf->top__DOT__csr__DOT___csr_0_T_19 = 0;
    vlSelf->top__DOT__csr__DOT___GEN_10 = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__csr__DOT__p__DOT__rf[__Vi0] = 0;
    }
    vlSelf->top__DOT__sram__DOT__pmem_rdata = 0;
    vlSelf->top__DOT__sram__DOT__pmem_wdata = 0;
    vlSelf->top__DOT__sram__DOT__rstate = 0;
    vlSelf->top__DOT__sram__DOT___rstate_T = 0;
    vlSelf->top__DOT__sram__DOT__rcnt = 0;
    vlSelf->top__DOT__sram__DOT__rlen = 0;
    vlSelf->top__DOT__sram__DOT___rlast_T_1 = 0;
    vlSelf->top__DOT__sram__DOT__wstate = 0;
    vlSelf->top__DOT__sram__DOT___wstate_T = 0;
    vlSelf->top__DOT__sram__DOT___wstate_T_4 = 0;
    vlSelf->top__DOT__sram__DOT__rid = 0;
    vlSelf->top__DOT__sram__DOT__raddr = 0;
    vlSelf->top__DOT__sram__DOT__rsize = 0;
    vlSelf->top__DOT__sram__DOT__lower_bound_addr = 0;
    vlSelf->top__DOT__sram__DOT__beatcnt = 0;
    vlSelf->top__DOT__sram__DOT___raddr_T_5 = 0;
    vlSelf->top__DOT__sram__DOT___rcnt_T_7 = 0;
    vlSelf->top__DOT__sram__DOT__waddr = 0;
    vlSelf->top__DOT__sram__DOT__wsize = 0;
    vlSelf->top__DOT__sram__DOT___wid_T = 0;
    vlSelf->top__DOT__sram__DOT___GEN_5 = 0;
    vlSelf->top__DOT__sram__DOT___GEN_6 = 0;
    vlSelf->top__DOT__sram__DOT___GEN_7 = 0;
    vlSelf->top__DOT__sram__DOT___GEN_8 = 0;
    vlSelf->top__DOT__sram__DOT___GEN_10 = 0;
    vlSelf->top__DOT__clint__DOT__mtimecmp = 0;
    vlSelf->top__DOT__clint__DOT__mtime = 0;
    vlSelf->top__DOT__clint__DOT__cnt = 0;
    vlSelf->top__DOT__clint__DOT___cnt_T_2 = 0;
    vlSelf->top__DOT__clint__DOT__rstate = 0;
    vlSelf->top__DOT__clint__DOT___rstate_T = 0;
    vlSelf->top__DOT__clint__DOT__rcnt = 0;
    vlSelf->top__DOT__clint__DOT__rlen = 0;
    vlSelf->top__DOT__clint__DOT___rlast_T_1 = 0;
    vlSelf->top__DOT__clint__DOT__wstate = 0;
    vlSelf->top__DOT__clint__DOT___wstate_T = 0;
    vlSelf->top__DOT__clint__DOT___wstate_T_4 = 0;
    vlSelf->top__DOT__clint__DOT__rid = 0;
    vlSelf->top__DOT__clint__DOT__raddr = 0;
    vlSelf->top__DOT__clint__DOT__rsize = 0;
    vlSelf->top__DOT__clint__DOT__lower_bound_addr = 0;
    vlSelf->top__DOT__clint__DOT__beatcnt = 0;
    vlSelf->top__DOT__clint__DOT___raddr_T_5 = 0;
    vlSelf->top__DOT__clint__DOT___rcnt_T_7 = 0;
    vlSelf->top__DOT__clint__DOT__wid = 0;
    vlSelf->top__DOT__clint__DOT___mtimecmp_T_3 = 0;
    vlSelf->top__DOT__clint__DOT___mtime_T_8 = 0;
    vlSelf->top__DOT__clint__DOT___GEN_5 = 0;
    vlSelf->top__DOT__clint__DOT___GEN_6 = 0;
    vlSelf->top__DOT__clint__DOT___GEN_7 = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache_io_mem_r_valid = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache_io_mem_r_bits_data = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache_io_mem_r_bits_last = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_ar_valid = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_r_valid = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_aw_ready = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_aw_valid = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_w_valid = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache_io_mem_b_valid = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q0);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_Q1);
    vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_WEN = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache_io_ram_bits_WAY = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache_io_uncache = 0;
    vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_ar_ready = 0;
    vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_ar_valid = 0;
    vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_r_ready = 0;
    vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_r_valid = 0;
    vlSelf->top__DOT__crossbar__DOT__CacheArbiter_io_out_r_bits_id = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__cache_tag_0 = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__cache_tag_1 = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__valid_0_0 = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__valid_0_1 = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__valid_1_0 = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__valid_1_1 = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__state = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__req = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__addr = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__uncache = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___GEN_1 = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__miss = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__way = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__cnt = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___state_T_9 = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___valid_T_2 = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___GEN_10 = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___cache_tag_T_5 = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___cache_tag_T_7 = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___addr_T_3 = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__en_w = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__flag = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__rdata = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___flag_T_4 = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___io_in_r_bits_data_T_2 = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__hit_num = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__inst_num = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___hit_num_T_4 = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT___inst_num_T_4 = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT____VdfgTmp_h47db3895__0 = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__lfsr8__DOT__x = 0;
    vlSelf->top__DOT__crossbar__DOT__ICache__DOT__lfsr8__DOT___x_T_8 = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_Q);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_D);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_1_Q);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_2_Q);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_3_Q);
    vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__choose = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW__DOT__ram[__Vi0]);
    }
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_1__DOT__bwen);
    vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_2__DOT__cen = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__ICacheRAM__DOT__S011HD1P_X32Y2D128_BW_2__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__lfsr8_io_en = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__cache_tag_0 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__cache_tag_1 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__cache_tag_2 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__cache_tag_3 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_0_0 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_0_1 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_1_0 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_1_1 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_2_0 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_2_1 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_3_0 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__valid_3_1 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_0_0 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_0_1 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_1_0 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_1_1 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_2_0 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_2_1 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_3_0 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__dirty_3_1 = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__DCache__DOT__buf_);
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__state = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__rstate = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstate = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___req_T = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___req_T_1 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__req = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__addr = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wdata = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__uncache = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__rmode = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wmode = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___rmode_T_4 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___wmode_T_2 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___wmode_T_4 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___GEN_2 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___GEN_3 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__way = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___GEN_20 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___state_T_19 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___state_T_22 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___rstate_T_19 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___wstate_T_4 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___wstate_T_21 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___GEN_36 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___cache_tag_T_5 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___cache_tag_T_7 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___dirty_T_2 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___dirty_T_12 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___io_ram_bits_BWEN_T_4 = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wstrb_map);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__DCache__DOT__wdata_map);
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__rcnt = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__DCache__DOT___buf_T_7);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__DCache__DOT___buf_T_9);
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___io_mem_ar_bits_addr_T_1 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___io_in_r_bits_data_T_2 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___io_in_r_valid_T_4 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__hit_num = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__inst_num = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___hit_num_T_4 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT___inst_num_T_4 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h4e1c6f31__0 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h4dba6170__0 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h3f9fcbfd__0 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_hf762c244__0 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h13b34008__0 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_hfe277d00__0 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h12c480bb__0 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_hfe2b5047__0 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT____VdfgTmp_h0bdb7ac3__0 = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__lfsr8__DOT__x = 0;
    vlSelf->top__DOT__crossbar__DOT__DCache__DOT__lfsr8__DOT___x_T_8 = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_Q);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_D);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_1_Q);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_2_Q);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_3_Q);
    vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__choose = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW__DOT__ram[__Vi0]);
    }
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_1__DOT__bwen);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__crossbar__DOT__ICacheRAM_1__DOT__S011HD1P_X32Y2D128_BW_2__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__crossbar__DOT__DeviceArbiter__DOT___T_6 = 0;
    vlSelf->top__DOT__crossbar__DOT__DeviceArbiter__DOT____VdfgTmp_h944f03d4__0 = 0;
    vlSelf->__VdfgTmp_h376cdefd__0 = 0;
    vlSelf->__VdfgTmp_h1455dd83__0 = 0;
    vlSelf->__VdfgTmp_h017bc6aa__0 = 0;
    vlSelf->__VdfgTmp_h983d62b8__0 = 0;
    vlSelf->__VdfgTmp_h38508cf3__0 = 0;
    vlSelf->__VdfgTmp_h9fd488de__0 = 0;
    vlSelf->__VdfgTmp_h86f020bc__0 = 0;
    vlSelf->__VdfgTmp_h6abc90f0__0 = 0;
    vlSelf->__VdfgTmp_h6bd19a8d__0 = 0;
    vlSelf->__VdfgTmp_h91ae477b__0 = 0;
    vlSelf->__VdfgTmp_h6ef580c5__0 = 0;
    vlSelf->__VdfgTmp_hb8d77901__0 = 0;
    vlSelf->__VdfgTmp_h6ebf051a__0 = 0;
    vlSelf->__VdfgTmp_h4e79a829__0 = 0;
    vlSelf->__VdfgTmp_h82555d9e__0 = 0;
    vlSelf->__VdfgTmp_h887ff1f5__0 = 0;
    vlSelf->__VdfgTmp_h452a76e3__0 = 0;
    vlSelf->__VdfgTmp_hd24c2de1__0 = 0;
    vlSelf->__VdfgTmp_he29ed13b__0 = 0;
    vlSelf->__VdfgTmp_h9de938e0__0 = 0;
    vlSelf->__VdfgTmp_h19a80e75__0 = 0;
    vlSelf->__Vtrigrprev__TOP__clock = 0;
}
