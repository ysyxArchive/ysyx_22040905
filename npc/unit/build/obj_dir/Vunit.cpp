// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vunit.h"
#include "Vunit__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vunit::Vunit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vunit__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_mul_valid{vlSymsp->TOP.io_mul_valid}
    , io_flush{vlSymsp->TOP.io_flush}
    , io_mulw{vlSymsp->TOP.io_mulw}
    , io_mul_signed{vlSymsp->TOP.io_mul_signed}
    , io_mul_ready{vlSymsp->TOP.io_mul_ready}
    , io_out_valid{vlSymsp->TOP.io_out_valid}
    , io_multiplicand{vlSymsp->TOP.io_multiplicand}
    , io_multiplier{vlSymsp->TOP.io_multiplier}
    , io_result_hi{vlSymsp->TOP.io_result_hi}
    , io_result_lo{vlSymsp->TOP.io_result_lo}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vunit::Vunit(const char* _vcname__)
    : Vunit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vunit::~Vunit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vunit___024root___eval_debug_assertions(Vunit___024root* vlSelf);
#endif  // VL_DEBUG
void Vunit___024root___eval_static(Vunit___024root* vlSelf);
void Vunit___024root___eval_initial(Vunit___024root* vlSelf);
void Vunit___024root___eval_settle(Vunit___024root* vlSelf);
void Vunit___024root___eval(Vunit___024root* vlSelf);

void Vunit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vunit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vunit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vunit___024root___eval_static(&(vlSymsp->TOP));
        Vunit___024root___eval_initial(&(vlSymsp->TOP));
        Vunit___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vunit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vunit::eventsPending() { return false; }

uint64_t Vunit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vunit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vunit___024root___eval_final(Vunit___024root* vlSelf);

VL_ATTR_COLD void Vunit::final() {
    Vunit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vunit::hierName() const { return vlSymsp->name(); }
const char* Vunit::modelName() const { return "Vunit"; }
unsigned Vunit::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vunit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vunit___024root__trace_init_top(Vunit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vunit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vunit___024root*>(voidSelf);
    Vunit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vunit___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vunit___024root__trace_register(Vunit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vunit::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vunit::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vunit___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
