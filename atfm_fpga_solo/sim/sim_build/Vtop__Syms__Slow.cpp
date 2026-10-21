// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"

extern const VlVarTableEntry Vtop___024root__VpiVarTable0[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable1[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable2[];
extern const VlVarTableEntry Vtop_cordic_cossin__VpiVarTable3[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable4[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable5[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable6[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable7[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable8[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable9[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable10[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable11[];
extern const VlVarTableEntry Vtop___024root__VpiVarTable12[];
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[];


// VPI VARIABLE/SCOPE TABLES
#if defined(__GNUC__)
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Winvalid-offsetof"
#endif
extern const VlVarTableEntry Vtop___024root__VpiVarTable0[] = {
    {"angle", offsetof(Vtop___024root, angle), VLVT_UINT16, (VLVD_IN|VLVF_PUB_RW|VLVF_SIGNED|VLVF_NET), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, clk), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"cos_arr_out", offsetof(Vtop___024root, cos_arr_out), VLVT_WDATA, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 2, {9, 0, 15, 0, 0, 0}},
    {"data_valid_in", offsetof(Vtop___024root, data_valid_in), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"data_valid_out", offsetof(Vtop___024root, data_valid_out), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, rst), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"sin_arr_out", offsetof(Vtop___024root, sin_arr_out), VLVT_WDATA, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 2, {9, 0, 15, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable1[] = {
    {"angle", offsetof(Vtop___024root, harmonic_generator__DOT__angle), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED|VLVF_NET), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop___024root, harmonic_generator__DOT__clk), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"cos_arr_out", offsetof(Vtop___024root, harmonic_generator__DOT__cos_arr_out), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 2, {9, 0, 15, 0, 0, 0}},
    {"data_valid_in", offsetof(Vtop___024root, harmonic_generator__DOT__data_valid_in), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"data_valid_out", offsetof(Vtop___024root, harmonic_generator__DOT__data_valid_out), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"rst", offsetof(Vtop___024root, harmonic_generator__DOT__rst), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"sin_arr_out", offsetof(Vtop___024root, harmonic_generator__DOT__sin_arr_out), VLVT_WDATA, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 2, {9, 0, 15, 0, 0, 0}},
    {"valid_arr", offsetof(Vtop___024root, harmonic_generator__DOT__valid_arr), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 1, {9, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable2[] = {
    {"angle_n", offsetof(Vtop___024root, harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__angle_n), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 1, {15, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop_cordic_cossin__VpiVarTable3[] = {
    {"angle", offsetof(Vtop_cordic_cossin, angle), VLVT_UINT16, (VLVD_IN|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED|VLVF_NET), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"clk", offsetof(Vtop_cordic_cossin, clk), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"cos", offsetof(Vtop_cordic_cossin, cos), VLVT_UINT16, (VLVD_OUT|VLVF_PUB_RW|VLVF_SIGNED), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"data_angle_valid_in", offsetof(Vtop_cordic_cossin, data_angle_valid_in), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"data_cossin_valid_out", offsetof(Vtop_cordic_cossin, data_cossin_valid_out), VLVT_UINT8, (VLVD_OUT|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"desired_angle_pipe", offsetof(Vtop_cordic_cossin, desired_angle_pipe), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 1, 1, {0, 16, 15, 0, 0, 0}},
    {"rst", offsetof(Vtop_cordic_cossin, rst), VLVT_UINT8, (VLVD_IN|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_NET), 0, 0, {0, 0, 0, 0, 0, 0}},
    {"sin", offsetof(Vtop_cordic_cossin, sin), VLVT_UINT16, (VLVD_OUT|VLVF_PUB_RW|VLVF_SIGNED), 0, 1, {15, 0, 0, 0, 0, 0}},
    {"total_angle_pipe", offsetof(Vtop_cordic_cossin, total_angle_pipe), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 1, 1, {0, 16, 15, 0, 0, 0}},
    {"valid_pipe", offsetof(Vtop_cordic_cossin, valid_pipe), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 1, 0, {0, 16, 0, 0, 0, 0}},
    {"x_flip_pipe", offsetof(Vtop_cordic_cossin, x_flip_pipe), VLVT_UINT8, (VLVD_NODIR|VLVF_PUB_RW), 1, 0, {0, 16, 0, 0, 0, 0}},
    {"x_pipe", offsetof(Vtop_cordic_cossin, x_pipe), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 1, 1, {0, 16, 16, 0, 0, 0}},
    {"y_pipe", offsetof(Vtop_cordic_cossin, y_pipe), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED), 1, 1, {0, 16, 16, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable4[] = {
    {"angle_n", offsetof(Vtop___024root, harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__angle_n), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 1, {15, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable5[] = {
    {"angle_n", offsetof(Vtop___024root, harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__angle_n), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 1, {15, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable6[] = {
    {"angle_n", offsetof(Vtop___024root, harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__angle_n), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 1, {15, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable7[] = {
    {"angle_n", offsetof(Vtop___024root, harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__angle_n), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 1, {15, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable8[] = {
    {"angle_n", offsetof(Vtop___024root, harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__angle_n), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 1, {15, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable9[] = {
    {"angle_n", offsetof(Vtop___024root, harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__angle_n), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 1, {15, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable10[] = {
    {"angle_n", offsetof(Vtop___024root, harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__angle_n), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 1, {15, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable11[] = {
    {"angle_n", offsetof(Vtop___024root, harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__angle_n), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 1, {15, 0, 0, 0, 0, 0}},
};
extern const VlVarTableEntry Vtop___024root__VpiVarTable12[] = {
    {"angle_n", offsetof(Vtop___024root, harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__angle_n), VLVT_UINT16, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED), 0, 1, {15, 0, 0, 0, 0, 0}},
};
extern const VlScopeTableEntry Vtop__Syms__VpiScopeTable[] = {
    {offsetof(Vtop__Syms, __Vscopep_TOP), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_harmonic_generator), "harmonic_generator", "harmonic_generator", "harmonic_generator", -12, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_harmonic_generator__genblk1__BRA__0__KET__), "harmonic_generator.genblk1[0]", "genblk1[0]", "<null>", -12, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_harmonic_generator__genblk1__BRA__0__KET____nth_cordic), "harmonic_generator.genblk1[0].nth_cordic", "nth_cordic", "cordic_cossin", -12, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_harmonic_generator__genblk1__BRA__1__KET__), "harmonic_generator.genblk1[1]", "genblk1[1]", "<null>", -12, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_harmonic_generator__genblk1__BRA__1__KET____nth_cordic), "harmonic_generator.genblk1[1].nth_cordic", "nth_cordic", "cordic_cossin", -12, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_harmonic_generator__genblk1__BRA__2__KET__), "harmonic_generator.genblk1[2]", "genblk1[2]", "<null>", -12, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_harmonic_generator__genblk1__BRA__2__KET____nth_cordic), "harmonic_generator.genblk1[2].nth_cordic", "nth_cordic", "cordic_cossin", -12, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_harmonic_generator__genblk1__BRA__3__KET__), "harmonic_generator.genblk1[3]", "genblk1[3]", "<null>", -12, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_harmonic_generator__genblk1__BRA__3__KET____nth_cordic), "harmonic_generator.genblk1[3].nth_cordic", "nth_cordic", "cordic_cossin", -12, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_harmonic_generator__genblk1__BRA__4__KET__), "harmonic_generator.genblk1[4]", "genblk1[4]", "<null>", -12, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_harmonic_generator__genblk1__BRA__4__KET____nth_cordic), "harmonic_generator.genblk1[4].nth_cordic", "nth_cordic", "cordic_cossin", -12, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_harmonic_generator__genblk1__BRA__5__KET__), "harmonic_generator.genblk1[5]", "genblk1[5]", "<null>", -12, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_harmonic_generator__genblk1__BRA__5__KET____nth_cordic), "harmonic_generator.genblk1[5].nth_cordic", "nth_cordic", "cordic_cossin", -12, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_harmonic_generator__genblk1__BRA__6__KET__), "harmonic_generator.genblk1[6]", "genblk1[6]", "<null>", -12, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_harmonic_generator__genblk1__BRA__6__KET____nth_cordic), "harmonic_generator.genblk1[6].nth_cordic", "nth_cordic", "cordic_cossin", -12, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_harmonic_generator__genblk1__BRA__7__KET__), "harmonic_generator.genblk1[7]", "genblk1[7]", "<null>", -12, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_harmonic_generator__genblk1__BRA__7__KET____nth_cordic), "harmonic_generator.genblk1[7].nth_cordic", "nth_cordic", "cordic_cossin", -12, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_harmonic_generator__genblk1__BRA__8__KET__), "harmonic_generator.genblk1[8]", "genblk1[8]", "<null>", -12, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_harmonic_generator__genblk1__BRA__8__KET____nth_cordic), "harmonic_generator.genblk1[8].nth_cordic", "nth_cordic", "cordic_cossin", -12, VerilatedScope::SCOPE_MODULE},
    {offsetof(Vtop__Syms, __Vscopep_harmonic_generator__genblk1__BRA__9__KET__), "harmonic_generator.genblk1[9]", "genblk1[9]", "<null>", -12, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vtop__Syms, __Vscopep_harmonic_generator__genblk1__BRA__9__KET____nth_cordic), "harmonic_generator.genblk1[9].nth_cordic", "nth_cordic", "cordic_cossin", -12, VerilatedScope::SCOPE_MODULE},
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
    Verilated::stackCheck(4855);
    // Setup sub module instances
    TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.ctor(this, "harmonic_generator.genblk1[0].nth_cordic");
    TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.ctor(this, "harmonic_generator.genblk1[1].nth_cordic");
    TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.ctor(this, "harmonic_generator.genblk1[2].nth_cordic");
    TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.ctor(this, "harmonic_generator.genblk1[3].nth_cordic");
    TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.ctor(this, "harmonic_generator.genblk1[4].nth_cordic");
    TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.ctor(this, "harmonic_generator.genblk1[5].nth_cordic");
    TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.ctor(this, "harmonic_generator.genblk1[6].nth_cordic");
    TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.ctor(this, "harmonic_generator.genblk1[7].nth_cordic");
    TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.ctor(this, "harmonic_generator.genblk1[8].nth_cordic");
    TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.ctor(this, "harmonic_generator.genblk1[9].nth_cordic");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic = &TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic;
    TOP.__PVT__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic = &TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic;
    TOP.__PVT__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic = &TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic;
    TOP.__PVT__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic = &TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic;
    TOP.__PVT__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic = &TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic;
    TOP.__PVT__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic = &TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic;
    TOP.__PVT__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic = &TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic;
    TOP.__PVT__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic = &TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic;
    TOP.__PVT__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic = &TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic;
    TOP.__PVT__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic = &TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.__Vconfigure(true);
    TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.__Vconfigure(false);
    TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.__Vconfigure(false);
    TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.__Vconfigure(false);
    TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.__Vconfigure(false);
    TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.__Vconfigure(false);
    TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.__Vconfigure(false);
    TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.__Vconfigure(false);
    TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.__Vconfigure(false);
    TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.__Vconfigure(false);
    // Setup scopes
    VerilatedScope::scopesConstructFromTable(Vtop__Syms__VpiScopeTable, 22, this);
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_harmonic_generator);
    __Vhier.add(__Vscopep_harmonic_generator, __Vscopep_harmonic_generator__genblk1__BRA__0__KET__);
    __Vhier.add(__Vscopep_harmonic_generator, __Vscopep_harmonic_generator__genblk1__BRA__1__KET__);
    __Vhier.add(__Vscopep_harmonic_generator, __Vscopep_harmonic_generator__genblk1__BRA__2__KET__);
    __Vhier.add(__Vscopep_harmonic_generator, __Vscopep_harmonic_generator__genblk1__BRA__3__KET__);
    __Vhier.add(__Vscopep_harmonic_generator, __Vscopep_harmonic_generator__genblk1__BRA__4__KET__);
    __Vhier.add(__Vscopep_harmonic_generator, __Vscopep_harmonic_generator__genblk1__BRA__5__KET__);
    __Vhier.add(__Vscopep_harmonic_generator, __Vscopep_harmonic_generator__genblk1__BRA__6__KET__);
    __Vhier.add(__Vscopep_harmonic_generator, __Vscopep_harmonic_generator__genblk1__BRA__7__KET__);
    __Vhier.add(__Vscopep_harmonic_generator, __Vscopep_harmonic_generator__genblk1__BRA__8__KET__);
    __Vhier.add(__Vscopep_harmonic_generator, __Vscopep_harmonic_generator__genblk1__BRA__9__KET__);
    __Vhier.add(__Vscopep_harmonic_generator__genblk1__BRA__0__KET__, __Vscopep_harmonic_generator__genblk1__BRA__0__KET____nth_cordic);
    __Vhier.add(__Vscopep_harmonic_generator__genblk1__BRA__1__KET__, __Vscopep_harmonic_generator__genblk1__BRA__1__KET____nth_cordic);
    __Vhier.add(__Vscopep_harmonic_generator__genblk1__BRA__2__KET__, __Vscopep_harmonic_generator__genblk1__BRA__2__KET____nth_cordic);
    __Vhier.add(__Vscopep_harmonic_generator__genblk1__BRA__3__KET__, __Vscopep_harmonic_generator__genblk1__BRA__3__KET____nth_cordic);
    __Vhier.add(__Vscopep_harmonic_generator__genblk1__BRA__4__KET__, __Vscopep_harmonic_generator__genblk1__BRA__4__KET____nth_cordic);
    __Vhier.add(__Vscopep_harmonic_generator__genblk1__BRA__5__KET__, __Vscopep_harmonic_generator__genblk1__BRA__5__KET____nth_cordic);
    __Vhier.add(__Vscopep_harmonic_generator__genblk1__BRA__6__KET__, __Vscopep_harmonic_generator__genblk1__BRA__6__KET____nth_cordic);
    __Vhier.add(__Vscopep_harmonic_generator__genblk1__BRA__7__KET__, __Vscopep_harmonic_generator__genblk1__BRA__7__KET____nth_cordic);
    __Vhier.add(__Vscopep_harmonic_generator__genblk1__BRA__8__KET__, __Vscopep_harmonic_generator__genblk1__BRA__8__KET____nth_cordic);
    __Vhier.add(__Vscopep_harmonic_generator__genblk1__BRA__9__KET__, __Vscopep_harmonic_generator__genblk1__BRA__9__KET____nth_cordic);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varsInsertFromTable(Vtop___024root__VpiVarTable0, 7, &(TOP));
    __Vscopep_harmonic_generator->varsInsertFromTable(Vtop___024root__VpiVarTable1, 8, &(TOP));
    __Vscopep_harmonic_generator->varInsert("CORDIC_NUM_ITER", const_cast<void*>(static_cast<const void*>(&(TOP.harmonic_generator__DOT__CORDIC_NUM_ITER))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator->varInsert("DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.harmonic_generator__DOT__DATA_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator->varInsert("MAX_HARMONIC", const_cast<void*>(static_cast<const void*>(&(TOP.harmonic_generator__DOT__MAX_HARMONIC))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator__genblk1__BRA__0__KET__->varsInsertFromTable(Vtop___024root__VpiVarTable2, 1, &(TOP));
    __Vscopep_harmonic_generator__genblk1__BRA__0__KET____nth_cordic->varsInsertFromTable(Vtop_cordic_cossin__VpiVarTable3, 13, &(TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic));
    __Vscopep_harmonic_generator__genblk1__BRA__0__KET____nth_cordic->varInsert("NUM_ITERATIONS", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.NUM_ITERATIONS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator__genblk1__BRA__0__KET____nth_cordic->varInsert("PI", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.PI))), true, VLVT_REAL, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 0);
    __Vscopep_harmonic_generator__genblk1__BRA__0__KET____nth_cordic->varInsert("SCALING_FACTOR_REAL", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.SCALING_FACTOR_REAL))), true, VLVT_REAL, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 0);
    __Vscopep_harmonic_generator__genblk1__BRA__0__KET____nth_cordic->varInsert("WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator__genblk1__BRA__0__KET____nth_cordic->varInsert("X_INIT", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.X_INIT))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_harmonic_generator__genblk1__BRA__0__KET____nth_cordic->varInsert("Y_INIT", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.Y_INIT))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_harmonic_generator__genblk1__BRA__1__KET__->varsInsertFromTable(Vtop___024root__VpiVarTable4, 1, &(TOP));
    __Vscopep_harmonic_generator__genblk1__BRA__1__KET____nth_cordic->varsInsertFromTable(Vtop_cordic_cossin__VpiVarTable3, 13, &(TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic));
    __Vscopep_harmonic_generator__genblk1__BRA__1__KET____nth_cordic->varInsert("NUM_ITERATIONS", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.NUM_ITERATIONS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator__genblk1__BRA__1__KET____nth_cordic->varInsert("PI", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.PI))), true, VLVT_REAL, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 0);
    __Vscopep_harmonic_generator__genblk1__BRA__1__KET____nth_cordic->varInsert("SCALING_FACTOR_REAL", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.SCALING_FACTOR_REAL))), true, VLVT_REAL, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 0);
    __Vscopep_harmonic_generator__genblk1__BRA__1__KET____nth_cordic->varInsert("WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator__genblk1__BRA__1__KET____nth_cordic->varInsert("X_INIT", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.X_INIT))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_harmonic_generator__genblk1__BRA__1__KET____nth_cordic->varInsert("Y_INIT", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.Y_INIT))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_harmonic_generator__genblk1__BRA__2__KET__->varsInsertFromTable(Vtop___024root__VpiVarTable5, 1, &(TOP));
    __Vscopep_harmonic_generator__genblk1__BRA__2__KET____nth_cordic->varsInsertFromTable(Vtop_cordic_cossin__VpiVarTable3, 13, &(TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic));
    __Vscopep_harmonic_generator__genblk1__BRA__2__KET____nth_cordic->varInsert("NUM_ITERATIONS", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.NUM_ITERATIONS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator__genblk1__BRA__2__KET____nth_cordic->varInsert("PI", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.PI))), true, VLVT_REAL, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 0);
    __Vscopep_harmonic_generator__genblk1__BRA__2__KET____nth_cordic->varInsert("SCALING_FACTOR_REAL", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.SCALING_FACTOR_REAL))), true, VLVT_REAL, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 0);
    __Vscopep_harmonic_generator__genblk1__BRA__2__KET____nth_cordic->varInsert("WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator__genblk1__BRA__2__KET____nth_cordic->varInsert("X_INIT", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.X_INIT))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_harmonic_generator__genblk1__BRA__2__KET____nth_cordic->varInsert("Y_INIT", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.Y_INIT))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_harmonic_generator__genblk1__BRA__3__KET__->varsInsertFromTable(Vtop___024root__VpiVarTable6, 1, &(TOP));
    __Vscopep_harmonic_generator__genblk1__BRA__3__KET____nth_cordic->varsInsertFromTable(Vtop_cordic_cossin__VpiVarTable3, 13, &(TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic));
    __Vscopep_harmonic_generator__genblk1__BRA__3__KET____nth_cordic->varInsert("NUM_ITERATIONS", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.NUM_ITERATIONS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator__genblk1__BRA__3__KET____nth_cordic->varInsert("PI", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.PI))), true, VLVT_REAL, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 0);
    __Vscopep_harmonic_generator__genblk1__BRA__3__KET____nth_cordic->varInsert("SCALING_FACTOR_REAL", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.SCALING_FACTOR_REAL))), true, VLVT_REAL, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 0);
    __Vscopep_harmonic_generator__genblk1__BRA__3__KET____nth_cordic->varInsert("WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator__genblk1__BRA__3__KET____nth_cordic->varInsert("X_INIT", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.X_INIT))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_harmonic_generator__genblk1__BRA__3__KET____nth_cordic->varInsert("Y_INIT", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.Y_INIT))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_harmonic_generator__genblk1__BRA__4__KET__->varsInsertFromTable(Vtop___024root__VpiVarTable7, 1, &(TOP));
    __Vscopep_harmonic_generator__genblk1__BRA__4__KET____nth_cordic->varsInsertFromTable(Vtop_cordic_cossin__VpiVarTable3, 13, &(TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic));
    __Vscopep_harmonic_generator__genblk1__BRA__4__KET____nth_cordic->varInsert("NUM_ITERATIONS", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.NUM_ITERATIONS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator__genblk1__BRA__4__KET____nth_cordic->varInsert("PI", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.PI))), true, VLVT_REAL, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 0);
    __Vscopep_harmonic_generator__genblk1__BRA__4__KET____nth_cordic->varInsert("SCALING_FACTOR_REAL", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.SCALING_FACTOR_REAL))), true, VLVT_REAL, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 0);
    __Vscopep_harmonic_generator__genblk1__BRA__4__KET____nth_cordic->varInsert("WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator__genblk1__BRA__4__KET____nth_cordic->varInsert("X_INIT", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.X_INIT))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_harmonic_generator__genblk1__BRA__4__KET____nth_cordic->varInsert("Y_INIT", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.Y_INIT))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_harmonic_generator__genblk1__BRA__5__KET__->varsInsertFromTable(Vtop___024root__VpiVarTable8, 1, &(TOP));
    __Vscopep_harmonic_generator__genblk1__BRA__5__KET____nth_cordic->varsInsertFromTable(Vtop_cordic_cossin__VpiVarTable3, 13, &(TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic));
    __Vscopep_harmonic_generator__genblk1__BRA__5__KET____nth_cordic->varInsert("NUM_ITERATIONS", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.NUM_ITERATIONS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator__genblk1__BRA__5__KET____nth_cordic->varInsert("PI", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.PI))), true, VLVT_REAL, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 0);
    __Vscopep_harmonic_generator__genblk1__BRA__5__KET____nth_cordic->varInsert("SCALING_FACTOR_REAL", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.SCALING_FACTOR_REAL))), true, VLVT_REAL, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 0);
    __Vscopep_harmonic_generator__genblk1__BRA__5__KET____nth_cordic->varInsert("WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator__genblk1__BRA__5__KET____nth_cordic->varInsert("X_INIT", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.X_INIT))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_harmonic_generator__genblk1__BRA__5__KET____nth_cordic->varInsert("Y_INIT", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.Y_INIT))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_harmonic_generator__genblk1__BRA__6__KET__->varsInsertFromTable(Vtop___024root__VpiVarTable9, 1, &(TOP));
    __Vscopep_harmonic_generator__genblk1__BRA__6__KET____nth_cordic->varsInsertFromTable(Vtop_cordic_cossin__VpiVarTable3, 13, &(TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic));
    __Vscopep_harmonic_generator__genblk1__BRA__6__KET____nth_cordic->varInsert("NUM_ITERATIONS", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.NUM_ITERATIONS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator__genblk1__BRA__6__KET____nth_cordic->varInsert("PI", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.PI))), true, VLVT_REAL, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 0);
    __Vscopep_harmonic_generator__genblk1__BRA__6__KET____nth_cordic->varInsert("SCALING_FACTOR_REAL", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.SCALING_FACTOR_REAL))), true, VLVT_REAL, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 0);
    __Vscopep_harmonic_generator__genblk1__BRA__6__KET____nth_cordic->varInsert("WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator__genblk1__BRA__6__KET____nth_cordic->varInsert("X_INIT", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.X_INIT))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_harmonic_generator__genblk1__BRA__6__KET____nth_cordic->varInsert("Y_INIT", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.Y_INIT))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_harmonic_generator__genblk1__BRA__7__KET__->varsInsertFromTable(Vtop___024root__VpiVarTable10, 1, &(TOP));
    __Vscopep_harmonic_generator__genblk1__BRA__7__KET____nth_cordic->varsInsertFromTable(Vtop_cordic_cossin__VpiVarTable3, 13, &(TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic));
    __Vscopep_harmonic_generator__genblk1__BRA__7__KET____nth_cordic->varInsert("NUM_ITERATIONS", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.NUM_ITERATIONS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator__genblk1__BRA__7__KET____nth_cordic->varInsert("PI", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.PI))), true, VLVT_REAL, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 0);
    __Vscopep_harmonic_generator__genblk1__BRA__7__KET____nth_cordic->varInsert("SCALING_FACTOR_REAL", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.SCALING_FACTOR_REAL))), true, VLVT_REAL, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 0);
    __Vscopep_harmonic_generator__genblk1__BRA__7__KET____nth_cordic->varInsert("WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator__genblk1__BRA__7__KET____nth_cordic->varInsert("X_INIT", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.X_INIT))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_harmonic_generator__genblk1__BRA__7__KET____nth_cordic->varInsert("Y_INIT", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.Y_INIT))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_harmonic_generator__genblk1__BRA__8__KET__->varsInsertFromTable(Vtop___024root__VpiVarTable11, 1, &(TOP));
    __Vscopep_harmonic_generator__genblk1__BRA__8__KET____nth_cordic->varsInsertFromTable(Vtop_cordic_cossin__VpiVarTable3, 13, &(TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic));
    __Vscopep_harmonic_generator__genblk1__BRA__8__KET____nth_cordic->varInsert("NUM_ITERATIONS", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.NUM_ITERATIONS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator__genblk1__BRA__8__KET____nth_cordic->varInsert("PI", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.PI))), true, VLVT_REAL, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 0);
    __Vscopep_harmonic_generator__genblk1__BRA__8__KET____nth_cordic->varInsert("SCALING_FACTOR_REAL", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.SCALING_FACTOR_REAL))), true, VLVT_REAL, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 0);
    __Vscopep_harmonic_generator__genblk1__BRA__8__KET____nth_cordic->varInsert("WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator__genblk1__BRA__8__KET____nth_cordic->varInsert("X_INIT", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.X_INIT))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_harmonic_generator__genblk1__BRA__8__KET____nth_cordic->varInsert("Y_INIT", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.Y_INIT))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_harmonic_generator__genblk1__BRA__9__KET__->varsInsertFromTable(Vtop___024root__VpiVarTable12, 1, &(TOP));
    __Vscopep_harmonic_generator__genblk1__BRA__9__KET____nth_cordic->varsInsertFromTable(Vtop_cordic_cossin__VpiVarTable3, 13, &(TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic));
    __Vscopep_harmonic_generator__genblk1__BRA__9__KET____nth_cordic->varInsert("NUM_ITERATIONS", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.NUM_ITERATIONS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator__genblk1__BRA__9__KET____nth_cordic->varInsert("PI", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.PI))), true, VLVT_REAL, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 0);
    __Vscopep_harmonic_generator__genblk1__BRA__9__KET____nth_cordic->varInsert("SCALING_FACTOR_REAL", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.SCALING_FACTOR_REAL))), true, VLVT_REAL, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 0);
    __Vscopep_harmonic_generator__genblk1__BRA__9__KET____nth_cordic->varInsert("WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_harmonic_generator__genblk1__BRA__9__KET____nth_cordic->varInsert("X_INIT", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.X_INIT))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_harmonic_generator__genblk1__BRA__9__KET____nth_cordic->varInsert("Y_INIT", const_cast<void*>(static_cast<const void*>(&(TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.Y_INIT))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,16,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_harmonic_generator);
    __Vhier.remove(__Vscopep_harmonic_generator, __Vscopep_harmonic_generator__genblk1__BRA__0__KET__);
    __Vhier.remove(__Vscopep_harmonic_generator, __Vscopep_harmonic_generator__genblk1__BRA__1__KET__);
    __Vhier.remove(__Vscopep_harmonic_generator, __Vscopep_harmonic_generator__genblk1__BRA__2__KET__);
    __Vhier.remove(__Vscopep_harmonic_generator, __Vscopep_harmonic_generator__genblk1__BRA__3__KET__);
    __Vhier.remove(__Vscopep_harmonic_generator, __Vscopep_harmonic_generator__genblk1__BRA__4__KET__);
    __Vhier.remove(__Vscopep_harmonic_generator, __Vscopep_harmonic_generator__genblk1__BRA__5__KET__);
    __Vhier.remove(__Vscopep_harmonic_generator, __Vscopep_harmonic_generator__genblk1__BRA__6__KET__);
    __Vhier.remove(__Vscopep_harmonic_generator, __Vscopep_harmonic_generator__genblk1__BRA__7__KET__);
    __Vhier.remove(__Vscopep_harmonic_generator, __Vscopep_harmonic_generator__genblk1__BRA__8__KET__);
    __Vhier.remove(__Vscopep_harmonic_generator, __Vscopep_harmonic_generator__genblk1__BRA__9__KET__);
    __Vhier.remove(__Vscopep_harmonic_generator__genblk1__BRA__0__KET__, __Vscopep_harmonic_generator__genblk1__BRA__0__KET____nth_cordic);
    __Vhier.remove(__Vscopep_harmonic_generator__genblk1__BRA__1__KET__, __Vscopep_harmonic_generator__genblk1__BRA__1__KET____nth_cordic);
    __Vhier.remove(__Vscopep_harmonic_generator__genblk1__BRA__2__KET__, __Vscopep_harmonic_generator__genblk1__BRA__2__KET____nth_cordic);
    __Vhier.remove(__Vscopep_harmonic_generator__genblk1__BRA__3__KET__, __Vscopep_harmonic_generator__genblk1__BRA__3__KET____nth_cordic);
    __Vhier.remove(__Vscopep_harmonic_generator__genblk1__BRA__4__KET__, __Vscopep_harmonic_generator__genblk1__BRA__4__KET____nth_cordic);
    __Vhier.remove(__Vscopep_harmonic_generator__genblk1__BRA__5__KET__, __Vscopep_harmonic_generator__genblk1__BRA__5__KET____nth_cordic);
    __Vhier.remove(__Vscopep_harmonic_generator__genblk1__BRA__6__KET__, __Vscopep_harmonic_generator__genblk1__BRA__6__KET____nth_cordic);
    __Vhier.remove(__Vscopep_harmonic_generator__genblk1__BRA__7__KET__, __Vscopep_harmonic_generator__genblk1__BRA__7__KET____nth_cordic);
    __Vhier.remove(__Vscopep_harmonic_generator__genblk1__BRA__8__KET__, __Vscopep_harmonic_generator__genblk1__BRA__8__KET____nth_cordic);
    __Vhier.remove(__Vscopep_harmonic_generator__genblk1__BRA__9__KET__, __Vscopep_harmonic_generator__genblk1__BRA__9__KET____nth_cordic);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harmonic_generator, __Vscopep_harmonic_generator = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harmonic_generator__genblk1__BRA__0__KET__, __Vscopep_harmonic_generator__genblk1__BRA__0__KET__ = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harmonic_generator__genblk1__BRA__0__KET____nth_cordic, __Vscopep_harmonic_generator__genblk1__BRA__0__KET____nth_cordic = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harmonic_generator__genblk1__BRA__1__KET__, __Vscopep_harmonic_generator__genblk1__BRA__1__KET__ = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harmonic_generator__genblk1__BRA__1__KET____nth_cordic, __Vscopep_harmonic_generator__genblk1__BRA__1__KET____nth_cordic = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harmonic_generator__genblk1__BRA__2__KET__, __Vscopep_harmonic_generator__genblk1__BRA__2__KET__ = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harmonic_generator__genblk1__BRA__2__KET____nth_cordic, __Vscopep_harmonic_generator__genblk1__BRA__2__KET____nth_cordic = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harmonic_generator__genblk1__BRA__3__KET__, __Vscopep_harmonic_generator__genblk1__BRA__3__KET__ = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harmonic_generator__genblk1__BRA__3__KET____nth_cordic, __Vscopep_harmonic_generator__genblk1__BRA__3__KET____nth_cordic = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harmonic_generator__genblk1__BRA__4__KET__, __Vscopep_harmonic_generator__genblk1__BRA__4__KET__ = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harmonic_generator__genblk1__BRA__4__KET____nth_cordic, __Vscopep_harmonic_generator__genblk1__BRA__4__KET____nth_cordic = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harmonic_generator__genblk1__BRA__5__KET__, __Vscopep_harmonic_generator__genblk1__BRA__5__KET__ = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harmonic_generator__genblk1__BRA__5__KET____nth_cordic, __Vscopep_harmonic_generator__genblk1__BRA__5__KET____nth_cordic = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harmonic_generator__genblk1__BRA__6__KET__, __Vscopep_harmonic_generator__genblk1__BRA__6__KET__ = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harmonic_generator__genblk1__BRA__6__KET____nth_cordic, __Vscopep_harmonic_generator__genblk1__BRA__6__KET____nth_cordic = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harmonic_generator__genblk1__BRA__7__KET__, __Vscopep_harmonic_generator__genblk1__BRA__7__KET__ = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harmonic_generator__genblk1__BRA__7__KET____nth_cordic, __Vscopep_harmonic_generator__genblk1__BRA__7__KET____nth_cordic = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harmonic_generator__genblk1__BRA__8__KET__, __Vscopep_harmonic_generator__genblk1__BRA__8__KET__ = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harmonic_generator__genblk1__BRA__8__KET____nth_cordic, __Vscopep_harmonic_generator__genblk1__BRA__8__KET____nth_cordic = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harmonic_generator__genblk1__BRA__9__KET__, __Vscopep_harmonic_generator__genblk1__BRA__9__KET__ = nullptr);
    VL_DO_CLEAR(delete __Vscopep_harmonic_generator__genblk1__BRA__9__KET____nth_cordic, __Vscopep_harmonic_generator__genblk1__BRA__9__KET____nth_cordic = nullptr);
    // Tear down sub module instances
    TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.dtor();
    TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.dtor();
    TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.dtor();
    TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.dtor();
    TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.dtor();
    TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.dtor();
    TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.dtor();
    TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.dtor();
    TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.dtor();
    TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.dtor();
}
