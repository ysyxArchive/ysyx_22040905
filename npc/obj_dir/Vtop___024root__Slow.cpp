// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Variables
    CData/*5:0*/ top__DOT__idu__DOT___typ_T_14;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp7;
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
    vlSelf->io_pc = vlSelf->top__DOT__pc;
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
    VL_EXTEND_WQ(95,64, __Vtemp6, vlSelf->top__DOT__exu__DOT__alu_pc_io_src1);
    VL_SHIFTL_WWI(95,95,5, __Vtemp7, __Vtemp6, (0x1fU 
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
                                                           __Vtemp7[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            __Vtemp7[0U])))
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

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_inst = VL_RAND_RESET_I(32);
    vlSelf->io_pc = VL_RAND_RESET_Q(64);
    vlSelf->io_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__idu_io_imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__idu_io_op = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__idu_io_typ = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr_io_en_w = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exu__DOT__alu_dest_io_src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__alu_dest_io_src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__alu_pc_io_src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__alu_pc_io_src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__dest = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_3 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_4 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_5 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_6 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_7 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_8 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_9 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_10 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_11 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_12 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_13 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_14 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_15 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_16 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_17 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_18 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_19 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_20 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_21 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_22 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_23 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_24 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_25 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_26 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_27 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_28 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_29 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_30 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_26 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_58 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_94 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__alu_pc__DOT___io_result_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu__DOT__alu_pc__DOT___io_result_T_44 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
