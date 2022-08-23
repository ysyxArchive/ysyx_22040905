// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__pc),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_1),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_2),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_3),64);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_4),64);
            tracep->chgQData(oldp+10,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_5),64);
            tracep->chgQData(oldp+12,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_6),64);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_7),64);
            tracep->chgQData(oldp+16,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_8),64);
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_9),64);
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_10),64);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_11),64);
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_12),64);
            tracep->chgQData(oldp+26,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_13),64);
            tracep->chgQData(oldp+28,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_14),64);
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_15),64);
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_16),64);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_17),64);
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_18),64);
            tracep->chgQData(oldp+38,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_19),64);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_20),64);
            tracep->chgQData(oldp+42,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_21),64);
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_22),64);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_23),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_24),64);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_25),64);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_26),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_27),64);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_28),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_29),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_30),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__idu_io_imm),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__idu_io_op),64);
            tracep->chgCData(oldp+68,(vlSelf->top__DOT__idu_io_typ),6);
            tracep->chgQData(oldp+69,(((1U & (IData)(
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__idu_io_op 
                                                                  >> 4U)))
                                                       ? 0x400ULL
                                                       : 1ULL)))
                                        ? vlSelf->top__DOT__exu__DOT__alu_pc__DOT___io_result_T_2
                                        : ((1U & (IData)(
                                                         (((1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__idu_io_op 
                                                                       >> 4U)))
                                                            ? 0x400ULL
                                                            : 1ULL) 
                                                          >> 1U)))
                                            ? (1ULL 
                                               + (vlSelf->top__DOT__exu__DOT__alu_pc_io_src1 
                                                  + 
                                                  (~ vlSelf->top__DOT__exu__DOT__alu_pc_io_src2)))
                                            : ((1U 
                                                & (IData)(
                                                          (((1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__idu_io_op 
                                                                        >> 4U)))
                                                             ? 0x400ULL
                                                             : 1ULL) 
                                                           >> 2U)))
                                                ? (vlSelf->top__DOT__exu__DOT__alu_pc_io_src1 
                                                   & vlSelf->top__DOT__exu__DOT__alu_pc_io_src2)
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (((1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__idu_io_op 
                                                                            >> 4U)))
                                                                 ? 0x400ULL
                                                                 : 1ULL) 
                                                               >> 3U)))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__alu_pc_io_src1 
                                                    | vlSelf->top__DOT__exu__DOT__alu_pc_io_src2)
                                                    : vlSelf->top__DOT__exu__DOT__alu_pc__DOT___io_result_T_44))))),64);
            tracep->chgBit(oldp+71,((1U & (IData)((vlSelf->top__DOT__idu_io_op 
                                                   >> 0x3fU)))));
            tracep->chgCData(oldp+72,((0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest))),5);
            tracep->chgBit(oldp+73,(vlSelf->top__DOT__exu__DOT__gpr_io_en_w));
            tracep->chgBit(oldp+74,((IData)((0U != 
                                             (0x35U 
                                              & (IData)(vlSelf->top__DOT__idu_io_typ))))));
            tracep->chgBit(oldp+75,((IData)((0U != 
                                             (0x34U 
                                              & (IData)(vlSelf->top__DOT__idu_io_typ))))));
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__exu__DOT__alu_dest_io_src1),64);
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__exu__DOT__alu_dest_io_src2),64);
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__exu__DOT__alu_pc_io_src1),64);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__exu__DOT__alu_pc_io_src2),64);
            tracep->chgSData(oldp+86,((0xfffU & (IData)(
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__idu_io_op 
                                                                     >> 4U)))
                                                          ? 0x400ULL
                                                          : 1ULL)))),12);
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__exu__DOT__src1),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__exu__DOT__src2),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__exu__DOT__dest),64);
        }
        tracep->chgBit(oldp+93,(vlSelf->clock));
        tracep->chgBit(oldp+94,(vlSelf->reset));
        tracep->chgIData(oldp+95,(vlSelf->io_inst),32);
        tracep->chgQData(oldp+96,(vlSelf->io_pc),64);
        tracep->chgQData(oldp+98,(vlSelf->io_result),64);
        tracep->chgCData(oldp+100,((0x1fU & (vlSelf->io_inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+101,((0x1fU & (vlSelf->io_inst 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+102,((0x1fU & (vlSelf->io_inst 
                                             >> 7U))),5);
        tracep->chgQData(oldp+103,(((vlSelf->io_inst 
                                     >> 0x1fU) ? 0xfffffffffffffULL
                                     : 0ULL)),52);
        tracep->chgSData(oldp+105,((vlSelf->io_inst 
                                    >> 0x14U)),12);
        tracep->chgIData(oldp+106,(((vlSelf->io_inst 
                                     >> 0x1fU) ? 0xffffffffU
                                     : 0U)),32);
        tracep->chgIData(oldp+107,((vlSelf->io_inst 
                                    >> 0xcU)),20);
        tracep->chgCData(oldp+108,((vlSelf->io_inst 
                                    >> 0x19U)),7);
        tracep->chgQData(oldp+109,(((vlSelf->io_inst 
                                     >> 0x1fU) ? 0x7ffffffffffULL
                                     : 0ULL)),43);
        tracep->chgCData(oldp+111,((0xffU & (vlSelf->io_inst 
                                             >> 0xcU))),8);
        tracep->chgBit(oldp+112,((1U & (vlSelf->io_inst 
                                        >> 0x14U))));
        tracep->chgSData(oldp+113,((0x3ffU & (vlSelf->io_inst 
                                              >> 0x15U))),10);
        tracep->chgQData(oldp+114,(((vlSelf->io_inst 
                                     >> 0x1fU) ? 0x7ffffffffffffULL
                                     : 0ULL)),51);
        tracep->chgBit(oldp+116,((1U & (vlSelf->io_inst 
                                        >> 7U))));
        tracep->chgCData(oldp+117,((0x3fU & (vlSelf->io_inst 
                                             >> 0x19U))),6);
        tracep->chgCData(oldp+118,((0xfU & (vlSelf->io_inst 
                                            >> 8U))),4);
        tracep->chgQData(oldp+119,(((IData)((0U != 
                                             (0x35U 
                                              & (IData)(vlSelf->top__DOT__idu_io_typ))))
                                     ? ((0x1fU == (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0xfU)))
                                         ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                                         : ((0x1eU 
                                             == (0x1fU 
                                                 & (vlSelf->io_inst 
                                                    >> 0xfU)))
                                             ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_30
                                             : ((0x1dU 
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
                                     : 0ULL)),64);
        tracep->chgQData(oldp+121,(((IData)((0U != 
                                             (0x34U 
                                              & (IData)(vlSelf->top__DOT__idu_io_typ))))
                                     ? ((0x1fU == (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0x14U)))
                                         ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                                         : ((0x1eU 
                                             == (0x1fU 
                                                 & (vlSelf->io_inst 
                                                    >> 0x14U)))
                                             ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_30
                                             : ((0x1dU 
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
                                     : 0ULL)),64);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
