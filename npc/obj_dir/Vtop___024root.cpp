// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop___024unit____Vdpiimwrap_cpp_break_TOP____024unit();

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Body
    if ((1U & (IData)((vlSelf->top__DOT__idu_io_op 
                       >> 0x3fU)))) {
        Vtop___024unit____Vdpiimwrap_cpp_break_TOP____024unit();
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_1 = 0ULL;
    } else if ((1U == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_1 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_2 = 0ULL;
    } else if ((2U == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_2 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_3 = 0ULL;
    } else if ((3U == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_3 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_4 = 0ULL;
    } else if ((4U == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_4 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_5 = 0ULL;
    } else if ((5U == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_5 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_6 = 0ULL;
    } else if ((6U == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_6 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_7 = 0ULL;
    } else if ((7U == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_7 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_8 = 0ULL;
    } else if ((8U == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_8 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_9 = 0ULL;
    } else if ((9U == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_9 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_10 = 0ULL;
    } else if ((0xaU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_10 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_11 = 0ULL;
    } else if ((0xbU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_11 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_12 = 0ULL;
    } else if ((0xcU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_12 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_13 = 0ULL;
    } else if ((0xdU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_13 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_14 = 0ULL;
    } else if ((0xeU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_14 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_15 = 0ULL;
    } else if ((0xfU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_15 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_16 = 0ULL;
    } else if ((0x10U == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_16 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_17 = 0ULL;
    } else if ((0x11U == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_17 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_18 = 0ULL;
    } else if ((0x12U == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_18 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_19 = 0ULL;
    } else if ((0x13U == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_19 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_20 = 0ULL;
    } else if ((0x14U == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_20 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_21 = 0ULL;
    } else if ((0x15U == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_21 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_22 = 0ULL;
    } else if ((0x16U == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_22 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_23 = 0ULL;
    } else if ((0x17U == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_23 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_24 = 0ULL;
    } else if ((0x18U == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_24 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_25 = 0ULL;
    } else if ((0x19U == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_25 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_26 = 0ULL;
    } else if ((0x1aU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_26 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_27 = 0ULL;
    } else if ((0x1bU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_27 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_28 = 0ULL;
    } else if ((0x1cU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_28 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_29 = 0ULL;
    } else if ((0x1dU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_29 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_30 = 0ULL;
    } else if ((0x1eU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_30 
            = ((IData)(vlSelf->top__DOT__exu__DOT__gpr_io_en_w)
                ? vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2
                : ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94));
    }
    vlSelf->top__DOT__pc = ((IData)(vlSelf->reset) ? 0x80000000ULL
                             : ((1U & (IData)(((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__idu_io_op 
                                                           >> 4U)))
                                                ? 0x400ULL
                                                : 1ULL)))
                                 ? vlSelf->top__DOT__exu__DOT__alu_pc__DOT___io_result_T_2
                                 : ((1U & (IData)((
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__idu_io_op 
                                                                >> 4U)))
                                                     ? 0x400ULL
                                                     : 1ULL) 
                                                   >> 1U)))
                                     ? (1ULL + (vlSelf->top__DOT__exu__DOT__alu_pc_io_src1 
                                                + (~ vlSelf->top__DOT__exu__DOT__alu_pc_io_src2)))
                                     : ((1U & (IData)(
                                                      (((1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__idu_io_op 
                                                                    >> 4U)))
                                                         ? 0x400ULL
                                                         : 1ULL) 
                                                       >> 2U)))
                                         ? (vlSelf->top__DOT__exu__DOT__alu_pc_io_src1 
                                            & vlSelf->top__DOT__exu__DOT__alu_pc_io_src2)
                                         : ((1U & (IData)(
                                                          (((1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__idu_io_op 
                                                                        >> 4U)))
                                                             ? 0x400ULL
                                                             : 1ULL) 
                                                           >> 3U)))
                                             ? (vlSelf->top__DOT__exu__DOT__alu_pc_io_src1 
                                                | vlSelf->top__DOT__exu__DOT__alu_pc_io_src2)
                                             : vlSelf->top__DOT__exu__DOT__alu_pc__DOT___io_result_T_44)))));
    if (vlSelf->reset) {
        vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31 = 0ULL;
    } else if ((0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
        if (vlSelf->top__DOT__exu__DOT__gpr_io_en_w) {
            vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31 
                = vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2;
        } else if ((0x1fU != (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))) {
            vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31 
                = vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94;
        }
    }
    vlSelf->io_pc = vlSelf->top__DOT__pc;
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__2\n"); );
    // Variables
    CData/*5:0*/ top__DOT__idu__DOT___typ_T_14;
    VlWide<3>/*95:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp3;
    QData/*63:0*/ top__DOT__idu__DOT___op_T_34;
    QData/*63:0*/ top__DOT__idu__DOT___io_imm_T_23;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT___GEN_13;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT___GEN_45;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT___GEN_77;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT___GEN_90;
    // Body
    top__DOT__idu__DOT___op_T_34 = ((0x37U == (0x7fU 
                                               & vlSelf->io_inst))
                                     ? 2ULL : ((IData)(
                                                       (0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst)))
                                                ? 4ULL
                                                : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->io_inst))
                                                    ? 8ULL
                                                    : 
                                                   ((IData)(
                                                            (0x67U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst)))
                                                     ? 0x10ULL
                                                     : 
                                                    ((IData)(
                                                             (0x13U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_inst)))
                                                      ? 0x20ULL
                                                      : 
                                                     ((0x100073U 
                                                       == vlSelf->io_inst)
                                                       ? 0x8000000000000000ULL
                                                       : 0ULL))))));
    top__DOT__exu__DOT__gpr__DOT___GEN_45 = ((0xdU 
                                              == (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 0x14U)))
                                              ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_13
                                              : ((0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_12
                                                  : 
                                                 ((0xbU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_11
                                                   : 
                                                  ((0xaU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_10
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->io_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_9
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->io_inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_8
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->io_inst 
                                                           >> 0x14U)))
                                                       ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_7
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->io_inst 
                                                            >> 0x14U)))
                                                        ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_6
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->io_inst 
                                                             >> 0x14U)))
                                                         ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_5
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->io_inst 
                                                              >> 0x14U)))
                                                          ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_4
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->io_inst 
                                                               >> 0x14U)))
                                                           ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_3
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->io_inst 
                                                                >> 0x14U)))
                                                            ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_2
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->io_inst 
                                                                 >> 0x14U)))
                                                             ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_1
                                                             : 0ULL)))))))))))));
    top__DOT__exu__DOT__gpr__DOT___GEN_13 = ((0xdU 
                                              == (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 0xfU)))
                                              ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_13
                                              : ((0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_12
                                                  : 
                                                 ((0xbU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_11
                                                   : 
                                                  ((0xaU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_10
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->io_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_9
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->io_inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_8
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->io_inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_7
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->io_inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_6
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->io_inst 
                                                             >> 0xfU)))
                                                         ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_5
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->io_inst 
                                                              >> 0xfU)))
                                                          ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_4
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->io_inst 
                                                               >> 0xfU)))
                                                           ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_3
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->io_inst 
                                                                >> 0xfU)))
                                                            ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_2
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->io_inst 
                                                                 >> 0xfU)))
                                                             ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_1
                                                             : 0ULL)))))))))))));
    vlSelf->top__DOT__idu_io_op = ((0x17U == (0x7fU 
                                              & vlSelf->io_inst))
                                    ? 1ULL : top__DOT__idu__DOT___op_T_34);
    vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_58 = 
        ((0x1aU == (0x1fU & (vlSelf->io_inst >> 0x14U)))
          ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_26
          : ((0x19U == (0x1fU & (vlSelf->io_inst >> 0x14U)))
              ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_25
              : ((0x18U == (0x1fU & (vlSelf->io_inst 
                                     >> 0x14U))) ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_24
                  : ((0x17U == (0x1fU & (vlSelf->io_inst 
                                         >> 0x14U)))
                      ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_23
                      : ((0x16U == (0x1fU & (vlSelf->io_inst 
                                             >> 0x14U)))
                          ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_22
                          : ((0x15U == (0x1fU & (vlSelf->io_inst 
                                                 >> 0x14U)))
                              ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_21
                              : ((0x14U == (0x1fU & 
                                            (vlSelf->io_inst 
                                             >> 0x14U)))
                                  ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_20
                                  : ((0x13U == (0x1fU 
                                                & (vlSelf->io_inst 
                                                   >> 0x14U)))
                                      ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_19
                                      : ((0x12U == 
                                          (0x1fU & 
                                           (vlSelf->io_inst 
                                            >> 0x14U)))
                                          ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_18
                                          : ((0x11U 
                                              == (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 0x14U)))
                                              ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_17
                                              : ((0x10U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_16
                                                  : 
                                                 ((0xfU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_15
                                                   : 
                                                  ((0xeU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_14
                                                    : top__DOT__exu__DOT__gpr__DOT___GEN_45)))))))))))));
    vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_26 = 
        ((0x1aU == (0x1fU & (vlSelf->io_inst >> 0xfU)))
          ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_26
          : ((0x19U == (0x1fU & (vlSelf->io_inst >> 0xfU)))
              ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_25
              : ((0x18U == (0x1fU & (vlSelf->io_inst 
                                     >> 0xfU))) ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_24
                  : ((0x17U == (0x1fU & (vlSelf->io_inst 
                                         >> 0xfU)))
                      ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_23
                      : ((0x16U == (0x1fU & (vlSelf->io_inst 
                                             >> 0xfU)))
                          ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_22
                          : ((0x15U == (0x1fU & (vlSelf->io_inst 
                                                 >> 0xfU)))
                              ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_21
                              : ((0x14U == (0x1fU & 
                                            (vlSelf->io_inst 
                                             >> 0xfU)))
                                  ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_20
                                  : ((0x13U == (0x1fU 
                                                & (vlSelf->io_inst 
                                                   >> 0xfU)))
                                      ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_19
                                      : ((0x12U == 
                                          (0x1fU & 
                                           (vlSelf->io_inst 
                                            >> 0xfU)))
                                          ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_18
                                          : ((0x11U 
                                              == (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 0xfU)))
                                              ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_17
                                              : ((0x10U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_16
                                                  : 
                                                 ((0xfU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_15
                                                   : 
                                                  ((0xeU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_14
                                                    : top__DOT__exu__DOT__gpr__DOT___GEN_13)))))))))))));
    vlSelf->io_result = vlSelf->top__DOT__idu_io_op;
    top__DOT__idu__DOT___typ_T_14 = ((IData)((0ULL 
                                              != (3ULL 
                                                  & vlSelf->top__DOT__idu_io_op)))
                                      ? 2U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__idu_io_op 
                                                             >> 0xeU)))
                                               ? 4U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__idu_io_op 
                                                              >> 3U)))
                                                   ? 8U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__idu_io_op 
                                                               >> 0xcU)))
                                                    ? 0x10U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__idu_io_op 
                                                                >> 0xdU)))
                                                     ? 0x20U
                                                     : 0U)))));
    vlSelf->top__DOT__idu_io_typ = ((IData)((0ULL != 
                                             (0x30ULL 
                                              & vlSelf->top__DOT__idu_io_op)))
                                     ? 1U : (IData)(top__DOT__idu__DOT___typ_T_14));
    vlSelf->top__DOT__exu__DOT__gpr_io_en_w = (IData)(
                                                      (0U 
                                                       != 
                                                       (0x2bU 
                                                        & (IData)(vlSelf->top__DOT__idu_io_typ))));
    top__DOT__idu__DOT___io_imm_T_23 = ((2U & (IData)(vlSelf->top__DOT__idu_io_typ))
                                         ? (((QData)((IData)(
                                                             ((vlSelf->io_inst 
                                                               >> 0x1fU)
                                                               ? 0xffffffffU
                                                               : 0U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (0xfffff000U 
                                                               & vlSelf->io_inst))))
                                         : ((4U & (IData)(vlSelf->top__DOT__idu_io_typ))
                                             ? ((((vlSelf->io_inst 
                                                   >> 0x1fU)
                                                   ? 0xfffffffffffffULL
                                                   : 0ULL) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  ((0xfe0U 
                                                                    & (vlSelf->io_inst 
                                                                       >> 0x14U)) 
                                                                   | (0x1fU 
                                                                      & (vlSelf->io_inst 
                                                                         >> 7U))))))
                                             : ((8U 
                                                 & (IData)(vlSelf->top__DOT__idu_io_typ))
                                                 ? 
                                                ((((vlSelf->io_inst 
                                                    >> 0x1fU)
                                                    ? 0x7ffffffffffULL
                                                    : 0ULL) 
                                                  << 0x15U) 
                                                 | (QData)((IData)(
                                                                   ((0x100000U 
                                                                     & (vlSelf->io_inst 
                                                                        >> 0xbU)) 
                                                                    | ((0xff000U 
                                                                        & vlSelf->io_inst) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->io_inst 
                                                                              >> 9U)) 
                                                                          | (0x7feU 
                                                                             & (vlSelf->io_inst 
                                                                                >> 0x14U))))))))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->top__DOT__idu_io_typ))
                                                  ? 
                                                 ((((vlSelf->io_inst 
                                                     >> 0x1fU)
                                                     ? 0x7ffffffffffffULL
                                                     : 0ULL) 
                                                   << 0xdU) 
                                                  | (QData)((IData)(
                                                                    ((0x1000U 
                                                                      & (vlSelf->io_inst 
                                                                         >> 0x13U)) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->io_inst 
                                                                            << 4U)) 
                                                                        | ((0x7e0U 
                                                                            & (vlSelf->io_inst 
                                                                               >> 0x14U)) 
                                                                           | (0x1eU 
                                                                              & (vlSelf->io_inst 
                                                                                >> 7U))))))))
                                                  : 0ULL))));
    vlSelf->top__DOT__idu_io_imm = ((1U & (IData)(vlSelf->top__DOT__idu_io_typ))
                                     ? ((((vlSelf->io_inst 
                                           >> 0x1fU)
                                           ? 0xfffffffffffffULL
                                           : 0ULL) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->io_inst 
                                                                     >> 0x14U))))
                                     : top__DOT__idu__DOT___io_imm_T_23);
    vlSelf->top__DOT__exu__DOT__src2 = ((IData)((0U 
                                                 != 
                                                 (0x34U 
                                                  & (IData)(vlSelf->top__DOT__idu_io_typ))))
                                         ? ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x34U 
                                                      & (IData)(vlSelf->top__DOT__idu_io_typ))))
                                             ? ((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 0x14U)))
                                                 ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_30
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->io_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_27
                                                     : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_58)))))
                                             : 0ULL)
                                         : ((1U & (IData)(vlSelf->top__DOT__idu_io_typ))
                                             ? vlSelf->top__DOT__idu_io_imm
                                             : 0ULL));
    vlSelf->top__DOT__exu__DOT__dest = ((IData)((0U 
                                                 != 
                                                 (0x14U 
                                                  & (IData)(vlSelf->top__DOT__idu_io_typ))))
                                         ? vlSelf->top__DOT__idu_io_imm
                                         : (QData)((IData)(
                                                           (0x1fU 
                                                            & (vlSelf->io_inst 
                                                               >> 7U)))));
    vlSelf->top__DOT__exu__DOT__src1 = ((IData)((0U 
                                                 != 
                                                 (0x35U 
                                                  & (IData)(vlSelf->top__DOT__idu_io_typ))))
                                         ? ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x35U 
                                                      & (IData)(vlSelf->top__DOT__idu_io_typ))))
                                             ? ((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 0xfU)))
                                                 ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_30
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->io_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_27
                                                     : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_26)))))
                                             : 0ULL)
                                         : ((IData)(
                                                    (0U 
                                                     != 
                                                     (0xaU 
                                                      & (IData)(vlSelf->top__DOT__idu_io_typ))))
                                             ? vlSelf->top__DOT__idu_io_imm
                                             : 0ULL));
    top__DOT__exu__DOT__gpr__DOT___GEN_77 = ((0xdU 
                                              == (0x1fU 
                                                  & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                              ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_13
                                              : ((0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                  ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_12
                                                  : 
                                                 ((0xbU 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                   ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_11
                                                   : 
                                                  ((0xaU 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_10
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                     ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_9
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                      ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_8
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                       ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_7
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                        ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_6
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                         ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_5
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                          ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_4
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                           ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_3
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                            ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_2
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                             ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_1
                                                             : 0ULL)))))))))))));
    vlSelf->top__DOT__exu__DOT__alu_dest_io_src1 = 
        ((IData)((0ULL != (0x19ULL & vlSelf->top__DOT__idu_io_op)))
          ? vlSelf->top__DOT__pc : ((IData)((0ULL != 
                                             (0x22ULL 
                                              & vlSelf->top__DOT__idu_io_op)))
                                     ? vlSelf->top__DOT__exu__DOT__src1
                                     : 0ULL));
    vlSelf->top__DOT__exu__DOT__alu_dest_io_src2 = 
        ((1U & (IData)(vlSelf->top__DOT__idu_io_op))
          ? vlSelf->top__DOT__exu__DOT__src1 : ((IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x18ULL 
                                                          & vlSelf->top__DOT__idu_io_op)))
                                                 ? 4ULL
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__idu_io_op 
                                                             >> 5U)))
                                                  ? vlSelf->top__DOT__exu__DOT__src2
                                                  : 0ULL)));
    vlSelf->top__DOT__exu__DOT__alu_pc_io_src1 = ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__idu_io_op 
                                                              >> 4U)))
                                                   ? vlSelf->top__DOT__exu__DOT__src1
                                                   : vlSelf->top__DOT__pc);
    vlSelf->top__DOT__exu__DOT__alu_pc_io_src2 = ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__idu_io_op 
                                                              >> 3U)))
                                                   ? vlSelf->top__DOT__exu__DOT__src1
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__idu_io_op 
                                                               >> 4U)))
                                                    ? vlSelf->top__DOT__exu__DOT__src2
                                                    : 4ULL));
    top__DOT__exu__DOT__gpr__DOT___GEN_90 = ((0x1aU 
                                              == (0x1fU 
                                                  & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                              ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_26
                                              : ((0x19U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                  ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_25
                                                  : 
                                                 ((0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                   ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_24
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_23
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                     ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_22
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                      ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_21
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                       ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_20
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                        ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_19
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                         ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_18
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                          ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_17
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                           ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_16
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                            ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_15
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                                                             ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_14
                                                             : top__DOT__exu__DOT__gpr__DOT___GEN_77)))))))))))));
    vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2 
        = (vlSelf->top__DOT__exu__DOT__alu_dest_io_src1 
           + vlSelf->top__DOT__exu__DOT__alu_dest_io_src2);
    vlSelf->top__DOT__exu__DOT__alu_pc__DOT___io_result_T_2 
        = (vlSelf->top__DOT__exu__DOT__alu_pc_io_src1 
           + vlSelf->top__DOT__exu__DOT__alu_pc_io_src2);
    vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94 = 
        ((0x1eU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
          ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_30
          : ((0x1dU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
              ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_29
              : ((0x1cU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                  ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_28
                  : ((0x1bU == (0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest)))
                      ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_27
                      : top__DOT__exu__DOT__gpr__DOT___GEN_90))));
    VL_EXTEND_WQ(95,64, __Vtemp2, vlSelf->top__DOT__exu__DOT__alu_pc_io_src1);
    VL_SHIFTL_WWI(95,95,5, __Vtemp3, __Vtemp2, (0x1fU 
                                                & (IData)(vlSelf->top__DOT__exu__DOT__alu_pc_io_src2)));
    vlSelf->top__DOT__exu__DOT__alu_pc__DOT___io_result_T_44 
        = ((1U & (IData)((((1U & (IData)((vlSelf->top__DOT__idu_io_op 
                                          >> 4U))) ? 0x400ULL
                            : 1ULL) >> 4U))) ? (vlSelf->top__DOT__exu__DOT__alu_pc_io_src1 
                                                ^ vlSelf->top__DOT__exu__DOT__alu_pc_io_src2)
            : ((1U & (IData)((((1U & (IData)((vlSelf->top__DOT__idu_io_op 
                                              >> 4U)))
                                ? 0x400ULL : 1ULL) 
                              >> 5U))) ? (((QData)((IData)(
                                                           __Vtemp3[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            __Vtemp3[0U])))
                : ((1U & (IData)((((1U & (IData)((vlSelf->top__DOT__idu_io_op 
                                                  >> 4U)))
                                    ? 0x400ULL : 1ULL) 
                                  >> 6U))) ? (vlSelf->top__DOT__exu__DOT__alu_pc_io_src1 
                                              >> (0x1fU 
                                                  & (IData)(vlSelf->top__DOT__exu__DOT__alu_pc_io_src2)))
                    : ((1U & (IData)((((1U & (IData)(
                                                     (vlSelf->top__DOT__idu_io_op 
                                                      >> 4U)))
                                        ? 0x400ULL : 1ULL) 
                                      >> 7U))) ? VL_SHIFTRS_QQI(64,64,5, vlSelf->top__DOT__exu__DOT__alu_pc_io_src1, 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->top__DOT__exu__DOT__alu_pc_io_src2)))
                        : ((1U & (IData)((((1U & (IData)(
                                                         (vlSelf->top__DOT__idu_io_op 
                                                          >> 4U)))
                                            ? 0x400ULL
                                            : 1ULL) 
                                          >> 8U))) ? (QData)((IData)(
                                                                     VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__exu__DOT__alu_pc_io_src1, vlSelf->top__DOT__exu__DOT__alu_pc_io_src2)))
                            : ((1U & (IData)((((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__idu_io_op 
                                                           >> 4U)))
                                                ? 0x400ULL
                                                : 1ULL) 
                                              >> 9U)))
                                ? (QData)((IData)((vlSelf->top__DOT__exu__DOT__alu_pc_io_src1 
                                                   < vlSelf->top__DOT__exu__DOT__alu_pc_io_src2)))
                                : ((1U & (IData)(((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__idu_io_op 
                                                               >> 4U)))
                                                    ? 0x400ULL
                                                    : 1ULL) 
                                                  >> 0xaU)))
                                    ? (0xfffffffffffffffeULL 
                                       & vlSelf->top__DOT__exu__DOT__alu_pc__DOT___io_result_T_2)
                                    : 0xffffffffffffffffULL)))))));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
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
}
#endif  // VL_DEBUG
