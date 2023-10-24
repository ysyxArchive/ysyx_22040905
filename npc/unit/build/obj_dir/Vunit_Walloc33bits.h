// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vunit.h for the primary calling header

#ifndef VERILATED_VUNIT_WALLOC33BITS_H_
#define VERILATED_VUNIT_WALLOC33BITS_H_  // guard

#include "verilated.h"

class Vunit__Syms;

class Vunit_Walloc33bits final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(io_cout_group_0,0,0);
    VL_OUT8(io_cout_group_1,0,0);
    VL_OUT8(io_cout_group_2,0,0);
    VL_OUT8(io_cout_group_3,0,0);
    VL_OUT8(io_cout_group_4,0,0);
    VL_OUT8(io_cout_group_5,0,0);
    VL_OUT8(io_cout_group_6,0,0);
    VL_OUT8(io_cout_group_7,0,0);
    VL_OUT8(io_cout_group_8,0,0);
    VL_OUT8(io_cout_group_9,0,0);
    VL_OUT8(io_cout_group_10,0,0);
    VL_OUT8(io_cout_group_11,0,0);
    VL_OUT8(io_cout_group_12,0,0);
    VL_OUT8(io_cout_group_13,0,0);
    VL_OUT8(io_cout_group_14,0,0);
    VL_OUT8(io_cout_group_15,0,0);
    VL_OUT8(io_cout_group_16,0,0);
    VL_OUT8(io_cout_group_17,0,0);
    VL_OUT8(io_cout_group_18,0,0);
    VL_OUT8(io_cout_group_19,0,0);
    VL_OUT8(io_cout_group_20,0,0);
    VL_OUT8(io_cout_group_21,0,0);
    VL_OUT8(io_cout_group_22,0,0);
    VL_OUT8(io_cout_group_23,0,0);
    VL_OUT8(io_cout_group_24,0,0);
    VL_OUT8(io_cout_group_25,0,0);
    VL_OUT8(io_cout_group_26,0,0);
    VL_OUT8(io_cout_group_27,0,0);
    VL_OUT8(io_cout_group_28,0,0);
    VL_OUT8(io_cout_group_29,0,0);
    VL_OUT8(io_cout,0,0);
    VL_OUT8(io_s,0,0);
    CData/*0:0*/ __PVT__csa_0__DOT__out_0;
    CData/*0:0*/ __PVT__csa_1__DOT__out_0;
    CData/*0:0*/ __PVT__csa_2__DOT__out_0;
    CData/*0:0*/ __PVT__csa_3__DOT__out_0;
    CData/*0:0*/ __PVT__csa_4__DOT__out_0;
    CData/*0:0*/ __PVT__csa_5__DOT__out_0;
    CData/*0:0*/ __PVT__csa_6__DOT__out_0;
    CData/*0:0*/ __PVT__csa_7__DOT__out_0;
    CData/*0:0*/ __PVT__csa_8__DOT__out_0;
    CData/*0:0*/ __PVT__csa_9__DOT__out_0;
    CData/*0:0*/ __PVT__csa_10__DOT__out_0;
    CData/*0:0*/ __PVT__csa_11__DOT__out_0;
    CData/*0:0*/ __PVT__csa_12__DOT__out_0;
    CData/*0:0*/ __PVT__csa_13__DOT__out_0;
    CData/*0:0*/ __PVT__csa_14__DOT__out_0;
    CData/*0:0*/ __PVT__csa_15__DOT__out_0;
    CData/*0:0*/ __PVT__csa_16__DOT__out_0;
    CData/*0:0*/ __PVT__csa_17__DOT__out_0;
    CData/*0:0*/ __PVT__csa_18__DOT__out_0;
    CData/*0:0*/ __PVT__csa_19__DOT__out_0;
    CData/*0:0*/ __PVT__csa_20__DOT__out_0;
    CData/*0:0*/ __PVT__csa_21__DOT__out_0;
    CData/*0:0*/ __PVT__csa_22__DOT__out_0;
    CData/*0:0*/ __PVT__csa_23__DOT__out_0;
    CData/*0:0*/ __PVT__csa_24__DOT__out_0;
    CData/*0:0*/ __PVT__csa_25__DOT__out_0;
    CData/*0:0*/ __PVT__csa_26__DOT__out_0;
    CData/*0:0*/ __PVT__csa_27__DOT__out_0;
    CData/*0:0*/ __PVT__csa_28__DOT__out_0;
    CData/*0:0*/ __PVT__csa_29__DOT__out_0;
    VL_IN(io_cin,29,0);
    VL_IN64(io_src_in,32,0);

    // INTERNAL VARIABLES
    Vunit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vunit_Walloc33bits(Vunit__Syms* symsp, const char* v__name);
    ~Vunit_Walloc33bits();
    VL_UNCOPYABLE(Vunit_Walloc33bits);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
