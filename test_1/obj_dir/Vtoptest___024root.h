// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtoptest.h for the primary calling header

#ifndef VERILATED_VTOPTEST___024ROOT_H_
#define VERILATED_VTOPTEST___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtoptest__Syms;

//----------

VL_MODULE(Vtoptest___024root) {
  public:

    // PORTS
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(f,0,0);

    // INTERNAL VARIABLES
    Vtoptest__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtoptest___024root);  ///< Copying not allowed
  public:
    Vtoptest___024root(const char* name);
    ~Vtoptest___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtoptest__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
