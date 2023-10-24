// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vunit__Syms.h"


VL_ATTR_COLD void Vunit___024root__trace_init_sub__TOP__0(Vunit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+20,"clock", false,-1);
    tracep->declBit(c+21,"reset", false,-1);
    tracep->declBit(c+22,"io_mul_valid", false,-1);
    tracep->declBit(c+23,"io_flush", false,-1);
    tracep->declBit(c+24,"io_mulw", false,-1);
    tracep->declBus(c+25,"io_mul_signed", false,-1, 1,0);
    tracep->declQuad(c+26,"io_multiplicand", false,-1, 63,0);
    tracep->declQuad(c+28,"io_multiplier", false,-1, 63,0);
    tracep->declBit(c+30,"io_mul_ready", false,-1);
    tracep->declBit(c+31,"io_out_valid", false,-1);
    tracep->declQuad(c+32,"io_result_hi", false,-1, 63,0);
    tracep->declQuad(c+34,"io_result_lo", false,-1, 63,0);
    tracep->pushNamePrefix("unit ");
    tracep->declBit(c+20,"clock", false,-1);
    tracep->declBit(c+21,"reset", false,-1);
    tracep->declBit(c+22,"io_mul_valid", false,-1);
    tracep->declBit(c+23,"io_flush", false,-1);
    tracep->declBit(c+24,"io_mulw", false,-1);
    tracep->declBus(c+25,"io_mul_signed", false,-1, 1,0);
    tracep->declQuad(c+26,"io_multiplicand", false,-1, 63,0);
    tracep->declQuad(c+28,"io_multiplier", false,-1, 63,0);
    tracep->declBit(c+30,"io_mul_ready", false,-1);
    tracep->declBit(c+31,"io_out_valid", false,-1);
    tracep->declQuad(c+32,"io_result_hi", false,-1, 63,0);
    tracep->declQuad(c+34,"io_result_lo", false,-1, 63,0);
    tracep->declBit(c+1,"state", false,-1);
    tracep->declBus(c+2,"cnt", false,-1, 7,0);
    tracep->declBus(c+3,"mulBits", false,-1, 5,0);
    tracep->declBit(c+4,"last", false,-1);
    tracep->declBit(c+36,"next_valid", false,-1);
    tracep->declBus(c+37,"mulbits", false,-1, 5,0);
    tracep->declArray(c+5,"a", false,-1, 128,0);
    tracep->declArray(c+10,"b", false,-1, 128,0);
    tracep->declArray(c+15,"result", false,-1, 129,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vunit___024root__trace_init_top(Vunit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root__trace_init_top\n"); );
    // Body
    Vunit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vunit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vunit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vunit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vunit___024root__trace_register(Vunit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vunit___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vunit___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vunit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vunit___024root__trace_full_sub_0(Vunit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vunit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root__trace_full_top_0\n"); );
    // Init
    Vunit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vunit___024root*>(voidSelf);
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vunit___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vunit___024root__trace_full_sub_0(Vunit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->unit__DOT__state));
    bufp->fullCData(oldp+2,(vlSelf->unit__DOT__cnt),8);
    bufp->fullCData(oldp+3,(vlSelf->unit__DOT__mulBits),6);
    bufp->fullBit(oldp+4,(vlSelf->unit__DOT__last));
    bufp->fullWData(oldp+5,(vlSelf->unit__DOT__a),129);
    bufp->fullWData(oldp+10,(vlSelf->unit__DOT__b),129);
    bufp->fullWData(oldp+15,(vlSelf->unit__DOT__result),130);
    bufp->fullBit(oldp+20,(vlSelf->clock));
    bufp->fullBit(oldp+21,(vlSelf->reset));
    bufp->fullBit(oldp+22,(vlSelf->io_mul_valid));
    bufp->fullBit(oldp+23,(vlSelf->io_flush));
    bufp->fullBit(oldp+24,(vlSelf->io_mulw));
    bufp->fullCData(oldp+25,(vlSelf->io_mul_signed),2);
    bufp->fullQData(oldp+26,(vlSelf->io_multiplicand),64);
    bufp->fullQData(oldp+28,(vlSelf->io_multiplier),64);
    bufp->fullBit(oldp+30,(vlSelf->io_mul_ready));
    bufp->fullBit(oldp+31,(vlSelf->io_out_valid));
    bufp->fullQData(oldp+32,(vlSelf->io_result_hi),64);
    bufp->fullQData(oldp+34,(vlSelf->io_result_lo),64);
    bufp->fullBit(oldp+36,(vlSelf->unit__DOT__next_valid));
    bufp->fullCData(oldp+37,(((IData)(vlSelf->io_mulw)
                               ? 0x1fU : 0x3fU)),6);
}
