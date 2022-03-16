// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "V__031.h"
#include "V__031__Syms.h"

//============================================================
// Constructors

V__031::V__031(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new V__031__Syms(_vcontextp__, _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
}

V__031::V__031(const char* _vcname__)
    : V__031(nullptr, _vcname__)
{
}

//============================================================
// Destructor

V__031::~V__031() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void V__031___024root___eval_initial(V__031___024root* vlSelf);
void V__031___024root___eval_settle(V__031___024root* vlSelf);
void V__031___024root___eval(V__031___024root* vlSelf);
#ifdef VL_DEBUG
void V__031___024root___eval_debug_assertions(V__031___024root* vlSelf);
#endif  // VL_DEBUG
void V__031___024root___final(V__031___024root* vlSelf);

static void _eval_initial_loop(V__031__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    V__031___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        V__031___024root___eval_settle(&(vlSymsp->TOP));
        V__031___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void V__031::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate V__031::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    V__031___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        V__031___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* V__031::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* V__031::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void V__031::final() {
    V__031___024root___final(&(vlSymsp->TOP));
}
