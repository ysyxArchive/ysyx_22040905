// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See V__031.h for the primary calling header

#ifndef VERILATED_V__031___024ROOT_H_
#define VERILATED_V__031___024ROOT_H_  // guard

#include "verilated.h"

class V__031__Syms;
VL_MODULE(V__031___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(f,0,0);

    // INTERNAL VARIABLES
    V__031__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    V__031___024root(const char* name);
    ~V__031___024root();
    VL_UNCOPYABLE(V__031___024root);

    // INTERNAL METHODS
    void __Vconfigure(V__031__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
