// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;
class Vtop___024unit;


//----------

VL_MODULE(Vtop___024root) {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN(io_inst,31,0);
    VL_OUT64(io_pc,63,0);
    VL_OUT64(io_result,63,0);

    // LOCAL SIGNALS
    CData/*5:0*/ top__DOT__idu_io_typ;
    CData/*0:0*/ top__DOT__exu__DOT__gpr_io_en_w;
    QData/*63:0*/ top__DOT__idu_io_imm;
    QData/*63:0*/ top__DOT__idu_io_op;
    QData/*63:0*/ top__DOT__pc;
    QData/*63:0*/ top__DOT__exu__DOT__alu_dest_io_src1;
    QData/*63:0*/ top__DOT__exu__DOT__alu_dest_io_src2;
    QData/*63:0*/ top__DOT__exu__DOT__alu_pc_io_src1;
    QData/*63:0*/ top__DOT__exu__DOT__alu_pc_io_src2;
    QData/*63:0*/ top__DOT__exu__DOT__src1;
    QData/*63:0*/ top__DOT__exu__DOT__src2;
    QData/*63:0*/ top__DOT__exu__DOT__dest;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_1;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_2;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_3;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_4;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_5;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_6;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_7;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_8;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_9;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_10;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_11;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_12;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_13;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_14;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_15;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_16;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_17;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_18;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_19;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_20;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_21;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_22;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_23;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_24;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_25;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_26;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_27;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_28;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_29;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_30;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT__gpr_31;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT___GEN_26;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT___GEN_58;
    QData/*63:0*/ top__DOT__exu__DOT__gpr__DOT___GEN_94;
    QData/*63:0*/ top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2;
    QData/*63:0*/ top__DOT__exu__DOT__alu_pc__DOT___io_result_T_2;
    QData/*63:0*/ top__DOT__exu__DOT__alu_pc__DOT___io_result_T_44;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
