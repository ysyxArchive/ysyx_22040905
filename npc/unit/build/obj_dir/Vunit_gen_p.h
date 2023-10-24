// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vunit.h for the primary calling header

#ifndef VERILATED_VUNIT_GEN_P_H_
#define VERILATED_VUNIT_GEN_P_H_  // guard

#include "verilated.h"

class Vunit__Syms;

class Vunit_gen_p final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(io_src,2,0);
    VL_OUT8(io_c,0,0);
    CData/*0:0*/ __PVT__gen_sel__DOT__sel_negative;
    CData/*0:0*/ __PVT__gen_sel__DOT__sel_positive;
    CData/*0:0*/ __PVT__gen_sel__DOT__sel_double_negative;
    CData/*0:0*/ __PVT__gen_sel__DOT__sel_double_positive;
    VL_INW(io_x,131,0,5);
    VL_OUTW(io_p,131,0,5);
    VlWide<3>/*65:0*/ __PVT__io_p_lo;
    VlWide<3>/*65:0*/ __PVT__io_p_hi;

    // INTERNAL VARIABLES
    Vunit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vunit_gen_p(Vunit__Syms* symsp, const char* v__name);
    ~Vunit_gen_p();
    VL_UNCOPYABLE(Vunit_gen_p);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
