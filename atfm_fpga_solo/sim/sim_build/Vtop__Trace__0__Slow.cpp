// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

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
    VL_TRACE_DECL_WIDE(tracep,c+4,0,"cos_arr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_WIDE(tracep,c+9,0,"sin_arr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"data_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "harmonic_generator", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1131,0,"MAX_HARMONIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"CORDIC_NUM_ITER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+15,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"data_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_WIDE(tracep,c+19,0,"cos_arr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_WIDE(tracep,c+24,0,"sin_arr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"data_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"valid_arr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"angle_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nth_cordic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"angle_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nth_cordic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"angle_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nth_cordic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"angle_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nth_cordic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"angle_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nth_cordic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"angle_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nth_cordic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"angle_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nth_cordic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"angle_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nth_cordic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1[8]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"angle_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nth_cordic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1[9]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"angle_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nth_cordic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic__0(vlSelf, tracep);
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

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"NUM_ITERATIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+42,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+43,0,"data_angle_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"cos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"sin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+47,0,"data_cossin_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_DOUBLE(tracep,c+1133,0,"PI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+1135,0,"SCALING_FACTOR_REAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_BUS(tracep,c+1137,0,"X_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+1138,0,"Y_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "x_pipe", 0, c+48, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____1(vlSelf, tracep, "y_pipe", 0, c+65, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____2(vlSelf, tracep, "x_flip_pipe", 0, c+82, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____3(vlSelf, tracep, "total_angle_pipe", 0, c+99, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____4(vlSelf, tracep, "desired_angle_pipe", 0, c+116, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____5(vlSelf, tracep, "valid_pipe", 0, c+133, VerilatedTraceSigDirection::NONE);
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

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"NUM_ITERATIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+152,0,"data_angle_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+153,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+154,0,"cos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+155,0,"sin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+156,0,"data_cossin_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_DOUBLE(tracep,c+1133,0,"PI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+1135,0,"SCALING_FACTOR_REAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_BUS(tracep,c+1137,0,"X_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+1138,0,"Y_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "x_pipe", 0, c+157, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____1(vlSelf, tracep, "y_pipe", 0, c+174, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____2(vlSelf, tracep, "x_flip_pipe", 0, c+191, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____3(vlSelf, tracep, "total_angle_pipe", 0, c+208, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____4(vlSelf, tracep, "desired_angle_pipe", 0, c+225, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____5(vlSelf, tracep, "valid_pipe", 0, c+242, VerilatedTraceSigDirection::NONE);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"NUM_ITERATIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+259,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+260,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+261,0,"data_angle_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+262,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+263,0,"cos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+264,0,"sin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+265,0,"data_cossin_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_DOUBLE(tracep,c+1133,0,"PI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+1135,0,"SCALING_FACTOR_REAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_BUS(tracep,c+1137,0,"X_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+1138,0,"Y_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "x_pipe", 0, c+266, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____1(vlSelf, tracep, "y_pipe", 0, c+283, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____2(vlSelf, tracep, "x_flip_pipe", 0, c+300, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____3(vlSelf, tracep, "total_angle_pipe", 0, c+317, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____4(vlSelf, tracep, "desired_angle_pipe", 0, c+334, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____5(vlSelf, tracep, "valid_pipe", 0, c+351, VerilatedTraceSigDirection::NONE);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"NUM_ITERATIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+368,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+369,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+370,0,"data_angle_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+371,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+372,0,"cos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+373,0,"sin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+374,0,"data_cossin_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_DOUBLE(tracep,c+1133,0,"PI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+1135,0,"SCALING_FACTOR_REAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_BUS(tracep,c+1137,0,"X_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+1138,0,"Y_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "x_pipe", 0, c+375, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____1(vlSelf, tracep, "y_pipe", 0, c+392, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____2(vlSelf, tracep, "x_flip_pipe", 0, c+409, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____3(vlSelf, tracep, "total_angle_pipe", 0, c+426, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____4(vlSelf, tracep, "desired_angle_pipe", 0, c+443, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____5(vlSelf, tracep, "valid_pipe", 0, c+460, VerilatedTraceSigDirection::NONE);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"NUM_ITERATIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+477,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+478,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+479,0,"data_angle_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+480,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+481,0,"cos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+482,0,"sin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+483,0,"data_cossin_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_DOUBLE(tracep,c+1133,0,"PI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+1135,0,"SCALING_FACTOR_REAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_BUS(tracep,c+1137,0,"X_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+1138,0,"Y_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "x_pipe", 0, c+484, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____1(vlSelf, tracep, "y_pipe", 0, c+501, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____2(vlSelf, tracep, "x_flip_pipe", 0, c+518, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____3(vlSelf, tracep, "total_angle_pipe", 0, c+535, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____4(vlSelf, tracep, "desired_angle_pipe", 0, c+552, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____5(vlSelf, tracep, "valid_pipe", 0, c+569, VerilatedTraceSigDirection::NONE);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"NUM_ITERATIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+586,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+587,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+588,0,"data_angle_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+589,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+590,0,"cos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+591,0,"sin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+592,0,"data_cossin_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_DOUBLE(tracep,c+1133,0,"PI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+1135,0,"SCALING_FACTOR_REAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_BUS(tracep,c+1137,0,"X_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+1138,0,"Y_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "x_pipe", 0, c+593, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____1(vlSelf, tracep, "y_pipe", 0, c+610, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____2(vlSelf, tracep, "x_flip_pipe", 0, c+627, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____3(vlSelf, tracep, "total_angle_pipe", 0, c+644, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____4(vlSelf, tracep, "desired_angle_pipe", 0, c+661, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____5(vlSelf, tracep, "valid_pipe", 0, c+678, VerilatedTraceSigDirection::NONE);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"NUM_ITERATIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+695,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+696,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+697,0,"data_angle_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+698,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+699,0,"cos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+700,0,"sin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+701,0,"data_cossin_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_DOUBLE(tracep,c+1133,0,"PI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+1135,0,"SCALING_FACTOR_REAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_BUS(tracep,c+1137,0,"X_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+1138,0,"Y_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "x_pipe", 0, c+702, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____1(vlSelf, tracep, "y_pipe", 0, c+719, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____2(vlSelf, tracep, "x_flip_pipe", 0, c+736, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____3(vlSelf, tracep, "total_angle_pipe", 0, c+753, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____4(vlSelf, tracep, "desired_angle_pipe", 0, c+770, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____5(vlSelf, tracep, "valid_pipe", 0, c+787, VerilatedTraceSigDirection::NONE);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"NUM_ITERATIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+804,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+806,0,"data_angle_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+807,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+808,0,"cos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+809,0,"sin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+810,0,"data_cossin_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_DOUBLE(tracep,c+1133,0,"PI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+1135,0,"SCALING_FACTOR_REAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_BUS(tracep,c+1137,0,"X_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+1138,0,"Y_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "x_pipe", 0, c+811, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____1(vlSelf, tracep, "y_pipe", 0, c+828, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____2(vlSelf, tracep, "x_flip_pipe", 0, c+845, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____3(vlSelf, tracep, "total_angle_pipe", 0, c+862, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____4(vlSelf, tracep, "desired_angle_pipe", 0, c+879, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____5(vlSelf, tracep, "valid_pipe", 0, c+896, VerilatedTraceSigDirection::NONE);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"NUM_ITERATIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+913,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+914,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+915,0,"data_angle_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+916,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+917,0,"cos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+918,0,"sin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+919,0,"data_cossin_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_DOUBLE(tracep,c+1133,0,"PI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+1135,0,"SCALING_FACTOR_REAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_BUS(tracep,c+1137,0,"X_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+1138,0,"Y_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "x_pipe", 0, c+920, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____1(vlSelf, tracep, "y_pipe", 0, c+937, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____2(vlSelf, tracep, "x_flip_pipe", 0, c+954, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____3(vlSelf, tracep, "total_angle_pipe", 0, c+971, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____4(vlSelf, tracep, "desired_angle_pipe", 0, c+988, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____5(vlSelf, tracep, "valid_pipe", 0, c+1005, VerilatedTraceSigDirection::NONE);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1132,0,"NUM_ITERATIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1022,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1023,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1024,0,"data_angle_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1025,0,"angle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1026,0,"cos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1027,0,"sin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+1028,0,"data_cossin_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_DOUBLE(tracep,c+1133,0,"PI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+1135,0,"SCALING_FACTOR_REAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_BUS(tracep,c+1137,0,"X_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+1138,0,"Y_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 16,0);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "x_pipe", 0, c+1029, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____1(vlSelf, tracep, "y_pipe", 0, c+1046, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____2(vlSelf, tracep, "x_flip_pipe", 0, c+1063, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____3(vlSelf, tracep, "total_angle_pipe", 0, c+1080, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____4(vlSelf, tracep, "desired_angle_pipe", 0, c+1097, VerilatedTraceSigDirection::NONE);

    Vtop___024root__trace_init_dtype____5(vlSelf, tracep, "valid_pipe", 0, c+1114, VerilatedTraceSigDirection::NONE);
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
    bufp->fullIData(oldp+1131,(0x0000000aU),32);
    bufp->fullIData(oldp+1132,(0x00000010U),32);
    bufp->fullDouble(oldp+1133,(3.14159265358979312e+00));
    bufp->fullDouble(oldp+1135,(6.07252935008881445e-01));
    bufp->fullIData(oldp+1137,(0x00004dbaU),17);
    bufp->fullIData(oldp+1138,(0U),17);
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
    bufp->fullWData(oldp+4,(vlSelfRef.cos_arr_out),160);
    bufp->fullWData(oldp+9,(vlSelfRef.sin_arr_out),160);
    bufp->fullBit(oldp+14,(vlSelfRef.data_valid_out));
    bufp->fullBit(oldp+15,(vlSelfRef.harmonic_generator__DOT__clk));
    bufp->fullBit(oldp+16,(vlSelfRef.harmonic_generator__DOT__rst));
    bufp->fullBit(oldp+17,(vlSelfRef.harmonic_generator__DOT__data_valid_in));
    bufp->fullSData(oldp+18,(vlSelfRef.harmonic_generator__DOT__angle),16);
    bufp->fullWData(oldp+19,(vlSelfRef.harmonic_generator__DOT__cos_arr_out),160);
    bufp->fullWData(oldp+24,(vlSelfRef.harmonic_generator__DOT__sin_arr_out),160);
    bufp->fullBit(oldp+29,(vlSelfRef.harmonic_generator__DOT__data_valid_out));
    bufp->fullSData(oldp+30,(vlSelfRef.harmonic_generator__DOT__valid_arr),10);
    bufp->fullSData(oldp+31,(vlSelfRef.harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__angle_n),16);
    bufp->fullSData(oldp+32,(vlSelfRef.harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__angle_n),16);
    bufp->fullSData(oldp+33,(vlSelfRef.harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__angle_n),16);
    bufp->fullSData(oldp+34,(vlSelfRef.harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__angle_n),16);
    bufp->fullSData(oldp+35,(vlSelfRef.harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__angle_n),16);
    bufp->fullSData(oldp+36,(vlSelfRef.harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__angle_n),16);
    bufp->fullSData(oldp+37,(vlSelfRef.harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__angle_n),16);
    bufp->fullSData(oldp+38,(vlSelfRef.harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__angle_n),16);
    bufp->fullSData(oldp+39,(vlSelfRef.harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__angle_n),16);
    bufp->fullSData(oldp+40,(vlSelfRef.harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__angle_n),16);
    bufp->fullBit(oldp+41,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.clk));
    bufp->fullBit(oldp+42,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.rst));
    bufp->fullBit(oldp+43,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->fullSData(oldp+44,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.angle),16);
    bufp->fullSData(oldp+45,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.cos),16);
    bufp->fullSData(oldp+46,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.sin),16);
    bufp->fullBit(oldp+47,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 48, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_full_dtype____1(vlSelf, bufp, 65, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_full_dtype____2(vlSelf, bufp, 82, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_full_dtype____3(vlSelf, bufp, 99, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_full_dtype____4(vlSelf, bufp, 116, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_full_dtype____5(vlSelf, bufp, 133, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.valid_pipe);
    bufp->fullBit(oldp+150,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.clk));
    bufp->fullBit(oldp+151,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.rst));
    bufp->fullBit(oldp+152,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->fullSData(oldp+153,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.angle),16);
    bufp->fullSData(oldp+154,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.cos),16);
    bufp->fullSData(oldp+155,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.sin),16);
    bufp->fullBit(oldp+156,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 157, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_full_dtype____1(vlSelf, bufp, 174, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_full_dtype____2(vlSelf, bufp, 191, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_full_dtype____3(vlSelf, bufp, 208, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_full_dtype____4(vlSelf, bufp, 225, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_full_dtype____5(vlSelf, bufp, 242, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.valid_pipe);
    bufp->fullBit(oldp+259,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.clk));
    bufp->fullBit(oldp+260,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.rst));
    bufp->fullBit(oldp+261,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->fullSData(oldp+262,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.angle),16);
    bufp->fullSData(oldp+263,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.cos),16);
    bufp->fullSData(oldp+264,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.sin),16);
    bufp->fullBit(oldp+265,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 266, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_full_dtype____1(vlSelf, bufp, 283, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_full_dtype____2(vlSelf, bufp, 300, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_full_dtype____3(vlSelf, bufp, 317, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_full_dtype____4(vlSelf, bufp, 334, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_full_dtype____5(vlSelf, bufp, 351, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.valid_pipe);
    bufp->fullBit(oldp+368,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.clk));
    bufp->fullBit(oldp+369,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.rst));
    bufp->fullBit(oldp+370,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->fullSData(oldp+371,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.angle),16);
    bufp->fullSData(oldp+372,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.cos),16);
    bufp->fullSData(oldp+373,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.sin),16);
    bufp->fullBit(oldp+374,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 375, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_full_dtype____1(vlSelf, bufp, 392, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_full_dtype____2(vlSelf, bufp, 409, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_full_dtype____3(vlSelf, bufp, 426, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_full_dtype____4(vlSelf, bufp, 443, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_full_dtype____5(vlSelf, bufp, 460, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.valid_pipe);
    bufp->fullBit(oldp+477,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.clk));
    bufp->fullBit(oldp+478,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.rst));
    bufp->fullBit(oldp+479,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->fullSData(oldp+480,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.angle),16);
    bufp->fullSData(oldp+481,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.cos),16);
    bufp->fullSData(oldp+482,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.sin),16);
    bufp->fullBit(oldp+483,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 484, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_full_dtype____1(vlSelf, bufp, 501, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_full_dtype____2(vlSelf, bufp, 518, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_full_dtype____3(vlSelf, bufp, 535, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_full_dtype____4(vlSelf, bufp, 552, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_full_dtype____5(vlSelf, bufp, 569, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.valid_pipe);
    bufp->fullBit(oldp+586,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.clk));
    bufp->fullBit(oldp+587,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.rst));
    bufp->fullBit(oldp+588,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->fullSData(oldp+589,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.angle),16);
    bufp->fullSData(oldp+590,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.cos),16);
    bufp->fullSData(oldp+591,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.sin),16);
    bufp->fullBit(oldp+592,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 593, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_full_dtype____1(vlSelf, bufp, 610, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_full_dtype____2(vlSelf, bufp, 627, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_full_dtype____3(vlSelf, bufp, 644, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_full_dtype____4(vlSelf, bufp, 661, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_full_dtype____5(vlSelf, bufp, 678, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.valid_pipe);
    bufp->fullBit(oldp+695,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.clk));
    bufp->fullBit(oldp+696,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.rst));
    bufp->fullBit(oldp+697,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->fullSData(oldp+698,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.angle),16);
    bufp->fullSData(oldp+699,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.cos),16);
    bufp->fullSData(oldp+700,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.sin),16);
    bufp->fullBit(oldp+701,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 702, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_full_dtype____1(vlSelf, bufp, 719, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_full_dtype____2(vlSelf, bufp, 736, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_full_dtype____3(vlSelf, bufp, 753, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_full_dtype____4(vlSelf, bufp, 770, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_full_dtype____5(vlSelf, bufp, 787, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.valid_pipe);
    bufp->fullBit(oldp+804,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.clk));
    bufp->fullBit(oldp+805,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.rst));
    bufp->fullBit(oldp+806,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->fullSData(oldp+807,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.angle),16);
    bufp->fullSData(oldp+808,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.cos),16);
    bufp->fullSData(oldp+809,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.sin),16);
    bufp->fullBit(oldp+810,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 811, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_full_dtype____1(vlSelf, bufp, 828, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_full_dtype____2(vlSelf, bufp, 845, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_full_dtype____3(vlSelf, bufp, 862, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_full_dtype____4(vlSelf, bufp, 879, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_full_dtype____5(vlSelf, bufp, 896, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.valid_pipe);
    bufp->fullBit(oldp+913,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.clk));
    bufp->fullBit(oldp+914,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.rst));
    bufp->fullBit(oldp+915,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->fullSData(oldp+916,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.angle),16);
    bufp->fullSData(oldp+917,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.cos),16);
    bufp->fullSData(oldp+918,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.sin),16);
    bufp->fullBit(oldp+919,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 920, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_full_dtype____1(vlSelf, bufp, 937, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_full_dtype____2(vlSelf, bufp, 954, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_full_dtype____3(vlSelf, bufp, 971, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_full_dtype____4(vlSelf, bufp, 988, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_full_dtype____5(vlSelf, bufp, 1005, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.valid_pipe);
    bufp->fullBit(oldp+1022,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.clk));
    bufp->fullBit(oldp+1023,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.rst));
    bufp->fullBit(oldp+1024,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->fullSData(oldp+1025,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.angle),16);
    bufp->fullSData(oldp+1026,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.cos),16);
    bufp->fullSData(oldp+1027,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.sin),16);
    bufp->fullBit(oldp+1028,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 1029, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_full_dtype____1(vlSelf, bufp, 1046, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_full_dtype____2(vlSelf, bufp, 1063, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_full_dtype____3(vlSelf, bufp, 1080, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_full_dtype____4(vlSelf, bufp, 1097, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_full_dtype____5(vlSelf, bufp, 1114, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.valid_pipe);
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
