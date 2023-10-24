// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vunit.h for the primary calling header

#include "verilated.h"

#include "Vunit_Walloc33bits.h"
#include "Vunit__Syms.h"

void Vunit_Walloc33bits___ctor_var_reset(Vunit_Walloc33bits* vlSelf);

Vunit_Walloc33bits::Vunit_Walloc33bits(Vunit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vunit_Walloc33bits___ctor_var_reset(this);
}

void Vunit_Walloc33bits::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vunit_Walloc33bits::~Vunit_Walloc33bits() {
}
