// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"

extern const VlVarTableEntry Vtop___024root__VpiVarTable0[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable1[];
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[];


// VPI VARIABLE/SCOPE TABLES
#if defined(__GNUC__)
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Winvalid-offsetof"
#endif
extern const VlVarTableEntry Vtop___024root__VpiVarTable0[] = {
    {"Kd", offsetof(Vtop___024root, Kd), VLVT_UINT32, (VLVD_IN|VLVF_PUB_RW|VLVF_SIGNED|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"Ki", offsetof(Vtop___024root, Ki), VLVT_UINT32, (VLVD_IN|VLVF_PUB_RW|VLVF_SIGNED|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"Kp", offsetof(Vtop___024root, Kp), VLVT_UINT32, (VLVD_IN|VLVF_PUB_RW|VLVF_SIGNED|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"busy", offsetof(Vtop___024root, busy), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, clk), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"data_valid_in", offsetof(Vtop___024root, data_valid_in), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"data_valid_out", offsetof(Vtop___024root, data_valid_out), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"inp_sig", offsetof(Vtop___024root, inp_sig), VLVT_UINT16, (VLVD_IN|VLVF_PUB_RW|VLVF_SIGNED|VLVF_NET), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"out_sig", offsetof(Vtop___024root, out_sig), VLVT_UINT16, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"ref_sig", offsetof(Vtop___024root, ref_sig), VLVT_UINT16, (VLVD_IN|VLVF_PUB_RW|VLVF_SIGNED|VLVF_NET), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, rst), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"sat_hi", offsetof(Vtop___024root, sat_hi), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"sat_lo", offsetof(Vtop___024root, sat_lo), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable1[] = {
    {"Kd", offsetof(Vtop___024root, pid_controller__DOT__Kd), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"Ki", offsetof(Vtop___024root, pid_controller__DOT__Ki), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"Kp", offsetof(Vtop___024root, pid_controller__DOT__Kp), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED|VLVF_NET), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"accept_data", offsetof(Vtop___024root, pid_controller__DOT__accept_data), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"busy", offsetof(Vtop___024root, pid_controller__DOT__busy), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, pid_controller__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"d_prod", offsetof(Vtop___024root, pid_controller__DOT__d_prod), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 1, {46, 0, 0, 0, 0, 0}},
    {"d_term", offsetof(Vtop___024root, pid_controller__DOT__d_term), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 1, {46, 0, 0, 0, 0, 0}},
    {"data_valid_in", offsetof(Vtop___024root, pid_controller__DOT__data_valid_in), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"data_valid_out", offsetof(Vtop___024root, pid_controller__DOT__data_valid_out), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"deriv_scaled", offsetof(Vtop___024root, pid_controller__DOT__deriv_scaled), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 1, {20, 0, 0, 0, 0, 0}},
    {"deriv_vel", offsetof(Vtop___024root, pid_controller__DOT__deriv_vel), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 1, {20, 0, 0, 0, 0, 0}},
    {"deriv_vel_filt", offsetof(Vtop___024root, pid_controller__DOT__deriv_vel_filt), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 1, {20, 0, 0, 0, 0, 0}},
    {"i_bounded", offsetof(Vtop___024root, pid_controller__DOT__i_bounded), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 1, {46, 0, 0, 0, 0, 0}},
    {"i_clamp", offsetof(Vtop___024root, pid_controller__DOT__i_clamp), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"i_current", offsetof(Vtop___024root, pid_controller__DOT__i_current), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 1, {46, 0, 0, 0, 0, 0}},
    {"i_next", offsetof(Vtop___024root, pid_controller__DOT__i_next), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 1, {47, 0, 0, 0, 0, 0}},
    {"i_prod", offsetof(Vtop___024root, pid_controller__DOT__i_prod), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 1, {46, 0, 0, 0, 0, 0}},
    {"inp_sig", offsetof(Vtop___024root, pid_controller__DOT__inp_sig), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED|VLVF_NET), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"non_pos_i_prod", offsetof(Vtop___024root, pid_controller__DOT__non_pos_i_prod), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"out_sig", offsetof(Vtop___024root, pid_controller__DOT__out_sig), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"p_prod", offsetof(Vtop___024root, pid_controller__DOT__p_prod), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 1, {46, 0, 0, 0, 0, 0}},
    {"p_term", offsetof(Vtop___024root, pid_controller__DOT__p_term), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 1, {46, 0, 0, 0, 0, 0}},
    {"pid_sum", offsetof(Vtop___024root, pid_controller__DOT__pid_sum), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 1, {49, 0, 0, 0, 0, 0}},
    {"ref_sig", offsetof(Vtop___024root, pid_controller__DOT__ref_sig), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED|VLVF_NET), 0, 1, {13, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, pid_controller__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"sat_hi", offsetof(Vtop___024root, pid_controller__DOT__sat_hi), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"sat_hi_current", offsetof(Vtop___024root, pid_controller__DOT__sat_hi_current), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"sat_lo", offsetof(Vtop___024root, pid_controller__DOT__sat_lo), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"sat_lo_current", offsetof(Vtop___024root, pid_controller__DOT__sat_lo_current), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"unbounded_pid_sum", offsetof(Vtop___024root, pid_controller__DOT__unbounded_pid_sum), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 1, {49, 0, 0, 0, 0, 0}},
    {"vel", offsetof(Vtop___024root, pid_controller__DOT__vel), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 1, {14, 0, 0, 0, 0, 0}},
    {"vel_d", offsetof(Vtop___024root, pid_controller__DOT__vel_d), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 1, {14, 0, 0, 0, 0, 0}},
};
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[] = {
    {offsetof(Vtop__Syms, __Vscopep_TOP), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_pid_controller), "pid_controller", "pid_controller", "pid_controller", -12, VerilatedScope::SCOPE_MODULE},
};
#if defined(__GNUC__)
# pragma GCC diagnostic pop
#endif
Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_didInit{modelp->m_didInit}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(189);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    VerilatedScope::scopesConstructFromTable(Vtop__Syms__VpiScopeTable, 2, this);
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_pid_controller);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varsInsertFromTable(Vtop___024root__VpiVarTable0, 13, &(TOP));
    __Vscopep_pid_controller->varsInsertFromTable(Vtop___024root__VpiVarTable1, 33, &(TOP));
    __Vscopep_pid_controller->varInsert("ALPHA_DIV_FACTOR", const_cast<void*>(static_cast<const void*>(&(TOP.pid_controller__DOT__ALPHA_DIV_FACTOR))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_pid_controller->varInsert("DERIV_FRAC_BITS", const_cast<void*>(static_cast<const void*>(&(TOP.pid_controller__DOT__DERIV_FRAC_BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_pid_controller->varInsert("FRAC_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.pid_controller__DOT__FRAC_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_pid_controller->varInsert("GAIN_DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.pid_controller__DOT__GAIN_DATA_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_pid_controller->varInsert("I_MAX", const_cast<void*>(static_cast<const void*>(&(TOP.pid_controller__DOT__I_MAX))), true, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,46,0);
    __Vscopep_pid_controller->varInsert("I_MIN", const_cast<void*>(static_cast<const void*>(&(TOP.pid_controller__DOT__I_MIN))), true, VLVT_UINT64, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,46,0);
    __Vscopep_pid_controller->varInsert("OUT_MAX", const_cast<void*>(static_cast<const void*>(&(TOP.pid_controller__DOT__OUT_MAX))), true, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,13,0);
    __Vscopep_pid_controller->varInsert("OUT_MIN", const_cast<void*>(static_cast<const void*>(&(TOP.pid_controller__DOT__OUT_MIN))), true, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,13,0);
    __Vscopep_pid_controller->varInsert("PROD_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.pid_controller__DOT__PROD_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_pid_controller->varInsert("SIG_DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.pid_controller__DOT__SIG_DATA_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_pid_controller);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_pid_controller, __Vscopep_pid_controller = nullptr);
    // Tear down sub module instances
}
