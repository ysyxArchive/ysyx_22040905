// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vunit.h for the primary calling header

#include "verilated.h"

#include "Vunit__Syms.h"
#include "Vunit_gen_p.h"

void Vunit_gen_p___ctor_var_reset(Vunit_gen_p* vlSelf);

Vunit_gen_p::Vunit_gen_p(Vunit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vunit_gen_p___ctor_var_reset(this);
}

void Vunit_gen_p::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vunit_gen_p::~Vunit_gen_p() {
}
