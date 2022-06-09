// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPassthrough__Syms.h"


void VPassthrough___024root__traceInitSub0(VPassthrough___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VPassthrough___024root__traceInitTop(VPassthrough___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPassthrough__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VPassthrough___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VPassthrough___024root__traceInitSub0(VPassthrough___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPassthrough__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBus(c+3,"io_in", false,-1, 9,0);
        tracep->declBus(c+4,"io_out", false,-1, 9,0);
        tracep->declBit(c+1,"Passthrough clock", false,-1);
        tracep->declBit(c+2,"Passthrough reset", false,-1);
        tracep->declBus(c+3,"Passthrough io_in", false,-1, 9,0);
        tracep->declBus(c+4,"Passthrough io_out", false,-1, 9,0);
    }
}

void VPassthrough___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VPassthrough___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VPassthrough___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VPassthrough___024root__traceRegister(VPassthrough___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPassthrough__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VPassthrough___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VPassthrough___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VPassthrough___024root__traceCleanup, vlSelf);
    }
}

void VPassthrough___024root__traceFullSub0(VPassthrough___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VPassthrough___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VPassthrough___024root* const __restrict vlSelf = static_cast<VPassthrough___024root*>(voidSelf);
    VPassthrough__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VPassthrough___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VPassthrough___024root__traceFullSub0(VPassthrough___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPassthrough__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->clock));
        tracep->fullBit(oldp+2,(vlSelf->reset));
        tracep->fullSData(oldp+3,(vlSelf->io_in),10);
        tracep->fullSData(oldp+4,(vlSelf->io_out),10);
    }
}
