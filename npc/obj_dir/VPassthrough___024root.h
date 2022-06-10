// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPassthrough.h for the primary calling header

#ifndef VERILATED_VPASSTHROUGH___024ROOT_H_
#define VERILATED_VPASSTHROUGH___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VPassthrough__Syms;
class VPassthrough_VerilatedVcd;


//----------

VL_MODULE(VPassthrough___024root) {
  public:

    // PORTS
    VL_IN16(io_in,9,0);
    VL_OUT16(io_out,9,0);

    // INTERNAL VARIABLES
    VPassthrough__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VPassthrough___024root);  ///< Copying not allowed
  public:
    VPassthrough___024root(const char* name);
    ~VPassthrough___024root();

    // INTERNAL METHODS
    void __Vconfigure(VPassthrough__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
