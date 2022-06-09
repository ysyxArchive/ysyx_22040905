// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPassthrough.h"
#include "VPassthrough__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPassthrough::VPassthrough(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VPassthrough__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_in{vlSymsp->TOP.io_in}
    , io_out{vlSymsp->TOP.io_out}
    , rootp{&(vlSymsp->TOP)}
{
}

VPassthrough::VPassthrough(const char* _vcname__)
    : VPassthrough(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VPassthrough::~VPassthrough() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VPassthrough___024root___eval_initial(VPassthrough___024root* vlSelf);
void VPassthrough___024root___eval_settle(VPassthrough___024root* vlSelf);
void VPassthrough___024root___eval(VPassthrough___024root* vlSelf);
QData VPassthrough___024root___change_request(VPassthrough___024root* vlSelf);
#ifdef VL_DEBUG
void VPassthrough___024root___eval_debug_assertions(VPassthrough___024root* vlSelf);
#endif  // VL_DEBUG
void VPassthrough___024root___final(VPassthrough___024root* vlSelf);

static void _eval_initial_loop(VPassthrough__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VPassthrough___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VPassthrough___024root___eval_settle(&(vlSymsp->TOP));
        VPassthrough___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VPassthrough___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("build/Passthrough.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VPassthrough___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VPassthrough::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPassthrough::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPassthrough___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VPassthrough___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VPassthrough___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("build/Passthrough.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VPassthrough___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VPassthrough::final() {
    VPassthrough___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VPassthrough::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VPassthrough::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VPassthrough___024root__traceInitTop(VPassthrough___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPassthrough___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPassthrough___024root*>(voidSelf);
    VPassthrough__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VPassthrough___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VPassthrough___024root__traceRegister(VPassthrough___024root* vlSelf, VerilatedVcd* tracep);

void VPassthrough::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VPassthrough___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
