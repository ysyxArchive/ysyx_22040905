// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtoptest.h"
#include "Vtoptest__Syms.h"

//============================================================
// Constructors

Vtoptest::Vtoptest(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vtoptest__Syms(_vcontextp__, _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
}

Vtoptest::Vtoptest(const char* _vcname__)
    : Vtoptest(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vtoptest::~Vtoptest() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtoptest___024root___eval_initial(Vtoptest___024root* vlSelf);
void Vtoptest___024root___eval_settle(Vtoptest___024root* vlSelf);
void Vtoptest___024root___eval(Vtoptest___024root* vlSelf);
QData Vtoptest___024root___change_request(Vtoptest___024root* vlSelf);
#ifdef VL_DEBUG
void Vtoptest___024root___eval_debug_assertions(Vtoptest___024root* vlSelf);
#endif  // VL_DEBUG
void Vtoptest___024root___final(Vtoptest___024root* vlSelf);

static void _eval_initial_loop(Vtoptest__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtoptest___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtoptest___024root___eval_settle(&(vlSymsp->TOP));
        Vtoptest___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtoptest___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("toptest.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtoptest___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtoptest::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtoptest::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtoptest___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtoptest___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtoptest___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("toptest.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtoptest___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vtoptest::final() {
    Vtoptest___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vtoptest::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vtoptest::name() const {
    return vlSymsp->name();
}
