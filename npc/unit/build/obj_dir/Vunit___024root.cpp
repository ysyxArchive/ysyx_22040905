// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vunit.h for the primary calling header

#include "Vunit___024root.h"
#include "Vunit__Syms.h"

//==========

VL_INLINE_OPT void Vunit___024root___sequent__TOP__3(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___sequent__TOP__3\n"); );
    // Variables
    VlWide<7>/*223:0*/ __Vtemp2;
    VlWide<7>/*223:0*/ __Vtemp3;
    VlWide<7>/*223:0*/ __Vtemp4;
    VlWide<4>/*127:0*/ __Vtemp6;
    VlWide<7>/*223:0*/ __Vtemp7;
    VlWide<7>/*223:0*/ __Vtemp9;
    VlWide<7>/*223:0*/ __Vtemp10;
    VlWide<7>/*223:0*/ __Vtemp11;
    VlWide<4>/*127:0*/ __Vtemp13;
    VlWide<7>/*223:0*/ __Vtemp14;
    // Body
    VL_EXTEND_WW(198,132, __Vtemp2, vlSelf->unit__DOT__a);
    VL_EXTEND_WW(198,66, __Vtemp3, vlSelf->unit__DOT__b);
    VL_MUL_W(7, __Vtemp4, __Vtemp2, __Vtemp3);
    __Vtemp6[0U] = (IData)(vlSelf->io_result_lo);
    __Vtemp6[1U] = (IData)((vlSelf->io_result_lo >> 0x20U));
    __Vtemp6[2U] = (IData)(vlSelf->io_result_hi);
    __Vtemp6[3U] = (IData)((vlSelf->io_result_hi >> 0x20U));
    VL_EXTEND_WW(198,128, __Vtemp7, __Vtemp6);
    if (VL_UNLIKELY((((IData)(vlSelf->io_out_valid) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (((((((__Vtemp4[0U] ^ 
                                     __Vtemp7[0U]) 
                                    | (__Vtemp4[1U] 
                                       ^ __Vtemp7[1U])) 
                                   | (__Vtemp4[2U] 
                                      ^ __Vtemp7[2U])) 
                                  | (__Vtemp4[3U] ^ 
                                     __Vtemp7[3U])) 
                                 | (__Vtemp4[4U] ^ 
                                    __Vtemp7[4U])) 
                                | (__Vtemp4[5U] ^ __Vtemp7[5U])) 
                               | ((0x3fU & __Vtemp4[6U]) 
                                  ^ __Vtemp7[6U])))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:312 chisel3.assert( (a* b) === Cat(io.result_hi,io.result_lo))\n");
    }
    VL_EXTEND_WW(198,132, __Vtemp9, vlSelf->unit__DOT__a);
    VL_EXTEND_WW(198,66, __Vtemp10, vlSelf->unit__DOT__b);
    VL_MUL_W(7, __Vtemp11, __Vtemp9, __Vtemp10);
    __Vtemp13[0U] = (IData)(vlSelf->io_result_lo);
    __Vtemp13[1U] = (IData)((vlSelf->io_result_lo >> 0x20U));
    __Vtemp13[2U] = (IData)(vlSelf->io_result_hi);
    __Vtemp13[3U] = (IData)((vlSelf->io_result_hi >> 0x20U));
    VL_EXTEND_WW(198,128, __Vtemp14, __Vtemp13);
    if (VL_UNLIKELY((((IData)(vlSelf->io_out_valid) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (((((((__Vtemp11[0U] 
                                     ^ __Vtemp14[0U]) 
                                    | (__Vtemp11[1U] 
                                       ^ __Vtemp14[1U])) 
                                   | (__Vtemp11[2U] 
                                      ^ __Vtemp14[2U])) 
                                  | (__Vtemp11[3U] 
                                     ^ __Vtemp14[3U])) 
                                 | (__Vtemp11[4U] ^ 
                                    __Vtemp14[4U])) 
                                | (__Vtemp11[5U] ^ 
                                   __Vtemp14[5U])) 
                               | ((0x3fU & __Vtemp11[6U]) 
                                  ^ __Vtemp14[6U])))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:129158: Assertion failed in %Nunit\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 129158, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0)) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0)) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7076: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7076, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7099: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7099, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7122: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7122, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7145: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7145, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7168: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7168, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7191: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7191, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7214: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7214, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7237: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7237, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7260: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7260, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7283: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7283, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7306: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7306, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7329: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7329, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7352: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7352, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7375: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7375, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7398: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7398, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7421: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7421, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7444: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7444, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7467: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7467, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7490: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7490, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7513: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7513, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7536: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7536, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7559: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7559, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7582: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7582, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7605: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7605, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7628: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7628, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7651: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7651, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7674: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7674, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7697: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7697, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7720: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7720, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7743: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7743, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7766: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7766, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7789: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7789, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_0 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7812: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7812, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7835: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7835, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7858: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7858, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7881: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7881, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7904: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7904, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7927: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7927, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7950: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7950, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7973: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7973, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:7996: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 7996, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8019: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8019, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8042: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8042, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8065: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8065, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8088: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8088, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8111: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8111, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8134: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8134, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8157: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8157, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8180: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8180, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8203: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8203, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8226: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8226, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8249: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8249, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8272: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8272, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8295: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8295, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8318: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8318, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8341: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8341, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8364: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8364, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8387: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8387, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8410: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8410, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8433: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8433, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8456: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8456, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8479: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8479, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8502: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8502, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8525: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8525, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8548: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8548, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_1 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8571: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8571, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8594: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8594, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8617: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8617, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8640: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8640, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8663: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8663, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8686: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8686, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8709: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8709, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8732: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8732, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8755: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8755, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8778: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8778, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8801: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8801, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8824: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8824, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8847: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8847, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8870: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8870, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8893: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8893, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8916: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8916, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8939: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8939, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8962: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8962, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:8985: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 8985, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9008: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9008, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9031: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9031, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9054: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9054, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9077: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9077, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9100: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9100, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9123: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9123, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9146: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9146, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9169: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9169, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9192: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9192, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9215: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9215, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9238: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9238, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9261: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9261, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9284: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9284, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9307: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9307, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_2 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9330: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9330, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9353: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9353, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9376: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9376, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9399: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9399, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9422: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9422, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9445: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9445, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9468: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9468, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9491: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9491, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9514: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9514, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9537: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9537, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9560: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9560, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9583: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9583, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9606: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9606, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9629: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9629, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9652: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9652, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9675: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9675, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9698: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9698, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9721: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9721, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9744: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9744, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9767: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9767, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9790: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9790, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9813: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9813, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9836: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9836, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9859: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9859, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9882: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9882, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9905: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9905, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9928: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9928, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9951: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9951, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9974: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9974, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:9997: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 9997, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10020: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10020, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10043: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10043, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10066: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10066, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_3 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10089: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10089, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10112: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10112, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10135: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10135, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10158: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10158, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10181: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10181, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10204: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10204, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10227: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10227, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10250: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10250, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10273: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10273, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10296: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10296, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10319: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10319, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10342: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10342, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10365: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10365, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10388: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10388, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10411: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10411, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10434: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10434, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10457: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10457, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10480: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10480, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10503: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10503, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10526: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10526, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10549: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10549, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10572: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10572, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10595: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10595, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10618: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10618, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10641: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10641, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10664: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10664, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10687: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10687, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10710: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10710, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10733: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10733, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10756: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10756, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10779: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10779, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10802: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10802, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10825: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10825, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_4 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10848: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10848, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10871: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10871, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10894: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10894, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10917: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10917, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10940: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10940, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10963: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10963, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:10986: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 10986, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11009: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11009, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11032: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11032, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11055: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11055, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11078: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11078, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11101: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11101, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11124: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11124, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11147: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11147, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11170: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11170, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11193: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11193, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11216: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11216, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11239: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11239, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11262: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11262, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11285: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11285, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11308: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11308, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11331: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11331, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11354: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11354, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11377: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11377, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11400: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11400, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11423: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11423, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11446: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11446, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11469: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11469, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11492: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11492, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11515: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11515, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11538: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11538, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11561: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11561, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11584: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11584, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_5 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11607: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11607, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11630: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11630, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11653: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11653, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11676: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11676, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11699: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11699, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11722: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11722, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11745: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11745, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11768: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11768, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11791: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11791, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11814: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11814, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11837: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11837, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11860: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11860, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11883: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11883, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11906: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11906, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11929: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11929, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11952: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11952, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11975: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11975, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:11998: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 11998, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12021: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12021, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12044: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12044, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12067: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12067, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12090: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12090, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12113: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12113, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12136: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12136, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12159: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12159, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12182: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12182, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12205: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12205, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12228: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12228, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12251: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12251, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12274: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12274, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12297: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12297, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12320: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12320, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12343: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12343, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_6 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12366: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12366, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12389: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12389, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12412: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12412, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12435: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12435, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12458: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12458, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12481: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12481, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12504: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12504, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12527: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12527, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12550: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12550, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12573: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12573, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12596: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12596, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12619: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12619, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12642: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12642, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12665: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12665, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12688: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12688, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12711: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12711, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12734: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12734, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12757: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12757, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12780: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12780, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12803: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12803, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12826: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12826, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12849: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12849, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12872: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12872, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12895: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12895, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12918: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12918, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12941: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12941, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12964: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12964, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:12987: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 12987, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13010: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13010, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13033: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13033, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13056: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13056, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13079: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13079, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13102: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13102, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_7 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13125: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13125, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13148: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13148, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13171: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13171, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13194: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13194, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13217: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13217, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13240: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13240, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13263: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13263, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13286: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13286, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13309: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13309, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13332: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13332, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13355: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13355, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13378: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13378, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13401: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13401, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13424: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13424, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13447: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13447, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13470: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13470, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13493: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13493, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13516: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13516, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13539: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13539, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13562: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13562, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13585: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13585, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13608: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13608, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13631: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13631, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13654: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13654, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13677: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13677, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13700: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13700, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13723: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13723, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13746: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13746, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13769: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13769, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13792: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13792, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13815: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13815, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13838: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13838, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13861: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13861, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_8 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13884: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13884, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13907: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13907, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13930: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13930, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13953: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13953, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13976: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13976, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:13999: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 13999, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14022: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14022, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14045: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14045, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14068: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14068, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14091: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14091, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14114: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14114, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14137: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14137, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14160: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14160, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14183: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14183, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14206: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14206, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14229: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14229, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14252: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14252, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14275: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14275, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14298: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14298, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14321: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14321, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14344: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14344, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14367: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14367, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14390: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14390, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14413: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14413, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14436: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14436, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14459: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14459, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14482: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14482, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14505: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14505, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14528: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14528, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14551: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14551, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14574: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14574, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14597: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14597, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14620: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14620, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_9 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14643: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14643, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14666: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14666, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14689: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14689, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14712: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14712, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14735: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14735, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14758: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14758, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14781: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14781, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14804: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14804, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14827: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14827, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14850: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14850, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14873: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14873, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14896: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14896, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14919: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14919, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14942: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14942, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14965: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14965, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:14988: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 14988, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15011: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15011, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15034: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15034, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15057: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15057, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15080: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15080, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15103: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15103, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15126: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15126, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15149: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15149, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15172: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15172, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15195: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15195, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15218: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15218, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15241: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15241, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15264: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15264, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15287: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15287, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15310: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15310, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15333: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15333, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15356: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15356, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15379: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15379, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_10 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15402: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15402, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15425: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15425, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15448: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15448, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15471: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15471, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15494: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15494, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15517: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15517, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15540: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15540, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15563: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15563, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15586: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15586, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15609: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15609, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15632: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15632, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15655: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15655, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15678: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15678, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15701: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15701, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15724: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15724, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15747: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15747, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15770: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15770, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15793: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15793, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15816: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15816, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15839: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15839, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15862: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15862, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15885: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15885, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15908: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15908, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15931: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15931, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15954: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15954, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:15977: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 15977, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16000: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16000, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16023: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16023, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16046: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16046, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16069: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16069, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16092: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16092, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16115: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16115, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16138: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16138, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_11 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16161: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16161, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16184: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16184, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16207: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16207, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16230: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16230, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16253: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16253, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16276: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16276, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16299: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16299, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16322: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16322, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16345: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16345, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16368: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16368, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16391: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16391, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16414: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16414, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16437: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16437, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16460: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16460, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16483: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16483, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16506: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16506, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16529: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16529, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16552: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16552, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16575: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16575, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16598: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16598, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16621: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16621, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16644: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16644, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16667: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16667, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16690: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16690, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16713: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16713, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16736: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16736, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16759: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16759, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16782: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16782, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16805: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16805, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16828: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16828, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16851: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16851, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16874: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16874, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16897: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16897, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_12 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16920: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16920, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16943: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16943, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16966: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16966, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:16989: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 16989, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17012: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17012, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17035: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17035, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17058: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17058, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17081: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17081, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17104: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17104, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17127: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17127, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17150: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17150, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17173: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17173, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17196: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17196, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17219: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17219, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17242: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17242, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17265: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17265, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17288: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17288, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17311: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17311, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17334: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17334, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17357: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17357, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17380: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17380, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17403: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17403, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17426: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17426, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17449: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17449, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17472: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17472, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17495: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17495, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17518: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17518, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17541: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17541, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17564: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17564, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17587: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17587, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17610: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17610, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17633: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17633, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17656: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17656, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_13 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17679: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17679, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17702: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17702, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17725: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17725, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17748: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17748, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17771: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17771, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17794: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17794, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17817: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17817, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17840: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17840, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17863: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17863, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17886: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17886, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17909: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17909, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17932: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17932, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17955: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17955, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:17978: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 17978, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_14 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 0xeU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
}
