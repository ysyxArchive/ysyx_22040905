// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vunit__Syms.h"


void Vunit___024root__trace_chg_sub_0(Vunit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vunit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root__trace_chg_top_0\n"); );
    // Init
    Vunit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vunit___024root*>(voidSelf);
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vunit___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vunit___024root__trace_chg_sub_0(Vunit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->unit__DOT__state));
        bufp->chgCData(oldp+1,(vlSelf->unit__DOT__cnt),8);
        bufp->chgCData(oldp+2,(vlSelf->unit__DOT__mulBits),6);
        bufp->chgBit(oldp+3,(vlSelf->unit__DOT__last));
        bufp->chgWData(oldp+4,(vlSelf->unit__DOT__a),129);
        bufp->chgWData(oldp+9,(vlSelf->unit__DOT__b),129);
        bufp->chgWData(oldp+14,(vlSelf->unit__DOT__result),130);
    }
    bufp->chgBit(oldp+19,(vlSelf->clock));
    bufp->chgBit(oldp+20,(vlSelf->reset));
    bufp->chgBit(oldp+21,(vlSelf->io_mul_valid));
    bufp->chgBit(oldp+22,(vlSelf->io_flush));
    bufp->chgBit(oldp+23,(vlSelf->io_mulw));
    bufp->chgCData(oldp+24,(vlSelf->io_mul_signed),2);
    bufp->chgQData(oldp+25,(vlSelf->io_multiplicand),64);
    bufp->chgQData(oldp+27,(vlSelf->io_multiplier),64);
    bufp->chgBit(oldp+29,(vlSelf->io_mul_ready));
    bufp->chgBit(oldp+30,(vlSelf->io_out_valid));
    bufp->chgQData(oldp+31,(vlSelf->io_result_hi),64);
    bufp->chgQData(oldp+33,(vlSelf->io_result_lo),64);
    bufp->chgBit(oldp+35,(vlSelf->unit__DOT__next_valid));
    bufp->chgCData(oldp+36,(((IData)(vlSelf->io_mulw)
                              ? 0x1fU : 0x3fU)),6);
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
