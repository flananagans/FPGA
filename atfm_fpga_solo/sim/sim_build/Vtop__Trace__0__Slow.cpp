// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$rootio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"data_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_WIDE(tracep,c+4,0,"a_values",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_WIDE(tracep,c+9,0,"b_values",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"modulator_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+15,0,"data_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "modulator", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1189,0,"MAX_HARMONIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+19,0,"data_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_WIDE(tracep,c+21,0,"a_values",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_WIDE(tracep,c+26,0,"b_values",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"modulator_sum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"data_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1191,0,"MAC_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"angle_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_WIDE(tracep,c+35,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_WIDE(tracep,c+40,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_WIDE(tracep,c+45,0,"cos_unlatched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_WIDE(tracep,c+50,0,"cos_harmonics",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_WIDE(tracep,c+55,0,"sin_unlatched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_WIDE(tracep,c+60,0,"sin_harmonics",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"hgen_valid_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+66,0,"hgen_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"mult_acc_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_QUAD(tracep,c+69,0,"mac_cur",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_QUAD(tracep,c+71,0,"mac_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_PUSH_PREFIX(tracep, "serial_hgen", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1189,0,"MAX_HARMONIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"CORDIC_NUM_ITER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+74,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+75,0,"data_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_WIDE(tracep,c+77,0,"cos_arr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_WIDE(tracep,c+82,0,"sin_arr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"data_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"valid_arr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_harmonics[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"angle_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nth_cordic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_harmonics[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"angle_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nth_cordic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_harmonics[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"angle_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nth_cordic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_harmonics[3]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"angle_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nth_cordic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_harmonics[4]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"angle_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nth_cordic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_harmonics[5]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"angle_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nth_cordic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_harmonics[6]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"angle_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nth_cordic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_harmonics[7]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"angle_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nth_cordic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_harmonics[8]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"angle_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nth_cordic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_harmonics[9]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"angle_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nth_cordic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____0(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtop___024root__trace_init_dtype____1(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtop___024root__trace_init_dtype____2(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtop___024root__trace_init_dtype____3(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtop___024root__trace_init_dtype____4(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtop___024root__trace_init_dtype____5(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"NUM_ITERATIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+99,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+100,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+101,0,"data_angle_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+102,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+103,0,"cos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+104,0,"sin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+105,0,"data_cossin_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_DOUBLE(tracep,c+1192,0,"PI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+1194,0,"SCALING_FACTOR_REAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_BUS(tracep,c+1196,0,"X_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+1197,0,"Y_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "x_pipe", 0, c+106, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____1(vlSelf, tracep, "y_pipe", 0, c+123, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____2(vlSelf, tracep, "x_flip_pipe", 0, c+140, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____3(vlSelf, tracep, "total_angle_pipe", 0, c+157, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____4(vlSelf, tracep, "desired_angle_pipe", 0, c+174, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____5(vlSelf, tracep, "valid_pipe", 0, c+191, VerilatedTraceSigDirection::NONE);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____0(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____0(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____0(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 16);
    for (int i = 0; i < 17; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 16,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____1(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____1(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____1(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____1(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 16);
    for (int i = 0; i < 17; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 16,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____2(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____2(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____2(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____2(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 16);
    for (int i = 0; i < 17; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0));
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____3(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____3(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____3(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____3(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 16);
    for (int i = 0; i < 17; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 15,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____4(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____4(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____4(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____4(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 16);
    for (int i = 0; i < 17; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 15,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____5(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____5(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____5(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____5(Vtop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 16);
    for (int i = 0; i < 17; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0));
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"NUM_ITERATIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+208,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+209,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+210,0,"data_angle_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+211,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+212,0,"cos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+213,0,"sin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"data_cossin_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_DOUBLE(tracep,c+1192,0,"PI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+1194,0,"SCALING_FACTOR_REAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_BUS(tracep,c+1196,0,"X_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+1197,0,"Y_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "x_pipe", 0, c+215, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____1(vlSelf, tracep, "y_pipe", 0, c+232, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____2(vlSelf, tracep, "x_flip_pipe", 0, c+249, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____3(vlSelf, tracep, "total_angle_pipe", 0, c+266, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____4(vlSelf, tracep, "desired_angle_pipe", 0, c+283, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____5(vlSelf, tracep, "valid_pipe", 0, c+300, VerilatedTraceSigDirection::NONE);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"NUM_ITERATIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+317,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"data_angle_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"cos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"sin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+323,0,"data_cossin_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_DOUBLE(tracep,c+1192,0,"PI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+1194,0,"SCALING_FACTOR_REAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_BUS(tracep,c+1196,0,"X_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+1197,0,"Y_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "x_pipe", 0, c+324, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____1(vlSelf, tracep, "y_pipe", 0, c+341, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____2(vlSelf, tracep, "x_flip_pipe", 0, c+358, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____3(vlSelf, tracep, "total_angle_pipe", 0, c+375, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____4(vlSelf, tracep, "desired_angle_pipe", 0, c+392, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____5(vlSelf, tracep, "valid_pipe", 0, c+409, VerilatedTraceSigDirection::NONE);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"NUM_ITERATIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+426,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+427,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+428,0,"data_angle_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+429,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+430,0,"cos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+431,0,"sin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+432,0,"data_cossin_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_DOUBLE(tracep,c+1192,0,"PI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+1194,0,"SCALING_FACTOR_REAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_BUS(tracep,c+1196,0,"X_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+1197,0,"Y_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "x_pipe", 0, c+433, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____1(vlSelf, tracep, "y_pipe", 0, c+450, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____2(vlSelf, tracep, "x_flip_pipe", 0, c+467, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____3(vlSelf, tracep, "total_angle_pipe", 0, c+484, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____4(vlSelf, tracep, "desired_angle_pipe", 0, c+501, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____5(vlSelf, tracep, "valid_pipe", 0, c+518, VerilatedTraceSigDirection::NONE);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"NUM_ITERATIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+535,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+536,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+537,0,"data_angle_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+538,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+539,0,"cos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+540,0,"sin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+541,0,"data_cossin_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_DOUBLE(tracep,c+1192,0,"PI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+1194,0,"SCALING_FACTOR_REAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_BUS(tracep,c+1196,0,"X_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+1197,0,"Y_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "x_pipe", 0, c+542, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____1(vlSelf, tracep, "y_pipe", 0, c+559, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____2(vlSelf, tracep, "x_flip_pipe", 0, c+576, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____3(vlSelf, tracep, "total_angle_pipe", 0, c+593, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____4(vlSelf, tracep, "desired_angle_pipe", 0, c+610, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____5(vlSelf, tracep, "valid_pipe", 0, c+627, VerilatedTraceSigDirection::NONE);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"NUM_ITERATIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+644,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+645,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+646,0,"data_angle_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+647,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+648,0,"cos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+649,0,"sin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+650,0,"data_cossin_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_DOUBLE(tracep,c+1192,0,"PI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+1194,0,"SCALING_FACTOR_REAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_BUS(tracep,c+1196,0,"X_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+1197,0,"Y_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "x_pipe", 0, c+651, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____1(vlSelf, tracep, "y_pipe", 0, c+668, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____2(vlSelf, tracep, "x_flip_pipe", 0, c+685, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____3(vlSelf, tracep, "total_angle_pipe", 0, c+702, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____4(vlSelf, tracep, "desired_angle_pipe", 0, c+719, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____5(vlSelf, tracep, "valid_pipe", 0, c+736, VerilatedTraceSigDirection::NONE);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"NUM_ITERATIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+753,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+754,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+755,0,"data_angle_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+756,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+757,0,"cos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+758,0,"sin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+759,0,"data_cossin_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_DOUBLE(tracep,c+1192,0,"PI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+1194,0,"SCALING_FACTOR_REAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_BUS(tracep,c+1196,0,"X_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+1197,0,"Y_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "x_pipe", 0, c+760, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____1(vlSelf, tracep, "y_pipe", 0, c+777, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____2(vlSelf, tracep, "x_flip_pipe", 0, c+794, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____3(vlSelf, tracep, "total_angle_pipe", 0, c+811, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____4(vlSelf, tracep, "desired_angle_pipe", 0, c+828, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____5(vlSelf, tracep, "valid_pipe", 0, c+845, VerilatedTraceSigDirection::NONE);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"NUM_ITERATIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+862,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+863,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+864,0,"data_angle_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+865,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+866,0,"cos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+867,0,"sin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+868,0,"data_cossin_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_DOUBLE(tracep,c+1192,0,"PI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+1194,0,"SCALING_FACTOR_REAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_BUS(tracep,c+1196,0,"X_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+1197,0,"Y_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "x_pipe", 0, c+869, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____1(vlSelf, tracep, "y_pipe", 0, c+886, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____2(vlSelf, tracep, "x_flip_pipe", 0, c+903, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____3(vlSelf, tracep, "total_angle_pipe", 0, c+920, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____4(vlSelf, tracep, "desired_angle_pipe", 0, c+937, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____5(vlSelf, tracep, "valid_pipe", 0, c+954, VerilatedTraceSigDirection::NONE);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"NUM_ITERATIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+971,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+972,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+973,0,"data_angle_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+974,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+975,0,"cos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+976,0,"sin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+977,0,"data_cossin_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_DOUBLE(tracep,c+1192,0,"PI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+1194,0,"SCALING_FACTOR_REAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_BUS(tracep,c+1196,0,"X_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+1197,0,"Y_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "x_pipe", 0, c+978, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____1(vlSelf, tracep, "y_pipe", 0, c+995, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____2(vlSelf, tracep, "x_flip_pipe", 0, c+1012, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____3(vlSelf, tracep, "total_angle_pipe", 0, c+1029, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____4(vlSelf, tracep, "desired_angle_pipe", 0, c+1046, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____5(vlSelf, tracep, "valid_pipe", 0, c+1063, VerilatedTraceSigDirection::NONE);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1190,0,"NUM_ITERATIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1080,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1081,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1082,0,"data_angle_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1083,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1084,0,"cos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1085,0,"sin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+1086,0,"data_cossin_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_DOUBLE(tracep,c+1192,0,"PI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+1194,0,"SCALING_FACTOR_REAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_BUS(tracep,c+1196,0,"X_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+1197,0,"Y_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "x_pipe", 0, c+1087, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____1(vlSelf, tracep, "y_pipe", 0, c+1104, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____2(vlSelf, tracep, "x_flip_pipe", 0, c+1121, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____3(vlSelf, tracep, "total_angle_pipe", 0, c+1138, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____4(vlSelf, tracep, "desired_angle_pipe", 0, c+1155, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____5(vlSelf, tracep, "valid_pipe", 0, c+1172, VerilatedTraceSigDirection::NONE);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1189,(0x0000000aU),32);
    bufp->fullIData(oldp+1190,(0x00000010U),32);
    bufp->fullIData(oldp+1191,(0x00000025U),32);
    bufp->fullDouble(oldp+1192,(3.14159265358979312e+00));
    bufp->fullDouble(oldp+1194,(6.07252935008881445e-01));
    bufp->fullIData(oldp+1196,(0x00004dbaU),17);
    bufp->fullIData(oldp+1197,(0U),17);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_dtype____0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*16:0*/, 17>& __VdtypeVar);
VL_ATTR_COLD void Vtop___024root__trace_full_dtype____1(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*16:0*/, 17>& __VdtypeVar);
VL_ATTR_COLD void Vtop___024root__trace_full_dtype____2(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 17>& __VdtypeVar);
VL_ATTR_COLD void Vtop___024root__trace_full_dtype____3(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 17>& __VdtypeVar);
VL_ATTR_COLD void Vtop___024root__trace_full_dtype____4(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 17>& __VdtypeVar);
VL_ATTR_COLD void Vtop___024root__trace_full_dtype____5(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 17>& __VdtypeVar);

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.clk));
    bufp->fullBit(oldp+1,(vlSelfRef.rst));
    bufp->fullBit(oldp+2,(vlSelfRef.data_valid_in));
    bufp->fullSData(oldp+3,(vlSelfRef.angle),16);
    bufp->fullWData(oldp+4,(vlSelfRef.a_values),160);
    bufp->fullWData(oldp+9,(vlSelfRef.b_values),160);
    bufp->fullSData(oldp+14,(vlSelfRef.modulator_sum_out),16);
    bufp->fullBit(oldp+15,(vlSelfRef.data_valid_out));
    bufp->fullBit(oldp+16,(vlSelfRef.busy));
    bufp->fullBit(oldp+17,(vlSelfRef.modulator__DOT__clk));
    bufp->fullBit(oldp+18,(vlSelfRef.modulator__DOT__rst));
    bufp->fullBit(oldp+19,(vlSelfRef.modulator__DOT__data_valid_in));
    bufp->fullSData(oldp+20,(vlSelfRef.modulator__DOT__angle),16);
    bufp->fullWData(oldp+21,(vlSelfRef.modulator__DOT__a_values),160);
    bufp->fullWData(oldp+26,(vlSelfRef.modulator__DOT__b_values),160);
    bufp->fullSData(oldp+31,(vlSelfRef.modulator__DOT__modulator_sum_out),16);
    bufp->fullBit(oldp+32,(vlSelfRef.modulator__DOT__data_valid_out));
    bufp->fullBit(oldp+33,(vlSelfRef.modulator__DOT__busy));
    bufp->fullSData(oldp+34,(vlSelfRef.modulator__DOT__angle_reg),16);
    bufp->fullWData(oldp+35,(vlSelfRef.modulator__DOT__a_reg),160);
    bufp->fullWData(oldp+40,(vlSelfRef.modulator__DOT__b_reg),160);
    bufp->fullWData(oldp+45,(vlSelfRef.modulator__DOT__cos_unlatched),160);
    bufp->fullWData(oldp+50,(vlSelfRef.modulator__DOT__cos_harmonics),160);
    bufp->fullWData(oldp+55,(vlSelfRef.modulator__DOT__sin_unlatched),160);
    bufp->fullWData(oldp+60,(vlSelfRef.modulator__DOT__sin_harmonics),160);
    bufp->fullBit(oldp+65,(vlSelfRef.modulator__DOT__hgen_valid_out));
    bufp->fullBit(oldp+66,(vlSelfRef.modulator__DOT__hgen_busy));
    bufp->fullBit(oldp+67,(vlSelfRef.modulator__DOT__mult_acc_active));
    bufp->fullCData(oldp+68,(vlSelfRef.modulator__DOT__idx),4);
    bufp->fullQData(oldp+69,(vlSelfRef.modulator__DOT__mac_cur),37);
    bufp->fullQData(oldp+71,(vlSelfRef.modulator__DOT__mac_next),37);
    bufp->fullBit(oldp+73,(vlSelfRef.modulator__DOT__serial_hgen__DOT__clk));
    bufp->fullBit(oldp+74,(vlSelfRef.modulator__DOT__serial_hgen__DOT__rst));
    bufp->fullBit(oldp+75,(vlSelfRef.modulator__DOT__serial_hgen__DOT__data_valid_in));
    bufp->fullSData(oldp+76,(vlSelfRef.modulator__DOT__serial_hgen__DOT__angle),16);
    bufp->fullWData(oldp+77,(vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out),160);
    bufp->fullWData(oldp+82,(vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out),160);
    bufp->fullBit(oldp+87,(vlSelfRef.modulator__DOT__serial_hgen__DOT__data_valid_out));
    bufp->fullSData(oldp+88,(vlSelfRef.modulator__DOT__serial_hgen__DOT__valid_arr),10);
    bufp->fullSData(oldp+89,(vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__angle_n),16);
    bufp->fullSData(oldp+90,(vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__angle_n),16);
    bufp->fullSData(oldp+91,(vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__angle_n),16);
    bufp->fullSData(oldp+92,(vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__angle_n),16);
    bufp->fullSData(oldp+93,(vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__angle_n),16);
    bufp->fullSData(oldp+94,(vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__angle_n),16);
    bufp->fullSData(oldp+95,(vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__angle_n),16);
    bufp->fullSData(oldp+96,(vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__angle_n),16);
    bufp->fullSData(oldp+97,(vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__angle_n),16);
    bufp->fullSData(oldp+98,(vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__angle_n),16);
    bufp->fullBit(oldp+99,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.clk));
    bufp->fullBit(oldp+100,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.rst));
    bufp->fullBit(oldp+101,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->fullSData(oldp+102,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.angle),16);
    bufp->fullSData(oldp+103,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.cos),16);
    bufp->fullSData(oldp+104,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.sin),16);
    bufp->fullBit(oldp+105,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 106, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_full_dtype____1(vlSelf, bufp, 123, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_full_dtype____2(vlSelf, bufp, 140, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_full_dtype____3(vlSelf, bufp, 157, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_full_dtype____4(vlSelf, bufp, 174, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_full_dtype____5(vlSelf, bufp, 191, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.valid_pipe);
    bufp->fullBit(oldp+208,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.clk));
    bufp->fullBit(oldp+209,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.rst));
    bufp->fullBit(oldp+210,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->fullSData(oldp+211,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.angle),16);
    bufp->fullSData(oldp+212,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.cos),16);
    bufp->fullSData(oldp+213,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.sin),16);
    bufp->fullBit(oldp+214,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 215, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_full_dtype____1(vlSelf, bufp, 232, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_full_dtype____2(vlSelf, bufp, 249, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_full_dtype____3(vlSelf, bufp, 266, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_full_dtype____4(vlSelf, bufp, 283, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_full_dtype____5(vlSelf, bufp, 300, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.valid_pipe);
    bufp->fullBit(oldp+317,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.clk));
    bufp->fullBit(oldp+318,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.rst));
    bufp->fullBit(oldp+319,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->fullSData(oldp+320,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.angle),16);
    bufp->fullSData(oldp+321,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.cos),16);
    bufp->fullSData(oldp+322,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.sin),16);
    bufp->fullBit(oldp+323,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 324, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_full_dtype____1(vlSelf, bufp, 341, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_full_dtype____2(vlSelf, bufp, 358, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_full_dtype____3(vlSelf, bufp, 375, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_full_dtype____4(vlSelf, bufp, 392, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_full_dtype____5(vlSelf, bufp, 409, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.valid_pipe);
    bufp->fullBit(oldp+426,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.clk));
    bufp->fullBit(oldp+427,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.rst));
    bufp->fullBit(oldp+428,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->fullSData(oldp+429,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.angle),16);
    bufp->fullSData(oldp+430,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.cos),16);
    bufp->fullSData(oldp+431,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.sin),16);
    bufp->fullBit(oldp+432,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 433, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_full_dtype____1(vlSelf, bufp, 450, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_full_dtype____2(vlSelf, bufp, 467, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_full_dtype____3(vlSelf, bufp, 484, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_full_dtype____4(vlSelf, bufp, 501, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_full_dtype____5(vlSelf, bufp, 518, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.valid_pipe);
    bufp->fullBit(oldp+535,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.clk));
    bufp->fullBit(oldp+536,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.rst));
    bufp->fullBit(oldp+537,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->fullSData(oldp+538,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.angle),16);
    bufp->fullSData(oldp+539,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.cos),16);
    bufp->fullSData(oldp+540,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.sin),16);
    bufp->fullBit(oldp+541,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 542, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_full_dtype____1(vlSelf, bufp, 559, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_full_dtype____2(vlSelf, bufp, 576, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_full_dtype____3(vlSelf, bufp, 593, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_full_dtype____4(vlSelf, bufp, 610, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_full_dtype____5(vlSelf, bufp, 627, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.valid_pipe);
    bufp->fullBit(oldp+644,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.clk));
    bufp->fullBit(oldp+645,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.rst));
    bufp->fullBit(oldp+646,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->fullSData(oldp+647,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.angle),16);
    bufp->fullSData(oldp+648,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.cos),16);
    bufp->fullSData(oldp+649,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.sin),16);
    bufp->fullBit(oldp+650,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 651, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_full_dtype____1(vlSelf, bufp, 668, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_full_dtype____2(vlSelf, bufp, 685, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_full_dtype____3(vlSelf, bufp, 702, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_full_dtype____4(vlSelf, bufp, 719, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_full_dtype____5(vlSelf, bufp, 736, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.valid_pipe);
    bufp->fullBit(oldp+753,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.clk));
    bufp->fullBit(oldp+754,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.rst));
    bufp->fullBit(oldp+755,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->fullSData(oldp+756,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.angle),16);
    bufp->fullSData(oldp+757,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.cos),16);
    bufp->fullSData(oldp+758,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.sin),16);
    bufp->fullBit(oldp+759,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 760, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_full_dtype____1(vlSelf, bufp, 777, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_full_dtype____2(vlSelf, bufp, 794, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_full_dtype____3(vlSelf, bufp, 811, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_full_dtype____4(vlSelf, bufp, 828, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_full_dtype____5(vlSelf, bufp, 845, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.valid_pipe);
    bufp->fullBit(oldp+862,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.clk));
    bufp->fullBit(oldp+863,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.rst));
    bufp->fullBit(oldp+864,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->fullSData(oldp+865,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.angle),16);
    bufp->fullSData(oldp+866,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.cos),16);
    bufp->fullSData(oldp+867,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.sin),16);
    bufp->fullBit(oldp+868,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 869, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_full_dtype____1(vlSelf, bufp, 886, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_full_dtype____2(vlSelf, bufp, 903, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_full_dtype____3(vlSelf, bufp, 920, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_full_dtype____4(vlSelf, bufp, 937, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_full_dtype____5(vlSelf, bufp, 954, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.valid_pipe);
    bufp->fullBit(oldp+971,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.clk));
    bufp->fullBit(oldp+972,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.rst));
    bufp->fullBit(oldp+973,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->fullSData(oldp+974,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.angle),16);
    bufp->fullSData(oldp+975,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.cos),16);
    bufp->fullSData(oldp+976,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.sin),16);
    bufp->fullBit(oldp+977,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 978, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_full_dtype____1(vlSelf, bufp, 995, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_full_dtype____2(vlSelf, bufp, 1012, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_full_dtype____3(vlSelf, bufp, 1029, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_full_dtype____4(vlSelf, bufp, 1046, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_full_dtype____5(vlSelf, bufp, 1063, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.valid_pipe);
    bufp->fullBit(oldp+1080,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.clk));
    bufp->fullBit(oldp+1081,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.rst));
    bufp->fullBit(oldp+1082,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->fullSData(oldp+1083,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.angle),16);
    bufp->fullSData(oldp+1084,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.cos),16);
    bufp->fullSData(oldp+1085,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.sin),16);
    bufp->fullBit(oldp+1086,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 1087, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_full_dtype____1(vlSelf, bufp, 1104, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_full_dtype____2(vlSelf, bufp, 1121, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_full_dtype____3(vlSelf, bufp, 1138, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_full_dtype____4(vlSelf, bufp, 1155, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_full_dtype____5(vlSelf, bufp, 1172, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.valid_pipe);
}

VL_ATTR_COLD void Vtop___024root__trace_full_dtype____0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*16:0*/, 17>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_dtype____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),17);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),17);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),17);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),17);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),17);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),17);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),17);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),17);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),17);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),17);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),17);
    bufp->fullIData(oldp+11,(__VdtypeVar[11]),17);
    bufp->fullIData(oldp+12,(__VdtypeVar[12]),17);
    bufp->fullIData(oldp+13,(__VdtypeVar[13]),17);
    bufp->fullIData(oldp+14,(__VdtypeVar[14]),17);
    bufp->fullIData(oldp+15,(__VdtypeVar[15]),17);
    bufp->fullIData(oldp+16,(__VdtypeVar[16]),17);
}

VL_ATTR_COLD void Vtop___024root__trace_full_dtype____1(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*16:0*/, 17>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_dtype____1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),17);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),17);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),17);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),17);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),17);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),17);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),17);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),17);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),17);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),17);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),17);
    bufp->fullIData(oldp+11,(__VdtypeVar[11]),17);
    bufp->fullIData(oldp+12,(__VdtypeVar[12]),17);
    bufp->fullIData(oldp+13,(__VdtypeVar[13]),17);
    bufp->fullIData(oldp+14,(__VdtypeVar[14]),17);
    bufp->fullIData(oldp+15,(__VdtypeVar[15]),17);
    bufp->fullIData(oldp+16,(__VdtypeVar[16]),17);
}

VL_ATTR_COLD void Vtop___024root__trace_full_dtype____2(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 17>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_dtype____2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullBit(oldp+0,(__VdtypeVar[0]));
    bufp->fullBit(oldp+1,(__VdtypeVar[1]));
    bufp->fullBit(oldp+2,(__VdtypeVar[2]));
    bufp->fullBit(oldp+3,(__VdtypeVar[3]));
    bufp->fullBit(oldp+4,(__VdtypeVar[4]));
    bufp->fullBit(oldp+5,(__VdtypeVar[5]));
    bufp->fullBit(oldp+6,(__VdtypeVar[6]));
    bufp->fullBit(oldp+7,(__VdtypeVar[7]));
    bufp->fullBit(oldp+8,(__VdtypeVar[8]));
    bufp->fullBit(oldp+9,(__VdtypeVar[9]));
    bufp->fullBit(oldp+10,(__VdtypeVar[10]));
    bufp->fullBit(oldp+11,(__VdtypeVar[11]));
    bufp->fullBit(oldp+12,(__VdtypeVar[12]));
    bufp->fullBit(oldp+13,(__VdtypeVar[13]));
    bufp->fullBit(oldp+14,(__VdtypeVar[14]));
    bufp->fullBit(oldp+15,(__VdtypeVar[15]));
    bufp->fullBit(oldp+16,(__VdtypeVar[16]));
}

VL_ATTR_COLD void Vtop___024root__trace_full_dtype____3(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 17>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_dtype____3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullSData(oldp+0,(__VdtypeVar[0]),16);
    bufp->fullSData(oldp+1,(__VdtypeVar[1]),16);
    bufp->fullSData(oldp+2,(__VdtypeVar[2]),16);
    bufp->fullSData(oldp+3,(__VdtypeVar[3]),16);
    bufp->fullSData(oldp+4,(__VdtypeVar[4]),16);
    bufp->fullSData(oldp+5,(__VdtypeVar[5]),16);
    bufp->fullSData(oldp+6,(__VdtypeVar[6]),16);
    bufp->fullSData(oldp+7,(__VdtypeVar[7]),16);
    bufp->fullSData(oldp+8,(__VdtypeVar[8]),16);
    bufp->fullSData(oldp+9,(__VdtypeVar[9]),16);
    bufp->fullSData(oldp+10,(__VdtypeVar[10]),16);
    bufp->fullSData(oldp+11,(__VdtypeVar[11]),16);
    bufp->fullSData(oldp+12,(__VdtypeVar[12]),16);
    bufp->fullSData(oldp+13,(__VdtypeVar[13]),16);
    bufp->fullSData(oldp+14,(__VdtypeVar[14]),16);
    bufp->fullSData(oldp+15,(__VdtypeVar[15]),16);
    bufp->fullSData(oldp+16,(__VdtypeVar[16]),16);
}

VL_ATTR_COLD void Vtop___024root__trace_full_dtype____4(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 17>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_dtype____4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullSData(oldp+0,(__VdtypeVar[0]),16);
    bufp->fullSData(oldp+1,(__VdtypeVar[1]),16);
    bufp->fullSData(oldp+2,(__VdtypeVar[2]),16);
    bufp->fullSData(oldp+3,(__VdtypeVar[3]),16);
    bufp->fullSData(oldp+4,(__VdtypeVar[4]),16);
    bufp->fullSData(oldp+5,(__VdtypeVar[5]),16);
    bufp->fullSData(oldp+6,(__VdtypeVar[6]),16);
    bufp->fullSData(oldp+7,(__VdtypeVar[7]),16);
    bufp->fullSData(oldp+8,(__VdtypeVar[8]),16);
    bufp->fullSData(oldp+9,(__VdtypeVar[9]),16);
    bufp->fullSData(oldp+10,(__VdtypeVar[10]),16);
    bufp->fullSData(oldp+11,(__VdtypeVar[11]),16);
    bufp->fullSData(oldp+12,(__VdtypeVar[12]),16);
    bufp->fullSData(oldp+13,(__VdtypeVar[13]),16);
    bufp->fullSData(oldp+14,(__VdtypeVar[14]),16);
    bufp->fullSData(oldp+15,(__VdtypeVar[15]),16);
    bufp->fullSData(oldp+16,(__VdtypeVar[16]),16);
}

VL_ATTR_COLD void Vtop___024root__trace_full_dtype____5(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 17>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_dtype____5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullBit(oldp+0,(__VdtypeVar[0]));
    bufp->fullBit(oldp+1,(__VdtypeVar[1]));
    bufp->fullBit(oldp+2,(__VdtypeVar[2]));
    bufp->fullBit(oldp+3,(__VdtypeVar[3]));
    bufp->fullBit(oldp+4,(__VdtypeVar[4]));
    bufp->fullBit(oldp+5,(__VdtypeVar[5]));
    bufp->fullBit(oldp+6,(__VdtypeVar[6]));
    bufp->fullBit(oldp+7,(__VdtypeVar[7]));
    bufp->fullBit(oldp+8,(__VdtypeVar[8]));
    bufp->fullBit(oldp+9,(__VdtypeVar[9]));
    bufp->fullBit(oldp+10,(__VdtypeVar[10]));
    bufp->fullBit(oldp+11,(__VdtypeVar[11]));
    bufp->fullBit(oldp+12,(__VdtypeVar[12]));
    bufp->fullBit(oldp+13,(__VdtypeVar[13]));
    bufp->fullBit(oldp+14,(__VdtypeVar[14]));
    bufp->fullBit(oldp+15,(__VdtypeVar[15]));
    bufp->fullBit(oldp+16,(__VdtypeVar[16]));
}
