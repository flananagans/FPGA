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
    {"a_values", offsetof(Vtop___024root, a_values), VLVT_WDATA, (VLVD_IN|VLVF_PUB_RW|VLVF_SIGNED|VLVF_NET), 0, 2, {9, 0, 15, 0, 0, 0}},
    {"b_values", offsetof(Vtop___024root, b_values), VLVT_WDATA, (VLVD_IN|VLVF_PUB_RW|VLVF_SIGNED|VLVF_NET), 0, 2, {9, 0, 15, 0, 0, 0}},
    {"busy", offsetof(Vtop___024root, busy), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, clk), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"cos_harmonics", offsetof(Vtop___024root, cos_harmonics), VLVT_WDATA, (VLVD_IN|VLVF_PUB_RW|VLVF_SIGNED|VLVF_NET), 0, 2, {9, 0, 15, 0, 0, 0}},
    {"data_valid_in", offsetof(Vtop___024root, data_valid_in), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"data_valid_out", offsetof(Vtop___024root, data_valid_out), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"modulator_sum_out", offsetof(Vtop___024root, modulator_sum_out), VLVT_UINT16, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, rst), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"sin_harmonics", offsetof(Vtop___024root, sin_harmonics), VLVT_WDATA, (VLVD_IN|VLVF_PUB_RW|VLVF_SIGNED|VLVF_NET), 0, 2, {9, 0, 15, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable1[] = {
    {"a_reg", offsetof(Vtop___024root, modulator__DOT__a_reg), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 2, {9, 0, 15, 0, 0, 0}},
    {"a_temp", offsetof(Vtop___024root, modulator__DOT__a_temp), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"a_values", offsetof(Vtop___024root, modulator__DOT__a_values), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED|VLVF_NET), 0, 2, {9, 0, 15, 0, 0, 0}},
    {"b_reg", offsetof(Vtop___024root, modulator__DOT__b_reg), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 2, {9, 0, 15, 0, 0, 0}},
    {"b_temp", offsetof(Vtop___024root, modulator__DOT__b_temp), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"b_values", offsetof(Vtop___024root, modulator__DOT__b_values), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED|VLVF_NET), 0, 2, {9, 0, 15, 0, 0, 0}},
    {"busy", offsetof(Vtop___024root, modulator__DOT__busy), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, modulator__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"cos_harmonics", offsetof(Vtop___024root, modulator__DOT__cos_harmonics), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED|VLVF_NET), 0, 2, {9, 0, 15, 0, 0, 0}},
    {"cos_reg", offsetof(Vtop___024root, modulator__DOT__cos_reg), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 2, {9, 0, 15, 0, 0, 0}},
    {"cos_temp", offsetof(Vtop___024root, modulator__DOT__cos_temp), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"data_valid_in", offsetof(Vtop___024root, modulator__DOT__data_valid_in), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"data_valid_out", offsetof(Vtop___024root, modulator__DOT__data_valid_out), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"idx", offsetof(Vtop___024root, modulator__DOT__idx), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {3, 0, 0, 0, 0, 0}},
    {"mac_cur", offsetof(Vtop___024root, modulator__DOT__mac_cur), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 1, {36, 0, 0, 0, 0, 0}},
    {"mac_next", offsetof(Vtop___024root, modulator__DOT__mac_next), VLVT_UINT64, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 1, {36, 0, 0, 0, 0, 0}},
    {"mac_state", offsetof(Vtop___024root, modulator__DOT__mac_state), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 0, 1, {1, 0, 0, 0, 0, 0}},
    {"modulator_sum_out", offsetof(Vtop___024root, modulator__DOT__modulator_sum_out), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"prod_a_temp", offsetof(Vtop___024root, modulator__DOT__prod_a_temp), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"prod_b_temp", offsetof(Vtop___024root, modulator__DOT__prod_b_temp), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 1, {31, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, modulator__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"sin_harmonics", offsetof(Vtop___024root, modulator__DOT__sin_harmonics), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED|VLVF_NET), 0, 2, {9, 0, 15, 0, 0, 0}},
    {"sin_reg", offsetof(Vtop___024root, modulator__DOT__sin_reg), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 2, {9, 0, 15, 0, 0, 0}},
    {"sin_temp", offsetof(Vtop___024root, modulator__DOT__sin_temp), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 0, 1, {15, 0, 0, 0, 0, 0}},
};
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[] = {
    {offsetof(Vtop__Syms, __Vscopep_TOP), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_modulator), "modulator", "modulator", "modulator", -12, VerilatedScope::SCOPE_MODULE},
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
    Verilated::stackCheck(284);
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
    __Vhier.add(0, __Vscopep_modulator);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varsInsertFromTable(Vtop___024root__VpiVarTable0, 10, &(TOP));
    __Vscopep_modulator->varsInsertFromTable(Vtop___024root__VpiVarTable1, 24, &(TOP));
    __Vscopep_modulator->varInsert("DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.modulator__DOT__DATA_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_modulator->varInsert("LOAD_MAC_DELAY", const_cast<void*>(static_cast<const void*>(&(TOP.modulator__DOT__LOAD_MAC_DELAY))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_modulator->varInsert("MAC_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.modulator__DOT__MAC_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_modulator->varInsert("MAX_HARMONIC", const_cast<void*>(static_cast<const void*>(&(TOP.modulator__DOT__MAX_HARMONIC))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_modulator);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_modulator, __Vscopep_modulator = nullptr);
    // Tear down sub module instances
}
