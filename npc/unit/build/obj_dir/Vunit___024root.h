// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vunit.h for the primary calling header

#ifndef VERILATED_VUNIT___024ROOT_H_
#define VERILATED_VUNIT___024ROOT_H_  // guard

#include "verilated.h"

class Vunit__Syms;

class Vunit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_mul_valid,0,0);
    VL_IN8(io_flush,0,0);
    VL_IN8(io_mulw,0,0);
    VL_IN8(io_mul_signed,1,0);
    VL_OUT8(io_mul_ready,0,0);
    VL_OUT8(io_out_valid,0,0);
    CData/*0:0*/ unit__DOT__state;
    CData/*7:0*/ unit__DOT__cnt;
    CData/*5:0*/ unit__DOT__mulBits;
    CData/*0:0*/ unit__DOT__last;
    CData/*0:0*/ unit__DOT__next_valid;
    CData/*7:0*/ unit__DOT___cnt_T_5;
    CData/*0:0*/ __Vtrigrprev__TOP__clock;
    CData/*0:0*/ __VactContinue;
    VlWide<5>/*128:0*/ unit__DOT__a;
    VlWide<5>/*128:0*/ unit__DOT__b;
    VlWide<5>/*129:0*/ unit__DOT__result;
    VlWide<5>/*128:0*/ unit__DOT___b_T;
    VlWide<5>/*129:0*/ unit__DOT___s_T_3;
    VlWide<5>/*129:0*/ unit__DOT___s_T_6;
    VlWide<5>/*129:0*/ unit__DOT___GEN_7;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(io_multiplicand,63,0);
    VL_IN64(io_multiplier,63,0);
    VL_OUT64(io_result_hi,63,0);
    VL_OUT64(io_result_lo,63,0);
    QData/*63:0*/ unit__DOT___a_T_3;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vunit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vunit___024root(Vunit__Syms* symsp, const char* v__name);
    ~Vunit___024root();
    VL_UNCOPYABLE(Vunit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
