// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , data_valid_in{vlSymsp->TOP.data_valid_in}
    , data_valid_out{vlSymsp->TOP.data_valid_out}
    , busy{vlSymsp->TOP.busy}
    , angle{vlSymsp->TOP.angle}
    , a_values{vlSymsp->TOP.a_values}
    , b_values{vlSymsp->TOP.b_values}
    , modulator_sum_out{vlSymsp->TOP.modulator_sum_out}
    , __PVT__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic{vlSymsp->TOP.__PVT__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic}
    , __PVT__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic{vlSymsp->TOP.__PVT__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic}
    , __PVT__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic{vlSymsp->TOP.__PVT__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic}
    , __PVT__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic{vlSymsp->TOP.__PVT__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic}
    , __PVT__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic{vlSymsp->TOP.__PVT__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic}
    , __PVT__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic{vlSymsp->TOP.__PVT__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic}
    , __PVT__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic{vlSymsp->TOP.__PVT__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic}
    , __PVT__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic{vlSymsp->TOP.__PVT__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic}
    , __PVT__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic{vlSymsp->TOP.__PVT__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic}
    , __PVT__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic{vlSymsp->TOP.__PVT__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtop::Vtop(const char* _vcname__)
    : Vtop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
VL_ATTR_COLD bool Vtop___024root___eval_stl(Vtop___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vtop___024root___eval_sample(Vtop___024root* vlSelf);
bool Vtop___024root___eval_ico(Vtop___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vtop___024root___eval_act(Vtop___024root* vlSelf);
bool Vtop___024root___eval_inact(Vtop___024root* vlSelf);
bool Vtop___024root___eval_nba(Vtop___024root* vlSelf);
bool Vtop___024root___eval_obs(Vtop___024root* vlSelf);
bool Vtop___024root___eval_react(Vtop___024root* vlSelf);
void Vtop___024root___eval_postponed(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__stl(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__ico(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__act(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__nba(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__obs(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__react(Vtop___024root* vlSelf);

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
    m_evalLoop.eval();
}

void Vtop::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vtop::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtop::evalStatic() {
    Vtop___024root___eval_static(&(vlSymsp->TOP));
}

void Vtop::evalInitial() {
    Vtop___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vtop::evalStl(bool firstIteration) {
    return Vtop___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vtop::evalSample() {
    Vtop___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vtop::evalIco(bool firstIteration) {
    return Vtop___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vtop::evalAct() {
    return Vtop___024root___eval_act(&(vlSymsp->TOP));
}

bool Vtop::evalInact() {
    return Vtop___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vtop::evalNba() {
    return Vtop___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vtop::evalObs() {
    return Vtop___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vtop::evalReact() {
    return Vtop___024root___eval_react(&(vlSymsp->TOP));
}

void Vtop::evalPostponed() {
    Vtop___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vtop::evalFinal() {
    Vtop___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtop::dumpTriggersStl() {
    Vtop___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtop::dumpTriggersIco() {
    Vtop___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtop::dumpTriggersAct() {
    Vtop___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtop::dumpTriggersNba() {
    Vtop___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtop::dumpTriggersObs() {
    Vtop___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtop::dumpTriggersReact() {
    Vtop___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vtop::eventsPending() { return false; }

uint64_t Vtop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtop::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop::hierName() const { return vlSymsp->name(); }
const char* Vtop::modelName() const { return "Vtop"; }
unsigned Vtop::threads() const { return 1; }
void Vtop::prepareClone() const { contextp()->prepareClone(); }
void Vtop::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vtop___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_decl_types(tracep);
    Vtop___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 1198);
    Vtop___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
