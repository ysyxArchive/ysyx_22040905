// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPassthrough__Syms.h"


void VPassthrough___024root__traceChgSub0(VPassthrough___024root* vlSelf, VerilatedVcd* tracep);

void VPassthrough___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VPassthrough___024root* const __restrict vlSelf = static_cast<VPassthrough___024root*>(voidSelf);
    VPassthrough__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VPassthrough___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VPassthrough___024root__traceChgSub0(VPassthrough___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPassthrough__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlSelf->io_x0),2);
        tracep->chgCData(oldp+1,(vlSelf->io_x1),2);
        tracep->chgCData(oldp+2,(vlSelf->io_x2),2);
        tracep->chgCData(oldp+3,(vlSelf->io_x3),2);
        tracep->chgCData(oldp+4,(vlSelf->io_y),2);
        tracep->chgCData(oldp+5,(vlSelf->io_F),2);
    }
}

void VPassthrough___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VPassthrough___024root* const __restrict vlSelf = static_cast<VPassthrough___024root*>(voidSelf);
    VPassthrough__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
