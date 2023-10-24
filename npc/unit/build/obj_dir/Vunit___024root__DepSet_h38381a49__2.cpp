// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vunit.h for the primary calling header

#include "verilated.h"

#include "Vunit__Syms.h"
#include "Vunit___024root.h"

VL_INLINE_OPT void Vunit___024root___nba_sequent__TOP__2(Vunit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 0x1cU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 0x1cU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:28995: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 28995, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 0x1cU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 0x1cU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29018: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29018, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 0x1cU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 0x1cU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29041: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29041, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 0x1cU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_28 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 0x1cU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29064: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29064, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29087: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29087, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29110: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29110, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29133: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29133, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29156: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29156, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29179: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29179, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29202: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29202, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29225: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29225, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29248: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29248, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29271: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29271, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29294: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29294, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29317: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29317, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29340: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29340, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29363: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29363, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29386: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29386, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29409: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29409, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29432: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29432, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29455: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29455, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29478: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29478, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29501: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29501, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29524: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29524, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29547: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29547, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29570: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29570, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29593: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29593, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29616: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29616, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29639: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29639, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29662: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29662, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29685: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29685, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29708: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29708, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29731: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29731, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29754: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29754, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29777: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29777, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29800: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29800, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_29 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 0x1dU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29823: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29823, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29846: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29846, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29869: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29869, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29892: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29892, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29915: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29915, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29938: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29938, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29961: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29961, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:29984: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 29984, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30007: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30007, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30030: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30030, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30053: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30053, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30076: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30076, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30099: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30099, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30122: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30122, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30145: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30145, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30168: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30168, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30191: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30191, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30214: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30214, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30237: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30237, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30260: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30260, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30283: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30283, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30306: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30306, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30329: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30329, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30352: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30352, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30375: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30375, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30398: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30398, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30421: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30421, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30444: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30444, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30467: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30467, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30490: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30490, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30513: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30513, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30536: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30536, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30559: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30559, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_30 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                       >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30582: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30582, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31)) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31)) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30605: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30605, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 1U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 1U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30628: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30628, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 2U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 2U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30651: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30651, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 3U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 3U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30674: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30674, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 4U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 4U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30697: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30697, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 5U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 5U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30720: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30720, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 6U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 6U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30743: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30743, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 7U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 7U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30766: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30766, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 8U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 8U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30789: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30789, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 9U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 9U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30812: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30812, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0xaU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0xaU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30835: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30835, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0xbU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0xbU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30858: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30858, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0xcU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0xcU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30881: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30881, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0xdU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0xdU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30904: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30904, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0xeU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0xeU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30927: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30927, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0xfU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0xfU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30950: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30950, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x10U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x10U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30973: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30973, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x11U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x11U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:30996: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 30996, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x12U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x12U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31019: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31019, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x13U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x13U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31042: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31042, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x14U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x14U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31065: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31065, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x15U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x15U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31088: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31088, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x16U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x16U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31111: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31111, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x17U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x17U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31134: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31134, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x18U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x18U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31157: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31157, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x19U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x19U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31180: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31180, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31203: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31203, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31226: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31226, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31249: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31249, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31272: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31272, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31295: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31295, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31318: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31318, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x20U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_31 
                                                               >> 0x20U))) 
                                                   != 
                                                   (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[0U] 
                                                    >> 0x1fU))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31341: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31341, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32)) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32)) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31364: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31364, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31387: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31387, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31410: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31410, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31433: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31433, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31456: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31456, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31479: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31479, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31502: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31502, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31525: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31525, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31548: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31548, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31571: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31571, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31594: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31594, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31617: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31617, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31640: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31640, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31663: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31663, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31686: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31686, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31709: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31709, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31732: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31732, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31755: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31755, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31778: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31778, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31801: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31801, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31824: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31824, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31847: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31847, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31870: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31870, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31893: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31893, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31916: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31916, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31939: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31939, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31962: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31962, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:31985: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 31985, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32008: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32008, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32031: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32031, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32054: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32054, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32077: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32077, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U]))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_32 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U]))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32100: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32100, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32123: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32123, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32146: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32146, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32169: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32169, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32192: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32192, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32215: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32215, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32238: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32238, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32261: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32261, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32284: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32284, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32307: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32307, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32330: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32330, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32353: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32353, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32376: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32376, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32399: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32399, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32422: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32422, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32445: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32445, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32468: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32468, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32491: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32491, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32514: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32514, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32537: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32537, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32560: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32560, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32583: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32583, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32606: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32606, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32629: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32629, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32652: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32652, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32675: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32675, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32698: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32698, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32721: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32721, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32744: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32744, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32767: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32767, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32790: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32790, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32813: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32813, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32836: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32836, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U] 
                                                       >> 1U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_33 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U] 
                                                       >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32859: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32859, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32882: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32882, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32905: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32905, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32928: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32928, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32951: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32951, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32974: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32974, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:32997: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 32997, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33020: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33020, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33043: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33043, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33066: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33066, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33089: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33089, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33112: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33112, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33135: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33135, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33158: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33158, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33181: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33181, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33204: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33204, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33227: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33227, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33250: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33250, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33273: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33273, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33296: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33296, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33319: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33319, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33342: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33342, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33365: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33365, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33388: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33388, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33411: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33411, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33434: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33434, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33457: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33457, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33480: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33480, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33503: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33503, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33526: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33526, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33549: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33549, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33572: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33572, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33595: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33595, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U] 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_34 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U] 
                                                       >> 2U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33618: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33618, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33641: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33641, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33664: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33664, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33687: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33687, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33710: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33710, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33733: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33733, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33756: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33756, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33779: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33779, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33802: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33802, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33825: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33825, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33848: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33848, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33871: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33871, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33894: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33894, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33917: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33917, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33940: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33940, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33963: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33963, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:33986: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 33986, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34009: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34009, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34032: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34032, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34055: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34055, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34078: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34078, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34101: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34101, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34124: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34124, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34147: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34147, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34170: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34170, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34193: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34193, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34216: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34216, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34239: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34239, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34262: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34262, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34285: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34285, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34308: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34308, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34331: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34331, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34354: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34354, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U] 
                                                       >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_35 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U] 
                                                       >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34377: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34377, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34400: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34400, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34423: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34423, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34446: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34446, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34469: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34469, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34492: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34492, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34515: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34515, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34538: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34538, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34561: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34561, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34584: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34584, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34607: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34607, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34630: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34630, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34653: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34653, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34676: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34676, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34699: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34699, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34722: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34722, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34745: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34745, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34768: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34768, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34791: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34791, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34814: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34814, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34837: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34837, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34860: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34860, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34883: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34883, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34906: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34906, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34929: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34929, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34952: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34952, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34975: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34975, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:34998: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 34998, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35021: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35021, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35044: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35044, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35067: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35067, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35090: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35090, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35113: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35113, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U] 
                                                       >> 4U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_36 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U] 
                                                       >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35136: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35136, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35159: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35159, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35182: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35182, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35205: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35205, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35228: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35228, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35251: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35251, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35274: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35274, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35297: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35297, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35320: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35320, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35343: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35343, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35366: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35366, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35389: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35389, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35412: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35412, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35435: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35435, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35458: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35458, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35481: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35481, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35504: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35504, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35527: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35527, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35550: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35550, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35573: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35573, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35596: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35596, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35619: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35619, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35642: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35642, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35665: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35665, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35688: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35688, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35711: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35711, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35734: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35734, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35757: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35757, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35780: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35780, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35803: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35803, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35826: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35826, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35849: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35849, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35872: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35872, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U] 
                                                       >> 5U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_37 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U] 
                                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35895: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35895, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35918: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35918, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35941: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35941, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35964: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35964, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:35987: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 35987, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36010: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36010, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36033: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36033, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36056: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36056, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36079: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36079, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36102: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36102, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36125: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36125, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36148: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36148, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36171: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36171, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36194: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36194, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36217: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36217, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36240: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36240, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36263: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36263, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36286: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36286, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36309: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36309, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36332: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36332, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36355: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36355, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36378: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36378, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36401: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36401, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36424: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36424, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36447: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36447, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36470: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36470, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36493: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36493, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36516: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36516, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36539: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36539, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36562: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36562, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36585: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36585, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36608: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36608, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36631: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36631, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U] 
                                                       >> 6U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_38 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U] 
                                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36654: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36654, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36677: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36677, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36700: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36700, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36723: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36723, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36746: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36746, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36769: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36769, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36792: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36792, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36815: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36815, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36838: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36838, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36861: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36861, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36884: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36884, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36907: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36907, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36930: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36930, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36953: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36953, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36976: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36976, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:36999: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 36999, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37022: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37022, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37045: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37045, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37068: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37068, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37091: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37091, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37114: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37114, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37137: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37137, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37160: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37160, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37183: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37183, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37206: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37206, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37229: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37229, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37252: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37252, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37275: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37275, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37298: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37298, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37321: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37321, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37344: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37344, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37367: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37367, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37390: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37390, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U] 
                                                       >> 7U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_39 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U] 
                                                       >> 7U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37413: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37413, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37436: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37436, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37459: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37459, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37482: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37482, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37505: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37505, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37528: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37528, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37551: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37551, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37574: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37574, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37597: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37597, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37620: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37620, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37643: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37643, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37666: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37666, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37689: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37689, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37712: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37712, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37735: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37735, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37758: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37758, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37781: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37781, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37804: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37804, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37827: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37827, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37850: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37850, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37873: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37873, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37896: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37896, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37919: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37919, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37942: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37942, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37965: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37965, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:37988: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 37988, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38011: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38011, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38034: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38034, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38057: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38057, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38080: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38080, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38103: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38103, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38126: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38126, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38149: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38149, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U] 
                                                       >> 8U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_40 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U] 
                                                       >> 8U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38172: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38172, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38195: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38195, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38218: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38218, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38241: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38241, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38264: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38264, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38287: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38287, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38310: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38310, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38333: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38333, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38356: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38356, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38379: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38379, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38402: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38402, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38425: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38425, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38448: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38448, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38471: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38471, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38494: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38494, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38517: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38517, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38540: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38540, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38563: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38563, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38586: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38586, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38609: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38609, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38632: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38632, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38655: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38655, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38678: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38678, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38701: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38701, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38724: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38724, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38747: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38747, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38770: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38770, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38793: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38793, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38816: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38816, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38839: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38839, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38862: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38862, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38885: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38885, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38908: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38908, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U] 
                                                       >> 9U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_41 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U] 
                                                       >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38931: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38931, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38954: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38954, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:38977: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 38977, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39000: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39000, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39023: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39023, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39046: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39046, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39069: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39069, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39092: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39092, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39115: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39115, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39138: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39138, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39161: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39161, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39184: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39184, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0xbU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_11.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39207: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39207, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0xcU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_12.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39230: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39230, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0xdU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_13.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39253: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39253, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0xeU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_14.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39276: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39276, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0xfU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_15.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39299: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39299, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x10U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_16.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39322: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39322, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x11U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_17.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39345: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39345, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x12U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_18.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39368: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39368, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x13U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_19.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39391: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39391, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x14U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_20.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39414: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39414, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x15U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_21.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39437: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39437, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x16U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_22.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39460: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39460, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x17U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_23.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39483: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39483, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x18U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_24.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39506: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39506, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x19U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_25.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39529: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39529, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x1aU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_26.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39552: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39552, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x1bU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_27.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39575: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39575, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x1cU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_28.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39598: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39598, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x1dU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_29.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39621: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39621, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x1eU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_30.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39644: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39644, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x1fU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_31.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39667: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39667, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_42 
                                                               >> 0x20U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_32.io_p[1U] 
                                                       >> 0xaU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39690: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39690, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_43)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_43)) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p.io_p[1U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39713: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39713, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_43 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_43 
                                                               >> 1U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_1.io_p[1U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39736: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39736, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_43 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_43 
                                                               >> 2U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_2.io_p[1U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39759: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39759, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_43 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_43 
                                                               >> 3U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_3.io_p[1U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39782: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39782, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_43 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_43 
                                                               >> 4U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_4.io_p[1U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39805: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39805, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_43 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_43 
                                                               >> 5U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_5.io_p[1U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39828: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39828, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_43 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_43 
                                                               >> 6U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_6.io_p[1U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39851: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39851, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_43 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_43 
                                                               >> 7U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_7.io_p[1U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39874: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39874, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_43 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_43 
                                                               >> 8U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_8.io_p[1U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39897: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39897, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_43 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_43 
                                                               >> 9U))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_9.io_p[1U] 
                                                       >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: unit.v:39920: Assertion failed in %Nunit.walloc_64_mul.switch\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/cyh/ysyx-workbench/npc/unit/vsrc/unit.v", 39920, "");
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->unit__DOT__walloc_64_mul__DOT__switch_io_out_43 
                                                               >> 0xaU))) 
                                                   != 
                                                   (1U 
                                                    & (vlSymsp->TOP__unit__DOT__walloc_64_mul__DOT__gen_p_10.io_p[1U] 
                                                       >> 0xbU)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at WallaceTest.scala:112 chisel3.assert(io.out(j)(i) === io.in(i)(j))\n");
    }
}
