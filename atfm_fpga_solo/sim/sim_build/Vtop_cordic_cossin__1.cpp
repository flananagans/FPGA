// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_cordic_cossin___ico_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin___ico_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    __VdfgRegularize_h6e95ff9d_0_6 = 0;
    // Body
    vlSelfRef.sin = ((1U == (3U & (vlSelfRef.y_pipe[16U] 
                                   >> 0x0000000fU)))
                      ? 0x00007fffU : ((2U == (3U & 
                                               (vlSelfRef.y_pipe[16U] 
                                                >> 0x0000000fU)))
                                        ? 0x00008000U
                                        : (0x0000ffffU 
                                           & vlSelfRef.y_pipe[16U])));
    vlSelfRef.data_cossin_valid_out = vlSelfRef.valid_pipe[16U];
    __VdfgRegularize_h6e95ff9d_0_6 = (0x0001ffffU & 
                                      (vlSelfRef.x_flip_pipe[16U]
                                        ? (- vlSelfRef.x_pipe[16U])
                                        : vlSelfRef.x_pipe[16U]));
    vlSelfRef.cos = ((1U == (3U & (__VdfgRegularize_h6e95ff9d_0_6 
                                   >> 0x0000000fU)))
                      ? 0x00007fffU : ((2U == (3U & 
                                               (__VdfgRegularize_h6e95ff9d_0_6 
                                                >> 0x0000000fU)))
                                        ? 0x00008000U
                                        : (0x0000ffffU 
                                           & __VdfgRegularize_h6e95ff9d_0_6)));
}

void Vtop_cordic_cossin___ico_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic__1(Vtop_cordic_cossin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin___ico_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clk = vlSymsp->TOP.harmonic_generator__DOT__clk;
    vlSelfRef.rst = vlSymsp->TOP.harmonic_generator__DOT__rst;
    vlSelfRef.data_angle_valid_in = vlSymsp->TOP.harmonic_generator__DOT__data_valid_in;
    vlSelfRef.angle = vlSymsp->TOP.harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__angle_n;
}

void Vtop_cordic_cossin___nba_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin___nba_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    __VdfgRegularize_h6e95ff9d_0_6 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v0;
    __VdlySet__total_angle_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v0;
    __VdlyVal__valid_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v0;
    __VdlySet__x_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__y_pipe__v0;
    __VdlySet__y_pipe__v0 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v0;
    __VdlyVal__desired_angle_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v0;
    __VdlySet__desired_angle_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v0;
    __VdlyVal__x_flip_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v0;
    __VdlySet__x_flip_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v1;
    __VdlyVal__valid_pipe__v1 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v1;
    __VdlyVal__x_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v1;
    __VdlySet__x_pipe__v1 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v1;
    __VdlyVal__total_angle_pipe__v1 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v1;
    __VdlyVal__y_pipe__v1 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v2;
    __VdlyVal__total_angle_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v2;
    __VdlySet__total_angle_pipe__v2 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v2;
    __VdlyVal__x_pipe__v2 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v2;
    __VdlyVal__y_pipe__v2 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v1;
    __VdlyVal__desired_angle_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v1;
    __VdlySet__desired_angle_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v1;
    __VdlyVal__x_flip_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v1;
    __VdlySet__x_flip_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v2;
    __VdlyVal__valid_pipe__v2 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v3;
    __VdlyVal__x_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v3;
    __VdlySet__x_pipe__v3 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v3;
    __VdlyVal__total_angle_pipe__v3 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v3;
    __VdlyVal__y_pipe__v3 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v4;
    __VdlyVal__total_angle_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v4;
    __VdlySet__total_angle_pipe__v4 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v4;
    __VdlyVal__x_pipe__v4 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v4;
    __VdlyVal__y_pipe__v4 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v2;
    __VdlyVal__desired_angle_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v2;
    __VdlySet__desired_angle_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v2;
    __VdlyVal__x_flip_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v2;
    __VdlySet__x_flip_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v3;
    __VdlyVal__valid_pipe__v3 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v5;
    __VdlyVal__x_pipe__v5 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v5;
    __VdlySet__x_pipe__v5 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v5;
    __VdlyVal__total_angle_pipe__v5 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v5;
    __VdlyVal__y_pipe__v5 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v6;
    __VdlyVal__total_angle_pipe__v6 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v6;
    __VdlySet__total_angle_pipe__v6 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v6;
    __VdlyVal__x_pipe__v6 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v6;
    __VdlyVal__y_pipe__v6 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v3;
    __VdlyVal__desired_angle_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v3;
    __VdlySet__desired_angle_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v3;
    __VdlyVal__x_flip_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v3;
    __VdlySet__x_flip_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v4;
    __VdlyVal__valid_pipe__v4 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v7;
    __VdlyVal__x_pipe__v7 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v7;
    __VdlySet__x_pipe__v7 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v7;
    __VdlyVal__total_angle_pipe__v7 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v7;
    __VdlyVal__y_pipe__v7 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v8;
    __VdlyVal__total_angle_pipe__v8 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v8;
    __VdlySet__total_angle_pipe__v8 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v8;
    __VdlyVal__x_pipe__v8 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v8;
    __VdlyVal__y_pipe__v8 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v4;
    __VdlyVal__desired_angle_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v4;
    __VdlySet__desired_angle_pipe__v4 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v4;
    __VdlyVal__x_flip_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v4;
    __VdlySet__x_flip_pipe__v4 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v5;
    __VdlyVal__valid_pipe__v5 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v9;
    __VdlyVal__x_pipe__v9 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v9;
    __VdlySet__x_pipe__v9 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v9;
    __VdlyVal__total_angle_pipe__v9 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v9;
    __VdlyVal__y_pipe__v9 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v10;
    __VdlyVal__total_angle_pipe__v10 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v10;
    __VdlySet__total_angle_pipe__v10 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v10;
    __VdlyVal__x_pipe__v10 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v10;
    __VdlyVal__y_pipe__v10 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v5;
    __VdlyVal__desired_angle_pipe__v5 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v5;
    __VdlySet__desired_angle_pipe__v5 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v5;
    __VdlyVal__x_flip_pipe__v5 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v5;
    __VdlySet__x_flip_pipe__v5 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v6;
    __VdlyVal__valid_pipe__v6 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v11;
    __VdlyVal__x_pipe__v11 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v11;
    __VdlySet__x_pipe__v11 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v11;
    __VdlyVal__total_angle_pipe__v11 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v11;
    __VdlyVal__y_pipe__v11 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v12;
    __VdlyVal__total_angle_pipe__v12 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v12;
    __VdlySet__total_angle_pipe__v12 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v12;
    __VdlyVal__x_pipe__v12 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v12;
    __VdlyVal__y_pipe__v12 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v6;
    __VdlyVal__desired_angle_pipe__v6 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v6;
    __VdlySet__desired_angle_pipe__v6 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v6;
    __VdlyVal__x_flip_pipe__v6 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v6;
    __VdlySet__x_flip_pipe__v6 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v7;
    __VdlyVal__valid_pipe__v7 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v13;
    __VdlyVal__x_pipe__v13 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v13;
    __VdlySet__x_pipe__v13 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v13;
    __VdlyVal__total_angle_pipe__v13 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v13;
    __VdlyVal__y_pipe__v13 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v14;
    __VdlyVal__total_angle_pipe__v14 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v14;
    __VdlySet__total_angle_pipe__v14 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v14;
    __VdlyVal__x_pipe__v14 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v14;
    __VdlyVal__y_pipe__v14 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v7;
    __VdlyVal__desired_angle_pipe__v7 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v7;
    __VdlySet__desired_angle_pipe__v7 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v7;
    __VdlyVal__x_flip_pipe__v7 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v7;
    __VdlySet__x_flip_pipe__v7 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v8;
    __VdlyVal__valid_pipe__v8 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v15;
    __VdlyVal__x_pipe__v15 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v15;
    __VdlySet__x_pipe__v15 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v15;
    __VdlyVal__total_angle_pipe__v15 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v15;
    __VdlyVal__y_pipe__v15 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v16;
    __VdlyVal__total_angle_pipe__v16 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v16;
    __VdlySet__total_angle_pipe__v16 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v16;
    __VdlyVal__x_pipe__v16 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v16;
    __VdlyVal__y_pipe__v16 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v8;
    __VdlyVal__desired_angle_pipe__v8 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v8;
    __VdlySet__desired_angle_pipe__v8 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v8;
    __VdlyVal__x_flip_pipe__v8 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v8;
    __VdlySet__x_flip_pipe__v8 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v9;
    __VdlyVal__valid_pipe__v9 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v17;
    __VdlyVal__x_pipe__v17 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v17;
    __VdlySet__x_pipe__v17 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v17;
    __VdlyVal__total_angle_pipe__v17 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v17;
    __VdlyVal__y_pipe__v17 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v18;
    __VdlyVal__total_angle_pipe__v18 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v18;
    __VdlySet__total_angle_pipe__v18 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v18;
    __VdlyVal__x_pipe__v18 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v18;
    __VdlyVal__y_pipe__v18 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v9;
    __VdlyVal__desired_angle_pipe__v9 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v9;
    __VdlySet__desired_angle_pipe__v9 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v9;
    __VdlyVal__x_flip_pipe__v9 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v9;
    __VdlySet__x_flip_pipe__v9 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v10;
    __VdlyVal__valid_pipe__v10 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v19;
    __VdlyVal__x_pipe__v19 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v19;
    __VdlySet__x_pipe__v19 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v19;
    __VdlyVal__total_angle_pipe__v19 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v19;
    __VdlyVal__y_pipe__v19 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v20;
    __VdlyVal__total_angle_pipe__v20 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v20;
    __VdlySet__total_angle_pipe__v20 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v20;
    __VdlyVal__x_pipe__v20 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v20;
    __VdlyVal__y_pipe__v20 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v10;
    __VdlyVal__desired_angle_pipe__v10 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v10;
    __VdlySet__desired_angle_pipe__v10 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v10;
    __VdlyVal__x_flip_pipe__v10 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v10;
    __VdlySet__x_flip_pipe__v10 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v11;
    __VdlyVal__valid_pipe__v11 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v21;
    __VdlyVal__x_pipe__v21 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v21;
    __VdlySet__x_pipe__v21 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v21;
    __VdlyVal__total_angle_pipe__v21 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v21;
    __VdlyVal__y_pipe__v21 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v22;
    __VdlyVal__total_angle_pipe__v22 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v22;
    __VdlySet__total_angle_pipe__v22 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v22;
    __VdlyVal__x_pipe__v22 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v22;
    __VdlyVal__y_pipe__v22 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v11;
    __VdlyVal__desired_angle_pipe__v11 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v11;
    __VdlySet__desired_angle_pipe__v11 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v11;
    __VdlyVal__x_flip_pipe__v11 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v11;
    __VdlySet__x_flip_pipe__v11 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v12;
    __VdlyVal__valid_pipe__v12 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v23;
    __VdlyVal__x_pipe__v23 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v23;
    __VdlySet__x_pipe__v23 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v23;
    __VdlyVal__total_angle_pipe__v23 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v23;
    __VdlyVal__y_pipe__v23 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v24;
    __VdlyVal__total_angle_pipe__v24 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v24;
    __VdlySet__total_angle_pipe__v24 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v24;
    __VdlyVal__x_pipe__v24 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v24;
    __VdlyVal__y_pipe__v24 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v12;
    __VdlyVal__desired_angle_pipe__v12 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v12;
    __VdlySet__desired_angle_pipe__v12 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v12;
    __VdlyVal__x_flip_pipe__v12 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v12;
    __VdlySet__x_flip_pipe__v12 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v13;
    __VdlyVal__valid_pipe__v13 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v25;
    __VdlyVal__x_pipe__v25 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v25;
    __VdlySet__x_pipe__v25 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v25;
    __VdlyVal__total_angle_pipe__v25 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v25;
    __VdlyVal__y_pipe__v25 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v26;
    __VdlyVal__total_angle_pipe__v26 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v26;
    __VdlySet__total_angle_pipe__v26 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v26;
    __VdlyVal__x_pipe__v26 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v26;
    __VdlyVal__y_pipe__v26 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v13;
    __VdlyVal__desired_angle_pipe__v13 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v13;
    __VdlySet__desired_angle_pipe__v13 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v13;
    __VdlyVal__x_flip_pipe__v13 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v13;
    __VdlySet__x_flip_pipe__v13 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v14;
    __VdlyVal__valid_pipe__v14 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v27;
    __VdlyVal__x_pipe__v27 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v27;
    __VdlySet__x_pipe__v27 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v27;
    __VdlyVal__total_angle_pipe__v27 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v27;
    __VdlyVal__y_pipe__v27 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v28;
    __VdlyVal__total_angle_pipe__v28 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v28;
    __VdlySet__total_angle_pipe__v28 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v28;
    __VdlyVal__x_pipe__v28 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v28;
    __VdlyVal__y_pipe__v28 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v14;
    __VdlyVal__desired_angle_pipe__v14 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v14;
    __VdlySet__desired_angle_pipe__v14 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v14;
    __VdlyVal__x_flip_pipe__v14 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v14;
    __VdlySet__x_flip_pipe__v14 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v15;
    __VdlyVal__valid_pipe__v15 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v29;
    __VdlyVal__x_pipe__v29 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v29;
    __VdlySet__x_pipe__v29 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v29;
    __VdlyVal__total_angle_pipe__v29 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v29;
    __VdlyVal__y_pipe__v29 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v30;
    __VdlyVal__total_angle_pipe__v30 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v30;
    __VdlySet__total_angle_pipe__v30 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v30;
    __VdlyVal__x_pipe__v30 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v30;
    __VdlyVal__y_pipe__v30 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v15;
    __VdlyVal__desired_angle_pipe__v15 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v15;
    __VdlySet__desired_angle_pipe__v15 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v15;
    __VdlyVal__x_flip_pipe__v15 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v15;
    __VdlySet__x_flip_pipe__v15 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v16;
    __VdlyVal__valid_pipe__v16 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v31;
    __VdlyVal__x_pipe__v31 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v31;
    __VdlySet__x_pipe__v31 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v31;
    __VdlyVal__y_pipe__v31 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v32;
    __VdlyVal__x_pipe__v32 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v32;
    __VdlySet__x_pipe__v32 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v32;
    __VdlyVal__y_pipe__v32 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v31;
    __VdlyVal__total_angle_pipe__v31 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v31;
    __VdlySet__total_angle_pipe__v31 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v16;
    __VdlyVal__desired_angle_pipe__v16 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v16;
    __VdlyVal__x_flip_pipe__v16 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v16;
    __VdlySet__x_flip_pipe__v16 = 0;
    // Body
    __VdlySet__desired_angle_pipe__v0 = 0U;
    __VdlySet__total_angle_pipe__v0 = 0U;
    __VdlySet__y_pipe__v0 = 0U;
    __VdlySet__x_pipe__v0 = 0U;
    __VdlySet__x_flip_pipe__v0 = 0U;
    __VdlySet__x_flip_pipe__v1 = 0U;
    __VdlySet__x_flip_pipe__v2 = 0U;
    __VdlySet__x_flip_pipe__v3 = 0U;
    __VdlySet__x_flip_pipe__v4 = 0U;
    __VdlySet__x_flip_pipe__v5 = 0U;
    __VdlySet__x_flip_pipe__v6 = 0U;
    __VdlySet__x_flip_pipe__v7 = 0U;
    __VdlySet__x_flip_pipe__v8 = 0U;
    __VdlySet__x_flip_pipe__v9 = 0U;
    __VdlySet__x_flip_pipe__v10 = 0U;
    __VdlySet__x_flip_pipe__v11 = 0U;
    __VdlySet__x_flip_pipe__v12 = 0U;
    __VdlySet__x_flip_pipe__v13 = 0U;
    __VdlySet__x_flip_pipe__v14 = 0U;
    __VdlySet__x_flip_pipe__v15 = 0U;
    __VdlySet__x_flip_pipe__v16 = 0U;
    __VdlySet__total_angle_pipe__v31 = 0U;
    __VdlySet__desired_angle_pipe__v1 = 0U;
    __VdlySet__desired_angle_pipe__v2 = 0U;
    __VdlySet__desired_angle_pipe__v3 = 0U;
    __VdlySet__desired_angle_pipe__v4 = 0U;
    __VdlySet__desired_angle_pipe__v5 = 0U;
    __VdlySet__desired_angle_pipe__v6 = 0U;
    __VdlySet__desired_angle_pipe__v7 = 0U;
    __VdlySet__desired_angle_pipe__v8 = 0U;
    __VdlySet__desired_angle_pipe__v9 = 0U;
    __VdlySet__desired_angle_pipe__v10 = 0U;
    __VdlySet__desired_angle_pipe__v11 = 0U;
    __VdlySet__desired_angle_pipe__v12 = 0U;
    __VdlySet__desired_angle_pipe__v13 = 0U;
    __VdlySet__desired_angle_pipe__v14 = 0U;
    __VdlySet__desired_angle_pipe__v15 = 0U;
    __VdlySet__x_pipe__v31 = 0U;
    __VdlySet__x_pipe__v32 = 0U;
    __VdlySet__total_angle_pipe__v2 = 0U;
    __VdlySet__total_angle_pipe__v4 = 0U;
    __VdlySet__total_angle_pipe__v6 = 0U;
    __VdlySet__total_angle_pipe__v8 = 0U;
    __VdlySet__total_angle_pipe__v10 = 0U;
    __VdlySet__total_angle_pipe__v12 = 0U;
    __VdlySet__total_angle_pipe__v14 = 0U;
    __VdlySet__total_angle_pipe__v16 = 0U;
    __VdlySet__total_angle_pipe__v18 = 0U;
    __VdlySet__total_angle_pipe__v20 = 0U;
    __VdlySet__total_angle_pipe__v22 = 0U;
    __VdlySet__total_angle_pipe__v24 = 0U;
    __VdlySet__total_angle_pipe__v26 = 0U;
    __VdlySet__total_angle_pipe__v28 = 0U;
    __VdlySet__total_angle_pipe__v30 = 0U;
    __VdlySet__x_pipe__v1 = 0U;
    __VdlySet__x_pipe__v3 = 0U;
    __VdlySet__x_pipe__v5 = 0U;
    __VdlySet__x_pipe__v7 = 0U;
    __VdlySet__x_pipe__v9 = 0U;
    __VdlySet__x_pipe__v11 = 0U;
    __VdlySet__x_pipe__v13 = 0U;
    __VdlySet__x_pipe__v15 = 0U;
    __VdlySet__x_pipe__v17 = 0U;
    __VdlySet__x_pipe__v19 = 0U;
    __VdlySet__x_pipe__v21 = 0U;
    __VdlySet__x_pipe__v23 = 0U;
    __VdlySet__x_pipe__v25 = 0U;
    __VdlySet__x_pipe__v27 = 0U;
    __VdlySet__x_pipe__v29 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.rst)))) {
        if ((0x00008000U & (IData)(vlSelfRef.angle))) {
            __VdlyVal__desired_angle_pipe__v0 = (0x0000ffffU 
                                                 & ((0x00004000U 
                                                     & (IData)(vlSelfRef.angle))
                                                     ? (IData)(vlSelfRef.angle)
                                                     : 
                                                    ((IData)(0x8000U) 
                                                     - 
                                                     VL_EXTENDS_II(16,16, (IData)(vlSelfRef.angle)))));
            __VdlyVal__x_flip_pipe__v0 = (1U & (~ ((IData)(vlSelfRef.angle) 
                                                   >> 0x0000000eU)));
        } else {
            __VdlyVal__desired_angle_pipe__v0 = (0x0000ffffU 
                                                 & ((0x00004000U 
                                                     & (IData)(vlSelfRef.angle))
                                                     ? 
                                                    ((IData)(0x8000U) 
                                                     - 
                                                     VL_EXTENDS_II(16,16, (IData)(vlSelfRef.angle)))
                                                     : (IData)(vlSelfRef.angle)));
            __VdlyVal__x_flip_pipe__v0 = (1U & ((IData)(vlSelfRef.angle) 
                                                >> 0x0000000eU));
        }
        __VdlySet__desired_angle_pipe__v0 = 1U;
        __VdlySet__total_angle_pipe__v0 = 1U;
        __VdlySet__y_pipe__v0 = 1U;
        __VdlySet__x_pipe__v0 = 1U;
        __VdlySet__x_flip_pipe__v0 = 1U;
        __VdlyVal__x_flip_pipe__v1 = vlSelfRef.x_flip_pipe[0U];
        __VdlySet__x_flip_pipe__v1 = 1U;
        __VdlyVal__x_flip_pipe__v2 = vlSelfRef.x_flip_pipe[1U];
        __VdlySet__x_flip_pipe__v2 = 1U;
        __VdlyVal__x_flip_pipe__v3 = vlSelfRef.x_flip_pipe[2U];
        __VdlySet__x_flip_pipe__v3 = 1U;
        __VdlyVal__x_flip_pipe__v4 = vlSelfRef.x_flip_pipe[3U];
        __VdlySet__x_flip_pipe__v4 = 1U;
        __VdlyVal__x_flip_pipe__v5 = vlSelfRef.x_flip_pipe[4U];
        __VdlySet__x_flip_pipe__v5 = 1U;
        __VdlyVal__x_flip_pipe__v6 = vlSelfRef.x_flip_pipe[5U];
        __VdlySet__x_flip_pipe__v6 = 1U;
        __VdlyVal__x_flip_pipe__v7 = vlSelfRef.x_flip_pipe[6U];
        __VdlySet__x_flip_pipe__v7 = 1U;
        __VdlyVal__x_flip_pipe__v8 = vlSelfRef.x_flip_pipe[7U];
        __VdlySet__x_flip_pipe__v8 = 1U;
        __VdlyVal__x_flip_pipe__v9 = vlSelfRef.x_flip_pipe[8U];
        __VdlySet__x_flip_pipe__v9 = 1U;
        __VdlyVal__x_flip_pipe__v10 = vlSelfRef.x_flip_pipe[9U];
        __VdlySet__x_flip_pipe__v10 = 1U;
        __VdlyVal__x_flip_pipe__v11 = vlSelfRef.x_flip_pipe[10U];
        __VdlySet__x_flip_pipe__v11 = 1U;
        __VdlyVal__x_flip_pipe__v12 = vlSelfRef.x_flip_pipe[11U];
        __VdlySet__x_flip_pipe__v12 = 1U;
        __VdlyVal__x_flip_pipe__v13 = vlSelfRef.x_flip_pipe[12U];
        __VdlySet__x_flip_pipe__v13 = 1U;
        __VdlyVal__x_flip_pipe__v14 = vlSelfRef.x_flip_pipe[13U];
        __VdlySet__x_flip_pipe__v14 = 1U;
        __VdlyVal__x_flip_pipe__v15 = vlSelfRef.x_flip_pipe[14U];
        __VdlySet__x_flip_pipe__v15 = 1U;
        __VdlyVal__x_flip_pipe__v16 = vlSelfRef.x_flip_pipe[15U];
        __VdlySet__x_flip_pipe__v16 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[15U], vlSelfRef.desired_angle_pipe[15U])) {
            __VdlyVal__x_pipe__v31 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[15U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[15U], 0x0000000fU)));
            __VdlySet__x_pipe__v31 = 1U;
            __VdlyVal__y_pipe__v31 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[15U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[15U], 0x0000000fU)));
        } else {
            __VdlyVal__x_pipe__v32 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[15U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[15U], 0x0000000fU)));
            __VdlySet__x_pipe__v32 = 1U;
            __VdlyVal__y_pipe__v32 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[15U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[15U], 0x0000000fU)));
        }
        __VdlyVal__total_angle_pipe__v31 = vlSelfRef.total_angle_pipe[15U];
        __VdlySet__total_angle_pipe__v31 = 1U;
        __VdlyVal__desired_angle_pipe__v16 = vlSelfRef.desired_angle_pipe[15U];
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[0U], vlSelfRef.desired_angle_pipe[0U])) {
            __VdlyVal__x_pipe__v1 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[0U] 
                                      - vlSelfRef.y_pipe[0U]));
            __VdlySet__x_pipe__v1 = 1U;
            __VdlyVal__total_angle_pipe__v1 = (0x0000ffffU 
                                               & ((IData)(0x2000U) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[0U])));
            __VdlyVal__y_pipe__v1 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[0U] 
                                      + vlSelfRef.x_pipe[0U]));
        } else {
            __VdlyVal__total_angle_pipe__v2 = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.total_angle_pipe[0U]) 
                                                  - (IData)(0x2000U)));
            __VdlySet__total_angle_pipe__v2 = 1U;
            __VdlyVal__x_pipe__v2 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[0U] 
                                      + vlSelfRef.y_pipe[0U]));
            __VdlyVal__y_pipe__v2 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[0U] 
                                      - vlSelfRef.x_pipe[0U]));
        }
        __VdlyVal__desired_angle_pipe__v1 = vlSelfRef.desired_angle_pipe[0U];
        __VdlySet__desired_angle_pipe__v1 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[1U], vlSelfRef.desired_angle_pipe[1U])) {
            __VdlyVal__x_pipe__v3 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[1U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[1U], 1U)));
            __VdlySet__x_pipe__v3 = 1U;
            __VdlyVal__total_angle_pipe__v3 = (0x0000ffffU 
                                               & ((IData)(0x12e4U) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[1U])));
            __VdlyVal__y_pipe__v3 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[1U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[1U], 1U)));
        } else {
            __VdlyVal__total_angle_pipe__v4 = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.total_angle_pipe[1U]) 
                                                  - (IData)(0x12e4U)));
            __VdlySet__total_angle_pipe__v4 = 1U;
            __VdlyVal__x_pipe__v4 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[1U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[1U], 1U)));
            __VdlyVal__y_pipe__v4 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[1U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[1U], 1U)));
        }
        __VdlyVal__desired_angle_pipe__v2 = vlSelfRef.desired_angle_pipe[1U];
        __VdlySet__desired_angle_pipe__v2 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[2U], vlSelfRef.desired_angle_pipe[2U])) {
            __VdlyVal__x_pipe__v5 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[2U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[2U], 2U)));
            __VdlySet__x_pipe__v5 = 1U;
            __VdlyVal__total_angle_pipe__v5 = (0x0000ffffU 
                                               & ((IData)(0x09fbU) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[2U])));
            __VdlyVal__y_pipe__v5 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[2U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[2U], 2U)));
        } else {
            __VdlyVal__total_angle_pipe__v6 = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.total_angle_pipe[2U]) 
                                                  - (IData)(0x09fbU)));
            __VdlySet__total_angle_pipe__v6 = 1U;
            __VdlyVal__x_pipe__v6 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[2U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[2U], 2U)));
            __VdlyVal__y_pipe__v6 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[2U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[2U], 2U)));
        }
        __VdlyVal__desired_angle_pipe__v3 = vlSelfRef.desired_angle_pipe[2U];
        __VdlySet__desired_angle_pipe__v3 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[3U], vlSelfRef.desired_angle_pipe[3U])) {
            __VdlyVal__x_pipe__v7 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[3U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[3U], 3U)));
            __VdlySet__x_pipe__v7 = 1U;
            __VdlyVal__total_angle_pipe__v7 = (0x0000ffffU 
                                               & ((IData)(0x0511U) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[3U])));
            __VdlyVal__y_pipe__v7 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[3U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[3U], 3U)));
        } else {
            __VdlyVal__total_angle_pipe__v8 = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.total_angle_pipe[3U]) 
                                                  - (IData)(0x0511U)));
            __VdlySet__total_angle_pipe__v8 = 1U;
            __VdlyVal__x_pipe__v8 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[3U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[3U], 3U)));
            __VdlyVal__y_pipe__v8 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[3U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[3U], 3U)));
        }
        __VdlyVal__desired_angle_pipe__v4 = vlSelfRef.desired_angle_pipe[3U];
        __VdlySet__desired_angle_pipe__v4 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[4U], vlSelfRef.desired_angle_pipe[4U])) {
            __VdlyVal__x_pipe__v9 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[4U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[4U], 4U)));
            __VdlySet__x_pipe__v9 = 1U;
            __VdlyVal__total_angle_pipe__v9 = (0x0000ffffU 
                                               & ((IData)(0x028bU) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[4U])));
            __VdlyVal__y_pipe__v9 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[4U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[4U], 4U)));
        } else {
            __VdlyVal__total_angle_pipe__v10 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[4U]) 
                                                   - (IData)(0x028bU)));
            __VdlySet__total_angle_pipe__v10 = 1U;
            __VdlyVal__x_pipe__v10 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[4U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[4U], 4U)));
            __VdlyVal__y_pipe__v10 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[4U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[4U], 4U)));
        }
        __VdlyVal__desired_angle_pipe__v5 = vlSelfRef.desired_angle_pipe[4U];
        __VdlySet__desired_angle_pipe__v5 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[5U], vlSelfRef.desired_angle_pipe[5U])) {
            __VdlyVal__x_pipe__v11 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[5U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[5U], 5U)));
            __VdlySet__x_pipe__v11 = 1U;
            __VdlyVal__total_angle_pipe__v11 = (0x0000ffffU 
                                                & ((IData)(0x0146U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[5U])));
            __VdlyVal__y_pipe__v11 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[5U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[5U], 5U)));
        } else {
            __VdlyVal__total_angle_pipe__v12 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[5U]) 
                                                   - (IData)(0x0146U)));
            __VdlySet__total_angle_pipe__v12 = 1U;
            __VdlyVal__x_pipe__v12 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[5U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[5U], 5U)));
            __VdlyVal__y_pipe__v12 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[5U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[5U], 5U)));
        }
        __VdlyVal__desired_angle_pipe__v6 = vlSelfRef.desired_angle_pipe[5U];
        __VdlySet__desired_angle_pipe__v6 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[6U], vlSelfRef.desired_angle_pipe[6U])) {
            __VdlyVal__x_pipe__v13 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[6U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[6U], 6U)));
            __VdlySet__x_pipe__v13 = 1U;
            __VdlyVal__total_angle_pipe__v13 = (0x0000ffffU 
                                                & ((IData)(0x00a3U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[6U])));
            __VdlyVal__y_pipe__v13 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[6U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[6U], 6U)));
        } else {
            __VdlyVal__total_angle_pipe__v14 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[6U]) 
                                                   - (IData)(0x00a3U)));
            __VdlySet__total_angle_pipe__v14 = 1U;
            __VdlyVal__x_pipe__v14 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[6U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[6U], 6U)));
            __VdlyVal__y_pipe__v14 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[6U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[6U], 6U)));
        }
        __VdlyVal__desired_angle_pipe__v7 = vlSelfRef.desired_angle_pipe[6U];
        __VdlySet__desired_angle_pipe__v7 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[7U], vlSelfRef.desired_angle_pipe[7U])) {
            __VdlyVal__x_pipe__v15 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[7U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[7U], 7U)));
            __VdlySet__x_pipe__v15 = 1U;
            __VdlyVal__total_angle_pipe__v15 = (0x0000ffffU 
                                                & ((IData)(0x0051U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[7U])));
            __VdlyVal__y_pipe__v15 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[7U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[7U], 7U)));
        } else {
            __VdlyVal__total_angle_pipe__v16 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[7U]) 
                                                   - (IData)(0x0051U)));
            __VdlySet__total_angle_pipe__v16 = 1U;
            __VdlyVal__x_pipe__v16 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[7U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[7U], 7U)));
            __VdlyVal__y_pipe__v16 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[7U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[7U], 7U)));
        }
        __VdlyVal__desired_angle_pipe__v8 = vlSelfRef.desired_angle_pipe[7U];
        __VdlySet__desired_angle_pipe__v8 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[8U], vlSelfRef.desired_angle_pipe[8U])) {
            __VdlyVal__x_pipe__v17 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[8U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[8U], 8U)));
            __VdlySet__x_pipe__v17 = 1U;
            __VdlyVal__total_angle_pipe__v17 = (0x0000ffffU 
                                                & ((IData)(0x0029U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[8U])));
            __VdlyVal__y_pipe__v17 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[8U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[8U], 8U)));
        } else {
            __VdlyVal__total_angle_pipe__v18 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[8U]) 
                                                   - (IData)(0x0029U)));
            __VdlySet__total_angle_pipe__v18 = 1U;
            __VdlyVal__x_pipe__v18 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[8U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[8U], 8U)));
            __VdlyVal__y_pipe__v18 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[8U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[8U], 8U)));
        }
        __VdlyVal__desired_angle_pipe__v9 = vlSelfRef.desired_angle_pipe[8U];
        __VdlySet__desired_angle_pipe__v9 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[9U], vlSelfRef.desired_angle_pipe[9U])) {
            __VdlyVal__x_pipe__v19 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[9U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[9U], 9U)));
            __VdlySet__x_pipe__v19 = 1U;
            __VdlyVal__total_angle_pipe__v19 = (0x0000ffffU 
                                                & ((IData)(0x0014U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[9U])));
            __VdlyVal__y_pipe__v19 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[9U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[9U], 9U)));
        } else {
            __VdlyVal__total_angle_pipe__v20 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[9U]) 
                                                   - (IData)(0x0014U)));
            __VdlySet__total_angle_pipe__v20 = 1U;
            __VdlyVal__x_pipe__v20 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[9U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[9U], 9U)));
            __VdlyVal__y_pipe__v20 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[9U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[9U], 9U)));
        }
        __VdlyVal__desired_angle_pipe__v10 = vlSelfRef.desired_angle_pipe[9U];
        __VdlySet__desired_angle_pipe__v10 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[10U], vlSelfRef.desired_angle_pipe[10U])) {
            __VdlyVal__x_pipe__v21 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[10U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[10U], 0x0000000aU)));
            __VdlySet__x_pipe__v21 = 1U;
            __VdlyVal__total_angle_pipe__v21 = (0x0000ffffU 
                                                & ((IData)(0x000aU) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[10U])));
            __VdlyVal__y_pipe__v21 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[10U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[10U], 0x0000000aU)));
        } else {
            __VdlyVal__total_angle_pipe__v22 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[10U]) 
                                                   - (IData)(0x000aU)));
            __VdlySet__total_angle_pipe__v22 = 1U;
            __VdlyVal__x_pipe__v22 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[10U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[10U], 0x0000000aU)));
            __VdlyVal__y_pipe__v22 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[10U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[10U], 0x0000000aU)));
        }
        __VdlyVal__desired_angle_pipe__v11 = vlSelfRef.desired_angle_pipe[10U];
        __VdlySet__desired_angle_pipe__v11 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[11U], vlSelfRef.desired_angle_pipe[11U])) {
            __VdlyVal__x_pipe__v23 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[11U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[11U], 0x0000000bU)));
            __VdlySet__x_pipe__v23 = 1U;
            __VdlyVal__total_angle_pipe__v23 = (0x0000ffffU 
                                                & ((IData)(5U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[11U])));
            __VdlyVal__y_pipe__v23 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[11U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[11U], 0x0000000bU)));
        } else {
            __VdlyVal__total_angle_pipe__v24 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[11U]) 
                                                   - (IData)(5U)));
            __VdlySet__total_angle_pipe__v24 = 1U;
            __VdlyVal__x_pipe__v24 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[11U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[11U], 0x0000000bU)));
            __VdlyVal__y_pipe__v24 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[11U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[11U], 0x0000000bU)));
        }
        __VdlyVal__desired_angle_pipe__v12 = vlSelfRef.desired_angle_pipe[11U];
        __VdlySet__desired_angle_pipe__v12 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[12U], vlSelfRef.desired_angle_pipe[12U])) {
            __VdlyVal__x_pipe__v25 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[12U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[12U], 0x0000000cU)));
            __VdlySet__x_pipe__v25 = 1U;
            __VdlyVal__total_angle_pipe__v25 = (0x0000ffffU 
                                                & ((IData)(3U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[12U])));
            __VdlyVal__y_pipe__v25 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[12U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[12U], 0x0000000cU)));
        } else {
            __VdlyVal__total_angle_pipe__v26 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[12U]) 
                                                   - (IData)(3U)));
            __VdlySet__total_angle_pipe__v26 = 1U;
            __VdlyVal__x_pipe__v26 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[12U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[12U], 0x0000000cU)));
            __VdlyVal__y_pipe__v26 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[12U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[12U], 0x0000000cU)));
        }
        __VdlyVal__desired_angle_pipe__v13 = vlSelfRef.desired_angle_pipe[12U];
        __VdlySet__desired_angle_pipe__v13 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[13U], vlSelfRef.desired_angle_pipe[13U])) {
            __VdlyVal__x_pipe__v27 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[13U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[13U], 0x0000000dU)));
            __VdlySet__x_pipe__v27 = 1U;
            __VdlyVal__total_angle_pipe__v27 = (0x0000ffffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[13U])));
            __VdlyVal__y_pipe__v27 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[13U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[13U], 0x0000000dU)));
        } else {
            __VdlyVal__total_angle_pipe__v28 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[13U]) 
                                                   - (IData)(1U)));
            __VdlySet__total_angle_pipe__v28 = 1U;
            __VdlyVal__x_pipe__v28 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[13U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[13U], 0x0000000dU)));
            __VdlyVal__y_pipe__v28 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[13U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[13U], 0x0000000dU)));
        }
        __VdlyVal__desired_angle_pipe__v14 = vlSelfRef.desired_angle_pipe[13U];
        __VdlySet__desired_angle_pipe__v14 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[14U], vlSelfRef.desired_angle_pipe[14U])) {
            __VdlyVal__x_pipe__v29 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[14U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[14U], 0x0000000eU)));
            __VdlySet__x_pipe__v29 = 1U;
            __VdlyVal__total_angle_pipe__v29 = (0x0000ffffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[14U])));
            __VdlyVal__y_pipe__v29 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[14U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[14U], 0x0000000eU)));
        } else {
            __VdlyVal__total_angle_pipe__v30 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[14U]) 
                                                   - (IData)(1U)));
            __VdlySet__total_angle_pipe__v30 = 1U;
            __VdlyVal__x_pipe__v30 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[14U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[14U], 0x0000000eU)));
            __VdlyVal__y_pipe__v30 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[14U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[14U], 0x0000000eU)));
        }
        __VdlyVal__desired_angle_pipe__v15 = vlSelfRef.desired_angle_pipe[14U];
        __VdlySet__desired_angle_pipe__v15 = 1U;
    }
    __VdlyVal__valid_pipe__v0 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && (IData)(vlSelfRef.data_angle_valid_in));
    __VdlyVal__valid_pipe__v1 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[0U]);
    __VdlyVal__valid_pipe__v2 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[1U]);
    __VdlyVal__valid_pipe__v3 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[2U]);
    __VdlyVal__valid_pipe__v4 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[3U]);
    __VdlyVal__valid_pipe__v5 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[4U]);
    __VdlyVal__valid_pipe__v6 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[5U]);
    __VdlyVal__valid_pipe__v7 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[6U]);
    __VdlyVal__valid_pipe__v8 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[7U]);
    __VdlyVal__valid_pipe__v9 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[8U]);
    __VdlyVal__valid_pipe__v10 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[9U]);
    __VdlyVal__valid_pipe__v11 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[10U]);
    __VdlyVal__valid_pipe__v12 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[11U]);
    __VdlyVal__valid_pipe__v13 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[12U]);
    __VdlyVal__valid_pipe__v14 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[13U]);
    __VdlyVal__valid_pipe__v15 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[14U]);
    __VdlyVal__valid_pipe__v16 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[15U]);
    vlSelfRef.valid_pipe[0U] = __VdlyVal__valid_pipe__v0;
    vlSelfRef.valid_pipe[1U] = __VdlyVal__valid_pipe__v1;
    vlSelfRef.valid_pipe[2U] = __VdlyVal__valid_pipe__v2;
    vlSelfRef.valid_pipe[3U] = __VdlyVal__valid_pipe__v3;
    vlSelfRef.valid_pipe[4U] = __VdlyVal__valid_pipe__v4;
    vlSelfRef.valid_pipe[5U] = __VdlyVal__valid_pipe__v5;
    vlSelfRef.valid_pipe[6U] = __VdlyVal__valid_pipe__v6;
    vlSelfRef.valid_pipe[7U] = __VdlyVal__valid_pipe__v7;
    vlSelfRef.valid_pipe[8U] = __VdlyVal__valid_pipe__v8;
    vlSelfRef.valid_pipe[9U] = __VdlyVal__valid_pipe__v9;
    vlSelfRef.valid_pipe[10U] = __VdlyVal__valid_pipe__v10;
    vlSelfRef.valid_pipe[11U] = __VdlyVal__valid_pipe__v11;
    vlSelfRef.valid_pipe[12U] = __VdlyVal__valid_pipe__v12;
    vlSelfRef.valid_pipe[13U] = __VdlyVal__valid_pipe__v13;
    vlSelfRef.valid_pipe[14U] = __VdlyVal__valid_pipe__v14;
    vlSelfRef.valid_pipe[15U] = __VdlyVal__valid_pipe__v15;
    vlSelfRef.valid_pipe[16U] = __VdlyVal__valid_pipe__v16;
    if (__VdlySet__x_flip_pipe__v0) {
        vlSelfRef.x_flip_pipe[0U] = __VdlyVal__x_flip_pipe__v0;
    }
    if (__VdlySet__x_flip_pipe__v1) {
        vlSelfRef.x_flip_pipe[1U] = __VdlyVal__x_flip_pipe__v1;
    }
    if (__VdlySet__x_flip_pipe__v2) {
        vlSelfRef.x_flip_pipe[2U] = __VdlyVal__x_flip_pipe__v2;
    }
    if (__VdlySet__x_flip_pipe__v3) {
        vlSelfRef.x_flip_pipe[3U] = __VdlyVal__x_flip_pipe__v3;
    }
    if (__VdlySet__x_flip_pipe__v4) {
        vlSelfRef.x_flip_pipe[4U] = __VdlyVal__x_flip_pipe__v4;
    }
    if (__VdlySet__x_flip_pipe__v5) {
        vlSelfRef.x_flip_pipe[5U] = __VdlyVal__x_flip_pipe__v5;
    }
    if (__VdlySet__x_flip_pipe__v6) {
        vlSelfRef.x_flip_pipe[6U] = __VdlyVal__x_flip_pipe__v6;
    }
    if (__VdlySet__x_flip_pipe__v7) {
        vlSelfRef.x_flip_pipe[7U] = __VdlyVal__x_flip_pipe__v7;
    }
    if (__VdlySet__x_flip_pipe__v8) {
        vlSelfRef.x_flip_pipe[8U] = __VdlyVal__x_flip_pipe__v8;
    }
    if (__VdlySet__x_flip_pipe__v9) {
        vlSelfRef.x_flip_pipe[9U] = __VdlyVal__x_flip_pipe__v9;
    }
    if (__VdlySet__x_flip_pipe__v10) {
        vlSelfRef.x_flip_pipe[10U] = __VdlyVal__x_flip_pipe__v10;
    }
    if (__VdlySet__x_flip_pipe__v11) {
        vlSelfRef.x_flip_pipe[11U] = __VdlyVal__x_flip_pipe__v11;
    }
    if (__VdlySet__x_flip_pipe__v12) {
        vlSelfRef.x_flip_pipe[12U] = __VdlyVal__x_flip_pipe__v12;
    }
    if (__VdlySet__x_flip_pipe__v13) {
        vlSelfRef.x_flip_pipe[13U] = __VdlyVal__x_flip_pipe__v13;
    }
    if (__VdlySet__x_flip_pipe__v14) {
        vlSelfRef.x_flip_pipe[14U] = __VdlyVal__x_flip_pipe__v14;
    }
    if (__VdlySet__x_flip_pipe__v15) {
        vlSelfRef.x_flip_pipe[15U] = __VdlyVal__x_flip_pipe__v15;
    }
    if (__VdlySet__x_flip_pipe__v16) {
        vlSelfRef.x_flip_pipe[16U] = __VdlyVal__x_flip_pipe__v16;
    }
    if (__VdlySet__desired_angle_pipe__v0) {
        vlSelfRef.desired_angle_pipe[0U] = __VdlyVal__desired_angle_pipe__v0;
    }
    if (__VdlySet__desired_angle_pipe__v1) {
        vlSelfRef.desired_angle_pipe[1U] = __VdlyVal__desired_angle_pipe__v1;
    }
    if (__VdlySet__desired_angle_pipe__v2) {
        vlSelfRef.desired_angle_pipe[2U] = __VdlyVal__desired_angle_pipe__v2;
    }
    if (__VdlySet__desired_angle_pipe__v3) {
        vlSelfRef.desired_angle_pipe[3U] = __VdlyVal__desired_angle_pipe__v3;
    }
    if (__VdlySet__desired_angle_pipe__v4) {
        vlSelfRef.desired_angle_pipe[4U] = __VdlyVal__desired_angle_pipe__v4;
    }
    if (__VdlySet__desired_angle_pipe__v5) {
        vlSelfRef.desired_angle_pipe[5U] = __VdlyVal__desired_angle_pipe__v5;
    }
    if (__VdlySet__desired_angle_pipe__v6) {
        vlSelfRef.desired_angle_pipe[6U] = __VdlyVal__desired_angle_pipe__v6;
    }
    if (__VdlySet__desired_angle_pipe__v7) {
        vlSelfRef.desired_angle_pipe[7U] = __VdlyVal__desired_angle_pipe__v7;
    }
    if (__VdlySet__desired_angle_pipe__v8) {
        vlSelfRef.desired_angle_pipe[8U] = __VdlyVal__desired_angle_pipe__v8;
    }
    if (__VdlySet__desired_angle_pipe__v9) {
        vlSelfRef.desired_angle_pipe[9U] = __VdlyVal__desired_angle_pipe__v9;
    }
    if (__VdlySet__desired_angle_pipe__v10) {
        vlSelfRef.desired_angle_pipe[10U] = __VdlyVal__desired_angle_pipe__v10;
    }
    if (__VdlySet__desired_angle_pipe__v11) {
        vlSelfRef.desired_angle_pipe[11U] = __VdlyVal__desired_angle_pipe__v11;
    }
    if (__VdlySet__desired_angle_pipe__v12) {
        vlSelfRef.desired_angle_pipe[12U] = __VdlyVal__desired_angle_pipe__v12;
    }
    if (__VdlySet__desired_angle_pipe__v13) {
        vlSelfRef.desired_angle_pipe[13U] = __VdlyVal__desired_angle_pipe__v13;
    }
    if (__VdlySet__desired_angle_pipe__v14) {
        vlSelfRef.desired_angle_pipe[14U] = __VdlyVal__desired_angle_pipe__v14;
    }
    if (__VdlySet__desired_angle_pipe__v15) {
        vlSelfRef.desired_angle_pipe[15U] = __VdlyVal__desired_angle_pipe__v15;
    }
    if (__VdlySet__total_angle_pipe__v0) {
        vlSelfRef.total_angle_pipe[0U] = 0U;
    }
    if (__VdlySet__x_pipe__v1) {
        vlSelfRef.total_angle_pipe[1U] = __VdlyVal__total_angle_pipe__v1;
    }
    if (__VdlySet__total_angle_pipe__v2) {
        vlSelfRef.total_angle_pipe[1U] = __VdlyVal__total_angle_pipe__v2;
    }
    if (__VdlySet__x_pipe__v3) {
        vlSelfRef.total_angle_pipe[2U] = __VdlyVal__total_angle_pipe__v3;
    }
    if (__VdlySet__total_angle_pipe__v4) {
        vlSelfRef.total_angle_pipe[2U] = __VdlyVal__total_angle_pipe__v4;
    }
    if (__VdlySet__x_pipe__v5) {
        vlSelfRef.total_angle_pipe[3U] = __VdlyVal__total_angle_pipe__v5;
    }
    if (__VdlySet__total_angle_pipe__v6) {
        vlSelfRef.total_angle_pipe[3U] = __VdlyVal__total_angle_pipe__v6;
    }
    if (__VdlySet__x_pipe__v7) {
        vlSelfRef.total_angle_pipe[4U] = __VdlyVal__total_angle_pipe__v7;
    }
    if (__VdlySet__total_angle_pipe__v8) {
        vlSelfRef.total_angle_pipe[4U] = __VdlyVal__total_angle_pipe__v8;
    }
    if (__VdlySet__x_pipe__v9) {
        vlSelfRef.total_angle_pipe[5U] = __VdlyVal__total_angle_pipe__v9;
    }
    if (__VdlySet__total_angle_pipe__v10) {
        vlSelfRef.total_angle_pipe[5U] = __VdlyVal__total_angle_pipe__v10;
    }
    if (__VdlySet__x_pipe__v11) {
        vlSelfRef.total_angle_pipe[6U] = __VdlyVal__total_angle_pipe__v11;
    }
    if (__VdlySet__total_angle_pipe__v12) {
        vlSelfRef.total_angle_pipe[6U] = __VdlyVal__total_angle_pipe__v12;
    }
    if (__VdlySet__x_pipe__v13) {
        vlSelfRef.total_angle_pipe[7U] = __VdlyVal__total_angle_pipe__v13;
    }
    if (__VdlySet__total_angle_pipe__v14) {
        vlSelfRef.total_angle_pipe[7U] = __VdlyVal__total_angle_pipe__v14;
    }
    if (__VdlySet__x_pipe__v15) {
        vlSelfRef.total_angle_pipe[8U] = __VdlyVal__total_angle_pipe__v15;
    }
    if (__VdlySet__total_angle_pipe__v16) {
        vlSelfRef.total_angle_pipe[8U] = __VdlyVal__total_angle_pipe__v16;
    }
    if (__VdlySet__x_pipe__v17) {
        vlSelfRef.total_angle_pipe[9U] = __VdlyVal__total_angle_pipe__v17;
    }
    if (__VdlySet__total_angle_pipe__v18) {
        vlSelfRef.total_angle_pipe[9U] = __VdlyVal__total_angle_pipe__v18;
    }
    if (__VdlySet__x_pipe__v19) {
        vlSelfRef.total_angle_pipe[10U] = __VdlyVal__total_angle_pipe__v19;
    }
    if (__VdlySet__total_angle_pipe__v20) {
        vlSelfRef.total_angle_pipe[10U] = __VdlyVal__total_angle_pipe__v20;
    }
    if (__VdlySet__x_pipe__v21) {
        vlSelfRef.total_angle_pipe[11U] = __VdlyVal__total_angle_pipe__v21;
    }
    if (__VdlySet__total_angle_pipe__v22) {
        vlSelfRef.total_angle_pipe[11U] = __VdlyVal__total_angle_pipe__v22;
    }
    if (__VdlySet__x_pipe__v23) {
        vlSelfRef.total_angle_pipe[12U] = __VdlyVal__total_angle_pipe__v23;
    }
    if (__VdlySet__total_angle_pipe__v24) {
        vlSelfRef.total_angle_pipe[12U] = __VdlyVal__total_angle_pipe__v24;
    }
    if (__VdlySet__x_pipe__v25) {
        vlSelfRef.total_angle_pipe[13U] = __VdlyVal__total_angle_pipe__v25;
    }
    if (__VdlySet__total_angle_pipe__v26) {
        vlSelfRef.total_angle_pipe[13U] = __VdlyVal__total_angle_pipe__v26;
    }
    if (__VdlySet__x_pipe__v27) {
        vlSelfRef.total_angle_pipe[14U] = __VdlyVal__total_angle_pipe__v27;
    }
    if (__VdlySet__total_angle_pipe__v28) {
        vlSelfRef.total_angle_pipe[14U] = __VdlyVal__total_angle_pipe__v28;
    }
    if (__VdlySet__total_angle_pipe__v31) {
        vlSelfRef.desired_angle_pipe[16U] = __VdlyVal__desired_angle_pipe__v16;
    }
    if (__VdlySet__x_pipe__v29) {
        vlSelfRef.total_angle_pipe[15U] = __VdlyVal__total_angle_pipe__v29;
    }
    if (__VdlySet__total_angle_pipe__v30) {
        vlSelfRef.total_angle_pipe[15U] = __VdlyVal__total_angle_pipe__v30;
    }
    if (__VdlySet__total_angle_pipe__v31) {
        vlSelfRef.total_angle_pipe[16U] = __VdlyVal__total_angle_pipe__v31;
    }
    if (__VdlySet__y_pipe__v0) {
        vlSelfRef.y_pipe[0U] = 0U;
    }
    if (__VdlySet__x_pipe__v1) {
        vlSelfRef.y_pipe[1U] = __VdlyVal__y_pipe__v1;
    }
    if (__VdlySet__total_angle_pipe__v2) {
        vlSelfRef.y_pipe[1U] = __VdlyVal__y_pipe__v2;
    }
    if (__VdlySet__x_pipe__v3) {
        vlSelfRef.y_pipe[2U] = __VdlyVal__y_pipe__v3;
    }
    if (__VdlySet__total_angle_pipe__v4) {
        vlSelfRef.y_pipe[2U] = __VdlyVal__y_pipe__v4;
    }
    if (__VdlySet__x_pipe__v5) {
        vlSelfRef.y_pipe[3U] = __VdlyVal__y_pipe__v5;
    }
    if (__VdlySet__total_angle_pipe__v6) {
        vlSelfRef.y_pipe[3U] = __VdlyVal__y_pipe__v6;
    }
    if (__VdlySet__x_pipe__v7) {
        vlSelfRef.y_pipe[4U] = __VdlyVal__y_pipe__v7;
    }
    if (__VdlySet__total_angle_pipe__v8) {
        vlSelfRef.y_pipe[4U] = __VdlyVal__y_pipe__v8;
    }
    if (__VdlySet__x_pipe__v9) {
        vlSelfRef.y_pipe[5U] = __VdlyVal__y_pipe__v9;
    }
    if (__VdlySet__total_angle_pipe__v10) {
        vlSelfRef.y_pipe[5U] = __VdlyVal__y_pipe__v10;
    }
    if (__VdlySet__x_pipe__v11) {
        vlSelfRef.y_pipe[6U] = __VdlyVal__y_pipe__v11;
    }
    if (__VdlySet__total_angle_pipe__v12) {
        vlSelfRef.y_pipe[6U] = __VdlyVal__y_pipe__v12;
    }
    if (__VdlySet__x_pipe__v13) {
        vlSelfRef.y_pipe[7U] = __VdlyVal__y_pipe__v13;
    }
    if (__VdlySet__total_angle_pipe__v14) {
        vlSelfRef.y_pipe[7U] = __VdlyVal__y_pipe__v14;
    }
    if (__VdlySet__x_pipe__v15) {
        vlSelfRef.y_pipe[8U] = __VdlyVal__y_pipe__v15;
    }
    if (__VdlySet__total_angle_pipe__v16) {
        vlSelfRef.y_pipe[8U] = __VdlyVal__y_pipe__v16;
    }
    if (__VdlySet__x_pipe__v17) {
        vlSelfRef.y_pipe[9U] = __VdlyVal__y_pipe__v17;
    }
    if (__VdlySet__total_angle_pipe__v18) {
        vlSelfRef.y_pipe[9U] = __VdlyVal__y_pipe__v18;
    }
    if (__VdlySet__x_pipe__v19) {
        vlSelfRef.y_pipe[10U] = __VdlyVal__y_pipe__v19;
    }
    if (__VdlySet__total_angle_pipe__v20) {
        vlSelfRef.y_pipe[10U] = __VdlyVal__y_pipe__v20;
    }
    if (__VdlySet__x_pipe__v21) {
        vlSelfRef.y_pipe[11U] = __VdlyVal__y_pipe__v21;
    }
    if (__VdlySet__total_angle_pipe__v22) {
        vlSelfRef.y_pipe[11U] = __VdlyVal__y_pipe__v22;
    }
    if (__VdlySet__x_pipe__v23) {
        vlSelfRef.y_pipe[12U] = __VdlyVal__y_pipe__v23;
    }
    if (__VdlySet__total_angle_pipe__v24) {
        vlSelfRef.y_pipe[12U] = __VdlyVal__y_pipe__v24;
    }
    if (__VdlySet__x_pipe__v25) {
        vlSelfRef.y_pipe[13U] = __VdlyVal__y_pipe__v25;
    }
    if (__VdlySet__total_angle_pipe__v26) {
        vlSelfRef.y_pipe[13U] = __VdlyVal__y_pipe__v26;
    }
    if (__VdlySet__x_pipe__v27) {
        vlSelfRef.y_pipe[14U] = __VdlyVal__y_pipe__v27;
    }
    if (__VdlySet__total_angle_pipe__v28) {
        vlSelfRef.y_pipe[14U] = __VdlyVal__y_pipe__v28;
    }
    if (__VdlySet__x_pipe__v29) {
        vlSelfRef.y_pipe[15U] = __VdlyVal__y_pipe__v29;
    }
    if (__VdlySet__total_angle_pipe__v30) {
        vlSelfRef.y_pipe[15U] = __VdlyVal__y_pipe__v30;
    }
    if (__VdlySet__x_pipe__v31) {
        vlSelfRef.y_pipe[16U] = __VdlyVal__y_pipe__v31;
    }
    if (__VdlySet__x_pipe__v0) {
        vlSelfRef.x_pipe[0U] = 0x00004dbaU;
    }
    if (__VdlySet__x_pipe__v1) {
        vlSelfRef.x_pipe[1U] = __VdlyVal__x_pipe__v1;
    }
    if (__VdlySet__total_angle_pipe__v2) {
        vlSelfRef.x_pipe[1U] = __VdlyVal__x_pipe__v2;
    }
    if (__VdlySet__x_pipe__v3) {
        vlSelfRef.x_pipe[2U] = __VdlyVal__x_pipe__v3;
    }
    if (__VdlySet__total_angle_pipe__v4) {
        vlSelfRef.x_pipe[2U] = __VdlyVal__x_pipe__v4;
    }
    if (__VdlySet__x_pipe__v5) {
        vlSelfRef.x_pipe[3U] = __VdlyVal__x_pipe__v5;
    }
    if (__VdlySet__total_angle_pipe__v6) {
        vlSelfRef.x_pipe[3U] = __VdlyVal__x_pipe__v6;
    }
    if (__VdlySet__x_pipe__v7) {
        vlSelfRef.x_pipe[4U] = __VdlyVal__x_pipe__v7;
    }
    if (__VdlySet__total_angle_pipe__v8) {
        vlSelfRef.x_pipe[4U] = __VdlyVal__x_pipe__v8;
    }
    if (__VdlySet__x_pipe__v9) {
        vlSelfRef.x_pipe[5U] = __VdlyVal__x_pipe__v9;
    }
    if (__VdlySet__total_angle_pipe__v10) {
        vlSelfRef.x_pipe[5U] = __VdlyVal__x_pipe__v10;
    }
    if (__VdlySet__x_pipe__v11) {
        vlSelfRef.x_pipe[6U] = __VdlyVal__x_pipe__v11;
    }
    if (__VdlySet__total_angle_pipe__v12) {
        vlSelfRef.x_pipe[6U] = __VdlyVal__x_pipe__v12;
    }
    if (__VdlySet__x_pipe__v13) {
        vlSelfRef.x_pipe[7U] = __VdlyVal__x_pipe__v13;
    }
    if (__VdlySet__total_angle_pipe__v14) {
        vlSelfRef.x_pipe[7U] = __VdlyVal__x_pipe__v14;
    }
    if (__VdlySet__x_pipe__v15) {
        vlSelfRef.x_pipe[8U] = __VdlyVal__x_pipe__v15;
    }
    if (__VdlySet__total_angle_pipe__v16) {
        vlSelfRef.x_pipe[8U] = __VdlyVal__x_pipe__v16;
    }
    if (__VdlySet__x_pipe__v17) {
        vlSelfRef.x_pipe[9U] = __VdlyVal__x_pipe__v17;
    }
    if (__VdlySet__total_angle_pipe__v18) {
        vlSelfRef.x_pipe[9U] = __VdlyVal__x_pipe__v18;
    }
    if (__VdlySet__x_pipe__v19) {
        vlSelfRef.x_pipe[10U] = __VdlyVal__x_pipe__v19;
    }
    if (__VdlySet__total_angle_pipe__v20) {
        vlSelfRef.x_pipe[10U] = __VdlyVal__x_pipe__v20;
    }
    if (__VdlySet__x_pipe__v21) {
        vlSelfRef.x_pipe[11U] = __VdlyVal__x_pipe__v21;
    }
    if (__VdlySet__total_angle_pipe__v22) {
        vlSelfRef.x_pipe[11U] = __VdlyVal__x_pipe__v22;
    }
    if (__VdlySet__x_pipe__v23) {
        vlSelfRef.x_pipe[12U] = __VdlyVal__x_pipe__v23;
    }
    if (__VdlySet__total_angle_pipe__v24) {
        vlSelfRef.x_pipe[12U] = __VdlyVal__x_pipe__v24;
    }
    if (__VdlySet__x_pipe__v25) {
        vlSelfRef.x_pipe[13U] = __VdlyVal__x_pipe__v25;
    }
    if (__VdlySet__total_angle_pipe__v26) {
        vlSelfRef.x_pipe[13U] = __VdlyVal__x_pipe__v26;
    }
    if (__VdlySet__x_pipe__v27) {
        vlSelfRef.x_pipe[14U] = __VdlyVal__x_pipe__v27;
    }
    if (__VdlySet__total_angle_pipe__v28) {
        vlSelfRef.x_pipe[14U] = __VdlyVal__x_pipe__v28;
    }
    if (__VdlySet__x_pipe__v29) {
        vlSelfRef.x_pipe[15U] = __VdlyVal__x_pipe__v29;
    }
    if (__VdlySet__total_angle_pipe__v30) {
        vlSelfRef.x_pipe[15U] = __VdlyVal__x_pipe__v30;
    }
    if (__VdlySet__x_pipe__v31) {
        vlSelfRef.x_pipe[16U] = __VdlyVal__x_pipe__v31;
    }
    if (__VdlySet__x_pipe__v32) {
        vlSelfRef.y_pipe[16U] = __VdlyVal__y_pipe__v32;
        vlSelfRef.x_pipe[16U] = __VdlyVal__x_pipe__v32;
    }
    vlSelfRef.data_cossin_valid_out = vlSelfRef.valid_pipe[16U];
    vlSelfRef.sin = ((1U == (3U & (vlSelfRef.y_pipe[16U] 
                                   >> 0x0000000fU)))
                      ? 0x00007fffU : ((2U == (3U & 
                                               (vlSelfRef.y_pipe[16U] 
                                                >> 0x0000000fU)))
                                        ? 0x00008000U
                                        : (0x0000ffffU 
                                           & vlSelfRef.y_pipe[16U])));
    __VdfgRegularize_h6e95ff9d_0_6 = (0x0001ffffU & 
                                      (vlSelfRef.x_flip_pipe[16U]
                                        ? (- vlSelfRef.x_pipe[16U])
                                        : vlSelfRef.x_pipe[16U]));
    vlSelfRef.cos = ((1U == (3U & (__VdfgRegularize_h6e95ff9d_0_6 
                                   >> 0x0000000fU)))
                      ? 0x00007fffU : ((2U == (3U & 
                                               (__VdfgRegularize_h6e95ff9d_0_6 
                                                >> 0x0000000fU)))
                                        ? 0x00008000U
                                        : (0x0000ffffU 
                                           & __VdfgRegularize_h6e95ff9d_0_6)));
}

void Vtop_cordic_cossin___ico_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin___ico_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    __VdfgRegularize_h6e95ff9d_0_7 = 0;
    // Body
    vlSelfRef.sin = ((1U == (3U & (vlSelfRef.y_pipe[16U] 
                                   >> 0x0000000fU)))
                      ? 0x00007fffU : ((2U == (3U & 
                                               (vlSelfRef.y_pipe[16U] 
                                                >> 0x0000000fU)))
                                        ? 0x00008000U
                                        : (0x0000ffffU 
                                           & vlSelfRef.y_pipe[16U])));
    vlSelfRef.data_cossin_valid_out = vlSelfRef.valid_pipe[16U];
    __VdfgRegularize_h6e95ff9d_0_7 = (0x0001ffffU & 
                                      (vlSelfRef.x_flip_pipe[16U]
                                        ? (- vlSelfRef.x_pipe[16U])
                                        : vlSelfRef.x_pipe[16U]));
    vlSelfRef.cos = ((1U == (3U & (__VdfgRegularize_h6e95ff9d_0_7 
                                   >> 0x0000000fU)))
                      ? 0x00007fffU : ((2U == (3U & 
                                               (__VdfgRegularize_h6e95ff9d_0_7 
                                                >> 0x0000000fU)))
                                        ? 0x00008000U
                                        : (0x0000ffffU 
                                           & __VdfgRegularize_h6e95ff9d_0_7)));
}

void Vtop_cordic_cossin___ico_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic__1(Vtop_cordic_cossin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin___ico_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clk = vlSymsp->TOP.harmonic_generator__DOT__clk;
    vlSelfRef.rst = vlSymsp->TOP.harmonic_generator__DOT__rst;
    vlSelfRef.data_angle_valid_in = vlSymsp->TOP.harmonic_generator__DOT__data_valid_in;
    vlSelfRef.angle = vlSymsp->TOP.harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__angle_n;
}

void Vtop_cordic_cossin___nba_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin___nba_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    __VdfgRegularize_h6e95ff9d_0_7 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v0;
    __VdlySet__total_angle_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v0;
    __VdlyVal__valid_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v0;
    __VdlySet__x_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__y_pipe__v0;
    __VdlySet__y_pipe__v0 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v0;
    __VdlyVal__desired_angle_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v0;
    __VdlySet__desired_angle_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v0;
    __VdlyVal__x_flip_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v0;
    __VdlySet__x_flip_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v1;
    __VdlyVal__valid_pipe__v1 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v1;
    __VdlyVal__x_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v1;
    __VdlySet__x_pipe__v1 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v1;
    __VdlyVal__total_angle_pipe__v1 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v1;
    __VdlyVal__y_pipe__v1 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v2;
    __VdlyVal__total_angle_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v2;
    __VdlySet__total_angle_pipe__v2 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v2;
    __VdlyVal__x_pipe__v2 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v2;
    __VdlyVal__y_pipe__v2 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v1;
    __VdlyVal__desired_angle_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v1;
    __VdlySet__desired_angle_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v1;
    __VdlyVal__x_flip_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v1;
    __VdlySet__x_flip_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v2;
    __VdlyVal__valid_pipe__v2 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v3;
    __VdlyVal__x_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v3;
    __VdlySet__x_pipe__v3 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v3;
    __VdlyVal__total_angle_pipe__v3 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v3;
    __VdlyVal__y_pipe__v3 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v4;
    __VdlyVal__total_angle_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v4;
    __VdlySet__total_angle_pipe__v4 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v4;
    __VdlyVal__x_pipe__v4 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v4;
    __VdlyVal__y_pipe__v4 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v2;
    __VdlyVal__desired_angle_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v2;
    __VdlySet__desired_angle_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v2;
    __VdlyVal__x_flip_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v2;
    __VdlySet__x_flip_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v3;
    __VdlyVal__valid_pipe__v3 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v5;
    __VdlyVal__x_pipe__v5 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v5;
    __VdlySet__x_pipe__v5 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v5;
    __VdlyVal__total_angle_pipe__v5 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v5;
    __VdlyVal__y_pipe__v5 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v6;
    __VdlyVal__total_angle_pipe__v6 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v6;
    __VdlySet__total_angle_pipe__v6 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v6;
    __VdlyVal__x_pipe__v6 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v6;
    __VdlyVal__y_pipe__v6 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v3;
    __VdlyVal__desired_angle_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v3;
    __VdlySet__desired_angle_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v3;
    __VdlyVal__x_flip_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v3;
    __VdlySet__x_flip_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v4;
    __VdlyVal__valid_pipe__v4 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v7;
    __VdlyVal__x_pipe__v7 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v7;
    __VdlySet__x_pipe__v7 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v7;
    __VdlyVal__total_angle_pipe__v7 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v7;
    __VdlyVal__y_pipe__v7 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v8;
    __VdlyVal__total_angle_pipe__v8 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v8;
    __VdlySet__total_angle_pipe__v8 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v8;
    __VdlyVal__x_pipe__v8 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v8;
    __VdlyVal__y_pipe__v8 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v4;
    __VdlyVal__desired_angle_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v4;
    __VdlySet__desired_angle_pipe__v4 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v4;
    __VdlyVal__x_flip_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v4;
    __VdlySet__x_flip_pipe__v4 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v5;
    __VdlyVal__valid_pipe__v5 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v9;
    __VdlyVal__x_pipe__v9 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v9;
    __VdlySet__x_pipe__v9 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v9;
    __VdlyVal__total_angle_pipe__v9 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v9;
    __VdlyVal__y_pipe__v9 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v10;
    __VdlyVal__total_angle_pipe__v10 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v10;
    __VdlySet__total_angle_pipe__v10 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v10;
    __VdlyVal__x_pipe__v10 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v10;
    __VdlyVal__y_pipe__v10 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v5;
    __VdlyVal__desired_angle_pipe__v5 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v5;
    __VdlySet__desired_angle_pipe__v5 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v5;
    __VdlyVal__x_flip_pipe__v5 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v5;
    __VdlySet__x_flip_pipe__v5 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v6;
    __VdlyVal__valid_pipe__v6 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v11;
    __VdlyVal__x_pipe__v11 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v11;
    __VdlySet__x_pipe__v11 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v11;
    __VdlyVal__total_angle_pipe__v11 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v11;
    __VdlyVal__y_pipe__v11 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v12;
    __VdlyVal__total_angle_pipe__v12 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v12;
    __VdlySet__total_angle_pipe__v12 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v12;
    __VdlyVal__x_pipe__v12 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v12;
    __VdlyVal__y_pipe__v12 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v6;
    __VdlyVal__desired_angle_pipe__v6 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v6;
    __VdlySet__desired_angle_pipe__v6 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v6;
    __VdlyVal__x_flip_pipe__v6 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v6;
    __VdlySet__x_flip_pipe__v6 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v7;
    __VdlyVal__valid_pipe__v7 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v13;
    __VdlyVal__x_pipe__v13 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v13;
    __VdlySet__x_pipe__v13 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v13;
    __VdlyVal__total_angle_pipe__v13 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v13;
    __VdlyVal__y_pipe__v13 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v14;
    __VdlyVal__total_angle_pipe__v14 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v14;
    __VdlySet__total_angle_pipe__v14 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v14;
    __VdlyVal__x_pipe__v14 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v14;
    __VdlyVal__y_pipe__v14 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v7;
    __VdlyVal__desired_angle_pipe__v7 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v7;
    __VdlySet__desired_angle_pipe__v7 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v7;
    __VdlyVal__x_flip_pipe__v7 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v7;
    __VdlySet__x_flip_pipe__v7 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v8;
    __VdlyVal__valid_pipe__v8 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v15;
    __VdlyVal__x_pipe__v15 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v15;
    __VdlySet__x_pipe__v15 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v15;
    __VdlyVal__total_angle_pipe__v15 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v15;
    __VdlyVal__y_pipe__v15 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v16;
    __VdlyVal__total_angle_pipe__v16 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v16;
    __VdlySet__total_angle_pipe__v16 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v16;
    __VdlyVal__x_pipe__v16 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v16;
    __VdlyVal__y_pipe__v16 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v8;
    __VdlyVal__desired_angle_pipe__v8 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v8;
    __VdlySet__desired_angle_pipe__v8 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v8;
    __VdlyVal__x_flip_pipe__v8 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v8;
    __VdlySet__x_flip_pipe__v8 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v9;
    __VdlyVal__valid_pipe__v9 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v17;
    __VdlyVal__x_pipe__v17 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v17;
    __VdlySet__x_pipe__v17 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v17;
    __VdlyVal__total_angle_pipe__v17 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v17;
    __VdlyVal__y_pipe__v17 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v18;
    __VdlyVal__total_angle_pipe__v18 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v18;
    __VdlySet__total_angle_pipe__v18 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v18;
    __VdlyVal__x_pipe__v18 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v18;
    __VdlyVal__y_pipe__v18 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v9;
    __VdlyVal__desired_angle_pipe__v9 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v9;
    __VdlySet__desired_angle_pipe__v9 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v9;
    __VdlyVal__x_flip_pipe__v9 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v9;
    __VdlySet__x_flip_pipe__v9 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v10;
    __VdlyVal__valid_pipe__v10 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v19;
    __VdlyVal__x_pipe__v19 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v19;
    __VdlySet__x_pipe__v19 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v19;
    __VdlyVal__total_angle_pipe__v19 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v19;
    __VdlyVal__y_pipe__v19 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v20;
    __VdlyVal__total_angle_pipe__v20 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v20;
    __VdlySet__total_angle_pipe__v20 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v20;
    __VdlyVal__x_pipe__v20 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v20;
    __VdlyVal__y_pipe__v20 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v10;
    __VdlyVal__desired_angle_pipe__v10 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v10;
    __VdlySet__desired_angle_pipe__v10 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v10;
    __VdlyVal__x_flip_pipe__v10 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v10;
    __VdlySet__x_flip_pipe__v10 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v11;
    __VdlyVal__valid_pipe__v11 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v21;
    __VdlyVal__x_pipe__v21 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v21;
    __VdlySet__x_pipe__v21 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v21;
    __VdlyVal__total_angle_pipe__v21 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v21;
    __VdlyVal__y_pipe__v21 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v22;
    __VdlyVal__total_angle_pipe__v22 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v22;
    __VdlySet__total_angle_pipe__v22 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v22;
    __VdlyVal__x_pipe__v22 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v22;
    __VdlyVal__y_pipe__v22 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v11;
    __VdlyVal__desired_angle_pipe__v11 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v11;
    __VdlySet__desired_angle_pipe__v11 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v11;
    __VdlyVal__x_flip_pipe__v11 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v11;
    __VdlySet__x_flip_pipe__v11 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v12;
    __VdlyVal__valid_pipe__v12 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v23;
    __VdlyVal__x_pipe__v23 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v23;
    __VdlySet__x_pipe__v23 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v23;
    __VdlyVal__total_angle_pipe__v23 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v23;
    __VdlyVal__y_pipe__v23 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v24;
    __VdlyVal__total_angle_pipe__v24 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v24;
    __VdlySet__total_angle_pipe__v24 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v24;
    __VdlyVal__x_pipe__v24 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v24;
    __VdlyVal__y_pipe__v24 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v12;
    __VdlyVal__desired_angle_pipe__v12 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v12;
    __VdlySet__desired_angle_pipe__v12 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v12;
    __VdlyVal__x_flip_pipe__v12 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v12;
    __VdlySet__x_flip_pipe__v12 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v13;
    __VdlyVal__valid_pipe__v13 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v25;
    __VdlyVal__x_pipe__v25 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v25;
    __VdlySet__x_pipe__v25 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v25;
    __VdlyVal__total_angle_pipe__v25 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v25;
    __VdlyVal__y_pipe__v25 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v26;
    __VdlyVal__total_angle_pipe__v26 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v26;
    __VdlySet__total_angle_pipe__v26 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v26;
    __VdlyVal__x_pipe__v26 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v26;
    __VdlyVal__y_pipe__v26 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v13;
    __VdlyVal__desired_angle_pipe__v13 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v13;
    __VdlySet__desired_angle_pipe__v13 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v13;
    __VdlyVal__x_flip_pipe__v13 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v13;
    __VdlySet__x_flip_pipe__v13 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v14;
    __VdlyVal__valid_pipe__v14 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v27;
    __VdlyVal__x_pipe__v27 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v27;
    __VdlySet__x_pipe__v27 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v27;
    __VdlyVal__total_angle_pipe__v27 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v27;
    __VdlyVal__y_pipe__v27 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v28;
    __VdlyVal__total_angle_pipe__v28 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v28;
    __VdlySet__total_angle_pipe__v28 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v28;
    __VdlyVal__x_pipe__v28 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v28;
    __VdlyVal__y_pipe__v28 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v14;
    __VdlyVal__desired_angle_pipe__v14 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v14;
    __VdlySet__desired_angle_pipe__v14 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v14;
    __VdlyVal__x_flip_pipe__v14 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v14;
    __VdlySet__x_flip_pipe__v14 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v15;
    __VdlyVal__valid_pipe__v15 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v29;
    __VdlyVal__x_pipe__v29 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v29;
    __VdlySet__x_pipe__v29 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v29;
    __VdlyVal__total_angle_pipe__v29 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v29;
    __VdlyVal__y_pipe__v29 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v30;
    __VdlyVal__total_angle_pipe__v30 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v30;
    __VdlySet__total_angle_pipe__v30 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v30;
    __VdlyVal__x_pipe__v30 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v30;
    __VdlyVal__y_pipe__v30 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v15;
    __VdlyVal__desired_angle_pipe__v15 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v15;
    __VdlySet__desired_angle_pipe__v15 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v15;
    __VdlyVal__x_flip_pipe__v15 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v15;
    __VdlySet__x_flip_pipe__v15 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v16;
    __VdlyVal__valid_pipe__v16 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v31;
    __VdlyVal__x_pipe__v31 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v31;
    __VdlySet__x_pipe__v31 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v31;
    __VdlyVal__y_pipe__v31 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v32;
    __VdlyVal__x_pipe__v32 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v32;
    __VdlySet__x_pipe__v32 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v32;
    __VdlyVal__y_pipe__v32 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v31;
    __VdlyVal__total_angle_pipe__v31 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v31;
    __VdlySet__total_angle_pipe__v31 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v16;
    __VdlyVal__desired_angle_pipe__v16 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v16;
    __VdlyVal__x_flip_pipe__v16 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v16;
    __VdlySet__x_flip_pipe__v16 = 0;
    // Body
    __VdlySet__desired_angle_pipe__v0 = 0U;
    __VdlySet__total_angle_pipe__v0 = 0U;
    __VdlySet__y_pipe__v0 = 0U;
    __VdlySet__x_pipe__v0 = 0U;
    __VdlySet__x_flip_pipe__v0 = 0U;
    __VdlySet__x_flip_pipe__v1 = 0U;
    __VdlySet__x_flip_pipe__v2 = 0U;
    __VdlySet__x_flip_pipe__v3 = 0U;
    __VdlySet__x_flip_pipe__v4 = 0U;
    __VdlySet__x_flip_pipe__v5 = 0U;
    __VdlySet__x_flip_pipe__v6 = 0U;
    __VdlySet__x_flip_pipe__v7 = 0U;
    __VdlySet__x_flip_pipe__v8 = 0U;
    __VdlySet__x_flip_pipe__v9 = 0U;
    __VdlySet__x_flip_pipe__v10 = 0U;
    __VdlySet__x_flip_pipe__v11 = 0U;
    __VdlySet__x_flip_pipe__v12 = 0U;
    __VdlySet__x_flip_pipe__v13 = 0U;
    __VdlySet__x_flip_pipe__v14 = 0U;
    __VdlySet__x_flip_pipe__v15 = 0U;
    __VdlySet__x_flip_pipe__v16 = 0U;
    __VdlySet__total_angle_pipe__v31 = 0U;
    __VdlySet__desired_angle_pipe__v1 = 0U;
    __VdlySet__desired_angle_pipe__v2 = 0U;
    __VdlySet__desired_angle_pipe__v3 = 0U;
    __VdlySet__desired_angle_pipe__v4 = 0U;
    __VdlySet__desired_angle_pipe__v5 = 0U;
    __VdlySet__desired_angle_pipe__v6 = 0U;
    __VdlySet__desired_angle_pipe__v7 = 0U;
    __VdlySet__desired_angle_pipe__v8 = 0U;
    __VdlySet__desired_angle_pipe__v9 = 0U;
    __VdlySet__desired_angle_pipe__v10 = 0U;
    __VdlySet__desired_angle_pipe__v11 = 0U;
    __VdlySet__desired_angle_pipe__v12 = 0U;
    __VdlySet__desired_angle_pipe__v13 = 0U;
    __VdlySet__desired_angle_pipe__v14 = 0U;
    __VdlySet__desired_angle_pipe__v15 = 0U;
    __VdlySet__x_pipe__v31 = 0U;
    __VdlySet__x_pipe__v32 = 0U;
    __VdlySet__total_angle_pipe__v2 = 0U;
    __VdlySet__total_angle_pipe__v4 = 0U;
    __VdlySet__total_angle_pipe__v6 = 0U;
    __VdlySet__total_angle_pipe__v8 = 0U;
    __VdlySet__total_angle_pipe__v10 = 0U;
    __VdlySet__total_angle_pipe__v12 = 0U;
    __VdlySet__total_angle_pipe__v14 = 0U;
    __VdlySet__total_angle_pipe__v16 = 0U;
    __VdlySet__total_angle_pipe__v18 = 0U;
    __VdlySet__total_angle_pipe__v20 = 0U;
    __VdlySet__total_angle_pipe__v22 = 0U;
    __VdlySet__total_angle_pipe__v24 = 0U;
    __VdlySet__total_angle_pipe__v26 = 0U;
    __VdlySet__total_angle_pipe__v28 = 0U;
    __VdlySet__total_angle_pipe__v30 = 0U;
    __VdlySet__x_pipe__v1 = 0U;
    __VdlySet__x_pipe__v3 = 0U;
    __VdlySet__x_pipe__v5 = 0U;
    __VdlySet__x_pipe__v7 = 0U;
    __VdlySet__x_pipe__v9 = 0U;
    __VdlySet__x_pipe__v11 = 0U;
    __VdlySet__x_pipe__v13 = 0U;
    __VdlySet__x_pipe__v15 = 0U;
    __VdlySet__x_pipe__v17 = 0U;
    __VdlySet__x_pipe__v19 = 0U;
    __VdlySet__x_pipe__v21 = 0U;
    __VdlySet__x_pipe__v23 = 0U;
    __VdlySet__x_pipe__v25 = 0U;
    __VdlySet__x_pipe__v27 = 0U;
    __VdlySet__x_pipe__v29 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.rst)))) {
        if ((0x00008000U & (IData)(vlSelfRef.angle))) {
            __VdlyVal__desired_angle_pipe__v0 = (0x0000ffffU 
                                                 & ((0x00004000U 
                                                     & (IData)(vlSelfRef.angle))
                                                     ? (IData)(vlSelfRef.angle)
                                                     : 
                                                    ((IData)(0x8000U) 
                                                     - 
                                                     VL_EXTENDS_II(16,16, (IData)(vlSelfRef.angle)))));
            __VdlyVal__x_flip_pipe__v0 = (1U & (~ ((IData)(vlSelfRef.angle) 
                                                   >> 0x0000000eU)));
        } else {
            __VdlyVal__desired_angle_pipe__v0 = (0x0000ffffU 
                                                 & ((0x00004000U 
                                                     & (IData)(vlSelfRef.angle))
                                                     ? 
                                                    ((IData)(0x8000U) 
                                                     - 
                                                     VL_EXTENDS_II(16,16, (IData)(vlSelfRef.angle)))
                                                     : (IData)(vlSelfRef.angle)));
            __VdlyVal__x_flip_pipe__v0 = (1U & ((IData)(vlSelfRef.angle) 
                                                >> 0x0000000eU));
        }
        __VdlySet__desired_angle_pipe__v0 = 1U;
        __VdlySet__total_angle_pipe__v0 = 1U;
        __VdlySet__y_pipe__v0 = 1U;
        __VdlySet__x_pipe__v0 = 1U;
        __VdlySet__x_flip_pipe__v0 = 1U;
        __VdlyVal__x_flip_pipe__v1 = vlSelfRef.x_flip_pipe[0U];
        __VdlySet__x_flip_pipe__v1 = 1U;
        __VdlyVal__x_flip_pipe__v2 = vlSelfRef.x_flip_pipe[1U];
        __VdlySet__x_flip_pipe__v2 = 1U;
        __VdlyVal__x_flip_pipe__v3 = vlSelfRef.x_flip_pipe[2U];
        __VdlySet__x_flip_pipe__v3 = 1U;
        __VdlyVal__x_flip_pipe__v4 = vlSelfRef.x_flip_pipe[3U];
        __VdlySet__x_flip_pipe__v4 = 1U;
        __VdlyVal__x_flip_pipe__v5 = vlSelfRef.x_flip_pipe[4U];
        __VdlySet__x_flip_pipe__v5 = 1U;
        __VdlyVal__x_flip_pipe__v6 = vlSelfRef.x_flip_pipe[5U];
        __VdlySet__x_flip_pipe__v6 = 1U;
        __VdlyVal__x_flip_pipe__v7 = vlSelfRef.x_flip_pipe[6U];
        __VdlySet__x_flip_pipe__v7 = 1U;
        __VdlyVal__x_flip_pipe__v8 = vlSelfRef.x_flip_pipe[7U];
        __VdlySet__x_flip_pipe__v8 = 1U;
        __VdlyVal__x_flip_pipe__v9 = vlSelfRef.x_flip_pipe[8U];
        __VdlySet__x_flip_pipe__v9 = 1U;
        __VdlyVal__x_flip_pipe__v10 = vlSelfRef.x_flip_pipe[9U];
        __VdlySet__x_flip_pipe__v10 = 1U;
        __VdlyVal__x_flip_pipe__v11 = vlSelfRef.x_flip_pipe[10U];
        __VdlySet__x_flip_pipe__v11 = 1U;
        __VdlyVal__x_flip_pipe__v12 = vlSelfRef.x_flip_pipe[11U];
        __VdlySet__x_flip_pipe__v12 = 1U;
        __VdlyVal__x_flip_pipe__v13 = vlSelfRef.x_flip_pipe[12U];
        __VdlySet__x_flip_pipe__v13 = 1U;
        __VdlyVal__x_flip_pipe__v14 = vlSelfRef.x_flip_pipe[13U];
        __VdlySet__x_flip_pipe__v14 = 1U;
        __VdlyVal__x_flip_pipe__v15 = vlSelfRef.x_flip_pipe[14U];
        __VdlySet__x_flip_pipe__v15 = 1U;
        __VdlyVal__x_flip_pipe__v16 = vlSelfRef.x_flip_pipe[15U];
        __VdlySet__x_flip_pipe__v16 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[15U], vlSelfRef.desired_angle_pipe[15U])) {
            __VdlyVal__x_pipe__v31 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[15U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[15U], 0x0000000fU)));
            __VdlySet__x_pipe__v31 = 1U;
            __VdlyVal__y_pipe__v31 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[15U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[15U], 0x0000000fU)));
        } else {
            __VdlyVal__x_pipe__v32 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[15U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[15U], 0x0000000fU)));
            __VdlySet__x_pipe__v32 = 1U;
            __VdlyVal__y_pipe__v32 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[15U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[15U], 0x0000000fU)));
        }
        __VdlyVal__total_angle_pipe__v31 = vlSelfRef.total_angle_pipe[15U];
        __VdlySet__total_angle_pipe__v31 = 1U;
        __VdlyVal__desired_angle_pipe__v16 = vlSelfRef.desired_angle_pipe[15U];
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[0U], vlSelfRef.desired_angle_pipe[0U])) {
            __VdlyVal__x_pipe__v1 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[0U] 
                                      - vlSelfRef.y_pipe[0U]));
            __VdlySet__x_pipe__v1 = 1U;
            __VdlyVal__total_angle_pipe__v1 = (0x0000ffffU 
                                               & ((IData)(0x2000U) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[0U])));
            __VdlyVal__y_pipe__v1 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[0U] 
                                      + vlSelfRef.x_pipe[0U]));
        } else {
            __VdlyVal__total_angle_pipe__v2 = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.total_angle_pipe[0U]) 
                                                  - (IData)(0x2000U)));
            __VdlySet__total_angle_pipe__v2 = 1U;
            __VdlyVal__x_pipe__v2 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[0U] 
                                      + vlSelfRef.y_pipe[0U]));
            __VdlyVal__y_pipe__v2 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[0U] 
                                      - vlSelfRef.x_pipe[0U]));
        }
        __VdlyVal__desired_angle_pipe__v1 = vlSelfRef.desired_angle_pipe[0U];
        __VdlySet__desired_angle_pipe__v1 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[1U], vlSelfRef.desired_angle_pipe[1U])) {
            __VdlyVal__x_pipe__v3 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[1U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[1U], 1U)));
            __VdlySet__x_pipe__v3 = 1U;
            __VdlyVal__total_angle_pipe__v3 = (0x0000ffffU 
                                               & ((IData)(0x12e4U) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[1U])));
            __VdlyVal__y_pipe__v3 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[1U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[1U], 1U)));
        } else {
            __VdlyVal__total_angle_pipe__v4 = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.total_angle_pipe[1U]) 
                                                  - (IData)(0x12e4U)));
            __VdlySet__total_angle_pipe__v4 = 1U;
            __VdlyVal__x_pipe__v4 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[1U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[1U], 1U)));
            __VdlyVal__y_pipe__v4 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[1U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[1U], 1U)));
        }
        __VdlyVal__desired_angle_pipe__v2 = vlSelfRef.desired_angle_pipe[1U];
        __VdlySet__desired_angle_pipe__v2 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[2U], vlSelfRef.desired_angle_pipe[2U])) {
            __VdlyVal__x_pipe__v5 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[2U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[2U], 2U)));
            __VdlySet__x_pipe__v5 = 1U;
            __VdlyVal__total_angle_pipe__v5 = (0x0000ffffU 
                                               & ((IData)(0x09fbU) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[2U])));
            __VdlyVal__y_pipe__v5 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[2U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[2U], 2U)));
        } else {
            __VdlyVal__total_angle_pipe__v6 = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.total_angle_pipe[2U]) 
                                                  - (IData)(0x09fbU)));
            __VdlySet__total_angle_pipe__v6 = 1U;
            __VdlyVal__x_pipe__v6 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[2U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[2U], 2U)));
            __VdlyVal__y_pipe__v6 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[2U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[2U], 2U)));
        }
        __VdlyVal__desired_angle_pipe__v3 = vlSelfRef.desired_angle_pipe[2U];
        __VdlySet__desired_angle_pipe__v3 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[3U], vlSelfRef.desired_angle_pipe[3U])) {
            __VdlyVal__x_pipe__v7 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[3U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[3U], 3U)));
            __VdlySet__x_pipe__v7 = 1U;
            __VdlyVal__total_angle_pipe__v7 = (0x0000ffffU 
                                               & ((IData)(0x0511U) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[3U])));
            __VdlyVal__y_pipe__v7 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[3U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[3U], 3U)));
        } else {
            __VdlyVal__total_angle_pipe__v8 = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.total_angle_pipe[3U]) 
                                                  - (IData)(0x0511U)));
            __VdlySet__total_angle_pipe__v8 = 1U;
            __VdlyVal__x_pipe__v8 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[3U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[3U], 3U)));
            __VdlyVal__y_pipe__v8 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[3U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[3U], 3U)));
        }
        __VdlyVal__desired_angle_pipe__v4 = vlSelfRef.desired_angle_pipe[3U];
        __VdlySet__desired_angle_pipe__v4 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[4U], vlSelfRef.desired_angle_pipe[4U])) {
            __VdlyVal__x_pipe__v9 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[4U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[4U], 4U)));
            __VdlySet__x_pipe__v9 = 1U;
            __VdlyVal__total_angle_pipe__v9 = (0x0000ffffU 
                                               & ((IData)(0x028bU) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[4U])));
            __VdlyVal__y_pipe__v9 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[4U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[4U], 4U)));
        } else {
            __VdlyVal__total_angle_pipe__v10 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[4U]) 
                                                   - (IData)(0x028bU)));
            __VdlySet__total_angle_pipe__v10 = 1U;
            __VdlyVal__x_pipe__v10 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[4U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[4U], 4U)));
            __VdlyVal__y_pipe__v10 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[4U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[4U], 4U)));
        }
        __VdlyVal__desired_angle_pipe__v5 = vlSelfRef.desired_angle_pipe[4U];
        __VdlySet__desired_angle_pipe__v5 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[5U], vlSelfRef.desired_angle_pipe[5U])) {
            __VdlyVal__x_pipe__v11 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[5U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[5U], 5U)));
            __VdlySet__x_pipe__v11 = 1U;
            __VdlyVal__total_angle_pipe__v11 = (0x0000ffffU 
                                                & ((IData)(0x0146U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[5U])));
            __VdlyVal__y_pipe__v11 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[5U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[5U], 5U)));
        } else {
            __VdlyVal__total_angle_pipe__v12 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[5U]) 
                                                   - (IData)(0x0146U)));
            __VdlySet__total_angle_pipe__v12 = 1U;
            __VdlyVal__x_pipe__v12 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[5U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[5U], 5U)));
            __VdlyVal__y_pipe__v12 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[5U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[5U], 5U)));
        }
        __VdlyVal__desired_angle_pipe__v6 = vlSelfRef.desired_angle_pipe[5U];
        __VdlySet__desired_angle_pipe__v6 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[6U], vlSelfRef.desired_angle_pipe[6U])) {
            __VdlyVal__x_pipe__v13 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[6U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[6U], 6U)));
            __VdlySet__x_pipe__v13 = 1U;
            __VdlyVal__total_angle_pipe__v13 = (0x0000ffffU 
                                                & ((IData)(0x00a3U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[6U])));
            __VdlyVal__y_pipe__v13 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[6U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[6U], 6U)));
        } else {
            __VdlyVal__total_angle_pipe__v14 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[6U]) 
                                                   - (IData)(0x00a3U)));
            __VdlySet__total_angle_pipe__v14 = 1U;
            __VdlyVal__x_pipe__v14 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[6U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[6U], 6U)));
            __VdlyVal__y_pipe__v14 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[6U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[6U], 6U)));
        }
        __VdlyVal__desired_angle_pipe__v7 = vlSelfRef.desired_angle_pipe[6U];
        __VdlySet__desired_angle_pipe__v7 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[7U], vlSelfRef.desired_angle_pipe[7U])) {
            __VdlyVal__x_pipe__v15 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[7U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[7U], 7U)));
            __VdlySet__x_pipe__v15 = 1U;
            __VdlyVal__total_angle_pipe__v15 = (0x0000ffffU 
                                                & ((IData)(0x0051U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[7U])));
            __VdlyVal__y_pipe__v15 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[7U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[7U], 7U)));
        } else {
            __VdlyVal__total_angle_pipe__v16 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[7U]) 
                                                   - (IData)(0x0051U)));
            __VdlySet__total_angle_pipe__v16 = 1U;
            __VdlyVal__x_pipe__v16 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[7U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[7U], 7U)));
            __VdlyVal__y_pipe__v16 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[7U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[7U], 7U)));
        }
        __VdlyVal__desired_angle_pipe__v8 = vlSelfRef.desired_angle_pipe[7U];
        __VdlySet__desired_angle_pipe__v8 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[8U], vlSelfRef.desired_angle_pipe[8U])) {
            __VdlyVal__x_pipe__v17 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[8U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[8U], 8U)));
            __VdlySet__x_pipe__v17 = 1U;
            __VdlyVal__total_angle_pipe__v17 = (0x0000ffffU 
                                                & ((IData)(0x0029U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[8U])));
            __VdlyVal__y_pipe__v17 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[8U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[8U], 8U)));
        } else {
            __VdlyVal__total_angle_pipe__v18 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[8U]) 
                                                   - (IData)(0x0029U)));
            __VdlySet__total_angle_pipe__v18 = 1U;
            __VdlyVal__x_pipe__v18 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[8U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[8U], 8U)));
            __VdlyVal__y_pipe__v18 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[8U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[8U], 8U)));
        }
        __VdlyVal__desired_angle_pipe__v9 = vlSelfRef.desired_angle_pipe[8U];
        __VdlySet__desired_angle_pipe__v9 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[9U], vlSelfRef.desired_angle_pipe[9U])) {
            __VdlyVal__x_pipe__v19 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[9U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[9U], 9U)));
            __VdlySet__x_pipe__v19 = 1U;
            __VdlyVal__total_angle_pipe__v19 = (0x0000ffffU 
                                                & ((IData)(0x0014U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[9U])));
            __VdlyVal__y_pipe__v19 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[9U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[9U], 9U)));
        } else {
            __VdlyVal__total_angle_pipe__v20 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[9U]) 
                                                   - (IData)(0x0014U)));
            __VdlySet__total_angle_pipe__v20 = 1U;
            __VdlyVal__x_pipe__v20 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[9U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[9U], 9U)));
            __VdlyVal__y_pipe__v20 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[9U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[9U], 9U)));
        }
        __VdlyVal__desired_angle_pipe__v10 = vlSelfRef.desired_angle_pipe[9U];
        __VdlySet__desired_angle_pipe__v10 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[10U], vlSelfRef.desired_angle_pipe[10U])) {
            __VdlyVal__x_pipe__v21 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[10U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[10U], 0x0000000aU)));
            __VdlySet__x_pipe__v21 = 1U;
            __VdlyVal__total_angle_pipe__v21 = (0x0000ffffU 
                                                & ((IData)(0x000aU) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[10U])));
            __VdlyVal__y_pipe__v21 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[10U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[10U], 0x0000000aU)));
        } else {
            __VdlyVal__total_angle_pipe__v22 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[10U]) 
                                                   - (IData)(0x000aU)));
            __VdlySet__total_angle_pipe__v22 = 1U;
            __VdlyVal__x_pipe__v22 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[10U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[10U], 0x0000000aU)));
            __VdlyVal__y_pipe__v22 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[10U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[10U], 0x0000000aU)));
        }
        __VdlyVal__desired_angle_pipe__v11 = vlSelfRef.desired_angle_pipe[10U];
        __VdlySet__desired_angle_pipe__v11 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[11U], vlSelfRef.desired_angle_pipe[11U])) {
            __VdlyVal__x_pipe__v23 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[11U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[11U], 0x0000000bU)));
            __VdlySet__x_pipe__v23 = 1U;
            __VdlyVal__total_angle_pipe__v23 = (0x0000ffffU 
                                                & ((IData)(5U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[11U])));
            __VdlyVal__y_pipe__v23 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[11U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[11U], 0x0000000bU)));
        } else {
            __VdlyVal__total_angle_pipe__v24 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[11U]) 
                                                   - (IData)(5U)));
            __VdlySet__total_angle_pipe__v24 = 1U;
            __VdlyVal__x_pipe__v24 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[11U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[11U], 0x0000000bU)));
            __VdlyVal__y_pipe__v24 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[11U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[11U], 0x0000000bU)));
        }
        __VdlyVal__desired_angle_pipe__v12 = vlSelfRef.desired_angle_pipe[11U];
        __VdlySet__desired_angle_pipe__v12 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[12U], vlSelfRef.desired_angle_pipe[12U])) {
            __VdlyVal__x_pipe__v25 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[12U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[12U], 0x0000000cU)));
            __VdlySet__x_pipe__v25 = 1U;
            __VdlyVal__total_angle_pipe__v25 = (0x0000ffffU 
                                                & ((IData)(3U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[12U])));
            __VdlyVal__y_pipe__v25 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[12U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[12U], 0x0000000cU)));
        } else {
            __VdlyVal__total_angle_pipe__v26 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[12U]) 
                                                   - (IData)(3U)));
            __VdlySet__total_angle_pipe__v26 = 1U;
            __VdlyVal__x_pipe__v26 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[12U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[12U], 0x0000000cU)));
            __VdlyVal__y_pipe__v26 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[12U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[12U], 0x0000000cU)));
        }
        __VdlyVal__desired_angle_pipe__v13 = vlSelfRef.desired_angle_pipe[12U];
        __VdlySet__desired_angle_pipe__v13 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[13U], vlSelfRef.desired_angle_pipe[13U])) {
            __VdlyVal__x_pipe__v27 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[13U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[13U], 0x0000000dU)));
            __VdlySet__x_pipe__v27 = 1U;
            __VdlyVal__total_angle_pipe__v27 = (0x0000ffffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[13U])));
            __VdlyVal__y_pipe__v27 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[13U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[13U], 0x0000000dU)));
        } else {
            __VdlyVal__total_angle_pipe__v28 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[13U]) 
                                                   - (IData)(1U)));
            __VdlySet__total_angle_pipe__v28 = 1U;
            __VdlyVal__x_pipe__v28 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[13U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[13U], 0x0000000dU)));
            __VdlyVal__y_pipe__v28 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[13U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[13U], 0x0000000dU)));
        }
        __VdlyVal__desired_angle_pipe__v14 = vlSelfRef.desired_angle_pipe[13U];
        __VdlySet__desired_angle_pipe__v14 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[14U], vlSelfRef.desired_angle_pipe[14U])) {
            __VdlyVal__x_pipe__v29 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[14U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[14U], 0x0000000eU)));
            __VdlySet__x_pipe__v29 = 1U;
            __VdlyVal__total_angle_pipe__v29 = (0x0000ffffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[14U])));
            __VdlyVal__y_pipe__v29 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[14U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[14U], 0x0000000eU)));
        } else {
            __VdlyVal__total_angle_pipe__v30 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[14U]) 
                                                   - (IData)(1U)));
            __VdlySet__total_angle_pipe__v30 = 1U;
            __VdlyVal__x_pipe__v30 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[14U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[14U], 0x0000000eU)));
            __VdlyVal__y_pipe__v30 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[14U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[14U], 0x0000000eU)));
        }
        __VdlyVal__desired_angle_pipe__v15 = vlSelfRef.desired_angle_pipe[14U];
        __VdlySet__desired_angle_pipe__v15 = 1U;
    }
    __VdlyVal__valid_pipe__v0 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && (IData)(vlSelfRef.data_angle_valid_in));
    __VdlyVal__valid_pipe__v1 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[0U]);
    __VdlyVal__valid_pipe__v2 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[1U]);
    __VdlyVal__valid_pipe__v3 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[2U]);
    __VdlyVal__valid_pipe__v4 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[3U]);
    __VdlyVal__valid_pipe__v5 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[4U]);
    __VdlyVal__valid_pipe__v6 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[5U]);
    __VdlyVal__valid_pipe__v7 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[6U]);
    __VdlyVal__valid_pipe__v8 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[7U]);
    __VdlyVal__valid_pipe__v9 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[8U]);
    __VdlyVal__valid_pipe__v10 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[9U]);
    __VdlyVal__valid_pipe__v11 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[10U]);
    __VdlyVal__valid_pipe__v12 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[11U]);
    __VdlyVal__valid_pipe__v13 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[12U]);
    __VdlyVal__valid_pipe__v14 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[13U]);
    __VdlyVal__valid_pipe__v15 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[14U]);
    __VdlyVal__valid_pipe__v16 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[15U]);
    vlSelfRef.valid_pipe[0U] = __VdlyVal__valid_pipe__v0;
    vlSelfRef.valid_pipe[1U] = __VdlyVal__valid_pipe__v1;
    vlSelfRef.valid_pipe[2U] = __VdlyVal__valid_pipe__v2;
    vlSelfRef.valid_pipe[3U] = __VdlyVal__valid_pipe__v3;
    vlSelfRef.valid_pipe[4U] = __VdlyVal__valid_pipe__v4;
    vlSelfRef.valid_pipe[5U] = __VdlyVal__valid_pipe__v5;
    vlSelfRef.valid_pipe[6U] = __VdlyVal__valid_pipe__v6;
    vlSelfRef.valid_pipe[7U] = __VdlyVal__valid_pipe__v7;
    vlSelfRef.valid_pipe[8U] = __VdlyVal__valid_pipe__v8;
    vlSelfRef.valid_pipe[9U] = __VdlyVal__valid_pipe__v9;
    vlSelfRef.valid_pipe[10U] = __VdlyVal__valid_pipe__v10;
    vlSelfRef.valid_pipe[11U] = __VdlyVal__valid_pipe__v11;
    vlSelfRef.valid_pipe[12U] = __VdlyVal__valid_pipe__v12;
    vlSelfRef.valid_pipe[13U] = __VdlyVal__valid_pipe__v13;
    vlSelfRef.valid_pipe[14U] = __VdlyVal__valid_pipe__v14;
    vlSelfRef.valid_pipe[15U] = __VdlyVal__valid_pipe__v15;
    vlSelfRef.valid_pipe[16U] = __VdlyVal__valid_pipe__v16;
    if (__VdlySet__x_flip_pipe__v0) {
        vlSelfRef.x_flip_pipe[0U] = __VdlyVal__x_flip_pipe__v0;
    }
    if (__VdlySet__x_flip_pipe__v1) {
        vlSelfRef.x_flip_pipe[1U] = __VdlyVal__x_flip_pipe__v1;
    }
    if (__VdlySet__x_flip_pipe__v2) {
        vlSelfRef.x_flip_pipe[2U] = __VdlyVal__x_flip_pipe__v2;
    }
    if (__VdlySet__x_flip_pipe__v3) {
        vlSelfRef.x_flip_pipe[3U] = __VdlyVal__x_flip_pipe__v3;
    }
    if (__VdlySet__x_flip_pipe__v4) {
        vlSelfRef.x_flip_pipe[4U] = __VdlyVal__x_flip_pipe__v4;
    }
    if (__VdlySet__x_flip_pipe__v5) {
        vlSelfRef.x_flip_pipe[5U] = __VdlyVal__x_flip_pipe__v5;
    }
    if (__VdlySet__x_flip_pipe__v6) {
        vlSelfRef.x_flip_pipe[6U] = __VdlyVal__x_flip_pipe__v6;
    }
    if (__VdlySet__x_flip_pipe__v7) {
        vlSelfRef.x_flip_pipe[7U] = __VdlyVal__x_flip_pipe__v7;
    }
    if (__VdlySet__x_flip_pipe__v8) {
        vlSelfRef.x_flip_pipe[8U] = __VdlyVal__x_flip_pipe__v8;
    }
    if (__VdlySet__x_flip_pipe__v9) {
        vlSelfRef.x_flip_pipe[9U] = __VdlyVal__x_flip_pipe__v9;
    }
    if (__VdlySet__x_flip_pipe__v10) {
        vlSelfRef.x_flip_pipe[10U] = __VdlyVal__x_flip_pipe__v10;
    }
    if (__VdlySet__x_flip_pipe__v11) {
        vlSelfRef.x_flip_pipe[11U] = __VdlyVal__x_flip_pipe__v11;
    }
    if (__VdlySet__x_flip_pipe__v12) {
        vlSelfRef.x_flip_pipe[12U] = __VdlyVal__x_flip_pipe__v12;
    }
    if (__VdlySet__x_flip_pipe__v13) {
        vlSelfRef.x_flip_pipe[13U] = __VdlyVal__x_flip_pipe__v13;
    }
    if (__VdlySet__x_flip_pipe__v14) {
        vlSelfRef.x_flip_pipe[14U] = __VdlyVal__x_flip_pipe__v14;
    }
    if (__VdlySet__x_flip_pipe__v15) {
        vlSelfRef.x_flip_pipe[15U] = __VdlyVal__x_flip_pipe__v15;
    }
    if (__VdlySet__x_flip_pipe__v16) {
        vlSelfRef.x_flip_pipe[16U] = __VdlyVal__x_flip_pipe__v16;
    }
    if (__VdlySet__desired_angle_pipe__v0) {
        vlSelfRef.desired_angle_pipe[0U] = __VdlyVal__desired_angle_pipe__v0;
    }
    if (__VdlySet__desired_angle_pipe__v1) {
        vlSelfRef.desired_angle_pipe[1U] = __VdlyVal__desired_angle_pipe__v1;
    }
    if (__VdlySet__desired_angle_pipe__v2) {
        vlSelfRef.desired_angle_pipe[2U] = __VdlyVal__desired_angle_pipe__v2;
    }
    if (__VdlySet__desired_angle_pipe__v3) {
        vlSelfRef.desired_angle_pipe[3U] = __VdlyVal__desired_angle_pipe__v3;
    }
    if (__VdlySet__desired_angle_pipe__v4) {
        vlSelfRef.desired_angle_pipe[4U] = __VdlyVal__desired_angle_pipe__v4;
    }
    if (__VdlySet__desired_angle_pipe__v5) {
        vlSelfRef.desired_angle_pipe[5U] = __VdlyVal__desired_angle_pipe__v5;
    }
    if (__VdlySet__desired_angle_pipe__v6) {
        vlSelfRef.desired_angle_pipe[6U] = __VdlyVal__desired_angle_pipe__v6;
    }
    if (__VdlySet__desired_angle_pipe__v7) {
        vlSelfRef.desired_angle_pipe[7U] = __VdlyVal__desired_angle_pipe__v7;
    }
    if (__VdlySet__desired_angle_pipe__v8) {
        vlSelfRef.desired_angle_pipe[8U] = __VdlyVal__desired_angle_pipe__v8;
    }
    if (__VdlySet__desired_angle_pipe__v9) {
        vlSelfRef.desired_angle_pipe[9U] = __VdlyVal__desired_angle_pipe__v9;
    }
    if (__VdlySet__desired_angle_pipe__v10) {
        vlSelfRef.desired_angle_pipe[10U] = __VdlyVal__desired_angle_pipe__v10;
    }
    if (__VdlySet__desired_angle_pipe__v11) {
        vlSelfRef.desired_angle_pipe[11U] = __VdlyVal__desired_angle_pipe__v11;
    }
    if (__VdlySet__desired_angle_pipe__v12) {
        vlSelfRef.desired_angle_pipe[12U] = __VdlyVal__desired_angle_pipe__v12;
    }
    if (__VdlySet__desired_angle_pipe__v13) {
        vlSelfRef.desired_angle_pipe[13U] = __VdlyVal__desired_angle_pipe__v13;
    }
    if (__VdlySet__desired_angle_pipe__v14) {
        vlSelfRef.desired_angle_pipe[14U] = __VdlyVal__desired_angle_pipe__v14;
    }
    if (__VdlySet__desired_angle_pipe__v15) {
        vlSelfRef.desired_angle_pipe[15U] = __VdlyVal__desired_angle_pipe__v15;
    }
    if (__VdlySet__total_angle_pipe__v0) {
        vlSelfRef.total_angle_pipe[0U] = 0U;
    }
    if (__VdlySet__x_pipe__v1) {
        vlSelfRef.total_angle_pipe[1U] = __VdlyVal__total_angle_pipe__v1;
    }
    if (__VdlySet__total_angle_pipe__v2) {
        vlSelfRef.total_angle_pipe[1U] = __VdlyVal__total_angle_pipe__v2;
    }
    if (__VdlySet__x_pipe__v3) {
        vlSelfRef.total_angle_pipe[2U] = __VdlyVal__total_angle_pipe__v3;
    }
    if (__VdlySet__total_angle_pipe__v4) {
        vlSelfRef.total_angle_pipe[2U] = __VdlyVal__total_angle_pipe__v4;
    }
    if (__VdlySet__x_pipe__v5) {
        vlSelfRef.total_angle_pipe[3U] = __VdlyVal__total_angle_pipe__v5;
    }
    if (__VdlySet__total_angle_pipe__v6) {
        vlSelfRef.total_angle_pipe[3U] = __VdlyVal__total_angle_pipe__v6;
    }
    if (__VdlySet__x_pipe__v7) {
        vlSelfRef.total_angle_pipe[4U] = __VdlyVal__total_angle_pipe__v7;
    }
    if (__VdlySet__total_angle_pipe__v8) {
        vlSelfRef.total_angle_pipe[4U] = __VdlyVal__total_angle_pipe__v8;
    }
    if (__VdlySet__x_pipe__v9) {
        vlSelfRef.total_angle_pipe[5U] = __VdlyVal__total_angle_pipe__v9;
    }
    if (__VdlySet__total_angle_pipe__v10) {
        vlSelfRef.total_angle_pipe[5U] = __VdlyVal__total_angle_pipe__v10;
    }
    if (__VdlySet__x_pipe__v11) {
        vlSelfRef.total_angle_pipe[6U] = __VdlyVal__total_angle_pipe__v11;
    }
    if (__VdlySet__total_angle_pipe__v12) {
        vlSelfRef.total_angle_pipe[6U] = __VdlyVal__total_angle_pipe__v12;
    }
    if (__VdlySet__x_pipe__v13) {
        vlSelfRef.total_angle_pipe[7U] = __VdlyVal__total_angle_pipe__v13;
    }
    if (__VdlySet__total_angle_pipe__v14) {
        vlSelfRef.total_angle_pipe[7U] = __VdlyVal__total_angle_pipe__v14;
    }
    if (__VdlySet__x_pipe__v15) {
        vlSelfRef.total_angle_pipe[8U] = __VdlyVal__total_angle_pipe__v15;
    }
    if (__VdlySet__total_angle_pipe__v16) {
        vlSelfRef.total_angle_pipe[8U] = __VdlyVal__total_angle_pipe__v16;
    }
    if (__VdlySet__x_pipe__v17) {
        vlSelfRef.total_angle_pipe[9U] = __VdlyVal__total_angle_pipe__v17;
    }
    if (__VdlySet__total_angle_pipe__v18) {
        vlSelfRef.total_angle_pipe[9U] = __VdlyVal__total_angle_pipe__v18;
    }
    if (__VdlySet__x_pipe__v19) {
        vlSelfRef.total_angle_pipe[10U] = __VdlyVal__total_angle_pipe__v19;
    }
    if (__VdlySet__total_angle_pipe__v20) {
        vlSelfRef.total_angle_pipe[10U] = __VdlyVal__total_angle_pipe__v20;
    }
    if (__VdlySet__x_pipe__v21) {
        vlSelfRef.total_angle_pipe[11U] = __VdlyVal__total_angle_pipe__v21;
    }
    if (__VdlySet__total_angle_pipe__v22) {
        vlSelfRef.total_angle_pipe[11U] = __VdlyVal__total_angle_pipe__v22;
    }
    if (__VdlySet__x_pipe__v23) {
        vlSelfRef.total_angle_pipe[12U] = __VdlyVal__total_angle_pipe__v23;
    }
    if (__VdlySet__total_angle_pipe__v24) {
        vlSelfRef.total_angle_pipe[12U] = __VdlyVal__total_angle_pipe__v24;
    }
    if (__VdlySet__x_pipe__v25) {
        vlSelfRef.total_angle_pipe[13U] = __VdlyVal__total_angle_pipe__v25;
    }
    if (__VdlySet__total_angle_pipe__v26) {
        vlSelfRef.total_angle_pipe[13U] = __VdlyVal__total_angle_pipe__v26;
    }
    if (__VdlySet__x_pipe__v27) {
        vlSelfRef.total_angle_pipe[14U] = __VdlyVal__total_angle_pipe__v27;
    }
    if (__VdlySet__total_angle_pipe__v28) {
        vlSelfRef.total_angle_pipe[14U] = __VdlyVal__total_angle_pipe__v28;
    }
    if (__VdlySet__total_angle_pipe__v31) {
        vlSelfRef.desired_angle_pipe[16U] = __VdlyVal__desired_angle_pipe__v16;
    }
    if (__VdlySet__x_pipe__v29) {
        vlSelfRef.total_angle_pipe[15U] = __VdlyVal__total_angle_pipe__v29;
    }
    if (__VdlySet__total_angle_pipe__v30) {
        vlSelfRef.total_angle_pipe[15U] = __VdlyVal__total_angle_pipe__v30;
    }
    if (__VdlySet__total_angle_pipe__v31) {
        vlSelfRef.total_angle_pipe[16U] = __VdlyVal__total_angle_pipe__v31;
    }
    if (__VdlySet__y_pipe__v0) {
        vlSelfRef.y_pipe[0U] = 0U;
    }
    if (__VdlySet__x_pipe__v1) {
        vlSelfRef.y_pipe[1U] = __VdlyVal__y_pipe__v1;
    }
    if (__VdlySet__total_angle_pipe__v2) {
        vlSelfRef.y_pipe[1U] = __VdlyVal__y_pipe__v2;
    }
    if (__VdlySet__x_pipe__v3) {
        vlSelfRef.y_pipe[2U] = __VdlyVal__y_pipe__v3;
    }
    if (__VdlySet__total_angle_pipe__v4) {
        vlSelfRef.y_pipe[2U] = __VdlyVal__y_pipe__v4;
    }
    if (__VdlySet__x_pipe__v5) {
        vlSelfRef.y_pipe[3U] = __VdlyVal__y_pipe__v5;
    }
    if (__VdlySet__total_angle_pipe__v6) {
        vlSelfRef.y_pipe[3U] = __VdlyVal__y_pipe__v6;
    }
    if (__VdlySet__x_pipe__v7) {
        vlSelfRef.y_pipe[4U] = __VdlyVal__y_pipe__v7;
    }
    if (__VdlySet__total_angle_pipe__v8) {
        vlSelfRef.y_pipe[4U] = __VdlyVal__y_pipe__v8;
    }
    if (__VdlySet__x_pipe__v9) {
        vlSelfRef.y_pipe[5U] = __VdlyVal__y_pipe__v9;
    }
    if (__VdlySet__total_angle_pipe__v10) {
        vlSelfRef.y_pipe[5U] = __VdlyVal__y_pipe__v10;
    }
    if (__VdlySet__x_pipe__v11) {
        vlSelfRef.y_pipe[6U] = __VdlyVal__y_pipe__v11;
    }
    if (__VdlySet__total_angle_pipe__v12) {
        vlSelfRef.y_pipe[6U] = __VdlyVal__y_pipe__v12;
    }
    if (__VdlySet__x_pipe__v13) {
        vlSelfRef.y_pipe[7U] = __VdlyVal__y_pipe__v13;
    }
    if (__VdlySet__total_angle_pipe__v14) {
        vlSelfRef.y_pipe[7U] = __VdlyVal__y_pipe__v14;
    }
    if (__VdlySet__x_pipe__v15) {
        vlSelfRef.y_pipe[8U] = __VdlyVal__y_pipe__v15;
    }
    if (__VdlySet__total_angle_pipe__v16) {
        vlSelfRef.y_pipe[8U] = __VdlyVal__y_pipe__v16;
    }
    if (__VdlySet__x_pipe__v17) {
        vlSelfRef.y_pipe[9U] = __VdlyVal__y_pipe__v17;
    }
    if (__VdlySet__total_angle_pipe__v18) {
        vlSelfRef.y_pipe[9U] = __VdlyVal__y_pipe__v18;
    }
    if (__VdlySet__x_pipe__v19) {
        vlSelfRef.y_pipe[10U] = __VdlyVal__y_pipe__v19;
    }
    if (__VdlySet__total_angle_pipe__v20) {
        vlSelfRef.y_pipe[10U] = __VdlyVal__y_pipe__v20;
    }
    if (__VdlySet__x_pipe__v21) {
        vlSelfRef.y_pipe[11U] = __VdlyVal__y_pipe__v21;
    }
    if (__VdlySet__total_angle_pipe__v22) {
        vlSelfRef.y_pipe[11U] = __VdlyVal__y_pipe__v22;
    }
    if (__VdlySet__x_pipe__v23) {
        vlSelfRef.y_pipe[12U] = __VdlyVal__y_pipe__v23;
    }
    if (__VdlySet__total_angle_pipe__v24) {
        vlSelfRef.y_pipe[12U] = __VdlyVal__y_pipe__v24;
    }
    if (__VdlySet__x_pipe__v25) {
        vlSelfRef.y_pipe[13U] = __VdlyVal__y_pipe__v25;
    }
    if (__VdlySet__total_angle_pipe__v26) {
        vlSelfRef.y_pipe[13U] = __VdlyVal__y_pipe__v26;
    }
    if (__VdlySet__x_pipe__v27) {
        vlSelfRef.y_pipe[14U] = __VdlyVal__y_pipe__v27;
    }
    if (__VdlySet__total_angle_pipe__v28) {
        vlSelfRef.y_pipe[14U] = __VdlyVal__y_pipe__v28;
    }
    if (__VdlySet__x_pipe__v29) {
        vlSelfRef.y_pipe[15U] = __VdlyVal__y_pipe__v29;
    }
    if (__VdlySet__total_angle_pipe__v30) {
        vlSelfRef.y_pipe[15U] = __VdlyVal__y_pipe__v30;
    }
    if (__VdlySet__x_pipe__v31) {
        vlSelfRef.y_pipe[16U] = __VdlyVal__y_pipe__v31;
    }
    if (__VdlySet__x_pipe__v0) {
        vlSelfRef.x_pipe[0U] = 0x00004dbaU;
    }
    if (__VdlySet__x_pipe__v1) {
        vlSelfRef.x_pipe[1U] = __VdlyVal__x_pipe__v1;
    }
    if (__VdlySet__total_angle_pipe__v2) {
        vlSelfRef.x_pipe[1U] = __VdlyVal__x_pipe__v2;
    }
    if (__VdlySet__x_pipe__v3) {
        vlSelfRef.x_pipe[2U] = __VdlyVal__x_pipe__v3;
    }
    if (__VdlySet__total_angle_pipe__v4) {
        vlSelfRef.x_pipe[2U] = __VdlyVal__x_pipe__v4;
    }
    if (__VdlySet__x_pipe__v5) {
        vlSelfRef.x_pipe[3U] = __VdlyVal__x_pipe__v5;
    }
    if (__VdlySet__total_angle_pipe__v6) {
        vlSelfRef.x_pipe[3U] = __VdlyVal__x_pipe__v6;
    }
    if (__VdlySet__x_pipe__v7) {
        vlSelfRef.x_pipe[4U] = __VdlyVal__x_pipe__v7;
    }
    if (__VdlySet__total_angle_pipe__v8) {
        vlSelfRef.x_pipe[4U] = __VdlyVal__x_pipe__v8;
    }
    if (__VdlySet__x_pipe__v9) {
        vlSelfRef.x_pipe[5U] = __VdlyVal__x_pipe__v9;
    }
    if (__VdlySet__total_angle_pipe__v10) {
        vlSelfRef.x_pipe[5U] = __VdlyVal__x_pipe__v10;
    }
    if (__VdlySet__x_pipe__v11) {
        vlSelfRef.x_pipe[6U] = __VdlyVal__x_pipe__v11;
    }
    if (__VdlySet__total_angle_pipe__v12) {
        vlSelfRef.x_pipe[6U] = __VdlyVal__x_pipe__v12;
    }
    if (__VdlySet__x_pipe__v13) {
        vlSelfRef.x_pipe[7U] = __VdlyVal__x_pipe__v13;
    }
    if (__VdlySet__total_angle_pipe__v14) {
        vlSelfRef.x_pipe[7U] = __VdlyVal__x_pipe__v14;
    }
    if (__VdlySet__x_pipe__v15) {
        vlSelfRef.x_pipe[8U] = __VdlyVal__x_pipe__v15;
    }
    if (__VdlySet__total_angle_pipe__v16) {
        vlSelfRef.x_pipe[8U] = __VdlyVal__x_pipe__v16;
    }
    if (__VdlySet__x_pipe__v17) {
        vlSelfRef.x_pipe[9U] = __VdlyVal__x_pipe__v17;
    }
    if (__VdlySet__total_angle_pipe__v18) {
        vlSelfRef.x_pipe[9U] = __VdlyVal__x_pipe__v18;
    }
    if (__VdlySet__x_pipe__v19) {
        vlSelfRef.x_pipe[10U] = __VdlyVal__x_pipe__v19;
    }
    if (__VdlySet__total_angle_pipe__v20) {
        vlSelfRef.x_pipe[10U] = __VdlyVal__x_pipe__v20;
    }
    if (__VdlySet__x_pipe__v21) {
        vlSelfRef.x_pipe[11U] = __VdlyVal__x_pipe__v21;
    }
    if (__VdlySet__total_angle_pipe__v22) {
        vlSelfRef.x_pipe[11U] = __VdlyVal__x_pipe__v22;
    }
    if (__VdlySet__x_pipe__v23) {
        vlSelfRef.x_pipe[12U] = __VdlyVal__x_pipe__v23;
    }
    if (__VdlySet__total_angle_pipe__v24) {
        vlSelfRef.x_pipe[12U] = __VdlyVal__x_pipe__v24;
    }
    if (__VdlySet__x_pipe__v25) {
        vlSelfRef.x_pipe[13U] = __VdlyVal__x_pipe__v25;
    }
    if (__VdlySet__total_angle_pipe__v26) {
        vlSelfRef.x_pipe[13U] = __VdlyVal__x_pipe__v26;
    }
    if (__VdlySet__x_pipe__v27) {
        vlSelfRef.x_pipe[14U] = __VdlyVal__x_pipe__v27;
    }
    if (__VdlySet__total_angle_pipe__v28) {
        vlSelfRef.x_pipe[14U] = __VdlyVal__x_pipe__v28;
    }
    if (__VdlySet__x_pipe__v29) {
        vlSelfRef.x_pipe[15U] = __VdlyVal__x_pipe__v29;
    }
    if (__VdlySet__total_angle_pipe__v30) {
        vlSelfRef.x_pipe[15U] = __VdlyVal__x_pipe__v30;
    }
    if (__VdlySet__x_pipe__v31) {
        vlSelfRef.x_pipe[16U] = __VdlyVal__x_pipe__v31;
    }
    if (__VdlySet__x_pipe__v32) {
        vlSelfRef.y_pipe[16U] = __VdlyVal__y_pipe__v32;
        vlSelfRef.x_pipe[16U] = __VdlyVal__x_pipe__v32;
    }
    vlSelfRef.data_cossin_valid_out = vlSelfRef.valid_pipe[16U];
    vlSelfRef.sin = ((1U == (3U & (vlSelfRef.y_pipe[16U] 
                                   >> 0x0000000fU)))
                      ? 0x00007fffU : ((2U == (3U & 
                                               (vlSelfRef.y_pipe[16U] 
                                                >> 0x0000000fU)))
                                        ? 0x00008000U
                                        : (0x0000ffffU 
                                           & vlSelfRef.y_pipe[16U])));
    __VdfgRegularize_h6e95ff9d_0_7 = (0x0001ffffU & 
                                      (vlSelfRef.x_flip_pipe[16U]
                                        ? (- vlSelfRef.x_pipe[16U])
                                        : vlSelfRef.x_pipe[16U]));
    vlSelfRef.cos = ((1U == (3U & (__VdfgRegularize_h6e95ff9d_0_7 
                                   >> 0x0000000fU)))
                      ? 0x00007fffU : ((2U == (3U & 
                                               (__VdfgRegularize_h6e95ff9d_0_7 
                                                >> 0x0000000fU)))
                                        ? 0x00008000U
                                        : (0x0000ffffU 
                                           & __VdfgRegularize_h6e95ff9d_0_7)));
}

void Vtop_cordic_cossin___ico_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin___ico_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_8;
    __VdfgRegularize_h6e95ff9d_0_8 = 0;
    // Body
    vlSelfRef.sin = ((1U == (3U & (vlSelfRef.y_pipe[16U] 
                                   >> 0x0000000fU)))
                      ? 0x00007fffU : ((2U == (3U & 
                                               (vlSelfRef.y_pipe[16U] 
                                                >> 0x0000000fU)))
                                        ? 0x00008000U
                                        : (0x0000ffffU 
                                           & vlSelfRef.y_pipe[16U])));
    vlSelfRef.data_cossin_valid_out = vlSelfRef.valid_pipe[16U];
    __VdfgRegularize_h6e95ff9d_0_8 = (0x0001ffffU & 
                                      (vlSelfRef.x_flip_pipe[16U]
                                        ? (- vlSelfRef.x_pipe[16U])
                                        : vlSelfRef.x_pipe[16U]));
    vlSelfRef.cos = ((1U == (3U & (__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 0x0000000fU)))
                      ? 0x00007fffU : ((2U == (3U & 
                                               (__VdfgRegularize_h6e95ff9d_0_8 
                                                >> 0x0000000fU)))
                                        ? 0x00008000U
                                        : (0x0000ffffU 
                                           & __VdfgRegularize_h6e95ff9d_0_8)));
}

void Vtop_cordic_cossin___ico_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic__1(Vtop_cordic_cossin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin___ico_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clk = vlSymsp->TOP.harmonic_generator__DOT__clk;
    vlSelfRef.rst = vlSymsp->TOP.harmonic_generator__DOT__rst;
    vlSelfRef.data_angle_valid_in = vlSymsp->TOP.harmonic_generator__DOT__data_valid_in;
    vlSelfRef.angle = vlSymsp->TOP.harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__angle_n;
}

void Vtop_cordic_cossin___nba_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin___nba_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_8;
    __VdfgRegularize_h6e95ff9d_0_8 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v0;
    __VdlySet__total_angle_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v0;
    __VdlyVal__valid_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v0;
    __VdlySet__x_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__y_pipe__v0;
    __VdlySet__y_pipe__v0 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v0;
    __VdlyVal__desired_angle_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v0;
    __VdlySet__desired_angle_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v0;
    __VdlyVal__x_flip_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v0;
    __VdlySet__x_flip_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v1;
    __VdlyVal__valid_pipe__v1 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v1;
    __VdlyVal__x_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v1;
    __VdlySet__x_pipe__v1 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v1;
    __VdlyVal__total_angle_pipe__v1 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v1;
    __VdlyVal__y_pipe__v1 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v2;
    __VdlyVal__total_angle_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v2;
    __VdlySet__total_angle_pipe__v2 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v2;
    __VdlyVal__x_pipe__v2 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v2;
    __VdlyVal__y_pipe__v2 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v1;
    __VdlyVal__desired_angle_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v1;
    __VdlySet__desired_angle_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v1;
    __VdlyVal__x_flip_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v1;
    __VdlySet__x_flip_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v2;
    __VdlyVal__valid_pipe__v2 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v3;
    __VdlyVal__x_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v3;
    __VdlySet__x_pipe__v3 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v3;
    __VdlyVal__total_angle_pipe__v3 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v3;
    __VdlyVal__y_pipe__v3 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v4;
    __VdlyVal__total_angle_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v4;
    __VdlySet__total_angle_pipe__v4 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v4;
    __VdlyVal__x_pipe__v4 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v4;
    __VdlyVal__y_pipe__v4 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v2;
    __VdlyVal__desired_angle_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v2;
    __VdlySet__desired_angle_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v2;
    __VdlyVal__x_flip_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v2;
    __VdlySet__x_flip_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v3;
    __VdlyVal__valid_pipe__v3 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v5;
    __VdlyVal__x_pipe__v5 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v5;
    __VdlySet__x_pipe__v5 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v5;
    __VdlyVal__total_angle_pipe__v5 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v5;
    __VdlyVal__y_pipe__v5 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v6;
    __VdlyVal__total_angle_pipe__v6 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v6;
    __VdlySet__total_angle_pipe__v6 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v6;
    __VdlyVal__x_pipe__v6 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v6;
    __VdlyVal__y_pipe__v6 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v3;
    __VdlyVal__desired_angle_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v3;
    __VdlySet__desired_angle_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v3;
    __VdlyVal__x_flip_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v3;
    __VdlySet__x_flip_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v4;
    __VdlyVal__valid_pipe__v4 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v7;
    __VdlyVal__x_pipe__v7 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v7;
    __VdlySet__x_pipe__v7 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v7;
    __VdlyVal__total_angle_pipe__v7 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v7;
    __VdlyVal__y_pipe__v7 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v8;
    __VdlyVal__total_angle_pipe__v8 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v8;
    __VdlySet__total_angle_pipe__v8 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v8;
    __VdlyVal__x_pipe__v8 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v8;
    __VdlyVal__y_pipe__v8 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v4;
    __VdlyVal__desired_angle_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v4;
    __VdlySet__desired_angle_pipe__v4 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v4;
    __VdlyVal__x_flip_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v4;
    __VdlySet__x_flip_pipe__v4 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v5;
    __VdlyVal__valid_pipe__v5 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v9;
    __VdlyVal__x_pipe__v9 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v9;
    __VdlySet__x_pipe__v9 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v9;
    __VdlyVal__total_angle_pipe__v9 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v9;
    __VdlyVal__y_pipe__v9 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v10;
    __VdlyVal__total_angle_pipe__v10 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v10;
    __VdlySet__total_angle_pipe__v10 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v10;
    __VdlyVal__x_pipe__v10 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v10;
    __VdlyVal__y_pipe__v10 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v5;
    __VdlyVal__desired_angle_pipe__v5 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v5;
    __VdlySet__desired_angle_pipe__v5 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v5;
    __VdlyVal__x_flip_pipe__v5 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v5;
    __VdlySet__x_flip_pipe__v5 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v6;
    __VdlyVal__valid_pipe__v6 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v11;
    __VdlyVal__x_pipe__v11 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v11;
    __VdlySet__x_pipe__v11 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v11;
    __VdlyVal__total_angle_pipe__v11 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v11;
    __VdlyVal__y_pipe__v11 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v12;
    __VdlyVal__total_angle_pipe__v12 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v12;
    __VdlySet__total_angle_pipe__v12 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v12;
    __VdlyVal__x_pipe__v12 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v12;
    __VdlyVal__y_pipe__v12 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v6;
    __VdlyVal__desired_angle_pipe__v6 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v6;
    __VdlySet__desired_angle_pipe__v6 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v6;
    __VdlyVal__x_flip_pipe__v6 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v6;
    __VdlySet__x_flip_pipe__v6 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v7;
    __VdlyVal__valid_pipe__v7 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v13;
    __VdlyVal__x_pipe__v13 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v13;
    __VdlySet__x_pipe__v13 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v13;
    __VdlyVal__total_angle_pipe__v13 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v13;
    __VdlyVal__y_pipe__v13 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v14;
    __VdlyVal__total_angle_pipe__v14 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v14;
    __VdlySet__total_angle_pipe__v14 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v14;
    __VdlyVal__x_pipe__v14 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v14;
    __VdlyVal__y_pipe__v14 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v7;
    __VdlyVal__desired_angle_pipe__v7 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v7;
    __VdlySet__desired_angle_pipe__v7 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v7;
    __VdlyVal__x_flip_pipe__v7 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v7;
    __VdlySet__x_flip_pipe__v7 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v8;
    __VdlyVal__valid_pipe__v8 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v15;
    __VdlyVal__x_pipe__v15 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v15;
    __VdlySet__x_pipe__v15 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v15;
    __VdlyVal__total_angle_pipe__v15 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v15;
    __VdlyVal__y_pipe__v15 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v16;
    __VdlyVal__total_angle_pipe__v16 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v16;
    __VdlySet__total_angle_pipe__v16 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v16;
    __VdlyVal__x_pipe__v16 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v16;
    __VdlyVal__y_pipe__v16 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v8;
    __VdlyVal__desired_angle_pipe__v8 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v8;
    __VdlySet__desired_angle_pipe__v8 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v8;
    __VdlyVal__x_flip_pipe__v8 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v8;
    __VdlySet__x_flip_pipe__v8 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v9;
    __VdlyVal__valid_pipe__v9 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v17;
    __VdlyVal__x_pipe__v17 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v17;
    __VdlySet__x_pipe__v17 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v17;
    __VdlyVal__total_angle_pipe__v17 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v17;
    __VdlyVal__y_pipe__v17 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v18;
    __VdlyVal__total_angle_pipe__v18 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v18;
    __VdlySet__total_angle_pipe__v18 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v18;
    __VdlyVal__x_pipe__v18 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v18;
    __VdlyVal__y_pipe__v18 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v9;
    __VdlyVal__desired_angle_pipe__v9 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v9;
    __VdlySet__desired_angle_pipe__v9 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v9;
    __VdlyVal__x_flip_pipe__v9 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v9;
    __VdlySet__x_flip_pipe__v9 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v10;
    __VdlyVal__valid_pipe__v10 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v19;
    __VdlyVal__x_pipe__v19 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v19;
    __VdlySet__x_pipe__v19 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v19;
    __VdlyVal__total_angle_pipe__v19 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v19;
    __VdlyVal__y_pipe__v19 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v20;
    __VdlyVal__total_angle_pipe__v20 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v20;
    __VdlySet__total_angle_pipe__v20 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v20;
    __VdlyVal__x_pipe__v20 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v20;
    __VdlyVal__y_pipe__v20 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v10;
    __VdlyVal__desired_angle_pipe__v10 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v10;
    __VdlySet__desired_angle_pipe__v10 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v10;
    __VdlyVal__x_flip_pipe__v10 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v10;
    __VdlySet__x_flip_pipe__v10 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v11;
    __VdlyVal__valid_pipe__v11 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v21;
    __VdlyVal__x_pipe__v21 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v21;
    __VdlySet__x_pipe__v21 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v21;
    __VdlyVal__total_angle_pipe__v21 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v21;
    __VdlyVal__y_pipe__v21 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v22;
    __VdlyVal__total_angle_pipe__v22 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v22;
    __VdlySet__total_angle_pipe__v22 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v22;
    __VdlyVal__x_pipe__v22 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v22;
    __VdlyVal__y_pipe__v22 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v11;
    __VdlyVal__desired_angle_pipe__v11 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v11;
    __VdlySet__desired_angle_pipe__v11 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v11;
    __VdlyVal__x_flip_pipe__v11 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v11;
    __VdlySet__x_flip_pipe__v11 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v12;
    __VdlyVal__valid_pipe__v12 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v23;
    __VdlyVal__x_pipe__v23 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v23;
    __VdlySet__x_pipe__v23 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v23;
    __VdlyVal__total_angle_pipe__v23 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v23;
    __VdlyVal__y_pipe__v23 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v24;
    __VdlyVal__total_angle_pipe__v24 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v24;
    __VdlySet__total_angle_pipe__v24 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v24;
    __VdlyVal__x_pipe__v24 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v24;
    __VdlyVal__y_pipe__v24 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v12;
    __VdlyVal__desired_angle_pipe__v12 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v12;
    __VdlySet__desired_angle_pipe__v12 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v12;
    __VdlyVal__x_flip_pipe__v12 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v12;
    __VdlySet__x_flip_pipe__v12 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v13;
    __VdlyVal__valid_pipe__v13 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v25;
    __VdlyVal__x_pipe__v25 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v25;
    __VdlySet__x_pipe__v25 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v25;
    __VdlyVal__total_angle_pipe__v25 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v25;
    __VdlyVal__y_pipe__v25 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v26;
    __VdlyVal__total_angle_pipe__v26 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v26;
    __VdlySet__total_angle_pipe__v26 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v26;
    __VdlyVal__x_pipe__v26 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v26;
    __VdlyVal__y_pipe__v26 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v13;
    __VdlyVal__desired_angle_pipe__v13 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v13;
    __VdlySet__desired_angle_pipe__v13 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v13;
    __VdlyVal__x_flip_pipe__v13 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v13;
    __VdlySet__x_flip_pipe__v13 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v14;
    __VdlyVal__valid_pipe__v14 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v27;
    __VdlyVal__x_pipe__v27 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v27;
    __VdlySet__x_pipe__v27 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v27;
    __VdlyVal__total_angle_pipe__v27 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v27;
    __VdlyVal__y_pipe__v27 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v28;
    __VdlyVal__total_angle_pipe__v28 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v28;
    __VdlySet__total_angle_pipe__v28 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v28;
    __VdlyVal__x_pipe__v28 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v28;
    __VdlyVal__y_pipe__v28 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v14;
    __VdlyVal__desired_angle_pipe__v14 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v14;
    __VdlySet__desired_angle_pipe__v14 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v14;
    __VdlyVal__x_flip_pipe__v14 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v14;
    __VdlySet__x_flip_pipe__v14 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v15;
    __VdlyVal__valid_pipe__v15 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v29;
    __VdlyVal__x_pipe__v29 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v29;
    __VdlySet__x_pipe__v29 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v29;
    __VdlyVal__total_angle_pipe__v29 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v29;
    __VdlyVal__y_pipe__v29 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v30;
    __VdlyVal__total_angle_pipe__v30 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v30;
    __VdlySet__total_angle_pipe__v30 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v30;
    __VdlyVal__x_pipe__v30 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v30;
    __VdlyVal__y_pipe__v30 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v15;
    __VdlyVal__desired_angle_pipe__v15 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v15;
    __VdlySet__desired_angle_pipe__v15 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v15;
    __VdlyVal__x_flip_pipe__v15 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v15;
    __VdlySet__x_flip_pipe__v15 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v16;
    __VdlyVal__valid_pipe__v16 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v31;
    __VdlyVal__x_pipe__v31 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v31;
    __VdlySet__x_pipe__v31 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v31;
    __VdlyVal__y_pipe__v31 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v32;
    __VdlyVal__x_pipe__v32 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v32;
    __VdlySet__x_pipe__v32 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v32;
    __VdlyVal__y_pipe__v32 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v31;
    __VdlyVal__total_angle_pipe__v31 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v31;
    __VdlySet__total_angle_pipe__v31 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v16;
    __VdlyVal__desired_angle_pipe__v16 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v16;
    __VdlyVal__x_flip_pipe__v16 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v16;
    __VdlySet__x_flip_pipe__v16 = 0;
    // Body
    __VdlySet__desired_angle_pipe__v0 = 0U;
    __VdlySet__total_angle_pipe__v0 = 0U;
    __VdlySet__y_pipe__v0 = 0U;
    __VdlySet__x_pipe__v0 = 0U;
    __VdlySet__x_flip_pipe__v0 = 0U;
    __VdlySet__x_flip_pipe__v1 = 0U;
    __VdlySet__x_flip_pipe__v2 = 0U;
    __VdlySet__x_flip_pipe__v3 = 0U;
    __VdlySet__x_flip_pipe__v4 = 0U;
    __VdlySet__x_flip_pipe__v5 = 0U;
    __VdlySet__x_flip_pipe__v6 = 0U;
    __VdlySet__x_flip_pipe__v7 = 0U;
    __VdlySet__x_flip_pipe__v8 = 0U;
    __VdlySet__x_flip_pipe__v9 = 0U;
    __VdlySet__x_flip_pipe__v10 = 0U;
    __VdlySet__x_flip_pipe__v11 = 0U;
    __VdlySet__x_flip_pipe__v12 = 0U;
    __VdlySet__x_flip_pipe__v13 = 0U;
    __VdlySet__x_flip_pipe__v14 = 0U;
    __VdlySet__x_flip_pipe__v15 = 0U;
    __VdlySet__x_flip_pipe__v16 = 0U;
    __VdlySet__total_angle_pipe__v31 = 0U;
    __VdlySet__desired_angle_pipe__v1 = 0U;
    __VdlySet__desired_angle_pipe__v2 = 0U;
    __VdlySet__desired_angle_pipe__v3 = 0U;
    __VdlySet__desired_angle_pipe__v4 = 0U;
    __VdlySet__desired_angle_pipe__v5 = 0U;
    __VdlySet__desired_angle_pipe__v6 = 0U;
    __VdlySet__desired_angle_pipe__v7 = 0U;
    __VdlySet__desired_angle_pipe__v8 = 0U;
    __VdlySet__desired_angle_pipe__v9 = 0U;
    __VdlySet__desired_angle_pipe__v10 = 0U;
    __VdlySet__desired_angle_pipe__v11 = 0U;
    __VdlySet__desired_angle_pipe__v12 = 0U;
    __VdlySet__desired_angle_pipe__v13 = 0U;
    __VdlySet__desired_angle_pipe__v14 = 0U;
    __VdlySet__desired_angle_pipe__v15 = 0U;
    __VdlySet__x_pipe__v31 = 0U;
    __VdlySet__x_pipe__v32 = 0U;
    __VdlySet__total_angle_pipe__v2 = 0U;
    __VdlySet__total_angle_pipe__v4 = 0U;
    __VdlySet__total_angle_pipe__v6 = 0U;
    __VdlySet__total_angle_pipe__v8 = 0U;
    __VdlySet__total_angle_pipe__v10 = 0U;
    __VdlySet__total_angle_pipe__v12 = 0U;
    __VdlySet__total_angle_pipe__v14 = 0U;
    __VdlySet__total_angle_pipe__v16 = 0U;
    __VdlySet__total_angle_pipe__v18 = 0U;
    __VdlySet__total_angle_pipe__v20 = 0U;
    __VdlySet__total_angle_pipe__v22 = 0U;
    __VdlySet__total_angle_pipe__v24 = 0U;
    __VdlySet__total_angle_pipe__v26 = 0U;
    __VdlySet__total_angle_pipe__v28 = 0U;
    __VdlySet__total_angle_pipe__v30 = 0U;
    __VdlySet__x_pipe__v1 = 0U;
    __VdlySet__x_pipe__v3 = 0U;
    __VdlySet__x_pipe__v5 = 0U;
    __VdlySet__x_pipe__v7 = 0U;
    __VdlySet__x_pipe__v9 = 0U;
    __VdlySet__x_pipe__v11 = 0U;
    __VdlySet__x_pipe__v13 = 0U;
    __VdlySet__x_pipe__v15 = 0U;
    __VdlySet__x_pipe__v17 = 0U;
    __VdlySet__x_pipe__v19 = 0U;
    __VdlySet__x_pipe__v21 = 0U;
    __VdlySet__x_pipe__v23 = 0U;
    __VdlySet__x_pipe__v25 = 0U;
    __VdlySet__x_pipe__v27 = 0U;
    __VdlySet__x_pipe__v29 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.rst)))) {
        if ((0x00008000U & (IData)(vlSelfRef.angle))) {
            __VdlyVal__desired_angle_pipe__v0 = (0x0000ffffU 
                                                 & ((0x00004000U 
                                                     & (IData)(vlSelfRef.angle))
                                                     ? (IData)(vlSelfRef.angle)
                                                     : 
                                                    ((IData)(0x8000U) 
                                                     - 
                                                     VL_EXTENDS_II(16,16, (IData)(vlSelfRef.angle)))));
            __VdlyVal__x_flip_pipe__v0 = (1U & (~ ((IData)(vlSelfRef.angle) 
                                                   >> 0x0000000eU)));
        } else {
            __VdlyVal__desired_angle_pipe__v0 = (0x0000ffffU 
                                                 & ((0x00004000U 
                                                     & (IData)(vlSelfRef.angle))
                                                     ? 
                                                    ((IData)(0x8000U) 
                                                     - 
                                                     VL_EXTENDS_II(16,16, (IData)(vlSelfRef.angle)))
                                                     : (IData)(vlSelfRef.angle)));
            __VdlyVal__x_flip_pipe__v0 = (1U & ((IData)(vlSelfRef.angle) 
                                                >> 0x0000000eU));
        }
        __VdlySet__desired_angle_pipe__v0 = 1U;
        __VdlySet__total_angle_pipe__v0 = 1U;
        __VdlySet__y_pipe__v0 = 1U;
        __VdlySet__x_pipe__v0 = 1U;
        __VdlySet__x_flip_pipe__v0 = 1U;
        __VdlyVal__x_flip_pipe__v1 = vlSelfRef.x_flip_pipe[0U];
        __VdlySet__x_flip_pipe__v1 = 1U;
        __VdlyVal__x_flip_pipe__v2 = vlSelfRef.x_flip_pipe[1U];
        __VdlySet__x_flip_pipe__v2 = 1U;
        __VdlyVal__x_flip_pipe__v3 = vlSelfRef.x_flip_pipe[2U];
        __VdlySet__x_flip_pipe__v3 = 1U;
        __VdlyVal__x_flip_pipe__v4 = vlSelfRef.x_flip_pipe[3U];
        __VdlySet__x_flip_pipe__v4 = 1U;
        __VdlyVal__x_flip_pipe__v5 = vlSelfRef.x_flip_pipe[4U];
        __VdlySet__x_flip_pipe__v5 = 1U;
        __VdlyVal__x_flip_pipe__v6 = vlSelfRef.x_flip_pipe[5U];
        __VdlySet__x_flip_pipe__v6 = 1U;
        __VdlyVal__x_flip_pipe__v7 = vlSelfRef.x_flip_pipe[6U];
        __VdlySet__x_flip_pipe__v7 = 1U;
        __VdlyVal__x_flip_pipe__v8 = vlSelfRef.x_flip_pipe[7U];
        __VdlySet__x_flip_pipe__v8 = 1U;
        __VdlyVal__x_flip_pipe__v9 = vlSelfRef.x_flip_pipe[8U];
        __VdlySet__x_flip_pipe__v9 = 1U;
        __VdlyVal__x_flip_pipe__v10 = vlSelfRef.x_flip_pipe[9U];
        __VdlySet__x_flip_pipe__v10 = 1U;
        __VdlyVal__x_flip_pipe__v11 = vlSelfRef.x_flip_pipe[10U];
        __VdlySet__x_flip_pipe__v11 = 1U;
        __VdlyVal__x_flip_pipe__v12 = vlSelfRef.x_flip_pipe[11U];
        __VdlySet__x_flip_pipe__v12 = 1U;
        __VdlyVal__x_flip_pipe__v13 = vlSelfRef.x_flip_pipe[12U];
        __VdlySet__x_flip_pipe__v13 = 1U;
        __VdlyVal__x_flip_pipe__v14 = vlSelfRef.x_flip_pipe[13U];
        __VdlySet__x_flip_pipe__v14 = 1U;
        __VdlyVal__x_flip_pipe__v15 = vlSelfRef.x_flip_pipe[14U];
        __VdlySet__x_flip_pipe__v15 = 1U;
        __VdlyVal__x_flip_pipe__v16 = vlSelfRef.x_flip_pipe[15U];
        __VdlySet__x_flip_pipe__v16 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[15U], vlSelfRef.desired_angle_pipe[15U])) {
            __VdlyVal__x_pipe__v31 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[15U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[15U], 0x0000000fU)));
            __VdlySet__x_pipe__v31 = 1U;
            __VdlyVal__y_pipe__v31 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[15U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[15U], 0x0000000fU)));
        } else {
            __VdlyVal__x_pipe__v32 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[15U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[15U], 0x0000000fU)));
            __VdlySet__x_pipe__v32 = 1U;
            __VdlyVal__y_pipe__v32 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[15U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[15U], 0x0000000fU)));
        }
        __VdlyVal__total_angle_pipe__v31 = vlSelfRef.total_angle_pipe[15U];
        __VdlySet__total_angle_pipe__v31 = 1U;
        __VdlyVal__desired_angle_pipe__v16 = vlSelfRef.desired_angle_pipe[15U];
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[0U], vlSelfRef.desired_angle_pipe[0U])) {
            __VdlyVal__x_pipe__v1 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[0U] 
                                      - vlSelfRef.y_pipe[0U]));
            __VdlySet__x_pipe__v1 = 1U;
            __VdlyVal__total_angle_pipe__v1 = (0x0000ffffU 
                                               & ((IData)(0x2000U) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[0U])));
            __VdlyVal__y_pipe__v1 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[0U] 
                                      + vlSelfRef.x_pipe[0U]));
        } else {
            __VdlyVal__total_angle_pipe__v2 = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.total_angle_pipe[0U]) 
                                                  - (IData)(0x2000U)));
            __VdlySet__total_angle_pipe__v2 = 1U;
            __VdlyVal__x_pipe__v2 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[0U] 
                                      + vlSelfRef.y_pipe[0U]));
            __VdlyVal__y_pipe__v2 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[0U] 
                                      - vlSelfRef.x_pipe[0U]));
        }
        __VdlyVal__desired_angle_pipe__v1 = vlSelfRef.desired_angle_pipe[0U];
        __VdlySet__desired_angle_pipe__v1 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[1U], vlSelfRef.desired_angle_pipe[1U])) {
            __VdlyVal__x_pipe__v3 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[1U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[1U], 1U)));
            __VdlySet__x_pipe__v3 = 1U;
            __VdlyVal__total_angle_pipe__v3 = (0x0000ffffU 
                                               & ((IData)(0x12e4U) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[1U])));
            __VdlyVal__y_pipe__v3 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[1U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[1U], 1U)));
        } else {
            __VdlyVal__total_angle_pipe__v4 = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.total_angle_pipe[1U]) 
                                                  - (IData)(0x12e4U)));
            __VdlySet__total_angle_pipe__v4 = 1U;
            __VdlyVal__x_pipe__v4 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[1U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[1U], 1U)));
            __VdlyVal__y_pipe__v4 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[1U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[1U], 1U)));
        }
        __VdlyVal__desired_angle_pipe__v2 = vlSelfRef.desired_angle_pipe[1U];
        __VdlySet__desired_angle_pipe__v2 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[2U], vlSelfRef.desired_angle_pipe[2U])) {
            __VdlyVal__x_pipe__v5 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[2U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[2U], 2U)));
            __VdlySet__x_pipe__v5 = 1U;
            __VdlyVal__total_angle_pipe__v5 = (0x0000ffffU 
                                               & ((IData)(0x09fbU) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[2U])));
            __VdlyVal__y_pipe__v5 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[2U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[2U], 2U)));
        } else {
            __VdlyVal__total_angle_pipe__v6 = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.total_angle_pipe[2U]) 
                                                  - (IData)(0x09fbU)));
            __VdlySet__total_angle_pipe__v6 = 1U;
            __VdlyVal__x_pipe__v6 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[2U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[2U], 2U)));
            __VdlyVal__y_pipe__v6 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[2U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[2U], 2U)));
        }
        __VdlyVal__desired_angle_pipe__v3 = vlSelfRef.desired_angle_pipe[2U];
        __VdlySet__desired_angle_pipe__v3 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[3U], vlSelfRef.desired_angle_pipe[3U])) {
            __VdlyVal__x_pipe__v7 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[3U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[3U], 3U)));
            __VdlySet__x_pipe__v7 = 1U;
            __VdlyVal__total_angle_pipe__v7 = (0x0000ffffU 
                                               & ((IData)(0x0511U) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[3U])));
            __VdlyVal__y_pipe__v7 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[3U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[3U], 3U)));
        } else {
            __VdlyVal__total_angle_pipe__v8 = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.total_angle_pipe[3U]) 
                                                  - (IData)(0x0511U)));
            __VdlySet__total_angle_pipe__v8 = 1U;
            __VdlyVal__x_pipe__v8 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[3U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[3U], 3U)));
            __VdlyVal__y_pipe__v8 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[3U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[3U], 3U)));
        }
        __VdlyVal__desired_angle_pipe__v4 = vlSelfRef.desired_angle_pipe[3U];
        __VdlySet__desired_angle_pipe__v4 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[4U], vlSelfRef.desired_angle_pipe[4U])) {
            __VdlyVal__x_pipe__v9 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[4U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[4U], 4U)));
            __VdlySet__x_pipe__v9 = 1U;
            __VdlyVal__total_angle_pipe__v9 = (0x0000ffffU 
                                               & ((IData)(0x028bU) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[4U])));
            __VdlyVal__y_pipe__v9 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[4U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[4U], 4U)));
        } else {
            __VdlyVal__total_angle_pipe__v10 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[4U]) 
                                                   - (IData)(0x028bU)));
            __VdlySet__total_angle_pipe__v10 = 1U;
            __VdlyVal__x_pipe__v10 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[4U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[4U], 4U)));
            __VdlyVal__y_pipe__v10 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[4U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[4U], 4U)));
        }
        __VdlyVal__desired_angle_pipe__v5 = vlSelfRef.desired_angle_pipe[4U];
        __VdlySet__desired_angle_pipe__v5 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[5U], vlSelfRef.desired_angle_pipe[5U])) {
            __VdlyVal__x_pipe__v11 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[5U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[5U], 5U)));
            __VdlySet__x_pipe__v11 = 1U;
            __VdlyVal__total_angle_pipe__v11 = (0x0000ffffU 
                                                & ((IData)(0x0146U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[5U])));
            __VdlyVal__y_pipe__v11 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[5U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[5U], 5U)));
        } else {
            __VdlyVal__total_angle_pipe__v12 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[5U]) 
                                                   - (IData)(0x0146U)));
            __VdlySet__total_angle_pipe__v12 = 1U;
            __VdlyVal__x_pipe__v12 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[5U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[5U], 5U)));
            __VdlyVal__y_pipe__v12 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[5U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[5U], 5U)));
        }
        __VdlyVal__desired_angle_pipe__v6 = vlSelfRef.desired_angle_pipe[5U];
        __VdlySet__desired_angle_pipe__v6 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[6U], vlSelfRef.desired_angle_pipe[6U])) {
            __VdlyVal__x_pipe__v13 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[6U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[6U], 6U)));
            __VdlySet__x_pipe__v13 = 1U;
            __VdlyVal__total_angle_pipe__v13 = (0x0000ffffU 
                                                & ((IData)(0x00a3U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[6U])));
            __VdlyVal__y_pipe__v13 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[6U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[6U], 6U)));
        } else {
            __VdlyVal__total_angle_pipe__v14 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[6U]) 
                                                   - (IData)(0x00a3U)));
            __VdlySet__total_angle_pipe__v14 = 1U;
            __VdlyVal__x_pipe__v14 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[6U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[6U], 6U)));
            __VdlyVal__y_pipe__v14 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[6U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[6U], 6U)));
        }
        __VdlyVal__desired_angle_pipe__v7 = vlSelfRef.desired_angle_pipe[6U];
        __VdlySet__desired_angle_pipe__v7 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[7U], vlSelfRef.desired_angle_pipe[7U])) {
            __VdlyVal__x_pipe__v15 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[7U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[7U], 7U)));
            __VdlySet__x_pipe__v15 = 1U;
            __VdlyVal__total_angle_pipe__v15 = (0x0000ffffU 
                                                & ((IData)(0x0051U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[7U])));
            __VdlyVal__y_pipe__v15 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[7U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[7U], 7U)));
        } else {
            __VdlyVal__total_angle_pipe__v16 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[7U]) 
                                                   - (IData)(0x0051U)));
            __VdlySet__total_angle_pipe__v16 = 1U;
            __VdlyVal__x_pipe__v16 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[7U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[7U], 7U)));
            __VdlyVal__y_pipe__v16 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[7U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[7U], 7U)));
        }
        __VdlyVal__desired_angle_pipe__v8 = vlSelfRef.desired_angle_pipe[7U];
        __VdlySet__desired_angle_pipe__v8 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[8U], vlSelfRef.desired_angle_pipe[8U])) {
            __VdlyVal__x_pipe__v17 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[8U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[8U], 8U)));
            __VdlySet__x_pipe__v17 = 1U;
            __VdlyVal__total_angle_pipe__v17 = (0x0000ffffU 
                                                & ((IData)(0x0029U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[8U])));
            __VdlyVal__y_pipe__v17 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[8U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[8U], 8U)));
        } else {
            __VdlyVal__total_angle_pipe__v18 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[8U]) 
                                                   - (IData)(0x0029U)));
            __VdlySet__total_angle_pipe__v18 = 1U;
            __VdlyVal__x_pipe__v18 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[8U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[8U], 8U)));
            __VdlyVal__y_pipe__v18 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[8U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[8U], 8U)));
        }
        __VdlyVal__desired_angle_pipe__v9 = vlSelfRef.desired_angle_pipe[8U];
        __VdlySet__desired_angle_pipe__v9 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[9U], vlSelfRef.desired_angle_pipe[9U])) {
            __VdlyVal__x_pipe__v19 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[9U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[9U], 9U)));
            __VdlySet__x_pipe__v19 = 1U;
            __VdlyVal__total_angle_pipe__v19 = (0x0000ffffU 
                                                & ((IData)(0x0014U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[9U])));
            __VdlyVal__y_pipe__v19 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[9U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[9U], 9U)));
        } else {
            __VdlyVal__total_angle_pipe__v20 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[9U]) 
                                                   - (IData)(0x0014U)));
            __VdlySet__total_angle_pipe__v20 = 1U;
            __VdlyVal__x_pipe__v20 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[9U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[9U], 9U)));
            __VdlyVal__y_pipe__v20 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[9U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[9U], 9U)));
        }
        __VdlyVal__desired_angle_pipe__v10 = vlSelfRef.desired_angle_pipe[9U];
        __VdlySet__desired_angle_pipe__v10 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[10U], vlSelfRef.desired_angle_pipe[10U])) {
            __VdlyVal__x_pipe__v21 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[10U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[10U], 0x0000000aU)));
            __VdlySet__x_pipe__v21 = 1U;
            __VdlyVal__total_angle_pipe__v21 = (0x0000ffffU 
                                                & ((IData)(0x000aU) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[10U])));
            __VdlyVal__y_pipe__v21 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[10U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[10U], 0x0000000aU)));
        } else {
            __VdlyVal__total_angle_pipe__v22 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[10U]) 
                                                   - (IData)(0x000aU)));
            __VdlySet__total_angle_pipe__v22 = 1U;
            __VdlyVal__x_pipe__v22 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[10U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[10U], 0x0000000aU)));
            __VdlyVal__y_pipe__v22 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[10U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[10U], 0x0000000aU)));
        }
        __VdlyVal__desired_angle_pipe__v11 = vlSelfRef.desired_angle_pipe[10U];
        __VdlySet__desired_angle_pipe__v11 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[11U], vlSelfRef.desired_angle_pipe[11U])) {
            __VdlyVal__x_pipe__v23 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[11U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[11U], 0x0000000bU)));
            __VdlySet__x_pipe__v23 = 1U;
            __VdlyVal__total_angle_pipe__v23 = (0x0000ffffU 
                                                & ((IData)(5U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[11U])));
            __VdlyVal__y_pipe__v23 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[11U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[11U], 0x0000000bU)));
        } else {
            __VdlyVal__total_angle_pipe__v24 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[11U]) 
                                                   - (IData)(5U)));
            __VdlySet__total_angle_pipe__v24 = 1U;
            __VdlyVal__x_pipe__v24 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[11U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[11U], 0x0000000bU)));
            __VdlyVal__y_pipe__v24 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[11U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[11U], 0x0000000bU)));
        }
        __VdlyVal__desired_angle_pipe__v12 = vlSelfRef.desired_angle_pipe[11U];
        __VdlySet__desired_angle_pipe__v12 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[12U], vlSelfRef.desired_angle_pipe[12U])) {
            __VdlyVal__x_pipe__v25 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[12U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[12U], 0x0000000cU)));
            __VdlySet__x_pipe__v25 = 1U;
            __VdlyVal__total_angle_pipe__v25 = (0x0000ffffU 
                                                & ((IData)(3U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[12U])));
            __VdlyVal__y_pipe__v25 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[12U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[12U], 0x0000000cU)));
        } else {
            __VdlyVal__total_angle_pipe__v26 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[12U]) 
                                                   - (IData)(3U)));
            __VdlySet__total_angle_pipe__v26 = 1U;
            __VdlyVal__x_pipe__v26 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[12U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[12U], 0x0000000cU)));
            __VdlyVal__y_pipe__v26 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[12U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[12U], 0x0000000cU)));
        }
        __VdlyVal__desired_angle_pipe__v13 = vlSelfRef.desired_angle_pipe[12U];
        __VdlySet__desired_angle_pipe__v13 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[13U], vlSelfRef.desired_angle_pipe[13U])) {
            __VdlyVal__x_pipe__v27 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[13U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[13U], 0x0000000dU)));
            __VdlySet__x_pipe__v27 = 1U;
            __VdlyVal__total_angle_pipe__v27 = (0x0000ffffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[13U])));
            __VdlyVal__y_pipe__v27 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[13U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[13U], 0x0000000dU)));
        } else {
            __VdlyVal__total_angle_pipe__v28 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[13U]) 
                                                   - (IData)(1U)));
            __VdlySet__total_angle_pipe__v28 = 1U;
            __VdlyVal__x_pipe__v28 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[13U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[13U], 0x0000000dU)));
            __VdlyVal__y_pipe__v28 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[13U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[13U], 0x0000000dU)));
        }
        __VdlyVal__desired_angle_pipe__v14 = vlSelfRef.desired_angle_pipe[13U];
        __VdlySet__desired_angle_pipe__v14 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[14U], vlSelfRef.desired_angle_pipe[14U])) {
            __VdlyVal__x_pipe__v29 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[14U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[14U], 0x0000000eU)));
            __VdlySet__x_pipe__v29 = 1U;
            __VdlyVal__total_angle_pipe__v29 = (0x0000ffffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[14U])));
            __VdlyVal__y_pipe__v29 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[14U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[14U], 0x0000000eU)));
        } else {
            __VdlyVal__total_angle_pipe__v30 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[14U]) 
                                                   - (IData)(1U)));
            __VdlySet__total_angle_pipe__v30 = 1U;
            __VdlyVal__x_pipe__v30 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[14U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[14U], 0x0000000eU)));
            __VdlyVal__y_pipe__v30 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[14U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[14U], 0x0000000eU)));
        }
        __VdlyVal__desired_angle_pipe__v15 = vlSelfRef.desired_angle_pipe[14U];
        __VdlySet__desired_angle_pipe__v15 = 1U;
    }
    __VdlyVal__valid_pipe__v0 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && (IData)(vlSelfRef.data_angle_valid_in));
    __VdlyVal__valid_pipe__v1 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[0U]);
    __VdlyVal__valid_pipe__v2 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[1U]);
    __VdlyVal__valid_pipe__v3 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[2U]);
    __VdlyVal__valid_pipe__v4 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[3U]);
    __VdlyVal__valid_pipe__v5 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[4U]);
    __VdlyVal__valid_pipe__v6 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[5U]);
    __VdlyVal__valid_pipe__v7 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[6U]);
    __VdlyVal__valid_pipe__v8 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[7U]);
    __VdlyVal__valid_pipe__v9 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[8U]);
    __VdlyVal__valid_pipe__v10 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[9U]);
    __VdlyVal__valid_pipe__v11 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[10U]);
    __VdlyVal__valid_pipe__v12 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[11U]);
    __VdlyVal__valid_pipe__v13 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[12U]);
    __VdlyVal__valid_pipe__v14 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[13U]);
    __VdlyVal__valid_pipe__v15 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[14U]);
    __VdlyVal__valid_pipe__v16 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[15U]);
    vlSelfRef.valid_pipe[0U] = __VdlyVal__valid_pipe__v0;
    vlSelfRef.valid_pipe[1U] = __VdlyVal__valid_pipe__v1;
    vlSelfRef.valid_pipe[2U] = __VdlyVal__valid_pipe__v2;
    vlSelfRef.valid_pipe[3U] = __VdlyVal__valid_pipe__v3;
    vlSelfRef.valid_pipe[4U] = __VdlyVal__valid_pipe__v4;
    vlSelfRef.valid_pipe[5U] = __VdlyVal__valid_pipe__v5;
    vlSelfRef.valid_pipe[6U] = __VdlyVal__valid_pipe__v6;
    vlSelfRef.valid_pipe[7U] = __VdlyVal__valid_pipe__v7;
    vlSelfRef.valid_pipe[8U] = __VdlyVal__valid_pipe__v8;
    vlSelfRef.valid_pipe[9U] = __VdlyVal__valid_pipe__v9;
    vlSelfRef.valid_pipe[10U] = __VdlyVal__valid_pipe__v10;
    vlSelfRef.valid_pipe[11U] = __VdlyVal__valid_pipe__v11;
    vlSelfRef.valid_pipe[12U] = __VdlyVal__valid_pipe__v12;
    vlSelfRef.valid_pipe[13U] = __VdlyVal__valid_pipe__v13;
    vlSelfRef.valid_pipe[14U] = __VdlyVal__valid_pipe__v14;
    vlSelfRef.valid_pipe[15U] = __VdlyVal__valid_pipe__v15;
    vlSelfRef.valid_pipe[16U] = __VdlyVal__valid_pipe__v16;
    if (__VdlySet__x_flip_pipe__v0) {
        vlSelfRef.x_flip_pipe[0U] = __VdlyVal__x_flip_pipe__v0;
    }
    if (__VdlySet__x_flip_pipe__v1) {
        vlSelfRef.x_flip_pipe[1U] = __VdlyVal__x_flip_pipe__v1;
    }
    if (__VdlySet__x_flip_pipe__v2) {
        vlSelfRef.x_flip_pipe[2U] = __VdlyVal__x_flip_pipe__v2;
    }
    if (__VdlySet__x_flip_pipe__v3) {
        vlSelfRef.x_flip_pipe[3U] = __VdlyVal__x_flip_pipe__v3;
    }
    if (__VdlySet__x_flip_pipe__v4) {
        vlSelfRef.x_flip_pipe[4U] = __VdlyVal__x_flip_pipe__v4;
    }
    if (__VdlySet__x_flip_pipe__v5) {
        vlSelfRef.x_flip_pipe[5U] = __VdlyVal__x_flip_pipe__v5;
    }
    if (__VdlySet__x_flip_pipe__v6) {
        vlSelfRef.x_flip_pipe[6U] = __VdlyVal__x_flip_pipe__v6;
    }
    if (__VdlySet__x_flip_pipe__v7) {
        vlSelfRef.x_flip_pipe[7U] = __VdlyVal__x_flip_pipe__v7;
    }
    if (__VdlySet__x_flip_pipe__v8) {
        vlSelfRef.x_flip_pipe[8U] = __VdlyVal__x_flip_pipe__v8;
    }
    if (__VdlySet__x_flip_pipe__v9) {
        vlSelfRef.x_flip_pipe[9U] = __VdlyVal__x_flip_pipe__v9;
    }
    if (__VdlySet__x_flip_pipe__v10) {
        vlSelfRef.x_flip_pipe[10U] = __VdlyVal__x_flip_pipe__v10;
    }
    if (__VdlySet__x_flip_pipe__v11) {
        vlSelfRef.x_flip_pipe[11U] = __VdlyVal__x_flip_pipe__v11;
    }
    if (__VdlySet__x_flip_pipe__v12) {
        vlSelfRef.x_flip_pipe[12U] = __VdlyVal__x_flip_pipe__v12;
    }
    if (__VdlySet__x_flip_pipe__v13) {
        vlSelfRef.x_flip_pipe[13U] = __VdlyVal__x_flip_pipe__v13;
    }
    if (__VdlySet__x_flip_pipe__v14) {
        vlSelfRef.x_flip_pipe[14U] = __VdlyVal__x_flip_pipe__v14;
    }
    if (__VdlySet__x_flip_pipe__v15) {
        vlSelfRef.x_flip_pipe[15U] = __VdlyVal__x_flip_pipe__v15;
    }
    if (__VdlySet__x_flip_pipe__v16) {
        vlSelfRef.x_flip_pipe[16U] = __VdlyVal__x_flip_pipe__v16;
    }
    if (__VdlySet__desired_angle_pipe__v0) {
        vlSelfRef.desired_angle_pipe[0U] = __VdlyVal__desired_angle_pipe__v0;
    }
    if (__VdlySet__desired_angle_pipe__v1) {
        vlSelfRef.desired_angle_pipe[1U] = __VdlyVal__desired_angle_pipe__v1;
    }
    if (__VdlySet__desired_angle_pipe__v2) {
        vlSelfRef.desired_angle_pipe[2U] = __VdlyVal__desired_angle_pipe__v2;
    }
    if (__VdlySet__desired_angle_pipe__v3) {
        vlSelfRef.desired_angle_pipe[3U] = __VdlyVal__desired_angle_pipe__v3;
    }
    if (__VdlySet__desired_angle_pipe__v4) {
        vlSelfRef.desired_angle_pipe[4U] = __VdlyVal__desired_angle_pipe__v4;
    }
    if (__VdlySet__desired_angle_pipe__v5) {
        vlSelfRef.desired_angle_pipe[5U] = __VdlyVal__desired_angle_pipe__v5;
    }
    if (__VdlySet__desired_angle_pipe__v6) {
        vlSelfRef.desired_angle_pipe[6U] = __VdlyVal__desired_angle_pipe__v6;
    }
    if (__VdlySet__desired_angle_pipe__v7) {
        vlSelfRef.desired_angle_pipe[7U] = __VdlyVal__desired_angle_pipe__v7;
    }
    if (__VdlySet__desired_angle_pipe__v8) {
        vlSelfRef.desired_angle_pipe[8U] = __VdlyVal__desired_angle_pipe__v8;
    }
    if (__VdlySet__desired_angle_pipe__v9) {
        vlSelfRef.desired_angle_pipe[9U] = __VdlyVal__desired_angle_pipe__v9;
    }
    if (__VdlySet__desired_angle_pipe__v10) {
        vlSelfRef.desired_angle_pipe[10U] = __VdlyVal__desired_angle_pipe__v10;
    }
    if (__VdlySet__desired_angle_pipe__v11) {
        vlSelfRef.desired_angle_pipe[11U] = __VdlyVal__desired_angle_pipe__v11;
    }
    if (__VdlySet__desired_angle_pipe__v12) {
        vlSelfRef.desired_angle_pipe[12U] = __VdlyVal__desired_angle_pipe__v12;
    }
    if (__VdlySet__desired_angle_pipe__v13) {
        vlSelfRef.desired_angle_pipe[13U] = __VdlyVal__desired_angle_pipe__v13;
    }
    if (__VdlySet__desired_angle_pipe__v14) {
        vlSelfRef.desired_angle_pipe[14U] = __VdlyVal__desired_angle_pipe__v14;
    }
    if (__VdlySet__desired_angle_pipe__v15) {
        vlSelfRef.desired_angle_pipe[15U] = __VdlyVal__desired_angle_pipe__v15;
    }
    if (__VdlySet__total_angle_pipe__v0) {
        vlSelfRef.total_angle_pipe[0U] = 0U;
    }
    if (__VdlySet__x_pipe__v1) {
        vlSelfRef.total_angle_pipe[1U] = __VdlyVal__total_angle_pipe__v1;
    }
    if (__VdlySet__total_angle_pipe__v2) {
        vlSelfRef.total_angle_pipe[1U] = __VdlyVal__total_angle_pipe__v2;
    }
    if (__VdlySet__x_pipe__v3) {
        vlSelfRef.total_angle_pipe[2U] = __VdlyVal__total_angle_pipe__v3;
    }
    if (__VdlySet__total_angle_pipe__v4) {
        vlSelfRef.total_angle_pipe[2U] = __VdlyVal__total_angle_pipe__v4;
    }
    if (__VdlySet__x_pipe__v5) {
        vlSelfRef.total_angle_pipe[3U] = __VdlyVal__total_angle_pipe__v5;
    }
    if (__VdlySet__total_angle_pipe__v6) {
        vlSelfRef.total_angle_pipe[3U] = __VdlyVal__total_angle_pipe__v6;
    }
    if (__VdlySet__x_pipe__v7) {
        vlSelfRef.total_angle_pipe[4U] = __VdlyVal__total_angle_pipe__v7;
    }
    if (__VdlySet__total_angle_pipe__v8) {
        vlSelfRef.total_angle_pipe[4U] = __VdlyVal__total_angle_pipe__v8;
    }
    if (__VdlySet__x_pipe__v9) {
        vlSelfRef.total_angle_pipe[5U] = __VdlyVal__total_angle_pipe__v9;
    }
    if (__VdlySet__total_angle_pipe__v10) {
        vlSelfRef.total_angle_pipe[5U] = __VdlyVal__total_angle_pipe__v10;
    }
    if (__VdlySet__x_pipe__v11) {
        vlSelfRef.total_angle_pipe[6U] = __VdlyVal__total_angle_pipe__v11;
    }
    if (__VdlySet__total_angle_pipe__v12) {
        vlSelfRef.total_angle_pipe[6U] = __VdlyVal__total_angle_pipe__v12;
    }
    if (__VdlySet__x_pipe__v13) {
        vlSelfRef.total_angle_pipe[7U] = __VdlyVal__total_angle_pipe__v13;
    }
    if (__VdlySet__total_angle_pipe__v14) {
        vlSelfRef.total_angle_pipe[7U] = __VdlyVal__total_angle_pipe__v14;
    }
    if (__VdlySet__x_pipe__v15) {
        vlSelfRef.total_angle_pipe[8U] = __VdlyVal__total_angle_pipe__v15;
    }
    if (__VdlySet__total_angle_pipe__v16) {
        vlSelfRef.total_angle_pipe[8U] = __VdlyVal__total_angle_pipe__v16;
    }
    if (__VdlySet__x_pipe__v17) {
        vlSelfRef.total_angle_pipe[9U] = __VdlyVal__total_angle_pipe__v17;
    }
    if (__VdlySet__total_angle_pipe__v18) {
        vlSelfRef.total_angle_pipe[9U] = __VdlyVal__total_angle_pipe__v18;
    }
    if (__VdlySet__x_pipe__v19) {
        vlSelfRef.total_angle_pipe[10U] = __VdlyVal__total_angle_pipe__v19;
    }
    if (__VdlySet__total_angle_pipe__v20) {
        vlSelfRef.total_angle_pipe[10U] = __VdlyVal__total_angle_pipe__v20;
    }
    if (__VdlySet__x_pipe__v21) {
        vlSelfRef.total_angle_pipe[11U] = __VdlyVal__total_angle_pipe__v21;
    }
    if (__VdlySet__total_angle_pipe__v22) {
        vlSelfRef.total_angle_pipe[11U] = __VdlyVal__total_angle_pipe__v22;
    }
    if (__VdlySet__x_pipe__v23) {
        vlSelfRef.total_angle_pipe[12U] = __VdlyVal__total_angle_pipe__v23;
    }
    if (__VdlySet__total_angle_pipe__v24) {
        vlSelfRef.total_angle_pipe[12U] = __VdlyVal__total_angle_pipe__v24;
    }
    if (__VdlySet__x_pipe__v25) {
        vlSelfRef.total_angle_pipe[13U] = __VdlyVal__total_angle_pipe__v25;
    }
    if (__VdlySet__total_angle_pipe__v26) {
        vlSelfRef.total_angle_pipe[13U] = __VdlyVal__total_angle_pipe__v26;
    }
    if (__VdlySet__x_pipe__v27) {
        vlSelfRef.total_angle_pipe[14U] = __VdlyVal__total_angle_pipe__v27;
    }
    if (__VdlySet__total_angle_pipe__v28) {
        vlSelfRef.total_angle_pipe[14U] = __VdlyVal__total_angle_pipe__v28;
    }
    if (__VdlySet__total_angle_pipe__v31) {
        vlSelfRef.desired_angle_pipe[16U] = __VdlyVal__desired_angle_pipe__v16;
    }
    if (__VdlySet__x_pipe__v29) {
        vlSelfRef.total_angle_pipe[15U] = __VdlyVal__total_angle_pipe__v29;
    }
    if (__VdlySet__total_angle_pipe__v30) {
        vlSelfRef.total_angle_pipe[15U] = __VdlyVal__total_angle_pipe__v30;
    }
    if (__VdlySet__total_angle_pipe__v31) {
        vlSelfRef.total_angle_pipe[16U] = __VdlyVal__total_angle_pipe__v31;
    }
    if (__VdlySet__y_pipe__v0) {
        vlSelfRef.y_pipe[0U] = 0U;
    }
    if (__VdlySet__x_pipe__v1) {
        vlSelfRef.y_pipe[1U] = __VdlyVal__y_pipe__v1;
    }
    if (__VdlySet__total_angle_pipe__v2) {
        vlSelfRef.y_pipe[1U] = __VdlyVal__y_pipe__v2;
    }
    if (__VdlySet__x_pipe__v3) {
        vlSelfRef.y_pipe[2U] = __VdlyVal__y_pipe__v3;
    }
    if (__VdlySet__total_angle_pipe__v4) {
        vlSelfRef.y_pipe[2U] = __VdlyVal__y_pipe__v4;
    }
    if (__VdlySet__x_pipe__v5) {
        vlSelfRef.y_pipe[3U] = __VdlyVal__y_pipe__v5;
    }
    if (__VdlySet__total_angle_pipe__v6) {
        vlSelfRef.y_pipe[3U] = __VdlyVal__y_pipe__v6;
    }
    if (__VdlySet__x_pipe__v7) {
        vlSelfRef.y_pipe[4U] = __VdlyVal__y_pipe__v7;
    }
    if (__VdlySet__total_angle_pipe__v8) {
        vlSelfRef.y_pipe[4U] = __VdlyVal__y_pipe__v8;
    }
    if (__VdlySet__x_pipe__v9) {
        vlSelfRef.y_pipe[5U] = __VdlyVal__y_pipe__v9;
    }
    if (__VdlySet__total_angle_pipe__v10) {
        vlSelfRef.y_pipe[5U] = __VdlyVal__y_pipe__v10;
    }
    if (__VdlySet__x_pipe__v11) {
        vlSelfRef.y_pipe[6U] = __VdlyVal__y_pipe__v11;
    }
    if (__VdlySet__total_angle_pipe__v12) {
        vlSelfRef.y_pipe[6U] = __VdlyVal__y_pipe__v12;
    }
    if (__VdlySet__x_pipe__v13) {
        vlSelfRef.y_pipe[7U] = __VdlyVal__y_pipe__v13;
    }
    if (__VdlySet__total_angle_pipe__v14) {
        vlSelfRef.y_pipe[7U] = __VdlyVal__y_pipe__v14;
    }
    if (__VdlySet__x_pipe__v15) {
        vlSelfRef.y_pipe[8U] = __VdlyVal__y_pipe__v15;
    }
    if (__VdlySet__total_angle_pipe__v16) {
        vlSelfRef.y_pipe[8U] = __VdlyVal__y_pipe__v16;
    }
    if (__VdlySet__x_pipe__v17) {
        vlSelfRef.y_pipe[9U] = __VdlyVal__y_pipe__v17;
    }
    if (__VdlySet__total_angle_pipe__v18) {
        vlSelfRef.y_pipe[9U] = __VdlyVal__y_pipe__v18;
    }
    if (__VdlySet__x_pipe__v19) {
        vlSelfRef.y_pipe[10U] = __VdlyVal__y_pipe__v19;
    }
    if (__VdlySet__total_angle_pipe__v20) {
        vlSelfRef.y_pipe[10U] = __VdlyVal__y_pipe__v20;
    }
    if (__VdlySet__x_pipe__v21) {
        vlSelfRef.y_pipe[11U] = __VdlyVal__y_pipe__v21;
    }
    if (__VdlySet__total_angle_pipe__v22) {
        vlSelfRef.y_pipe[11U] = __VdlyVal__y_pipe__v22;
    }
    if (__VdlySet__x_pipe__v23) {
        vlSelfRef.y_pipe[12U] = __VdlyVal__y_pipe__v23;
    }
    if (__VdlySet__total_angle_pipe__v24) {
        vlSelfRef.y_pipe[12U] = __VdlyVal__y_pipe__v24;
    }
    if (__VdlySet__x_pipe__v25) {
        vlSelfRef.y_pipe[13U] = __VdlyVal__y_pipe__v25;
    }
    if (__VdlySet__total_angle_pipe__v26) {
        vlSelfRef.y_pipe[13U] = __VdlyVal__y_pipe__v26;
    }
    if (__VdlySet__x_pipe__v27) {
        vlSelfRef.y_pipe[14U] = __VdlyVal__y_pipe__v27;
    }
    if (__VdlySet__total_angle_pipe__v28) {
        vlSelfRef.y_pipe[14U] = __VdlyVal__y_pipe__v28;
    }
    if (__VdlySet__x_pipe__v29) {
        vlSelfRef.y_pipe[15U] = __VdlyVal__y_pipe__v29;
    }
    if (__VdlySet__total_angle_pipe__v30) {
        vlSelfRef.y_pipe[15U] = __VdlyVal__y_pipe__v30;
    }
    if (__VdlySet__x_pipe__v31) {
        vlSelfRef.y_pipe[16U] = __VdlyVal__y_pipe__v31;
    }
    if (__VdlySet__x_pipe__v0) {
        vlSelfRef.x_pipe[0U] = 0x00004dbaU;
    }
    if (__VdlySet__x_pipe__v1) {
        vlSelfRef.x_pipe[1U] = __VdlyVal__x_pipe__v1;
    }
    if (__VdlySet__total_angle_pipe__v2) {
        vlSelfRef.x_pipe[1U] = __VdlyVal__x_pipe__v2;
    }
    if (__VdlySet__x_pipe__v3) {
        vlSelfRef.x_pipe[2U] = __VdlyVal__x_pipe__v3;
    }
    if (__VdlySet__total_angle_pipe__v4) {
        vlSelfRef.x_pipe[2U] = __VdlyVal__x_pipe__v4;
    }
    if (__VdlySet__x_pipe__v5) {
        vlSelfRef.x_pipe[3U] = __VdlyVal__x_pipe__v5;
    }
    if (__VdlySet__total_angle_pipe__v6) {
        vlSelfRef.x_pipe[3U] = __VdlyVal__x_pipe__v6;
    }
    if (__VdlySet__x_pipe__v7) {
        vlSelfRef.x_pipe[4U] = __VdlyVal__x_pipe__v7;
    }
    if (__VdlySet__total_angle_pipe__v8) {
        vlSelfRef.x_pipe[4U] = __VdlyVal__x_pipe__v8;
    }
    if (__VdlySet__x_pipe__v9) {
        vlSelfRef.x_pipe[5U] = __VdlyVal__x_pipe__v9;
    }
    if (__VdlySet__total_angle_pipe__v10) {
        vlSelfRef.x_pipe[5U] = __VdlyVal__x_pipe__v10;
    }
    if (__VdlySet__x_pipe__v11) {
        vlSelfRef.x_pipe[6U] = __VdlyVal__x_pipe__v11;
    }
    if (__VdlySet__total_angle_pipe__v12) {
        vlSelfRef.x_pipe[6U] = __VdlyVal__x_pipe__v12;
    }
    if (__VdlySet__x_pipe__v13) {
        vlSelfRef.x_pipe[7U] = __VdlyVal__x_pipe__v13;
    }
    if (__VdlySet__total_angle_pipe__v14) {
        vlSelfRef.x_pipe[7U] = __VdlyVal__x_pipe__v14;
    }
    if (__VdlySet__x_pipe__v15) {
        vlSelfRef.x_pipe[8U] = __VdlyVal__x_pipe__v15;
    }
    if (__VdlySet__total_angle_pipe__v16) {
        vlSelfRef.x_pipe[8U] = __VdlyVal__x_pipe__v16;
    }
    if (__VdlySet__x_pipe__v17) {
        vlSelfRef.x_pipe[9U] = __VdlyVal__x_pipe__v17;
    }
    if (__VdlySet__total_angle_pipe__v18) {
        vlSelfRef.x_pipe[9U] = __VdlyVal__x_pipe__v18;
    }
    if (__VdlySet__x_pipe__v19) {
        vlSelfRef.x_pipe[10U] = __VdlyVal__x_pipe__v19;
    }
    if (__VdlySet__total_angle_pipe__v20) {
        vlSelfRef.x_pipe[10U] = __VdlyVal__x_pipe__v20;
    }
    if (__VdlySet__x_pipe__v21) {
        vlSelfRef.x_pipe[11U] = __VdlyVal__x_pipe__v21;
    }
    if (__VdlySet__total_angle_pipe__v22) {
        vlSelfRef.x_pipe[11U] = __VdlyVal__x_pipe__v22;
    }
    if (__VdlySet__x_pipe__v23) {
        vlSelfRef.x_pipe[12U] = __VdlyVal__x_pipe__v23;
    }
    if (__VdlySet__total_angle_pipe__v24) {
        vlSelfRef.x_pipe[12U] = __VdlyVal__x_pipe__v24;
    }
    if (__VdlySet__x_pipe__v25) {
        vlSelfRef.x_pipe[13U] = __VdlyVal__x_pipe__v25;
    }
    if (__VdlySet__total_angle_pipe__v26) {
        vlSelfRef.x_pipe[13U] = __VdlyVal__x_pipe__v26;
    }
    if (__VdlySet__x_pipe__v27) {
        vlSelfRef.x_pipe[14U] = __VdlyVal__x_pipe__v27;
    }
    if (__VdlySet__total_angle_pipe__v28) {
        vlSelfRef.x_pipe[14U] = __VdlyVal__x_pipe__v28;
    }
    if (__VdlySet__x_pipe__v29) {
        vlSelfRef.x_pipe[15U] = __VdlyVal__x_pipe__v29;
    }
    if (__VdlySet__total_angle_pipe__v30) {
        vlSelfRef.x_pipe[15U] = __VdlyVal__x_pipe__v30;
    }
    if (__VdlySet__x_pipe__v31) {
        vlSelfRef.x_pipe[16U] = __VdlyVal__x_pipe__v31;
    }
    if (__VdlySet__x_pipe__v32) {
        vlSelfRef.y_pipe[16U] = __VdlyVal__y_pipe__v32;
        vlSelfRef.x_pipe[16U] = __VdlyVal__x_pipe__v32;
    }
    vlSelfRef.data_cossin_valid_out = vlSelfRef.valid_pipe[16U];
    vlSelfRef.sin = ((1U == (3U & (vlSelfRef.y_pipe[16U] 
                                   >> 0x0000000fU)))
                      ? 0x00007fffU : ((2U == (3U & 
                                               (vlSelfRef.y_pipe[16U] 
                                                >> 0x0000000fU)))
                                        ? 0x00008000U
                                        : (0x0000ffffU 
                                           & vlSelfRef.y_pipe[16U])));
    __VdfgRegularize_h6e95ff9d_0_8 = (0x0001ffffU & 
                                      (vlSelfRef.x_flip_pipe[16U]
                                        ? (- vlSelfRef.x_pipe[16U])
                                        : vlSelfRef.x_pipe[16U]));
    vlSelfRef.cos = ((1U == (3U & (__VdfgRegularize_h6e95ff9d_0_8 
                                   >> 0x0000000fU)))
                      ? 0x00007fffU : ((2U == (3U & 
                                               (__VdfgRegularize_h6e95ff9d_0_8 
                                                >> 0x0000000fU)))
                                        ? 0x00008000U
                                        : (0x0000ffffU 
                                           & __VdfgRegularize_h6e95ff9d_0_8)));
}

void Vtop_cordic_cossin___ico_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin___ico_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_9;
    __VdfgRegularize_h6e95ff9d_0_9 = 0;
    // Body
    vlSelfRef.sin = ((1U == (3U & (vlSelfRef.y_pipe[16U] 
                                   >> 0x0000000fU)))
                      ? 0x00007fffU : ((2U == (3U & 
                                               (vlSelfRef.y_pipe[16U] 
                                                >> 0x0000000fU)))
                                        ? 0x00008000U
                                        : (0x0000ffffU 
                                           & vlSelfRef.y_pipe[16U])));
    vlSelfRef.data_cossin_valid_out = vlSelfRef.valid_pipe[16U];
    __VdfgRegularize_h6e95ff9d_0_9 = (0x0001ffffU & 
                                      (vlSelfRef.x_flip_pipe[16U]
                                        ? (- vlSelfRef.x_pipe[16U])
                                        : vlSelfRef.x_pipe[16U]));
    vlSelfRef.cos = ((1U == (3U & (__VdfgRegularize_h6e95ff9d_0_9 
                                   >> 0x0000000fU)))
                      ? 0x00007fffU : ((2U == (3U & 
                                               (__VdfgRegularize_h6e95ff9d_0_9 
                                                >> 0x0000000fU)))
                                        ? 0x00008000U
                                        : (0x0000ffffU 
                                           & __VdfgRegularize_h6e95ff9d_0_9)));
}

void Vtop_cordic_cossin___ico_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic__1(Vtop_cordic_cossin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin___ico_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clk = vlSymsp->TOP.harmonic_generator__DOT__clk;
    vlSelfRef.rst = vlSymsp->TOP.harmonic_generator__DOT__rst;
    vlSelfRef.data_angle_valid_in = vlSymsp->TOP.harmonic_generator__DOT__data_valid_in;
    vlSelfRef.angle = vlSymsp->TOP.harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__angle_n;
}

void Vtop_cordic_cossin___nba_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin___nba_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_9;
    __VdfgRegularize_h6e95ff9d_0_9 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v0;
    __VdlySet__total_angle_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v0;
    __VdlyVal__valid_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v0;
    __VdlySet__x_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__y_pipe__v0;
    __VdlySet__y_pipe__v0 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v0;
    __VdlyVal__desired_angle_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v0;
    __VdlySet__desired_angle_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v0;
    __VdlyVal__x_flip_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v0;
    __VdlySet__x_flip_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v1;
    __VdlyVal__valid_pipe__v1 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v1;
    __VdlyVal__x_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v1;
    __VdlySet__x_pipe__v1 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v1;
    __VdlyVal__total_angle_pipe__v1 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v1;
    __VdlyVal__y_pipe__v1 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v2;
    __VdlyVal__total_angle_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v2;
    __VdlySet__total_angle_pipe__v2 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v2;
    __VdlyVal__x_pipe__v2 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v2;
    __VdlyVal__y_pipe__v2 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v1;
    __VdlyVal__desired_angle_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v1;
    __VdlySet__desired_angle_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v1;
    __VdlyVal__x_flip_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v1;
    __VdlySet__x_flip_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v2;
    __VdlyVal__valid_pipe__v2 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v3;
    __VdlyVal__x_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v3;
    __VdlySet__x_pipe__v3 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v3;
    __VdlyVal__total_angle_pipe__v3 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v3;
    __VdlyVal__y_pipe__v3 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v4;
    __VdlyVal__total_angle_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v4;
    __VdlySet__total_angle_pipe__v4 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v4;
    __VdlyVal__x_pipe__v4 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v4;
    __VdlyVal__y_pipe__v4 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v2;
    __VdlyVal__desired_angle_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v2;
    __VdlySet__desired_angle_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v2;
    __VdlyVal__x_flip_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v2;
    __VdlySet__x_flip_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v3;
    __VdlyVal__valid_pipe__v3 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v5;
    __VdlyVal__x_pipe__v5 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v5;
    __VdlySet__x_pipe__v5 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v5;
    __VdlyVal__total_angle_pipe__v5 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v5;
    __VdlyVal__y_pipe__v5 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v6;
    __VdlyVal__total_angle_pipe__v6 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v6;
    __VdlySet__total_angle_pipe__v6 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v6;
    __VdlyVal__x_pipe__v6 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v6;
    __VdlyVal__y_pipe__v6 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v3;
    __VdlyVal__desired_angle_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v3;
    __VdlySet__desired_angle_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v3;
    __VdlyVal__x_flip_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v3;
    __VdlySet__x_flip_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v4;
    __VdlyVal__valid_pipe__v4 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v7;
    __VdlyVal__x_pipe__v7 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v7;
    __VdlySet__x_pipe__v7 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v7;
    __VdlyVal__total_angle_pipe__v7 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v7;
    __VdlyVal__y_pipe__v7 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v8;
    __VdlyVal__total_angle_pipe__v8 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v8;
    __VdlySet__total_angle_pipe__v8 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v8;
    __VdlyVal__x_pipe__v8 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v8;
    __VdlyVal__y_pipe__v8 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v4;
    __VdlyVal__desired_angle_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v4;
    __VdlySet__desired_angle_pipe__v4 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v4;
    __VdlyVal__x_flip_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v4;
    __VdlySet__x_flip_pipe__v4 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v5;
    __VdlyVal__valid_pipe__v5 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v9;
    __VdlyVal__x_pipe__v9 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v9;
    __VdlySet__x_pipe__v9 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v9;
    __VdlyVal__total_angle_pipe__v9 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v9;
    __VdlyVal__y_pipe__v9 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v10;
    __VdlyVal__total_angle_pipe__v10 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v10;
    __VdlySet__total_angle_pipe__v10 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v10;
    __VdlyVal__x_pipe__v10 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v10;
    __VdlyVal__y_pipe__v10 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v5;
    __VdlyVal__desired_angle_pipe__v5 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v5;
    __VdlySet__desired_angle_pipe__v5 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v5;
    __VdlyVal__x_flip_pipe__v5 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v5;
    __VdlySet__x_flip_pipe__v5 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v6;
    __VdlyVal__valid_pipe__v6 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v11;
    __VdlyVal__x_pipe__v11 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v11;
    __VdlySet__x_pipe__v11 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v11;
    __VdlyVal__total_angle_pipe__v11 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v11;
    __VdlyVal__y_pipe__v11 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v12;
    __VdlyVal__total_angle_pipe__v12 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v12;
    __VdlySet__total_angle_pipe__v12 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v12;
    __VdlyVal__x_pipe__v12 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v12;
    __VdlyVal__y_pipe__v12 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v6;
    __VdlyVal__desired_angle_pipe__v6 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v6;
    __VdlySet__desired_angle_pipe__v6 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v6;
    __VdlyVal__x_flip_pipe__v6 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v6;
    __VdlySet__x_flip_pipe__v6 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v7;
    __VdlyVal__valid_pipe__v7 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v13;
    __VdlyVal__x_pipe__v13 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v13;
    __VdlySet__x_pipe__v13 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v13;
    __VdlyVal__total_angle_pipe__v13 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v13;
    __VdlyVal__y_pipe__v13 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v14;
    __VdlyVal__total_angle_pipe__v14 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v14;
    __VdlySet__total_angle_pipe__v14 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v14;
    __VdlyVal__x_pipe__v14 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v14;
    __VdlyVal__y_pipe__v14 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v7;
    __VdlyVal__desired_angle_pipe__v7 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v7;
    __VdlySet__desired_angle_pipe__v7 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v7;
    __VdlyVal__x_flip_pipe__v7 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v7;
    __VdlySet__x_flip_pipe__v7 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v8;
    __VdlyVal__valid_pipe__v8 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v15;
    __VdlyVal__x_pipe__v15 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v15;
    __VdlySet__x_pipe__v15 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v15;
    __VdlyVal__total_angle_pipe__v15 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v15;
    __VdlyVal__y_pipe__v15 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v16;
    __VdlyVal__total_angle_pipe__v16 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v16;
    __VdlySet__total_angle_pipe__v16 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v16;
    __VdlyVal__x_pipe__v16 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v16;
    __VdlyVal__y_pipe__v16 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v8;
    __VdlyVal__desired_angle_pipe__v8 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v8;
    __VdlySet__desired_angle_pipe__v8 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v8;
    __VdlyVal__x_flip_pipe__v8 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v8;
    __VdlySet__x_flip_pipe__v8 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v9;
    __VdlyVal__valid_pipe__v9 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v17;
    __VdlyVal__x_pipe__v17 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v17;
    __VdlySet__x_pipe__v17 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v17;
    __VdlyVal__total_angle_pipe__v17 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v17;
    __VdlyVal__y_pipe__v17 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v18;
    __VdlyVal__total_angle_pipe__v18 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v18;
    __VdlySet__total_angle_pipe__v18 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v18;
    __VdlyVal__x_pipe__v18 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v18;
    __VdlyVal__y_pipe__v18 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v9;
    __VdlyVal__desired_angle_pipe__v9 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v9;
    __VdlySet__desired_angle_pipe__v9 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v9;
    __VdlyVal__x_flip_pipe__v9 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v9;
    __VdlySet__x_flip_pipe__v9 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v10;
    __VdlyVal__valid_pipe__v10 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v19;
    __VdlyVal__x_pipe__v19 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v19;
    __VdlySet__x_pipe__v19 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v19;
    __VdlyVal__total_angle_pipe__v19 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v19;
    __VdlyVal__y_pipe__v19 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v20;
    __VdlyVal__total_angle_pipe__v20 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v20;
    __VdlySet__total_angle_pipe__v20 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v20;
    __VdlyVal__x_pipe__v20 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v20;
    __VdlyVal__y_pipe__v20 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v10;
    __VdlyVal__desired_angle_pipe__v10 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v10;
    __VdlySet__desired_angle_pipe__v10 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v10;
    __VdlyVal__x_flip_pipe__v10 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v10;
    __VdlySet__x_flip_pipe__v10 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v11;
    __VdlyVal__valid_pipe__v11 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v21;
    __VdlyVal__x_pipe__v21 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v21;
    __VdlySet__x_pipe__v21 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v21;
    __VdlyVal__total_angle_pipe__v21 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v21;
    __VdlyVal__y_pipe__v21 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v22;
    __VdlyVal__total_angle_pipe__v22 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v22;
    __VdlySet__total_angle_pipe__v22 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v22;
    __VdlyVal__x_pipe__v22 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v22;
    __VdlyVal__y_pipe__v22 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v11;
    __VdlyVal__desired_angle_pipe__v11 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v11;
    __VdlySet__desired_angle_pipe__v11 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v11;
    __VdlyVal__x_flip_pipe__v11 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v11;
    __VdlySet__x_flip_pipe__v11 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v12;
    __VdlyVal__valid_pipe__v12 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v23;
    __VdlyVal__x_pipe__v23 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v23;
    __VdlySet__x_pipe__v23 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v23;
    __VdlyVal__total_angle_pipe__v23 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v23;
    __VdlyVal__y_pipe__v23 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v24;
    __VdlyVal__total_angle_pipe__v24 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v24;
    __VdlySet__total_angle_pipe__v24 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v24;
    __VdlyVal__x_pipe__v24 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v24;
    __VdlyVal__y_pipe__v24 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v12;
    __VdlyVal__desired_angle_pipe__v12 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v12;
    __VdlySet__desired_angle_pipe__v12 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v12;
    __VdlyVal__x_flip_pipe__v12 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v12;
    __VdlySet__x_flip_pipe__v12 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v13;
    __VdlyVal__valid_pipe__v13 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v25;
    __VdlyVal__x_pipe__v25 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v25;
    __VdlySet__x_pipe__v25 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v25;
    __VdlyVal__total_angle_pipe__v25 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v25;
    __VdlyVal__y_pipe__v25 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v26;
    __VdlyVal__total_angle_pipe__v26 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v26;
    __VdlySet__total_angle_pipe__v26 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v26;
    __VdlyVal__x_pipe__v26 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v26;
    __VdlyVal__y_pipe__v26 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v13;
    __VdlyVal__desired_angle_pipe__v13 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v13;
    __VdlySet__desired_angle_pipe__v13 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v13;
    __VdlyVal__x_flip_pipe__v13 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v13;
    __VdlySet__x_flip_pipe__v13 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v14;
    __VdlyVal__valid_pipe__v14 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v27;
    __VdlyVal__x_pipe__v27 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v27;
    __VdlySet__x_pipe__v27 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v27;
    __VdlyVal__total_angle_pipe__v27 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v27;
    __VdlyVal__y_pipe__v27 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v28;
    __VdlyVal__total_angle_pipe__v28 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v28;
    __VdlySet__total_angle_pipe__v28 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v28;
    __VdlyVal__x_pipe__v28 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v28;
    __VdlyVal__y_pipe__v28 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v14;
    __VdlyVal__desired_angle_pipe__v14 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v14;
    __VdlySet__desired_angle_pipe__v14 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v14;
    __VdlyVal__x_flip_pipe__v14 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v14;
    __VdlySet__x_flip_pipe__v14 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v15;
    __VdlyVal__valid_pipe__v15 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v29;
    __VdlyVal__x_pipe__v29 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v29;
    __VdlySet__x_pipe__v29 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v29;
    __VdlyVal__total_angle_pipe__v29 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v29;
    __VdlyVal__y_pipe__v29 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v30;
    __VdlyVal__total_angle_pipe__v30 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v30;
    __VdlySet__total_angle_pipe__v30 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v30;
    __VdlyVal__x_pipe__v30 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v30;
    __VdlyVal__y_pipe__v30 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v15;
    __VdlyVal__desired_angle_pipe__v15 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v15;
    __VdlySet__desired_angle_pipe__v15 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v15;
    __VdlyVal__x_flip_pipe__v15 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v15;
    __VdlySet__x_flip_pipe__v15 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v16;
    __VdlyVal__valid_pipe__v16 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v31;
    __VdlyVal__x_pipe__v31 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v31;
    __VdlySet__x_pipe__v31 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v31;
    __VdlyVal__y_pipe__v31 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v32;
    __VdlyVal__x_pipe__v32 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v32;
    __VdlySet__x_pipe__v32 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v32;
    __VdlyVal__y_pipe__v32 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v31;
    __VdlyVal__total_angle_pipe__v31 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v31;
    __VdlySet__total_angle_pipe__v31 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v16;
    __VdlyVal__desired_angle_pipe__v16 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v16;
    __VdlyVal__x_flip_pipe__v16 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v16;
    __VdlySet__x_flip_pipe__v16 = 0;
    // Body
    __VdlySet__desired_angle_pipe__v0 = 0U;
    __VdlySet__total_angle_pipe__v0 = 0U;
    __VdlySet__y_pipe__v0 = 0U;
    __VdlySet__x_pipe__v0 = 0U;
    __VdlySet__x_flip_pipe__v0 = 0U;
    __VdlySet__x_flip_pipe__v1 = 0U;
    __VdlySet__x_flip_pipe__v2 = 0U;
    __VdlySet__x_flip_pipe__v3 = 0U;
    __VdlySet__x_flip_pipe__v4 = 0U;
    __VdlySet__x_flip_pipe__v5 = 0U;
    __VdlySet__x_flip_pipe__v6 = 0U;
    __VdlySet__x_flip_pipe__v7 = 0U;
    __VdlySet__x_flip_pipe__v8 = 0U;
    __VdlySet__x_flip_pipe__v9 = 0U;
    __VdlySet__x_flip_pipe__v10 = 0U;
    __VdlySet__x_flip_pipe__v11 = 0U;
    __VdlySet__x_flip_pipe__v12 = 0U;
    __VdlySet__x_flip_pipe__v13 = 0U;
    __VdlySet__x_flip_pipe__v14 = 0U;
    __VdlySet__x_flip_pipe__v15 = 0U;
    __VdlySet__x_flip_pipe__v16 = 0U;
    __VdlySet__total_angle_pipe__v31 = 0U;
    __VdlySet__desired_angle_pipe__v1 = 0U;
    __VdlySet__desired_angle_pipe__v2 = 0U;
    __VdlySet__desired_angle_pipe__v3 = 0U;
    __VdlySet__desired_angle_pipe__v4 = 0U;
    __VdlySet__desired_angle_pipe__v5 = 0U;
    __VdlySet__desired_angle_pipe__v6 = 0U;
    __VdlySet__desired_angle_pipe__v7 = 0U;
    __VdlySet__desired_angle_pipe__v8 = 0U;
    __VdlySet__desired_angle_pipe__v9 = 0U;
    __VdlySet__desired_angle_pipe__v10 = 0U;
    __VdlySet__desired_angle_pipe__v11 = 0U;
    __VdlySet__desired_angle_pipe__v12 = 0U;
    __VdlySet__desired_angle_pipe__v13 = 0U;
    __VdlySet__desired_angle_pipe__v14 = 0U;
    __VdlySet__desired_angle_pipe__v15 = 0U;
    __VdlySet__x_pipe__v31 = 0U;
    __VdlySet__x_pipe__v32 = 0U;
    __VdlySet__total_angle_pipe__v2 = 0U;
    __VdlySet__total_angle_pipe__v4 = 0U;
    __VdlySet__total_angle_pipe__v6 = 0U;
    __VdlySet__total_angle_pipe__v8 = 0U;
    __VdlySet__total_angle_pipe__v10 = 0U;
    __VdlySet__total_angle_pipe__v12 = 0U;
    __VdlySet__total_angle_pipe__v14 = 0U;
    __VdlySet__total_angle_pipe__v16 = 0U;
    __VdlySet__total_angle_pipe__v18 = 0U;
    __VdlySet__total_angle_pipe__v20 = 0U;
    __VdlySet__total_angle_pipe__v22 = 0U;
    __VdlySet__total_angle_pipe__v24 = 0U;
    __VdlySet__total_angle_pipe__v26 = 0U;
    __VdlySet__total_angle_pipe__v28 = 0U;
    __VdlySet__total_angle_pipe__v30 = 0U;
    __VdlySet__x_pipe__v1 = 0U;
    __VdlySet__x_pipe__v3 = 0U;
    __VdlySet__x_pipe__v5 = 0U;
    __VdlySet__x_pipe__v7 = 0U;
    __VdlySet__x_pipe__v9 = 0U;
    __VdlySet__x_pipe__v11 = 0U;
    __VdlySet__x_pipe__v13 = 0U;
    __VdlySet__x_pipe__v15 = 0U;
    __VdlySet__x_pipe__v17 = 0U;
    __VdlySet__x_pipe__v19 = 0U;
    __VdlySet__x_pipe__v21 = 0U;
    __VdlySet__x_pipe__v23 = 0U;
    __VdlySet__x_pipe__v25 = 0U;
    __VdlySet__x_pipe__v27 = 0U;
    __VdlySet__x_pipe__v29 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.rst)))) {
        if ((0x00008000U & (IData)(vlSelfRef.angle))) {
            __VdlyVal__desired_angle_pipe__v0 = (0x0000ffffU 
                                                 & ((0x00004000U 
                                                     & (IData)(vlSelfRef.angle))
                                                     ? (IData)(vlSelfRef.angle)
                                                     : 
                                                    ((IData)(0x8000U) 
                                                     - 
                                                     VL_EXTENDS_II(16,16, (IData)(vlSelfRef.angle)))));
            __VdlyVal__x_flip_pipe__v0 = (1U & (~ ((IData)(vlSelfRef.angle) 
                                                   >> 0x0000000eU)));
        } else {
            __VdlyVal__desired_angle_pipe__v0 = (0x0000ffffU 
                                                 & ((0x00004000U 
                                                     & (IData)(vlSelfRef.angle))
                                                     ? 
                                                    ((IData)(0x8000U) 
                                                     - 
                                                     VL_EXTENDS_II(16,16, (IData)(vlSelfRef.angle)))
                                                     : (IData)(vlSelfRef.angle)));
            __VdlyVal__x_flip_pipe__v0 = (1U & ((IData)(vlSelfRef.angle) 
                                                >> 0x0000000eU));
        }
        __VdlySet__desired_angle_pipe__v0 = 1U;
        __VdlySet__total_angle_pipe__v0 = 1U;
        __VdlySet__y_pipe__v0 = 1U;
        __VdlySet__x_pipe__v0 = 1U;
        __VdlySet__x_flip_pipe__v0 = 1U;
        __VdlyVal__x_flip_pipe__v1 = vlSelfRef.x_flip_pipe[0U];
        __VdlySet__x_flip_pipe__v1 = 1U;
        __VdlyVal__x_flip_pipe__v2 = vlSelfRef.x_flip_pipe[1U];
        __VdlySet__x_flip_pipe__v2 = 1U;
        __VdlyVal__x_flip_pipe__v3 = vlSelfRef.x_flip_pipe[2U];
        __VdlySet__x_flip_pipe__v3 = 1U;
        __VdlyVal__x_flip_pipe__v4 = vlSelfRef.x_flip_pipe[3U];
        __VdlySet__x_flip_pipe__v4 = 1U;
        __VdlyVal__x_flip_pipe__v5 = vlSelfRef.x_flip_pipe[4U];
        __VdlySet__x_flip_pipe__v5 = 1U;
        __VdlyVal__x_flip_pipe__v6 = vlSelfRef.x_flip_pipe[5U];
        __VdlySet__x_flip_pipe__v6 = 1U;
        __VdlyVal__x_flip_pipe__v7 = vlSelfRef.x_flip_pipe[6U];
        __VdlySet__x_flip_pipe__v7 = 1U;
        __VdlyVal__x_flip_pipe__v8 = vlSelfRef.x_flip_pipe[7U];
        __VdlySet__x_flip_pipe__v8 = 1U;
        __VdlyVal__x_flip_pipe__v9 = vlSelfRef.x_flip_pipe[8U];
        __VdlySet__x_flip_pipe__v9 = 1U;
        __VdlyVal__x_flip_pipe__v10 = vlSelfRef.x_flip_pipe[9U];
        __VdlySet__x_flip_pipe__v10 = 1U;
        __VdlyVal__x_flip_pipe__v11 = vlSelfRef.x_flip_pipe[10U];
        __VdlySet__x_flip_pipe__v11 = 1U;
        __VdlyVal__x_flip_pipe__v12 = vlSelfRef.x_flip_pipe[11U];
        __VdlySet__x_flip_pipe__v12 = 1U;
        __VdlyVal__x_flip_pipe__v13 = vlSelfRef.x_flip_pipe[12U];
        __VdlySet__x_flip_pipe__v13 = 1U;
        __VdlyVal__x_flip_pipe__v14 = vlSelfRef.x_flip_pipe[13U];
        __VdlySet__x_flip_pipe__v14 = 1U;
        __VdlyVal__x_flip_pipe__v15 = vlSelfRef.x_flip_pipe[14U];
        __VdlySet__x_flip_pipe__v15 = 1U;
        __VdlyVal__x_flip_pipe__v16 = vlSelfRef.x_flip_pipe[15U];
        __VdlySet__x_flip_pipe__v16 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[15U], vlSelfRef.desired_angle_pipe[15U])) {
            __VdlyVal__x_pipe__v31 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[15U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[15U], 0x0000000fU)));
            __VdlySet__x_pipe__v31 = 1U;
            __VdlyVal__y_pipe__v31 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[15U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[15U], 0x0000000fU)));
        } else {
            __VdlyVal__x_pipe__v32 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[15U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[15U], 0x0000000fU)));
            __VdlySet__x_pipe__v32 = 1U;
            __VdlyVal__y_pipe__v32 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[15U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[15U], 0x0000000fU)));
        }
        __VdlyVal__total_angle_pipe__v31 = vlSelfRef.total_angle_pipe[15U];
        __VdlySet__total_angle_pipe__v31 = 1U;
        __VdlyVal__desired_angle_pipe__v16 = vlSelfRef.desired_angle_pipe[15U];
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[0U], vlSelfRef.desired_angle_pipe[0U])) {
            __VdlyVal__x_pipe__v1 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[0U] 
                                      - vlSelfRef.y_pipe[0U]));
            __VdlySet__x_pipe__v1 = 1U;
            __VdlyVal__total_angle_pipe__v1 = (0x0000ffffU 
                                               & ((IData)(0x2000U) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[0U])));
            __VdlyVal__y_pipe__v1 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[0U] 
                                      + vlSelfRef.x_pipe[0U]));
        } else {
            __VdlyVal__total_angle_pipe__v2 = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.total_angle_pipe[0U]) 
                                                  - (IData)(0x2000U)));
            __VdlySet__total_angle_pipe__v2 = 1U;
            __VdlyVal__x_pipe__v2 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[0U] 
                                      + vlSelfRef.y_pipe[0U]));
            __VdlyVal__y_pipe__v2 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[0U] 
                                      - vlSelfRef.x_pipe[0U]));
        }
        __VdlyVal__desired_angle_pipe__v1 = vlSelfRef.desired_angle_pipe[0U];
        __VdlySet__desired_angle_pipe__v1 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[1U], vlSelfRef.desired_angle_pipe[1U])) {
            __VdlyVal__x_pipe__v3 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[1U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[1U], 1U)));
            __VdlySet__x_pipe__v3 = 1U;
            __VdlyVal__total_angle_pipe__v3 = (0x0000ffffU 
                                               & ((IData)(0x12e4U) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[1U])));
            __VdlyVal__y_pipe__v3 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[1U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[1U], 1U)));
        } else {
            __VdlyVal__total_angle_pipe__v4 = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.total_angle_pipe[1U]) 
                                                  - (IData)(0x12e4U)));
            __VdlySet__total_angle_pipe__v4 = 1U;
            __VdlyVal__x_pipe__v4 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[1U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[1U], 1U)));
            __VdlyVal__y_pipe__v4 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[1U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[1U], 1U)));
        }
        __VdlyVal__desired_angle_pipe__v2 = vlSelfRef.desired_angle_pipe[1U];
        __VdlySet__desired_angle_pipe__v2 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[2U], vlSelfRef.desired_angle_pipe[2U])) {
            __VdlyVal__x_pipe__v5 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[2U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[2U], 2U)));
            __VdlySet__x_pipe__v5 = 1U;
            __VdlyVal__total_angle_pipe__v5 = (0x0000ffffU 
                                               & ((IData)(0x09fbU) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[2U])));
            __VdlyVal__y_pipe__v5 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[2U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[2U], 2U)));
        } else {
            __VdlyVal__total_angle_pipe__v6 = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.total_angle_pipe[2U]) 
                                                  - (IData)(0x09fbU)));
            __VdlySet__total_angle_pipe__v6 = 1U;
            __VdlyVal__x_pipe__v6 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[2U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[2U], 2U)));
            __VdlyVal__y_pipe__v6 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[2U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[2U], 2U)));
        }
        __VdlyVal__desired_angle_pipe__v3 = vlSelfRef.desired_angle_pipe[2U];
        __VdlySet__desired_angle_pipe__v3 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[3U], vlSelfRef.desired_angle_pipe[3U])) {
            __VdlyVal__x_pipe__v7 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[3U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[3U], 3U)));
            __VdlySet__x_pipe__v7 = 1U;
            __VdlyVal__total_angle_pipe__v7 = (0x0000ffffU 
                                               & ((IData)(0x0511U) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[3U])));
            __VdlyVal__y_pipe__v7 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[3U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[3U], 3U)));
        } else {
            __VdlyVal__total_angle_pipe__v8 = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.total_angle_pipe[3U]) 
                                                  - (IData)(0x0511U)));
            __VdlySet__total_angle_pipe__v8 = 1U;
            __VdlyVal__x_pipe__v8 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[3U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[3U], 3U)));
            __VdlyVal__y_pipe__v8 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[3U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[3U], 3U)));
        }
        __VdlyVal__desired_angle_pipe__v4 = vlSelfRef.desired_angle_pipe[3U];
        __VdlySet__desired_angle_pipe__v4 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[4U], vlSelfRef.desired_angle_pipe[4U])) {
            __VdlyVal__x_pipe__v9 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[4U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[4U], 4U)));
            __VdlySet__x_pipe__v9 = 1U;
            __VdlyVal__total_angle_pipe__v9 = (0x0000ffffU 
                                               & ((IData)(0x028bU) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[4U])));
            __VdlyVal__y_pipe__v9 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[4U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[4U], 4U)));
        } else {
            __VdlyVal__total_angle_pipe__v10 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[4U]) 
                                                   - (IData)(0x028bU)));
            __VdlySet__total_angle_pipe__v10 = 1U;
            __VdlyVal__x_pipe__v10 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[4U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[4U], 4U)));
            __VdlyVal__y_pipe__v10 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[4U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[4U], 4U)));
        }
        __VdlyVal__desired_angle_pipe__v5 = vlSelfRef.desired_angle_pipe[4U];
        __VdlySet__desired_angle_pipe__v5 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[5U], vlSelfRef.desired_angle_pipe[5U])) {
            __VdlyVal__x_pipe__v11 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[5U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[5U], 5U)));
            __VdlySet__x_pipe__v11 = 1U;
            __VdlyVal__total_angle_pipe__v11 = (0x0000ffffU 
                                                & ((IData)(0x0146U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[5U])));
            __VdlyVal__y_pipe__v11 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[5U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[5U], 5U)));
        } else {
            __VdlyVal__total_angle_pipe__v12 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[5U]) 
                                                   - (IData)(0x0146U)));
            __VdlySet__total_angle_pipe__v12 = 1U;
            __VdlyVal__x_pipe__v12 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[5U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[5U], 5U)));
            __VdlyVal__y_pipe__v12 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[5U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[5U], 5U)));
        }
        __VdlyVal__desired_angle_pipe__v6 = vlSelfRef.desired_angle_pipe[5U];
        __VdlySet__desired_angle_pipe__v6 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[6U], vlSelfRef.desired_angle_pipe[6U])) {
            __VdlyVal__x_pipe__v13 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[6U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[6U], 6U)));
            __VdlySet__x_pipe__v13 = 1U;
            __VdlyVal__total_angle_pipe__v13 = (0x0000ffffU 
                                                & ((IData)(0x00a3U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[6U])));
            __VdlyVal__y_pipe__v13 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[6U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[6U], 6U)));
        } else {
            __VdlyVal__total_angle_pipe__v14 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[6U]) 
                                                   - (IData)(0x00a3U)));
            __VdlySet__total_angle_pipe__v14 = 1U;
            __VdlyVal__x_pipe__v14 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[6U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[6U], 6U)));
            __VdlyVal__y_pipe__v14 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[6U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[6U], 6U)));
        }
        __VdlyVal__desired_angle_pipe__v7 = vlSelfRef.desired_angle_pipe[6U];
        __VdlySet__desired_angle_pipe__v7 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[7U], vlSelfRef.desired_angle_pipe[7U])) {
            __VdlyVal__x_pipe__v15 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[7U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[7U], 7U)));
            __VdlySet__x_pipe__v15 = 1U;
            __VdlyVal__total_angle_pipe__v15 = (0x0000ffffU 
                                                & ((IData)(0x0051U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[7U])));
            __VdlyVal__y_pipe__v15 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[7U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[7U], 7U)));
        } else {
            __VdlyVal__total_angle_pipe__v16 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[7U]) 
                                                   - (IData)(0x0051U)));
            __VdlySet__total_angle_pipe__v16 = 1U;
            __VdlyVal__x_pipe__v16 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[7U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[7U], 7U)));
            __VdlyVal__y_pipe__v16 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[7U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[7U], 7U)));
        }
        __VdlyVal__desired_angle_pipe__v8 = vlSelfRef.desired_angle_pipe[7U];
        __VdlySet__desired_angle_pipe__v8 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[8U], vlSelfRef.desired_angle_pipe[8U])) {
            __VdlyVal__x_pipe__v17 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[8U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[8U], 8U)));
            __VdlySet__x_pipe__v17 = 1U;
            __VdlyVal__total_angle_pipe__v17 = (0x0000ffffU 
                                                & ((IData)(0x0029U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[8U])));
            __VdlyVal__y_pipe__v17 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[8U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[8U], 8U)));
        } else {
            __VdlyVal__total_angle_pipe__v18 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[8U]) 
                                                   - (IData)(0x0029U)));
            __VdlySet__total_angle_pipe__v18 = 1U;
            __VdlyVal__x_pipe__v18 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[8U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[8U], 8U)));
            __VdlyVal__y_pipe__v18 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[8U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[8U], 8U)));
        }
        __VdlyVal__desired_angle_pipe__v9 = vlSelfRef.desired_angle_pipe[8U];
        __VdlySet__desired_angle_pipe__v9 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[9U], vlSelfRef.desired_angle_pipe[9U])) {
            __VdlyVal__x_pipe__v19 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[9U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[9U], 9U)));
            __VdlySet__x_pipe__v19 = 1U;
            __VdlyVal__total_angle_pipe__v19 = (0x0000ffffU 
                                                & ((IData)(0x0014U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[9U])));
            __VdlyVal__y_pipe__v19 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[9U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[9U], 9U)));
        } else {
            __VdlyVal__total_angle_pipe__v20 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[9U]) 
                                                   - (IData)(0x0014U)));
            __VdlySet__total_angle_pipe__v20 = 1U;
            __VdlyVal__x_pipe__v20 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[9U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[9U], 9U)));
            __VdlyVal__y_pipe__v20 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[9U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[9U], 9U)));
        }
        __VdlyVal__desired_angle_pipe__v10 = vlSelfRef.desired_angle_pipe[9U];
        __VdlySet__desired_angle_pipe__v10 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[10U], vlSelfRef.desired_angle_pipe[10U])) {
            __VdlyVal__x_pipe__v21 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[10U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[10U], 0x0000000aU)));
            __VdlySet__x_pipe__v21 = 1U;
            __VdlyVal__total_angle_pipe__v21 = (0x0000ffffU 
                                                & ((IData)(0x000aU) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[10U])));
            __VdlyVal__y_pipe__v21 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[10U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[10U], 0x0000000aU)));
        } else {
            __VdlyVal__total_angle_pipe__v22 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[10U]) 
                                                   - (IData)(0x000aU)));
            __VdlySet__total_angle_pipe__v22 = 1U;
            __VdlyVal__x_pipe__v22 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[10U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[10U], 0x0000000aU)));
            __VdlyVal__y_pipe__v22 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[10U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[10U], 0x0000000aU)));
        }
        __VdlyVal__desired_angle_pipe__v11 = vlSelfRef.desired_angle_pipe[10U];
        __VdlySet__desired_angle_pipe__v11 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[11U], vlSelfRef.desired_angle_pipe[11U])) {
            __VdlyVal__x_pipe__v23 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[11U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[11U], 0x0000000bU)));
            __VdlySet__x_pipe__v23 = 1U;
            __VdlyVal__total_angle_pipe__v23 = (0x0000ffffU 
                                                & ((IData)(5U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[11U])));
            __VdlyVal__y_pipe__v23 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[11U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[11U], 0x0000000bU)));
        } else {
            __VdlyVal__total_angle_pipe__v24 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[11U]) 
                                                   - (IData)(5U)));
            __VdlySet__total_angle_pipe__v24 = 1U;
            __VdlyVal__x_pipe__v24 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[11U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[11U], 0x0000000bU)));
            __VdlyVal__y_pipe__v24 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[11U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[11U], 0x0000000bU)));
        }
        __VdlyVal__desired_angle_pipe__v12 = vlSelfRef.desired_angle_pipe[11U];
        __VdlySet__desired_angle_pipe__v12 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[12U], vlSelfRef.desired_angle_pipe[12U])) {
            __VdlyVal__x_pipe__v25 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[12U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[12U], 0x0000000cU)));
            __VdlySet__x_pipe__v25 = 1U;
            __VdlyVal__total_angle_pipe__v25 = (0x0000ffffU 
                                                & ((IData)(3U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[12U])));
            __VdlyVal__y_pipe__v25 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[12U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[12U], 0x0000000cU)));
        } else {
            __VdlyVal__total_angle_pipe__v26 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[12U]) 
                                                   - (IData)(3U)));
            __VdlySet__total_angle_pipe__v26 = 1U;
            __VdlyVal__x_pipe__v26 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[12U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[12U], 0x0000000cU)));
            __VdlyVal__y_pipe__v26 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[12U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[12U], 0x0000000cU)));
        }
        __VdlyVal__desired_angle_pipe__v13 = vlSelfRef.desired_angle_pipe[12U];
        __VdlySet__desired_angle_pipe__v13 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[13U], vlSelfRef.desired_angle_pipe[13U])) {
            __VdlyVal__x_pipe__v27 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[13U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[13U], 0x0000000dU)));
            __VdlySet__x_pipe__v27 = 1U;
            __VdlyVal__total_angle_pipe__v27 = (0x0000ffffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[13U])));
            __VdlyVal__y_pipe__v27 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[13U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[13U], 0x0000000dU)));
        } else {
            __VdlyVal__total_angle_pipe__v28 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[13U]) 
                                                   - (IData)(1U)));
            __VdlySet__total_angle_pipe__v28 = 1U;
            __VdlyVal__x_pipe__v28 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[13U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[13U], 0x0000000dU)));
            __VdlyVal__y_pipe__v28 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[13U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[13U], 0x0000000dU)));
        }
        __VdlyVal__desired_angle_pipe__v14 = vlSelfRef.desired_angle_pipe[13U];
        __VdlySet__desired_angle_pipe__v14 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[14U], vlSelfRef.desired_angle_pipe[14U])) {
            __VdlyVal__x_pipe__v29 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[14U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[14U], 0x0000000eU)));
            __VdlySet__x_pipe__v29 = 1U;
            __VdlyVal__total_angle_pipe__v29 = (0x0000ffffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[14U])));
            __VdlyVal__y_pipe__v29 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[14U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[14U], 0x0000000eU)));
        } else {
            __VdlyVal__total_angle_pipe__v30 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[14U]) 
                                                   - (IData)(1U)));
            __VdlySet__total_angle_pipe__v30 = 1U;
            __VdlyVal__x_pipe__v30 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[14U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[14U], 0x0000000eU)));
            __VdlyVal__y_pipe__v30 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[14U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[14U], 0x0000000eU)));
        }
        __VdlyVal__desired_angle_pipe__v15 = vlSelfRef.desired_angle_pipe[14U];
        __VdlySet__desired_angle_pipe__v15 = 1U;
    }
    __VdlyVal__valid_pipe__v0 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && (IData)(vlSelfRef.data_angle_valid_in));
    __VdlyVal__valid_pipe__v1 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[0U]);
    __VdlyVal__valid_pipe__v2 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[1U]);
    __VdlyVal__valid_pipe__v3 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[2U]);
    __VdlyVal__valid_pipe__v4 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[3U]);
    __VdlyVal__valid_pipe__v5 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[4U]);
    __VdlyVal__valid_pipe__v6 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[5U]);
    __VdlyVal__valid_pipe__v7 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[6U]);
    __VdlyVal__valid_pipe__v8 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[7U]);
    __VdlyVal__valid_pipe__v9 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[8U]);
    __VdlyVal__valid_pipe__v10 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[9U]);
    __VdlyVal__valid_pipe__v11 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[10U]);
    __VdlyVal__valid_pipe__v12 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[11U]);
    __VdlyVal__valid_pipe__v13 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[12U]);
    __VdlyVal__valid_pipe__v14 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[13U]);
    __VdlyVal__valid_pipe__v15 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[14U]);
    __VdlyVal__valid_pipe__v16 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[15U]);
    vlSelfRef.valid_pipe[0U] = __VdlyVal__valid_pipe__v0;
    vlSelfRef.valid_pipe[1U] = __VdlyVal__valid_pipe__v1;
    vlSelfRef.valid_pipe[2U] = __VdlyVal__valid_pipe__v2;
    vlSelfRef.valid_pipe[3U] = __VdlyVal__valid_pipe__v3;
    vlSelfRef.valid_pipe[4U] = __VdlyVal__valid_pipe__v4;
    vlSelfRef.valid_pipe[5U] = __VdlyVal__valid_pipe__v5;
    vlSelfRef.valid_pipe[6U] = __VdlyVal__valid_pipe__v6;
    vlSelfRef.valid_pipe[7U] = __VdlyVal__valid_pipe__v7;
    vlSelfRef.valid_pipe[8U] = __VdlyVal__valid_pipe__v8;
    vlSelfRef.valid_pipe[9U] = __VdlyVal__valid_pipe__v9;
    vlSelfRef.valid_pipe[10U] = __VdlyVal__valid_pipe__v10;
    vlSelfRef.valid_pipe[11U] = __VdlyVal__valid_pipe__v11;
    vlSelfRef.valid_pipe[12U] = __VdlyVal__valid_pipe__v12;
    vlSelfRef.valid_pipe[13U] = __VdlyVal__valid_pipe__v13;
    vlSelfRef.valid_pipe[14U] = __VdlyVal__valid_pipe__v14;
    vlSelfRef.valid_pipe[15U] = __VdlyVal__valid_pipe__v15;
    vlSelfRef.valid_pipe[16U] = __VdlyVal__valid_pipe__v16;
    if (__VdlySet__x_flip_pipe__v0) {
        vlSelfRef.x_flip_pipe[0U] = __VdlyVal__x_flip_pipe__v0;
    }
    if (__VdlySet__x_flip_pipe__v1) {
        vlSelfRef.x_flip_pipe[1U] = __VdlyVal__x_flip_pipe__v1;
    }
    if (__VdlySet__x_flip_pipe__v2) {
        vlSelfRef.x_flip_pipe[2U] = __VdlyVal__x_flip_pipe__v2;
    }
    if (__VdlySet__x_flip_pipe__v3) {
        vlSelfRef.x_flip_pipe[3U] = __VdlyVal__x_flip_pipe__v3;
    }
    if (__VdlySet__x_flip_pipe__v4) {
        vlSelfRef.x_flip_pipe[4U] = __VdlyVal__x_flip_pipe__v4;
    }
    if (__VdlySet__x_flip_pipe__v5) {
        vlSelfRef.x_flip_pipe[5U] = __VdlyVal__x_flip_pipe__v5;
    }
    if (__VdlySet__x_flip_pipe__v6) {
        vlSelfRef.x_flip_pipe[6U] = __VdlyVal__x_flip_pipe__v6;
    }
    if (__VdlySet__x_flip_pipe__v7) {
        vlSelfRef.x_flip_pipe[7U] = __VdlyVal__x_flip_pipe__v7;
    }
    if (__VdlySet__x_flip_pipe__v8) {
        vlSelfRef.x_flip_pipe[8U] = __VdlyVal__x_flip_pipe__v8;
    }
    if (__VdlySet__x_flip_pipe__v9) {
        vlSelfRef.x_flip_pipe[9U] = __VdlyVal__x_flip_pipe__v9;
    }
    if (__VdlySet__x_flip_pipe__v10) {
        vlSelfRef.x_flip_pipe[10U] = __VdlyVal__x_flip_pipe__v10;
    }
    if (__VdlySet__x_flip_pipe__v11) {
        vlSelfRef.x_flip_pipe[11U] = __VdlyVal__x_flip_pipe__v11;
    }
    if (__VdlySet__x_flip_pipe__v12) {
        vlSelfRef.x_flip_pipe[12U] = __VdlyVal__x_flip_pipe__v12;
    }
    if (__VdlySet__x_flip_pipe__v13) {
        vlSelfRef.x_flip_pipe[13U] = __VdlyVal__x_flip_pipe__v13;
    }
    if (__VdlySet__x_flip_pipe__v14) {
        vlSelfRef.x_flip_pipe[14U] = __VdlyVal__x_flip_pipe__v14;
    }
    if (__VdlySet__x_flip_pipe__v15) {
        vlSelfRef.x_flip_pipe[15U] = __VdlyVal__x_flip_pipe__v15;
    }
    if (__VdlySet__x_flip_pipe__v16) {
        vlSelfRef.x_flip_pipe[16U] = __VdlyVal__x_flip_pipe__v16;
    }
    if (__VdlySet__desired_angle_pipe__v0) {
        vlSelfRef.desired_angle_pipe[0U] = __VdlyVal__desired_angle_pipe__v0;
    }
    if (__VdlySet__desired_angle_pipe__v1) {
        vlSelfRef.desired_angle_pipe[1U] = __VdlyVal__desired_angle_pipe__v1;
    }
    if (__VdlySet__desired_angle_pipe__v2) {
        vlSelfRef.desired_angle_pipe[2U] = __VdlyVal__desired_angle_pipe__v2;
    }
    if (__VdlySet__desired_angle_pipe__v3) {
        vlSelfRef.desired_angle_pipe[3U] = __VdlyVal__desired_angle_pipe__v3;
    }
    if (__VdlySet__desired_angle_pipe__v4) {
        vlSelfRef.desired_angle_pipe[4U] = __VdlyVal__desired_angle_pipe__v4;
    }
    if (__VdlySet__desired_angle_pipe__v5) {
        vlSelfRef.desired_angle_pipe[5U] = __VdlyVal__desired_angle_pipe__v5;
    }
    if (__VdlySet__desired_angle_pipe__v6) {
        vlSelfRef.desired_angle_pipe[6U] = __VdlyVal__desired_angle_pipe__v6;
    }
    if (__VdlySet__desired_angle_pipe__v7) {
        vlSelfRef.desired_angle_pipe[7U] = __VdlyVal__desired_angle_pipe__v7;
    }
    if (__VdlySet__desired_angle_pipe__v8) {
        vlSelfRef.desired_angle_pipe[8U] = __VdlyVal__desired_angle_pipe__v8;
    }
    if (__VdlySet__desired_angle_pipe__v9) {
        vlSelfRef.desired_angle_pipe[9U] = __VdlyVal__desired_angle_pipe__v9;
    }
    if (__VdlySet__desired_angle_pipe__v10) {
        vlSelfRef.desired_angle_pipe[10U] = __VdlyVal__desired_angle_pipe__v10;
    }
    if (__VdlySet__desired_angle_pipe__v11) {
        vlSelfRef.desired_angle_pipe[11U] = __VdlyVal__desired_angle_pipe__v11;
    }
    if (__VdlySet__desired_angle_pipe__v12) {
        vlSelfRef.desired_angle_pipe[12U] = __VdlyVal__desired_angle_pipe__v12;
    }
    if (__VdlySet__desired_angle_pipe__v13) {
        vlSelfRef.desired_angle_pipe[13U] = __VdlyVal__desired_angle_pipe__v13;
    }
    if (__VdlySet__desired_angle_pipe__v14) {
        vlSelfRef.desired_angle_pipe[14U] = __VdlyVal__desired_angle_pipe__v14;
    }
    if (__VdlySet__desired_angle_pipe__v15) {
        vlSelfRef.desired_angle_pipe[15U] = __VdlyVal__desired_angle_pipe__v15;
    }
    if (__VdlySet__total_angle_pipe__v0) {
        vlSelfRef.total_angle_pipe[0U] = 0U;
    }
    if (__VdlySet__x_pipe__v1) {
        vlSelfRef.total_angle_pipe[1U] = __VdlyVal__total_angle_pipe__v1;
    }
    if (__VdlySet__total_angle_pipe__v2) {
        vlSelfRef.total_angle_pipe[1U] = __VdlyVal__total_angle_pipe__v2;
    }
    if (__VdlySet__x_pipe__v3) {
        vlSelfRef.total_angle_pipe[2U] = __VdlyVal__total_angle_pipe__v3;
    }
    if (__VdlySet__total_angle_pipe__v4) {
        vlSelfRef.total_angle_pipe[2U] = __VdlyVal__total_angle_pipe__v4;
    }
    if (__VdlySet__x_pipe__v5) {
        vlSelfRef.total_angle_pipe[3U] = __VdlyVal__total_angle_pipe__v5;
    }
    if (__VdlySet__total_angle_pipe__v6) {
        vlSelfRef.total_angle_pipe[3U] = __VdlyVal__total_angle_pipe__v6;
    }
    if (__VdlySet__x_pipe__v7) {
        vlSelfRef.total_angle_pipe[4U] = __VdlyVal__total_angle_pipe__v7;
    }
    if (__VdlySet__total_angle_pipe__v8) {
        vlSelfRef.total_angle_pipe[4U] = __VdlyVal__total_angle_pipe__v8;
    }
    if (__VdlySet__x_pipe__v9) {
        vlSelfRef.total_angle_pipe[5U] = __VdlyVal__total_angle_pipe__v9;
    }
    if (__VdlySet__total_angle_pipe__v10) {
        vlSelfRef.total_angle_pipe[5U] = __VdlyVal__total_angle_pipe__v10;
    }
    if (__VdlySet__x_pipe__v11) {
        vlSelfRef.total_angle_pipe[6U] = __VdlyVal__total_angle_pipe__v11;
    }
    if (__VdlySet__total_angle_pipe__v12) {
        vlSelfRef.total_angle_pipe[6U] = __VdlyVal__total_angle_pipe__v12;
    }
    if (__VdlySet__x_pipe__v13) {
        vlSelfRef.total_angle_pipe[7U] = __VdlyVal__total_angle_pipe__v13;
    }
    if (__VdlySet__total_angle_pipe__v14) {
        vlSelfRef.total_angle_pipe[7U] = __VdlyVal__total_angle_pipe__v14;
    }
    if (__VdlySet__x_pipe__v15) {
        vlSelfRef.total_angle_pipe[8U] = __VdlyVal__total_angle_pipe__v15;
    }
    if (__VdlySet__total_angle_pipe__v16) {
        vlSelfRef.total_angle_pipe[8U] = __VdlyVal__total_angle_pipe__v16;
    }
    if (__VdlySet__x_pipe__v17) {
        vlSelfRef.total_angle_pipe[9U] = __VdlyVal__total_angle_pipe__v17;
    }
    if (__VdlySet__total_angle_pipe__v18) {
        vlSelfRef.total_angle_pipe[9U] = __VdlyVal__total_angle_pipe__v18;
    }
    if (__VdlySet__x_pipe__v19) {
        vlSelfRef.total_angle_pipe[10U] = __VdlyVal__total_angle_pipe__v19;
    }
    if (__VdlySet__total_angle_pipe__v20) {
        vlSelfRef.total_angle_pipe[10U] = __VdlyVal__total_angle_pipe__v20;
    }
    if (__VdlySet__x_pipe__v21) {
        vlSelfRef.total_angle_pipe[11U] = __VdlyVal__total_angle_pipe__v21;
    }
    if (__VdlySet__total_angle_pipe__v22) {
        vlSelfRef.total_angle_pipe[11U] = __VdlyVal__total_angle_pipe__v22;
    }
    if (__VdlySet__x_pipe__v23) {
        vlSelfRef.total_angle_pipe[12U] = __VdlyVal__total_angle_pipe__v23;
    }
    if (__VdlySet__total_angle_pipe__v24) {
        vlSelfRef.total_angle_pipe[12U] = __VdlyVal__total_angle_pipe__v24;
    }
    if (__VdlySet__x_pipe__v25) {
        vlSelfRef.total_angle_pipe[13U] = __VdlyVal__total_angle_pipe__v25;
    }
    if (__VdlySet__total_angle_pipe__v26) {
        vlSelfRef.total_angle_pipe[13U] = __VdlyVal__total_angle_pipe__v26;
    }
    if (__VdlySet__x_pipe__v27) {
        vlSelfRef.total_angle_pipe[14U] = __VdlyVal__total_angle_pipe__v27;
    }
    if (__VdlySet__total_angle_pipe__v28) {
        vlSelfRef.total_angle_pipe[14U] = __VdlyVal__total_angle_pipe__v28;
    }
    if (__VdlySet__total_angle_pipe__v31) {
        vlSelfRef.desired_angle_pipe[16U] = __VdlyVal__desired_angle_pipe__v16;
    }
    if (__VdlySet__x_pipe__v29) {
        vlSelfRef.total_angle_pipe[15U] = __VdlyVal__total_angle_pipe__v29;
    }
    if (__VdlySet__total_angle_pipe__v30) {
        vlSelfRef.total_angle_pipe[15U] = __VdlyVal__total_angle_pipe__v30;
    }
    if (__VdlySet__total_angle_pipe__v31) {
        vlSelfRef.total_angle_pipe[16U] = __VdlyVal__total_angle_pipe__v31;
    }
    if (__VdlySet__y_pipe__v0) {
        vlSelfRef.y_pipe[0U] = 0U;
    }
    if (__VdlySet__x_pipe__v1) {
        vlSelfRef.y_pipe[1U] = __VdlyVal__y_pipe__v1;
    }
    if (__VdlySet__total_angle_pipe__v2) {
        vlSelfRef.y_pipe[1U] = __VdlyVal__y_pipe__v2;
    }
    if (__VdlySet__x_pipe__v3) {
        vlSelfRef.y_pipe[2U] = __VdlyVal__y_pipe__v3;
    }
    if (__VdlySet__total_angle_pipe__v4) {
        vlSelfRef.y_pipe[2U] = __VdlyVal__y_pipe__v4;
    }
    if (__VdlySet__x_pipe__v5) {
        vlSelfRef.y_pipe[3U] = __VdlyVal__y_pipe__v5;
    }
    if (__VdlySet__total_angle_pipe__v6) {
        vlSelfRef.y_pipe[3U] = __VdlyVal__y_pipe__v6;
    }
    if (__VdlySet__x_pipe__v7) {
        vlSelfRef.y_pipe[4U] = __VdlyVal__y_pipe__v7;
    }
    if (__VdlySet__total_angle_pipe__v8) {
        vlSelfRef.y_pipe[4U] = __VdlyVal__y_pipe__v8;
    }
    if (__VdlySet__x_pipe__v9) {
        vlSelfRef.y_pipe[5U] = __VdlyVal__y_pipe__v9;
    }
    if (__VdlySet__total_angle_pipe__v10) {
        vlSelfRef.y_pipe[5U] = __VdlyVal__y_pipe__v10;
    }
    if (__VdlySet__x_pipe__v11) {
        vlSelfRef.y_pipe[6U] = __VdlyVal__y_pipe__v11;
    }
    if (__VdlySet__total_angle_pipe__v12) {
        vlSelfRef.y_pipe[6U] = __VdlyVal__y_pipe__v12;
    }
    if (__VdlySet__x_pipe__v13) {
        vlSelfRef.y_pipe[7U] = __VdlyVal__y_pipe__v13;
    }
    if (__VdlySet__total_angle_pipe__v14) {
        vlSelfRef.y_pipe[7U] = __VdlyVal__y_pipe__v14;
    }
    if (__VdlySet__x_pipe__v15) {
        vlSelfRef.y_pipe[8U] = __VdlyVal__y_pipe__v15;
    }
    if (__VdlySet__total_angle_pipe__v16) {
        vlSelfRef.y_pipe[8U] = __VdlyVal__y_pipe__v16;
    }
    if (__VdlySet__x_pipe__v17) {
        vlSelfRef.y_pipe[9U] = __VdlyVal__y_pipe__v17;
    }
    if (__VdlySet__total_angle_pipe__v18) {
        vlSelfRef.y_pipe[9U] = __VdlyVal__y_pipe__v18;
    }
    if (__VdlySet__x_pipe__v19) {
        vlSelfRef.y_pipe[10U] = __VdlyVal__y_pipe__v19;
    }
    if (__VdlySet__total_angle_pipe__v20) {
        vlSelfRef.y_pipe[10U] = __VdlyVal__y_pipe__v20;
    }
    if (__VdlySet__x_pipe__v21) {
        vlSelfRef.y_pipe[11U] = __VdlyVal__y_pipe__v21;
    }
    if (__VdlySet__total_angle_pipe__v22) {
        vlSelfRef.y_pipe[11U] = __VdlyVal__y_pipe__v22;
    }
    if (__VdlySet__x_pipe__v23) {
        vlSelfRef.y_pipe[12U] = __VdlyVal__y_pipe__v23;
    }
    if (__VdlySet__total_angle_pipe__v24) {
        vlSelfRef.y_pipe[12U] = __VdlyVal__y_pipe__v24;
    }
    if (__VdlySet__x_pipe__v25) {
        vlSelfRef.y_pipe[13U] = __VdlyVal__y_pipe__v25;
    }
    if (__VdlySet__total_angle_pipe__v26) {
        vlSelfRef.y_pipe[13U] = __VdlyVal__y_pipe__v26;
    }
    if (__VdlySet__x_pipe__v27) {
        vlSelfRef.y_pipe[14U] = __VdlyVal__y_pipe__v27;
    }
    if (__VdlySet__total_angle_pipe__v28) {
        vlSelfRef.y_pipe[14U] = __VdlyVal__y_pipe__v28;
    }
    if (__VdlySet__x_pipe__v29) {
        vlSelfRef.y_pipe[15U] = __VdlyVal__y_pipe__v29;
    }
    if (__VdlySet__total_angle_pipe__v30) {
        vlSelfRef.y_pipe[15U] = __VdlyVal__y_pipe__v30;
    }
    if (__VdlySet__x_pipe__v31) {
        vlSelfRef.y_pipe[16U] = __VdlyVal__y_pipe__v31;
    }
    if (__VdlySet__x_pipe__v0) {
        vlSelfRef.x_pipe[0U] = 0x00004dbaU;
    }
    if (__VdlySet__x_pipe__v1) {
        vlSelfRef.x_pipe[1U] = __VdlyVal__x_pipe__v1;
    }
    if (__VdlySet__total_angle_pipe__v2) {
        vlSelfRef.x_pipe[1U] = __VdlyVal__x_pipe__v2;
    }
    if (__VdlySet__x_pipe__v3) {
        vlSelfRef.x_pipe[2U] = __VdlyVal__x_pipe__v3;
    }
    if (__VdlySet__total_angle_pipe__v4) {
        vlSelfRef.x_pipe[2U] = __VdlyVal__x_pipe__v4;
    }
    if (__VdlySet__x_pipe__v5) {
        vlSelfRef.x_pipe[3U] = __VdlyVal__x_pipe__v5;
    }
    if (__VdlySet__total_angle_pipe__v6) {
        vlSelfRef.x_pipe[3U] = __VdlyVal__x_pipe__v6;
    }
    if (__VdlySet__x_pipe__v7) {
        vlSelfRef.x_pipe[4U] = __VdlyVal__x_pipe__v7;
    }
    if (__VdlySet__total_angle_pipe__v8) {
        vlSelfRef.x_pipe[4U] = __VdlyVal__x_pipe__v8;
    }
    if (__VdlySet__x_pipe__v9) {
        vlSelfRef.x_pipe[5U] = __VdlyVal__x_pipe__v9;
    }
    if (__VdlySet__total_angle_pipe__v10) {
        vlSelfRef.x_pipe[5U] = __VdlyVal__x_pipe__v10;
    }
    if (__VdlySet__x_pipe__v11) {
        vlSelfRef.x_pipe[6U] = __VdlyVal__x_pipe__v11;
    }
    if (__VdlySet__total_angle_pipe__v12) {
        vlSelfRef.x_pipe[6U] = __VdlyVal__x_pipe__v12;
    }
    if (__VdlySet__x_pipe__v13) {
        vlSelfRef.x_pipe[7U] = __VdlyVal__x_pipe__v13;
    }
    if (__VdlySet__total_angle_pipe__v14) {
        vlSelfRef.x_pipe[7U] = __VdlyVal__x_pipe__v14;
    }
    if (__VdlySet__x_pipe__v15) {
        vlSelfRef.x_pipe[8U] = __VdlyVal__x_pipe__v15;
    }
    if (__VdlySet__total_angle_pipe__v16) {
        vlSelfRef.x_pipe[8U] = __VdlyVal__x_pipe__v16;
    }
    if (__VdlySet__x_pipe__v17) {
        vlSelfRef.x_pipe[9U] = __VdlyVal__x_pipe__v17;
    }
    if (__VdlySet__total_angle_pipe__v18) {
        vlSelfRef.x_pipe[9U] = __VdlyVal__x_pipe__v18;
    }
    if (__VdlySet__x_pipe__v19) {
        vlSelfRef.x_pipe[10U] = __VdlyVal__x_pipe__v19;
    }
    if (__VdlySet__total_angle_pipe__v20) {
        vlSelfRef.x_pipe[10U] = __VdlyVal__x_pipe__v20;
    }
    if (__VdlySet__x_pipe__v21) {
        vlSelfRef.x_pipe[11U] = __VdlyVal__x_pipe__v21;
    }
    if (__VdlySet__total_angle_pipe__v22) {
        vlSelfRef.x_pipe[11U] = __VdlyVal__x_pipe__v22;
    }
    if (__VdlySet__x_pipe__v23) {
        vlSelfRef.x_pipe[12U] = __VdlyVal__x_pipe__v23;
    }
    if (__VdlySet__total_angle_pipe__v24) {
        vlSelfRef.x_pipe[12U] = __VdlyVal__x_pipe__v24;
    }
    if (__VdlySet__x_pipe__v25) {
        vlSelfRef.x_pipe[13U] = __VdlyVal__x_pipe__v25;
    }
    if (__VdlySet__total_angle_pipe__v26) {
        vlSelfRef.x_pipe[13U] = __VdlyVal__x_pipe__v26;
    }
    if (__VdlySet__x_pipe__v27) {
        vlSelfRef.x_pipe[14U] = __VdlyVal__x_pipe__v27;
    }
    if (__VdlySet__total_angle_pipe__v28) {
        vlSelfRef.x_pipe[14U] = __VdlyVal__x_pipe__v28;
    }
    if (__VdlySet__x_pipe__v29) {
        vlSelfRef.x_pipe[15U] = __VdlyVal__x_pipe__v29;
    }
    if (__VdlySet__total_angle_pipe__v30) {
        vlSelfRef.x_pipe[15U] = __VdlyVal__x_pipe__v30;
    }
    if (__VdlySet__x_pipe__v31) {
        vlSelfRef.x_pipe[16U] = __VdlyVal__x_pipe__v31;
    }
    if (__VdlySet__x_pipe__v32) {
        vlSelfRef.y_pipe[16U] = __VdlyVal__y_pipe__v32;
        vlSelfRef.x_pipe[16U] = __VdlyVal__x_pipe__v32;
    }
    vlSelfRef.data_cossin_valid_out = vlSelfRef.valid_pipe[16U];
    vlSelfRef.sin = ((1U == (3U & (vlSelfRef.y_pipe[16U] 
                                   >> 0x0000000fU)))
                      ? 0x00007fffU : ((2U == (3U & 
                                               (vlSelfRef.y_pipe[16U] 
                                                >> 0x0000000fU)))
                                        ? 0x00008000U
                                        : (0x0000ffffU 
                                           & vlSelfRef.y_pipe[16U])));
    __VdfgRegularize_h6e95ff9d_0_9 = (0x0001ffffU & 
                                      (vlSelfRef.x_flip_pipe[16U]
                                        ? (- vlSelfRef.x_pipe[16U])
                                        : vlSelfRef.x_pipe[16U]));
    vlSelfRef.cos = ((1U == (3U & (__VdfgRegularize_h6e95ff9d_0_9 
                                   >> 0x0000000fU)))
                      ? 0x00007fffU : ((2U == (3U & 
                                               (__VdfgRegularize_h6e95ff9d_0_9 
                                                >> 0x0000000fU)))
                                        ? 0x00008000U
                                        : (0x0000ffffU 
                                           & __VdfgRegularize_h6e95ff9d_0_9)));
}

void Vtop_cordic_cossin___ico_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin___ico_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_10;
    __VdfgRegularize_h6e95ff9d_0_10 = 0;
    // Body
    vlSelfRef.sin = ((1U == (3U & (vlSelfRef.y_pipe[16U] 
                                   >> 0x0000000fU)))
                      ? 0x00007fffU : ((2U == (3U & 
                                               (vlSelfRef.y_pipe[16U] 
                                                >> 0x0000000fU)))
                                        ? 0x00008000U
                                        : (0x0000ffffU 
                                           & vlSelfRef.y_pipe[16U])));
    vlSelfRef.data_cossin_valid_out = vlSelfRef.valid_pipe[16U];
    __VdfgRegularize_h6e95ff9d_0_10 = (0x0001ffffU 
                                       & (vlSelfRef.x_flip_pipe[16U]
                                           ? (- vlSelfRef.x_pipe[16U])
                                           : vlSelfRef.x_pipe[16U]));
    vlSelfRef.cos = ((1U == (3U & (__VdfgRegularize_h6e95ff9d_0_10 
                                   >> 0x0000000fU)))
                      ? 0x00007fffU : ((2U == (3U & 
                                               (__VdfgRegularize_h6e95ff9d_0_10 
                                                >> 0x0000000fU)))
                                        ? 0x00008000U
                                        : (0x0000ffffU 
                                           & __VdfgRegularize_h6e95ff9d_0_10)));
}

void Vtop_cordic_cossin___ico_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic__1(Vtop_cordic_cossin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin___ico_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clk = vlSymsp->TOP.harmonic_generator__DOT__clk;
    vlSelfRef.rst = vlSymsp->TOP.harmonic_generator__DOT__rst;
    vlSelfRef.data_angle_valid_in = vlSymsp->TOP.harmonic_generator__DOT__data_valid_in;
    vlSelfRef.angle = vlSymsp->TOP.harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__angle_n;
}

void Vtop_cordic_cossin___nba_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin___nba_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_10;
    __VdfgRegularize_h6e95ff9d_0_10 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v0;
    __VdlySet__total_angle_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v0;
    __VdlyVal__valid_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v0;
    __VdlySet__x_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__y_pipe__v0;
    __VdlySet__y_pipe__v0 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v0;
    __VdlyVal__desired_angle_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v0;
    __VdlySet__desired_angle_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v0;
    __VdlyVal__x_flip_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v0;
    __VdlySet__x_flip_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v1;
    __VdlyVal__valid_pipe__v1 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v1;
    __VdlyVal__x_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v1;
    __VdlySet__x_pipe__v1 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v1;
    __VdlyVal__total_angle_pipe__v1 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v1;
    __VdlyVal__y_pipe__v1 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v2;
    __VdlyVal__total_angle_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v2;
    __VdlySet__total_angle_pipe__v2 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v2;
    __VdlyVal__x_pipe__v2 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v2;
    __VdlyVal__y_pipe__v2 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v1;
    __VdlyVal__desired_angle_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v1;
    __VdlySet__desired_angle_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v1;
    __VdlyVal__x_flip_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v1;
    __VdlySet__x_flip_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v2;
    __VdlyVal__valid_pipe__v2 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v3;
    __VdlyVal__x_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v3;
    __VdlySet__x_pipe__v3 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v3;
    __VdlyVal__total_angle_pipe__v3 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v3;
    __VdlyVal__y_pipe__v3 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v4;
    __VdlyVal__total_angle_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v4;
    __VdlySet__total_angle_pipe__v4 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v4;
    __VdlyVal__x_pipe__v4 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v4;
    __VdlyVal__y_pipe__v4 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v2;
    __VdlyVal__desired_angle_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v2;
    __VdlySet__desired_angle_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v2;
    __VdlyVal__x_flip_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v2;
    __VdlySet__x_flip_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v3;
    __VdlyVal__valid_pipe__v3 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v5;
    __VdlyVal__x_pipe__v5 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v5;
    __VdlySet__x_pipe__v5 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v5;
    __VdlyVal__total_angle_pipe__v5 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v5;
    __VdlyVal__y_pipe__v5 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v6;
    __VdlyVal__total_angle_pipe__v6 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v6;
    __VdlySet__total_angle_pipe__v6 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v6;
    __VdlyVal__x_pipe__v6 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v6;
    __VdlyVal__y_pipe__v6 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v3;
    __VdlyVal__desired_angle_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v3;
    __VdlySet__desired_angle_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v3;
    __VdlyVal__x_flip_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v3;
    __VdlySet__x_flip_pipe__v3 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v4;
    __VdlyVal__valid_pipe__v4 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v7;
    __VdlyVal__x_pipe__v7 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v7;
    __VdlySet__x_pipe__v7 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v7;
    __VdlyVal__total_angle_pipe__v7 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v7;
    __VdlyVal__y_pipe__v7 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v8;
    __VdlyVal__total_angle_pipe__v8 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v8;
    __VdlySet__total_angle_pipe__v8 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v8;
    __VdlyVal__x_pipe__v8 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v8;
    __VdlyVal__y_pipe__v8 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v4;
    __VdlyVal__desired_angle_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v4;
    __VdlySet__desired_angle_pipe__v4 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v4;
    __VdlyVal__x_flip_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v4;
    __VdlySet__x_flip_pipe__v4 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v5;
    __VdlyVal__valid_pipe__v5 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v9;
    __VdlyVal__x_pipe__v9 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v9;
    __VdlySet__x_pipe__v9 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v9;
    __VdlyVal__total_angle_pipe__v9 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v9;
    __VdlyVal__y_pipe__v9 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v10;
    __VdlyVal__total_angle_pipe__v10 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v10;
    __VdlySet__total_angle_pipe__v10 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v10;
    __VdlyVal__x_pipe__v10 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v10;
    __VdlyVal__y_pipe__v10 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v5;
    __VdlyVal__desired_angle_pipe__v5 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v5;
    __VdlySet__desired_angle_pipe__v5 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v5;
    __VdlyVal__x_flip_pipe__v5 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v5;
    __VdlySet__x_flip_pipe__v5 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v6;
    __VdlyVal__valid_pipe__v6 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v11;
    __VdlyVal__x_pipe__v11 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v11;
    __VdlySet__x_pipe__v11 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v11;
    __VdlyVal__total_angle_pipe__v11 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v11;
    __VdlyVal__y_pipe__v11 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v12;
    __VdlyVal__total_angle_pipe__v12 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v12;
    __VdlySet__total_angle_pipe__v12 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v12;
    __VdlyVal__x_pipe__v12 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v12;
    __VdlyVal__y_pipe__v12 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v6;
    __VdlyVal__desired_angle_pipe__v6 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v6;
    __VdlySet__desired_angle_pipe__v6 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v6;
    __VdlyVal__x_flip_pipe__v6 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v6;
    __VdlySet__x_flip_pipe__v6 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v7;
    __VdlyVal__valid_pipe__v7 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v13;
    __VdlyVal__x_pipe__v13 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v13;
    __VdlySet__x_pipe__v13 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v13;
    __VdlyVal__total_angle_pipe__v13 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v13;
    __VdlyVal__y_pipe__v13 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v14;
    __VdlyVal__total_angle_pipe__v14 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v14;
    __VdlySet__total_angle_pipe__v14 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v14;
    __VdlyVal__x_pipe__v14 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v14;
    __VdlyVal__y_pipe__v14 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v7;
    __VdlyVal__desired_angle_pipe__v7 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v7;
    __VdlySet__desired_angle_pipe__v7 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v7;
    __VdlyVal__x_flip_pipe__v7 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v7;
    __VdlySet__x_flip_pipe__v7 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v8;
    __VdlyVal__valid_pipe__v8 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v15;
    __VdlyVal__x_pipe__v15 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v15;
    __VdlySet__x_pipe__v15 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v15;
    __VdlyVal__total_angle_pipe__v15 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v15;
    __VdlyVal__y_pipe__v15 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v16;
    __VdlyVal__total_angle_pipe__v16 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v16;
    __VdlySet__total_angle_pipe__v16 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v16;
    __VdlyVal__x_pipe__v16 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v16;
    __VdlyVal__y_pipe__v16 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v8;
    __VdlyVal__desired_angle_pipe__v8 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v8;
    __VdlySet__desired_angle_pipe__v8 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v8;
    __VdlyVal__x_flip_pipe__v8 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v8;
    __VdlySet__x_flip_pipe__v8 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v9;
    __VdlyVal__valid_pipe__v9 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v17;
    __VdlyVal__x_pipe__v17 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v17;
    __VdlySet__x_pipe__v17 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v17;
    __VdlyVal__total_angle_pipe__v17 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v17;
    __VdlyVal__y_pipe__v17 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v18;
    __VdlyVal__total_angle_pipe__v18 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v18;
    __VdlySet__total_angle_pipe__v18 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v18;
    __VdlyVal__x_pipe__v18 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v18;
    __VdlyVal__y_pipe__v18 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v9;
    __VdlyVal__desired_angle_pipe__v9 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v9;
    __VdlySet__desired_angle_pipe__v9 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v9;
    __VdlyVal__x_flip_pipe__v9 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v9;
    __VdlySet__x_flip_pipe__v9 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v10;
    __VdlyVal__valid_pipe__v10 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v19;
    __VdlyVal__x_pipe__v19 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v19;
    __VdlySet__x_pipe__v19 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v19;
    __VdlyVal__total_angle_pipe__v19 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v19;
    __VdlyVal__y_pipe__v19 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v20;
    __VdlyVal__total_angle_pipe__v20 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v20;
    __VdlySet__total_angle_pipe__v20 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v20;
    __VdlyVal__x_pipe__v20 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v20;
    __VdlyVal__y_pipe__v20 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v10;
    __VdlyVal__desired_angle_pipe__v10 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v10;
    __VdlySet__desired_angle_pipe__v10 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v10;
    __VdlyVal__x_flip_pipe__v10 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v10;
    __VdlySet__x_flip_pipe__v10 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v11;
    __VdlyVal__valid_pipe__v11 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v21;
    __VdlyVal__x_pipe__v21 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v21;
    __VdlySet__x_pipe__v21 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v21;
    __VdlyVal__total_angle_pipe__v21 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v21;
    __VdlyVal__y_pipe__v21 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v22;
    __VdlyVal__total_angle_pipe__v22 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v22;
    __VdlySet__total_angle_pipe__v22 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v22;
    __VdlyVal__x_pipe__v22 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v22;
    __VdlyVal__y_pipe__v22 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v11;
    __VdlyVal__desired_angle_pipe__v11 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v11;
    __VdlySet__desired_angle_pipe__v11 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v11;
    __VdlyVal__x_flip_pipe__v11 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v11;
    __VdlySet__x_flip_pipe__v11 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v12;
    __VdlyVal__valid_pipe__v12 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v23;
    __VdlyVal__x_pipe__v23 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v23;
    __VdlySet__x_pipe__v23 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v23;
    __VdlyVal__total_angle_pipe__v23 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v23;
    __VdlyVal__y_pipe__v23 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v24;
    __VdlyVal__total_angle_pipe__v24 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v24;
    __VdlySet__total_angle_pipe__v24 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v24;
    __VdlyVal__x_pipe__v24 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v24;
    __VdlyVal__y_pipe__v24 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v12;
    __VdlyVal__desired_angle_pipe__v12 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v12;
    __VdlySet__desired_angle_pipe__v12 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v12;
    __VdlyVal__x_flip_pipe__v12 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v12;
    __VdlySet__x_flip_pipe__v12 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v13;
    __VdlyVal__valid_pipe__v13 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v25;
    __VdlyVal__x_pipe__v25 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v25;
    __VdlySet__x_pipe__v25 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v25;
    __VdlyVal__total_angle_pipe__v25 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v25;
    __VdlyVal__y_pipe__v25 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v26;
    __VdlyVal__total_angle_pipe__v26 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v26;
    __VdlySet__total_angle_pipe__v26 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v26;
    __VdlyVal__x_pipe__v26 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v26;
    __VdlyVal__y_pipe__v26 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v13;
    __VdlyVal__desired_angle_pipe__v13 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v13;
    __VdlySet__desired_angle_pipe__v13 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v13;
    __VdlyVal__x_flip_pipe__v13 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v13;
    __VdlySet__x_flip_pipe__v13 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v14;
    __VdlyVal__valid_pipe__v14 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v27;
    __VdlyVal__x_pipe__v27 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v27;
    __VdlySet__x_pipe__v27 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v27;
    __VdlyVal__total_angle_pipe__v27 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v27;
    __VdlyVal__y_pipe__v27 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v28;
    __VdlyVal__total_angle_pipe__v28 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v28;
    __VdlySet__total_angle_pipe__v28 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v28;
    __VdlyVal__x_pipe__v28 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v28;
    __VdlyVal__y_pipe__v28 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v14;
    __VdlyVal__desired_angle_pipe__v14 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v14;
    __VdlySet__desired_angle_pipe__v14 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v14;
    __VdlyVal__x_flip_pipe__v14 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v14;
    __VdlySet__x_flip_pipe__v14 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v15;
    __VdlyVal__valid_pipe__v15 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v29;
    __VdlyVal__x_pipe__v29 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v29;
    __VdlySet__x_pipe__v29 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v29;
    __VdlyVal__total_angle_pipe__v29 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v29;
    __VdlyVal__y_pipe__v29 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v30;
    __VdlyVal__total_angle_pipe__v30 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v30;
    __VdlySet__total_angle_pipe__v30 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v30;
    __VdlyVal__x_pipe__v30 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v30;
    __VdlyVal__y_pipe__v30 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v15;
    __VdlyVal__desired_angle_pipe__v15 = 0;
    CData/*0:0*/ __VdlySet__desired_angle_pipe__v15;
    __VdlySet__desired_angle_pipe__v15 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v15;
    __VdlyVal__x_flip_pipe__v15 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v15;
    __VdlySet__x_flip_pipe__v15 = 0;
    CData/*0:0*/ __VdlyVal__valid_pipe__v16;
    __VdlyVal__valid_pipe__v16 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v31;
    __VdlyVal__x_pipe__v31 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v31;
    __VdlySet__x_pipe__v31 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v31;
    __VdlyVal__y_pipe__v31 = 0;
    IData/*16:0*/ __VdlyVal__x_pipe__v32;
    __VdlyVal__x_pipe__v32 = 0;
    CData/*0:0*/ __VdlySet__x_pipe__v32;
    __VdlySet__x_pipe__v32 = 0;
    IData/*16:0*/ __VdlyVal__y_pipe__v32;
    __VdlyVal__y_pipe__v32 = 0;
    SData/*15:0*/ __VdlyVal__total_angle_pipe__v31;
    __VdlyVal__total_angle_pipe__v31 = 0;
    CData/*0:0*/ __VdlySet__total_angle_pipe__v31;
    __VdlySet__total_angle_pipe__v31 = 0;
    SData/*15:0*/ __VdlyVal__desired_angle_pipe__v16;
    __VdlyVal__desired_angle_pipe__v16 = 0;
    CData/*0:0*/ __VdlyVal__x_flip_pipe__v16;
    __VdlyVal__x_flip_pipe__v16 = 0;
    CData/*0:0*/ __VdlySet__x_flip_pipe__v16;
    __VdlySet__x_flip_pipe__v16 = 0;
    // Body
    __VdlySet__desired_angle_pipe__v0 = 0U;
    __VdlySet__total_angle_pipe__v0 = 0U;
    __VdlySet__y_pipe__v0 = 0U;
    __VdlySet__x_pipe__v0 = 0U;
    __VdlySet__x_flip_pipe__v0 = 0U;
    __VdlySet__x_flip_pipe__v1 = 0U;
    __VdlySet__x_flip_pipe__v2 = 0U;
    __VdlySet__x_flip_pipe__v3 = 0U;
    __VdlySet__x_flip_pipe__v4 = 0U;
    __VdlySet__x_flip_pipe__v5 = 0U;
    __VdlySet__x_flip_pipe__v6 = 0U;
    __VdlySet__x_flip_pipe__v7 = 0U;
    __VdlySet__x_flip_pipe__v8 = 0U;
    __VdlySet__x_flip_pipe__v9 = 0U;
    __VdlySet__x_flip_pipe__v10 = 0U;
    __VdlySet__x_flip_pipe__v11 = 0U;
    __VdlySet__x_flip_pipe__v12 = 0U;
    __VdlySet__x_flip_pipe__v13 = 0U;
    __VdlySet__x_flip_pipe__v14 = 0U;
    __VdlySet__x_flip_pipe__v15 = 0U;
    __VdlySet__x_flip_pipe__v16 = 0U;
    __VdlySet__total_angle_pipe__v31 = 0U;
    __VdlySet__desired_angle_pipe__v1 = 0U;
    __VdlySet__desired_angle_pipe__v2 = 0U;
    __VdlySet__desired_angle_pipe__v3 = 0U;
    __VdlySet__desired_angle_pipe__v4 = 0U;
    __VdlySet__desired_angle_pipe__v5 = 0U;
    __VdlySet__desired_angle_pipe__v6 = 0U;
    __VdlySet__desired_angle_pipe__v7 = 0U;
    __VdlySet__desired_angle_pipe__v8 = 0U;
    __VdlySet__desired_angle_pipe__v9 = 0U;
    __VdlySet__desired_angle_pipe__v10 = 0U;
    __VdlySet__desired_angle_pipe__v11 = 0U;
    __VdlySet__desired_angle_pipe__v12 = 0U;
    __VdlySet__desired_angle_pipe__v13 = 0U;
    __VdlySet__desired_angle_pipe__v14 = 0U;
    __VdlySet__desired_angle_pipe__v15 = 0U;
    __VdlySet__x_pipe__v31 = 0U;
    __VdlySet__x_pipe__v32 = 0U;
    __VdlySet__total_angle_pipe__v2 = 0U;
    __VdlySet__total_angle_pipe__v4 = 0U;
    __VdlySet__total_angle_pipe__v6 = 0U;
    __VdlySet__total_angle_pipe__v8 = 0U;
    __VdlySet__total_angle_pipe__v10 = 0U;
    __VdlySet__total_angle_pipe__v12 = 0U;
    __VdlySet__total_angle_pipe__v14 = 0U;
    __VdlySet__total_angle_pipe__v16 = 0U;
    __VdlySet__total_angle_pipe__v18 = 0U;
    __VdlySet__total_angle_pipe__v20 = 0U;
    __VdlySet__total_angle_pipe__v22 = 0U;
    __VdlySet__total_angle_pipe__v24 = 0U;
    __VdlySet__total_angle_pipe__v26 = 0U;
    __VdlySet__total_angle_pipe__v28 = 0U;
    __VdlySet__total_angle_pipe__v30 = 0U;
    __VdlySet__x_pipe__v1 = 0U;
    __VdlySet__x_pipe__v3 = 0U;
    __VdlySet__x_pipe__v5 = 0U;
    __VdlySet__x_pipe__v7 = 0U;
    __VdlySet__x_pipe__v9 = 0U;
    __VdlySet__x_pipe__v11 = 0U;
    __VdlySet__x_pipe__v13 = 0U;
    __VdlySet__x_pipe__v15 = 0U;
    __VdlySet__x_pipe__v17 = 0U;
    __VdlySet__x_pipe__v19 = 0U;
    __VdlySet__x_pipe__v21 = 0U;
    __VdlySet__x_pipe__v23 = 0U;
    __VdlySet__x_pipe__v25 = 0U;
    __VdlySet__x_pipe__v27 = 0U;
    __VdlySet__x_pipe__v29 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.rst)))) {
        if ((0x00008000U & (IData)(vlSelfRef.angle))) {
            __VdlyVal__desired_angle_pipe__v0 = (0x0000ffffU 
                                                 & ((0x00004000U 
                                                     & (IData)(vlSelfRef.angle))
                                                     ? (IData)(vlSelfRef.angle)
                                                     : 
                                                    ((IData)(0x8000U) 
                                                     - 
                                                     VL_EXTENDS_II(16,16, (IData)(vlSelfRef.angle)))));
            __VdlyVal__x_flip_pipe__v0 = (1U & (~ ((IData)(vlSelfRef.angle) 
                                                   >> 0x0000000eU)));
        } else {
            __VdlyVal__desired_angle_pipe__v0 = (0x0000ffffU 
                                                 & ((0x00004000U 
                                                     & (IData)(vlSelfRef.angle))
                                                     ? 
                                                    ((IData)(0x8000U) 
                                                     - 
                                                     VL_EXTENDS_II(16,16, (IData)(vlSelfRef.angle)))
                                                     : (IData)(vlSelfRef.angle)));
            __VdlyVal__x_flip_pipe__v0 = (1U & ((IData)(vlSelfRef.angle) 
                                                >> 0x0000000eU));
        }
        __VdlySet__desired_angle_pipe__v0 = 1U;
        __VdlySet__total_angle_pipe__v0 = 1U;
        __VdlySet__y_pipe__v0 = 1U;
        __VdlySet__x_pipe__v0 = 1U;
        __VdlySet__x_flip_pipe__v0 = 1U;
        __VdlyVal__x_flip_pipe__v1 = vlSelfRef.x_flip_pipe[0U];
        __VdlySet__x_flip_pipe__v1 = 1U;
        __VdlyVal__x_flip_pipe__v2 = vlSelfRef.x_flip_pipe[1U];
        __VdlySet__x_flip_pipe__v2 = 1U;
        __VdlyVal__x_flip_pipe__v3 = vlSelfRef.x_flip_pipe[2U];
        __VdlySet__x_flip_pipe__v3 = 1U;
        __VdlyVal__x_flip_pipe__v4 = vlSelfRef.x_flip_pipe[3U];
        __VdlySet__x_flip_pipe__v4 = 1U;
        __VdlyVal__x_flip_pipe__v5 = vlSelfRef.x_flip_pipe[4U];
        __VdlySet__x_flip_pipe__v5 = 1U;
        __VdlyVal__x_flip_pipe__v6 = vlSelfRef.x_flip_pipe[5U];
        __VdlySet__x_flip_pipe__v6 = 1U;
        __VdlyVal__x_flip_pipe__v7 = vlSelfRef.x_flip_pipe[6U];
        __VdlySet__x_flip_pipe__v7 = 1U;
        __VdlyVal__x_flip_pipe__v8 = vlSelfRef.x_flip_pipe[7U];
        __VdlySet__x_flip_pipe__v8 = 1U;
        __VdlyVal__x_flip_pipe__v9 = vlSelfRef.x_flip_pipe[8U];
        __VdlySet__x_flip_pipe__v9 = 1U;
        __VdlyVal__x_flip_pipe__v10 = vlSelfRef.x_flip_pipe[9U];
        __VdlySet__x_flip_pipe__v10 = 1U;
        __VdlyVal__x_flip_pipe__v11 = vlSelfRef.x_flip_pipe[10U];
        __VdlySet__x_flip_pipe__v11 = 1U;
        __VdlyVal__x_flip_pipe__v12 = vlSelfRef.x_flip_pipe[11U];
        __VdlySet__x_flip_pipe__v12 = 1U;
        __VdlyVal__x_flip_pipe__v13 = vlSelfRef.x_flip_pipe[12U];
        __VdlySet__x_flip_pipe__v13 = 1U;
        __VdlyVal__x_flip_pipe__v14 = vlSelfRef.x_flip_pipe[13U];
        __VdlySet__x_flip_pipe__v14 = 1U;
        __VdlyVal__x_flip_pipe__v15 = vlSelfRef.x_flip_pipe[14U];
        __VdlySet__x_flip_pipe__v15 = 1U;
        __VdlyVal__x_flip_pipe__v16 = vlSelfRef.x_flip_pipe[15U];
        __VdlySet__x_flip_pipe__v16 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[15U], vlSelfRef.desired_angle_pipe[15U])) {
            __VdlyVal__x_pipe__v31 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[15U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[15U], 0x0000000fU)));
            __VdlySet__x_pipe__v31 = 1U;
            __VdlyVal__y_pipe__v31 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[15U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[15U], 0x0000000fU)));
        } else {
            __VdlyVal__x_pipe__v32 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[15U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[15U], 0x0000000fU)));
            __VdlySet__x_pipe__v32 = 1U;
            __VdlyVal__y_pipe__v32 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[15U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[15U], 0x0000000fU)));
        }
        __VdlyVal__total_angle_pipe__v31 = vlSelfRef.total_angle_pipe[15U];
        __VdlySet__total_angle_pipe__v31 = 1U;
        __VdlyVal__desired_angle_pipe__v16 = vlSelfRef.desired_angle_pipe[15U];
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[0U], vlSelfRef.desired_angle_pipe[0U])) {
            __VdlyVal__x_pipe__v1 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[0U] 
                                      - vlSelfRef.y_pipe[0U]));
            __VdlySet__x_pipe__v1 = 1U;
            __VdlyVal__total_angle_pipe__v1 = (0x0000ffffU 
                                               & ((IData)(0x2000U) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[0U])));
            __VdlyVal__y_pipe__v1 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[0U] 
                                      + vlSelfRef.x_pipe[0U]));
        } else {
            __VdlyVal__total_angle_pipe__v2 = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.total_angle_pipe[0U]) 
                                                  - (IData)(0x2000U)));
            __VdlySet__total_angle_pipe__v2 = 1U;
            __VdlyVal__x_pipe__v2 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[0U] 
                                      + vlSelfRef.y_pipe[0U]));
            __VdlyVal__y_pipe__v2 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[0U] 
                                      - vlSelfRef.x_pipe[0U]));
        }
        __VdlyVal__desired_angle_pipe__v1 = vlSelfRef.desired_angle_pipe[0U];
        __VdlySet__desired_angle_pipe__v1 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[1U], vlSelfRef.desired_angle_pipe[1U])) {
            __VdlyVal__x_pipe__v3 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[1U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[1U], 1U)));
            __VdlySet__x_pipe__v3 = 1U;
            __VdlyVal__total_angle_pipe__v3 = (0x0000ffffU 
                                               & ((IData)(0x12e4U) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[1U])));
            __VdlyVal__y_pipe__v3 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[1U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[1U], 1U)));
        } else {
            __VdlyVal__total_angle_pipe__v4 = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.total_angle_pipe[1U]) 
                                                  - (IData)(0x12e4U)));
            __VdlySet__total_angle_pipe__v4 = 1U;
            __VdlyVal__x_pipe__v4 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[1U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[1U], 1U)));
            __VdlyVal__y_pipe__v4 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[1U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[1U], 1U)));
        }
        __VdlyVal__desired_angle_pipe__v2 = vlSelfRef.desired_angle_pipe[1U];
        __VdlySet__desired_angle_pipe__v2 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[2U], vlSelfRef.desired_angle_pipe[2U])) {
            __VdlyVal__x_pipe__v5 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[2U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[2U], 2U)));
            __VdlySet__x_pipe__v5 = 1U;
            __VdlyVal__total_angle_pipe__v5 = (0x0000ffffU 
                                               & ((IData)(0x09fbU) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[2U])));
            __VdlyVal__y_pipe__v5 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[2U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[2U], 2U)));
        } else {
            __VdlyVal__total_angle_pipe__v6 = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.total_angle_pipe[2U]) 
                                                  - (IData)(0x09fbU)));
            __VdlySet__total_angle_pipe__v6 = 1U;
            __VdlyVal__x_pipe__v6 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[2U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[2U], 2U)));
            __VdlyVal__y_pipe__v6 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[2U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[2U], 2U)));
        }
        __VdlyVal__desired_angle_pipe__v3 = vlSelfRef.desired_angle_pipe[2U];
        __VdlySet__desired_angle_pipe__v3 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[3U], vlSelfRef.desired_angle_pipe[3U])) {
            __VdlyVal__x_pipe__v7 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[3U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[3U], 3U)));
            __VdlySet__x_pipe__v7 = 1U;
            __VdlyVal__total_angle_pipe__v7 = (0x0000ffffU 
                                               & ((IData)(0x0511U) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[3U])));
            __VdlyVal__y_pipe__v7 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[3U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[3U], 3U)));
        } else {
            __VdlyVal__total_angle_pipe__v8 = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.total_angle_pipe[3U]) 
                                                  - (IData)(0x0511U)));
            __VdlySet__total_angle_pipe__v8 = 1U;
            __VdlyVal__x_pipe__v8 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[3U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[3U], 3U)));
            __VdlyVal__y_pipe__v8 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[3U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[3U], 3U)));
        }
        __VdlyVal__desired_angle_pipe__v4 = vlSelfRef.desired_angle_pipe[3U];
        __VdlySet__desired_angle_pipe__v4 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[4U], vlSelfRef.desired_angle_pipe[4U])) {
            __VdlyVal__x_pipe__v9 = (0x0001ffffU & 
                                     (vlSelfRef.x_pipe[4U] 
                                      - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[4U], 4U)));
            __VdlySet__x_pipe__v9 = 1U;
            __VdlyVal__total_angle_pipe__v9 = (0x0000ffffU 
                                               & ((IData)(0x028bU) 
                                                  + (IData)(vlSelfRef.total_angle_pipe[4U])));
            __VdlyVal__y_pipe__v9 = (0x0001ffffU & 
                                     (vlSelfRef.y_pipe[4U] 
                                      + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[4U], 4U)));
        } else {
            __VdlyVal__total_angle_pipe__v10 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[4U]) 
                                                   - (IData)(0x028bU)));
            __VdlySet__total_angle_pipe__v10 = 1U;
            __VdlyVal__x_pipe__v10 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[4U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[4U], 4U)));
            __VdlyVal__y_pipe__v10 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[4U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[4U], 4U)));
        }
        __VdlyVal__desired_angle_pipe__v5 = vlSelfRef.desired_angle_pipe[4U];
        __VdlySet__desired_angle_pipe__v5 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[5U], vlSelfRef.desired_angle_pipe[5U])) {
            __VdlyVal__x_pipe__v11 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[5U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[5U], 5U)));
            __VdlySet__x_pipe__v11 = 1U;
            __VdlyVal__total_angle_pipe__v11 = (0x0000ffffU 
                                                & ((IData)(0x0146U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[5U])));
            __VdlyVal__y_pipe__v11 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[5U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[5U], 5U)));
        } else {
            __VdlyVal__total_angle_pipe__v12 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[5U]) 
                                                   - (IData)(0x0146U)));
            __VdlySet__total_angle_pipe__v12 = 1U;
            __VdlyVal__x_pipe__v12 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[5U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[5U], 5U)));
            __VdlyVal__y_pipe__v12 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[5U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[5U], 5U)));
        }
        __VdlyVal__desired_angle_pipe__v6 = vlSelfRef.desired_angle_pipe[5U];
        __VdlySet__desired_angle_pipe__v6 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[6U], vlSelfRef.desired_angle_pipe[6U])) {
            __VdlyVal__x_pipe__v13 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[6U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[6U], 6U)));
            __VdlySet__x_pipe__v13 = 1U;
            __VdlyVal__total_angle_pipe__v13 = (0x0000ffffU 
                                                & ((IData)(0x00a3U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[6U])));
            __VdlyVal__y_pipe__v13 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[6U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[6U], 6U)));
        } else {
            __VdlyVal__total_angle_pipe__v14 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[6U]) 
                                                   - (IData)(0x00a3U)));
            __VdlySet__total_angle_pipe__v14 = 1U;
            __VdlyVal__x_pipe__v14 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[6U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[6U], 6U)));
            __VdlyVal__y_pipe__v14 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[6U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[6U], 6U)));
        }
        __VdlyVal__desired_angle_pipe__v7 = vlSelfRef.desired_angle_pipe[6U];
        __VdlySet__desired_angle_pipe__v7 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[7U], vlSelfRef.desired_angle_pipe[7U])) {
            __VdlyVal__x_pipe__v15 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[7U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[7U], 7U)));
            __VdlySet__x_pipe__v15 = 1U;
            __VdlyVal__total_angle_pipe__v15 = (0x0000ffffU 
                                                & ((IData)(0x0051U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[7U])));
            __VdlyVal__y_pipe__v15 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[7U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[7U], 7U)));
        } else {
            __VdlyVal__total_angle_pipe__v16 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[7U]) 
                                                   - (IData)(0x0051U)));
            __VdlySet__total_angle_pipe__v16 = 1U;
            __VdlyVal__x_pipe__v16 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[7U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[7U], 7U)));
            __VdlyVal__y_pipe__v16 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[7U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[7U], 7U)));
        }
        __VdlyVal__desired_angle_pipe__v8 = vlSelfRef.desired_angle_pipe[7U];
        __VdlySet__desired_angle_pipe__v8 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[8U], vlSelfRef.desired_angle_pipe[8U])) {
            __VdlyVal__x_pipe__v17 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[8U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[8U], 8U)));
            __VdlySet__x_pipe__v17 = 1U;
            __VdlyVal__total_angle_pipe__v17 = (0x0000ffffU 
                                                & ((IData)(0x0029U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[8U])));
            __VdlyVal__y_pipe__v17 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[8U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[8U], 8U)));
        } else {
            __VdlyVal__total_angle_pipe__v18 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[8U]) 
                                                   - (IData)(0x0029U)));
            __VdlySet__total_angle_pipe__v18 = 1U;
            __VdlyVal__x_pipe__v18 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[8U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[8U], 8U)));
            __VdlyVal__y_pipe__v18 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[8U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[8U], 8U)));
        }
        __VdlyVal__desired_angle_pipe__v9 = vlSelfRef.desired_angle_pipe[8U];
        __VdlySet__desired_angle_pipe__v9 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[9U], vlSelfRef.desired_angle_pipe[9U])) {
            __VdlyVal__x_pipe__v19 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[9U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[9U], 9U)));
            __VdlySet__x_pipe__v19 = 1U;
            __VdlyVal__total_angle_pipe__v19 = (0x0000ffffU 
                                                & ((IData)(0x0014U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[9U])));
            __VdlyVal__y_pipe__v19 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[9U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[9U], 9U)));
        } else {
            __VdlyVal__total_angle_pipe__v20 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[9U]) 
                                                   - (IData)(0x0014U)));
            __VdlySet__total_angle_pipe__v20 = 1U;
            __VdlyVal__x_pipe__v20 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[9U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[9U], 9U)));
            __VdlyVal__y_pipe__v20 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[9U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[9U], 9U)));
        }
        __VdlyVal__desired_angle_pipe__v10 = vlSelfRef.desired_angle_pipe[9U];
        __VdlySet__desired_angle_pipe__v10 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[10U], vlSelfRef.desired_angle_pipe[10U])) {
            __VdlyVal__x_pipe__v21 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[10U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[10U], 0x0000000aU)));
            __VdlySet__x_pipe__v21 = 1U;
            __VdlyVal__total_angle_pipe__v21 = (0x0000ffffU 
                                                & ((IData)(0x000aU) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[10U])));
            __VdlyVal__y_pipe__v21 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[10U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[10U], 0x0000000aU)));
        } else {
            __VdlyVal__total_angle_pipe__v22 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[10U]) 
                                                   - (IData)(0x000aU)));
            __VdlySet__total_angle_pipe__v22 = 1U;
            __VdlyVal__x_pipe__v22 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[10U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[10U], 0x0000000aU)));
            __VdlyVal__y_pipe__v22 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[10U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[10U], 0x0000000aU)));
        }
        __VdlyVal__desired_angle_pipe__v11 = vlSelfRef.desired_angle_pipe[10U];
        __VdlySet__desired_angle_pipe__v11 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[11U], vlSelfRef.desired_angle_pipe[11U])) {
            __VdlyVal__x_pipe__v23 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[11U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[11U], 0x0000000bU)));
            __VdlySet__x_pipe__v23 = 1U;
            __VdlyVal__total_angle_pipe__v23 = (0x0000ffffU 
                                                & ((IData)(5U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[11U])));
            __VdlyVal__y_pipe__v23 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[11U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[11U], 0x0000000bU)));
        } else {
            __VdlyVal__total_angle_pipe__v24 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[11U]) 
                                                   - (IData)(5U)));
            __VdlySet__total_angle_pipe__v24 = 1U;
            __VdlyVal__x_pipe__v24 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[11U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[11U], 0x0000000bU)));
            __VdlyVal__y_pipe__v24 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[11U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[11U], 0x0000000bU)));
        }
        __VdlyVal__desired_angle_pipe__v12 = vlSelfRef.desired_angle_pipe[11U];
        __VdlySet__desired_angle_pipe__v12 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[12U], vlSelfRef.desired_angle_pipe[12U])) {
            __VdlyVal__x_pipe__v25 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[12U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[12U], 0x0000000cU)));
            __VdlySet__x_pipe__v25 = 1U;
            __VdlyVal__total_angle_pipe__v25 = (0x0000ffffU 
                                                & ((IData)(3U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[12U])));
            __VdlyVal__y_pipe__v25 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[12U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[12U], 0x0000000cU)));
        } else {
            __VdlyVal__total_angle_pipe__v26 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[12U]) 
                                                   - (IData)(3U)));
            __VdlySet__total_angle_pipe__v26 = 1U;
            __VdlyVal__x_pipe__v26 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[12U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[12U], 0x0000000cU)));
            __VdlyVal__y_pipe__v26 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[12U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[12U], 0x0000000cU)));
        }
        __VdlyVal__desired_angle_pipe__v13 = vlSelfRef.desired_angle_pipe[12U];
        __VdlySet__desired_angle_pipe__v13 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[13U], vlSelfRef.desired_angle_pipe[13U])) {
            __VdlyVal__x_pipe__v27 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[13U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[13U], 0x0000000dU)));
            __VdlySet__x_pipe__v27 = 1U;
            __VdlyVal__total_angle_pipe__v27 = (0x0000ffffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[13U])));
            __VdlyVal__y_pipe__v27 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[13U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[13U], 0x0000000dU)));
        } else {
            __VdlyVal__total_angle_pipe__v28 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[13U]) 
                                                   - (IData)(1U)));
            __VdlySet__total_angle_pipe__v28 = 1U;
            __VdlyVal__x_pipe__v28 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[13U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[13U], 0x0000000dU)));
            __VdlyVal__y_pipe__v28 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[13U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[13U], 0x0000000dU)));
        }
        __VdlyVal__desired_angle_pipe__v14 = vlSelfRef.desired_angle_pipe[13U];
        __VdlySet__desired_angle_pipe__v14 = 1U;
        if (VL_LTS_III(16, vlSelfRef.total_angle_pipe[14U], vlSelfRef.desired_angle_pipe[14U])) {
            __VdlyVal__x_pipe__v29 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[14U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[14U], 0x0000000eU)));
            __VdlySet__x_pipe__v29 = 1U;
            __VdlyVal__total_angle_pipe__v29 = (0x0000ffffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.total_angle_pipe[14U])));
            __VdlyVal__y_pipe__v29 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[14U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[14U], 0x0000000eU)));
        } else {
            __VdlyVal__total_angle_pipe__v30 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.total_angle_pipe[14U]) 
                                                   - (IData)(1U)));
            __VdlySet__total_angle_pipe__v30 = 1U;
            __VdlyVal__x_pipe__v30 = (0x0001ffffU & 
                                      (vlSelfRef.x_pipe[14U] 
                                       + VL_SHIFTRS_III(17,17,32, vlSelfRef.y_pipe[14U], 0x0000000eU)));
            __VdlyVal__y_pipe__v30 = (0x0001ffffU & 
                                      (vlSelfRef.y_pipe[14U] 
                                       - VL_SHIFTRS_III(17,17,32, vlSelfRef.x_pipe[14U], 0x0000000eU)));
        }
        __VdlyVal__desired_angle_pipe__v15 = vlSelfRef.desired_angle_pipe[14U];
        __VdlySet__desired_angle_pipe__v15 = 1U;
    }
    __VdlyVal__valid_pipe__v0 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && (IData)(vlSelfRef.data_angle_valid_in));
    __VdlyVal__valid_pipe__v1 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[0U]);
    __VdlyVal__valid_pipe__v2 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[1U]);
    __VdlyVal__valid_pipe__v3 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[2U]);
    __VdlyVal__valid_pipe__v4 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[3U]);
    __VdlyVal__valid_pipe__v5 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[4U]);
    __VdlyVal__valid_pipe__v6 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[5U]);
    __VdlyVal__valid_pipe__v7 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[6U]);
    __VdlyVal__valid_pipe__v8 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[7U]);
    __VdlyVal__valid_pipe__v9 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                 && vlSelfRef.valid_pipe[8U]);
    __VdlyVal__valid_pipe__v10 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[9U]);
    __VdlyVal__valid_pipe__v11 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[10U]);
    __VdlyVal__valid_pipe__v12 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[11U]);
    __VdlyVal__valid_pipe__v13 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[12U]);
    __VdlyVal__valid_pipe__v14 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[13U]);
    __VdlyVal__valid_pipe__v15 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[14U]);
    __VdlyVal__valid_pipe__v16 = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && vlSelfRef.valid_pipe[15U]);
    vlSelfRef.valid_pipe[0U] = __VdlyVal__valid_pipe__v0;
    vlSelfRef.valid_pipe[1U] = __VdlyVal__valid_pipe__v1;
    vlSelfRef.valid_pipe[2U] = __VdlyVal__valid_pipe__v2;
    vlSelfRef.valid_pipe[3U] = __VdlyVal__valid_pipe__v3;
    vlSelfRef.valid_pipe[4U] = __VdlyVal__valid_pipe__v4;
    vlSelfRef.valid_pipe[5U] = __VdlyVal__valid_pipe__v5;
    vlSelfRef.valid_pipe[6U] = __VdlyVal__valid_pipe__v6;
    vlSelfRef.valid_pipe[7U] = __VdlyVal__valid_pipe__v7;
    vlSelfRef.valid_pipe[8U] = __VdlyVal__valid_pipe__v8;
    vlSelfRef.valid_pipe[9U] = __VdlyVal__valid_pipe__v9;
    vlSelfRef.valid_pipe[10U] = __VdlyVal__valid_pipe__v10;
    vlSelfRef.valid_pipe[11U] = __VdlyVal__valid_pipe__v11;
    vlSelfRef.valid_pipe[12U] = __VdlyVal__valid_pipe__v12;
    vlSelfRef.valid_pipe[13U] = __VdlyVal__valid_pipe__v13;
    vlSelfRef.valid_pipe[14U] = __VdlyVal__valid_pipe__v14;
    vlSelfRef.valid_pipe[15U] = __VdlyVal__valid_pipe__v15;
    vlSelfRef.valid_pipe[16U] = __VdlyVal__valid_pipe__v16;
    if (__VdlySet__x_flip_pipe__v0) {
        vlSelfRef.x_flip_pipe[0U] = __VdlyVal__x_flip_pipe__v0;
    }
    if (__VdlySet__x_flip_pipe__v1) {
        vlSelfRef.x_flip_pipe[1U] = __VdlyVal__x_flip_pipe__v1;
    }
    if (__VdlySet__x_flip_pipe__v2) {
        vlSelfRef.x_flip_pipe[2U] = __VdlyVal__x_flip_pipe__v2;
    }
    if (__VdlySet__x_flip_pipe__v3) {
        vlSelfRef.x_flip_pipe[3U] = __VdlyVal__x_flip_pipe__v3;
    }
    if (__VdlySet__x_flip_pipe__v4) {
        vlSelfRef.x_flip_pipe[4U] = __VdlyVal__x_flip_pipe__v4;
    }
    if (__VdlySet__x_flip_pipe__v5) {
        vlSelfRef.x_flip_pipe[5U] = __VdlyVal__x_flip_pipe__v5;
    }
    if (__VdlySet__x_flip_pipe__v6) {
        vlSelfRef.x_flip_pipe[6U] = __VdlyVal__x_flip_pipe__v6;
    }
    if (__VdlySet__x_flip_pipe__v7) {
        vlSelfRef.x_flip_pipe[7U] = __VdlyVal__x_flip_pipe__v7;
    }
    if (__VdlySet__x_flip_pipe__v8) {
        vlSelfRef.x_flip_pipe[8U] = __VdlyVal__x_flip_pipe__v8;
    }
    if (__VdlySet__x_flip_pipe__v9) {
        vlSelfRef.x_flip_pipe[9U] = __VdlyVal__x_flip_pipe__v9;
    }
    if (__VdlySet__x_flip_pipe__v10) {
        vlSelfRef.x_flip_pipe[10U] = __VdlyVal__x_flip_pipe__v10;
    }
    if (__VdlySet__x_flip_pipe__v11) {
        vlSelfRef.x_flip_pipe[11U] = __VdlyVal__x_flip_pipe__v11;
    }
    if (__VdlySet__x_flip_pipe__v12) {
        vlSelfRef.x_flip_pipe[12U] = __VdlyVal__x_flip_pipe__v12;
    }
    if (__VdlySet__x_flip_pipe__v13) {
        vlSelfRef.x_flip_pipe[13U] = __VdlyVal__x_flip_pipe__v13;
    }
    if (__VdlySet__x_flip_pipe__v14) {
        vlSelfRef.x_flip_pipe[14U] = __VdlyVal__x_flip_pipe__v14;
    }
    if (__VdlySet__x_flip_pipe__v15) {
        vlSelfRef.x_flip_pipe[15U] = __VdlyVal__x_flip_pipe__v15;
    }
    if (__VdlySet__x_flip_pipe__v16) {
        vlSelfRef.x_flip_pipe[16U] = __VdlyVal__x_flip_pipe__v16;
    }
    if (__VdlySet__desired_angle_pipe__v0) {
        vlSelfRef.desired_angle_pipe[0U] = __VdlyVal__desired_angle_pipe__v0;
    }
    if (__VdlySet__desired_angle_pipe__v1) {
        vlSelfRef.desired_angle_pipe[1U] = __VdlyVal__desired_angle_pipe__v1;
    }
    if (__VdlySet__desired_angle_pipe__v2) {
        vlSelfRef.desired_angle_pipe[2U] = __VdlyVal__desired_angle_pipe__v2;
    }
    if (__VdlySet__desired_angle_pipe__v3) {
        vlSelfRef.desired_angle_pipe[3U] = __VdlyVal__desired_angle_pipe__v3;
    }
    if (__VdlySet__desired_angle_pipe__v4) {
        vlSelfRef.desired_angle_pipe[4U] = __VdlyVal__desired_angle_pipe__v4;
    }
    if (__VdlySet__desired_angle_pipe__v5) {
        vlSelfRef.desired_angle_pipe[5U] = __VdlyVal__desired_angle_pipe__v5;
    }
    if (__VdlySet__desired_angle_pipe__v6) {
        vlSelfRef.desired_angle_pipe[6U] = __VdlyVal__desired_angle_pipe__v6;
    }
    if (__VdlySet__desired_angle_pipe__v7) {
        vlSelfRef.desired_angle_pipe[7U] = __VdlyVal__desired_angle_pipe__v7;
    }
    if (__VdlySet__desired_angle_pipe__v8) {
        vlSelfRef.desired_angle_pipe[8U] = __VdlyVal__desired_angle_pipe__v8;
    }
    if (__VdlySet__desired_angle_pipe__v9) {
        vlSelfRef.desired_angle_pipe[9U] = __VdlyVal__desired_angle_pipe__v9;
    }
    if (__VdlySet__desired_angle_pipe__v10) {
        vlSelfRef.desired_angle_pipe[10U] = __VdlyVal__desired_angle_pipe__v10;
    }
    if (__VdlySet__desired_angle_pipe__v11) {
        vlSelfRef.desired_angle_pipe[11U] = __VdlyVal__desired_angle_pipe__v11;
    }
    if (__VdlySet__desired_angle_pipe__v12) {
        vlSelfRef.desired_angle_pipe[12U] = __VdlyVal__desired_angle_pipe__v12;
    }
    if (__VdlySet__desired_angle_pipe__v13) {
        vlSelfRef.desired_angle_pipe[13U] = __VdlyVal__desired_angle_pipe__v13;
    }
    if (__VdlySet__desired_angle_pipe__v14) {
        vlSelfRef.desired_angle_pipe[14U] = __VdlyVal__desired_angle_pipe__v14;
    }
    if (__VdlySet__desired_angle_pipe__v15) {
        vlSelfRef.desired_angle_pipe[15U] = __VdlyVal__desired_angle_pipe__v15;
    }
    if (__VdlySet__total_angle_pipe__v0) {
        vlSelfRef.total_angle_pipe[0U] = 0U;
    }
    if (__VdlySet__x_pipe__v1) {
        vlSelfRef.total_angle_pipe[1U] = __VdlyVal__total_angle_pipe__v1;
    }
    if (__VdlySet__total_angle_pipe__v2) {
        vlSelfRef.total_angle_pipe[1U] = __VdlyVal__total_angle_pipe__v2;
    }
    if (__VdlySet__x_pipe__v3) {
        vlSelfRef.total_angle_pipe[2U] = __VdlyVal__total_angle_pipe__v3;
    }
    if (__VdlySet__total_angle_pipe__v4) {
        vlSelfRef.total_angle_pipe[2U] = __VdlyVal__total_angle_pipe__v4;
    }
    if (__VdlySet__x_pipe__v5) {
        vlSelfRef.total_angle_pipe[3U] = __VdlyVal__total_angle_pipe__v5;
    }
    if (__VdlySet__total_angle_pipe__v6) {
        vlSelfRef.total_angle_pipe[3U] = __VdlyVal__total_angle_pipe__v6;
    }
    if (__VdlySet__x_pipe__v7) {
        vlSelfRef.total_angle_pipe[4U] = __VdlyVal__total_angle_pipe__v7;
    }
    if (__VdlySet__total_angle_pipe__v8) {
        vlSelfRef.total_angle_pipe[4U] = __VdlyVal__total_angle_pipe__v8;
    }
    if (__VdlySet__x_pipe__v9) {
        vlSelfRef.total_angle_pipe[5U] = __VdlyVal__total_angle_pipe__v9;
    }
    if (__VdlySet__total_angle_pipe__v10) {
        vlSelfRef.total_angle_pipe[5U] = __VdlyVal__total_angle_pipe__v10;
    }
    if (__VdlySet__x_pipe__v11) {
        vlSelfRef.total_angle_pipe[6U] = __VdlyVal__total_angle_pipe__v11;
    }
    if (__VdlySet__total_angle_pipe__v12) {
        vlSelfRef.total_angle_pipe[6U] = __VdlyVal__total_angle_pipe__v12;
    }
    if (__VdlySet__x_pipe__v13) {
        vlSelfRef.total_angle_pipe[7U] = __VdlyVal__total_angle_pipe__v13;
    }
    if (__VdlySet__total_angle_pipe__v14) {
        vlSelfRef.total_angle_pipe[7U] = __VdlyVal__total_angle_pipe__v14;
    }
    if (__VdlySet__x_pipe__v15) {
        vlSelfRef.total_angle_pipe[8U] = __VdlyVal__total_angle_pipe__v15;
    }
    if (__VdlySet__total_angle_pipe__v16) {
        vlSelfRef.total_angle_pipe[8U] = __VdlyVal__total_angle_pipe__v16;
    }
    if (__VdlySet__x_pipe__v17) {
        vlSelfRef.total_angle_pipe[9U] = __VdlyVal__total_angle_pipe__v17;
    }
    if (__VdlySet__total_angle_pipe__v18) {
        vlSelfRef.total_angle_pipe[9U] = __VdlyVal__total_angle_pipe__v18;
    }
    if (__VdlySet__x_pipe__v19) {
        vlSelfRef.total_angle_pipe[10U] = __VdlyVal__total_angle_pipe__v19;
    }
    if (__VdlySet__total_angle_pipe__v20) {
        vlSelfRef.total_angle_pipe[10U] = __VdlyVal__total_angle_pipe__v20;
    }
    if (__VdlySet__x_pipe__v21) {
        vlSelfRef.total_angle_pipe[11U] = __VdlyVal__total_angle_pipe__v21;
    }
    if (__VdlySet__total_angle_pipe__v22) {
        vlSelfRef.total_angle_pipe[11U] = __VdlyVal__total_angle_pipe__v22;
    }
    if (__VdlySet__x_pipe__v23) {
        vlSelfRef.total_angle_pipe[12U] = __VdlyVal__total_angle_pipe__v23;
    }
    if (__VdlySet__total_angle_pipe__v24) {
        vlSelfRef.total_angle_pipe[12U] = __VdlyVal__total_angle_pipe__v24;
    }
    if (__VdlySet__x_pipe__v25) {
        vlSelfRef.total_angle_pipe[13U] = __VdlyVal__total_angle_pipe__v25;
    }
    if (__VdlySet__total_angle_pipe__v26) {
        vlSelfRef.total_angle_pipe[13U] = __VdlyVal__total_angle_pipe__v26;
    }
    if (__VdlySet__x_pipe__v27) {
        vlSelfRef.total_angle_pipe[14U] = __VdlyVal__total_angle_pipe__v27;
    }
    if (__VdlySet__total_angle_pipe__v28) {
        vlSelfRef.total_angle_pipe[14U] = __VdlyVal__total_angle_pipe__v28;
    }
    if (__VdlySet__total_angle_pipe__v31) {
        vlSelfRef.desired_angle_pipe[16U] = __VdlyVal__desired_angle_pipe__v16;
    }
    if (__VdlySet__x_pipe__v29) {
        vlSelfRef.total_angle_pipe[15U] = __VdlyVal__total_angle_pipe__v29;
    }
    if (__VdlySet__total_angle_pipe__v30) {
        vlSelfRef.total_angle_pipe[15U] = __VdlyVal__total_angle_pipe__v30;
    }
    if (__VdlySet__total_angle_pipe__v31) {
        vlSelfRef.total_angle_pipe[16U] = __VdlyVal__total_angle_pipe__v31;
    }
    if (__VdlySet__y_pipe__v0) {
        vlSelfRef.y_pipe[0U] = 0U;
    }
    if (__VdlySet__x_pipe__v1) {
        vlSelfRef.y_pipe[1U] = __VdlyVal__y_pipe__v1;
    }
    if (__VdlySet__total_angle_pipe__v2) {
        vlSelfRef.y_pipe[1U] = __VdlyVal__y_pipe__v2;
    }
    if (__VdlySet__x_pipe__v3) {
        vlSelfRef.y_pipe[2U] = __VdlyVal__y_pipe__v3;
    }
    if (__VdlySet__total_angle_pipe__v4) {
        vlSelfRef.y_pipe[2U] = __VdlyVal__y_pipe__v4;
    }
    if (__VdlySet__x_pipe__v5) {
        vlSelfRef.y_pipe[3U] = __VdlyVal__y_pipe__v5;
    }
    if (__VdlySet__total_angle_pipe__v6) {
        vlSelfRef.y_pipe[3U] = __VdlyVal__y_pipe__v6;
    }
    if (__VdlySet__x_pipe__v7) {
        vlSelfRef.y_pipe[4U] = __VdlyVal__y_pipe__v7;
    }
    if (__VdlySet__total_angle_pipe__v8) {
        vlSelfRef.y_pipe[4U] = __VdlyVal__y_pipe__v8;
    }
    if (__VdlySet__x_pipe__v9) {
        vlSelfRef.y_pipe[5U] = __VdlyVal__y_pipe__v9;
    }
    if (__VdlySet__total_angle_pipe__v10) {
        vlSelfRef.y_pipe[5U] = __VdlyVal__y_pipe__v10;
    }
    if (__VdlySet__x_pipe__v11) {
        vlSelfRef.y_pipe[6U] = __VdlyVal__y_pipe__v11;
    }
    if (__VdlySet__total_angle_pipe__v12) {
        vlSelfRef.y_pipe[6U] = __VdlyVal__y_pipe__v12;
    }
    if (__VdlySet__x_pipe__v13) {
        vlSelfRef.y_pipe[7U] = __VdlyVal__y_pipe__v13;
    }
    if (__VdlySet__total_angle_pipe__v14) {
        vlSelfRef.y_pipe[7U] = __VdlyVal__y_pipe__v14;
    }
    if (__VdlySet__x_pipe__v15) {
        vlSelfRef.y_pipe[8U] = __VdlyVal__y_pipe__v15;
    }
    if (__VdlySet__total_angle_pipe__v16) {
        vlSelfRef.y_pipe[8U] = __VdlyVal__y_pipe__v16;
    }
    if (__VdlySet__x_pipe__v17) {
        vlSelfRef.y_pipe[9U] = __VdlyVal__y_pipe__v17;
    }
    if (__VdlySet__total_angle_pipe__v18) {
        vlSelfRef.y_pipe[9U] = __VdlyVal__y_pipe__v18;
    }
    if (__VdlySet__x_pipe__v19) {
        vlSelfRef.y_pipe[10U] = __VdlyVal__y_pipe__v19;
    }
    if (__VdlySet__total_angle_pipe__v20) {
        vlSelfRef.y_pipe[10U] = __VdlyVal__y_pipe__v20;
    }
    if (__VdlySet__x_pipe__v21) {
        vlSelfRef.y_pipe[11U] = __VdlyVal__y_pipe__v21;
    }
    if (__VdlySet__total_angle_pipe__v22) {
        vlSelfRef.y_pipe[11U] = __VdlyVal__y_pipe__v22;
    }
    if (__VdlySet__x_pipe__v23) {
        vlSelfRef.y_pipe[12U] = __VdlyVal__y_pipe__v23;
    }
    if (__VdlySet__total_angle_pipe__v24) {
        vlSelfRef.y_pipe[12U] = __VdlyVal__y_pipe__v24;
    }
    if (__VdlySet__x_pipe__v25) {
        vlSelfRef.y_pipe[13U] = __VdlyVal__y_pipe__v25;
    }
    if (__VdlySet__total_angle_pipe__v26) {
        vlSelfRef.y_pipe[13U] = __VdlyVal__y_pipe__v26;
    }
    if (__VdlySet__x_pipe__v27) {
        vlSelfRef.y_pipe[14U] = __VdlyVal__y_pipe__v27;
    }
    if (__VdlySet__total_angle_pipe__v28) {
        vlSelfRef.y_pipe[14U] = __VdlyVal__y_pipe__v28;
    }
    if (__VdlySet__x_pipe__v29) {
        vlSelfRef.y_pipe[15U] = __VdlyVal__y_pipe__v29;
    }
    if (__VdlySet__total_angle_pipe__v30) {
        vlSelfRef.y_pipe[15U] = __VdlyVal__y_pipe__v30;
    }
    if (__VdlySet__x_pipe__v31) {
        vlSelfRef.y_pipe[16U] = __VdlyVal__y_pipe__v31;
    }
    if (__VdlySet__x_pipe__v0) {
        vlSelfRef.x_pipe[0U] = 0x00004dbaU;
    }
    if (__VdlySet__x_pipe__v1) {
        vlSelfRef.x_pipe[1U] = __VdlyVal__x_pipe__v1;
    }
    if (__VdlySet__total_angle_pipe__v2) {
        vlSelfRef.x_pipe[1U] = __VdlyVal__x_pipe__v2;
    }
    if (__VdlySet__x_pipe__v3) {
        vlSelfRef.x_pipe[2U] = __VdlyVal__x_pipe__v3;
    }
    if (__VdlySet__total_angle_pipe__v4) {
        vlSelfRef.x_pipe[2U] = __VdlyVal__x_pipe__v4;
    }
    if (__VdlySet__x_pipe__v5) {
        vlSelfRef.x_pipe[3U] = __VdlyVal__x_pipe__v5;
    }
    if (__VdlySet__total_angle_pipe__v6) {
        vlSelfRef.x_pipe[3U] = __VdlyVal__x_pipe__v6;
    }
    if (__VdlySet__x_pipe__v7) {
        vlSelfRef.x_pipe[4U] = __VdlyVal__x_pipe__v7;
    }
    if (__VdlySet__total_angle_pipe__v8) {
        vlSelfRef.x_pipe[4U] = __VdlyVal__x_pipe__v8;
    }
    if (__VdlySet__x_pipe__v9) {
        vlSelfRef.x_pipe[5U] = __VdlyVal__x_pipe__v9;
    }
    if (__VdlySet__total_angle_pipe__v10) {
        vlSelfRef.x_pipe[5U] = __VdlyVal__x_pipe__v10;
    }
    if (__VdlySet__x_pipe__v11) {
        vlSelfRef.x_pipe[6U] = __VdlyVal__x_pipe__v11;
    }
    if (__VdlySet__total_angle_pipe__v12) {
        vlSelfRef.x_pipe[6U] = __VdlyVal__x_pipe__v12;
    }
    if (__VdlySet__x_pipe__v13) {
        vlSelfRef.x_pipe[7U] = __VdlyVal__x_pipe__v13;
    }
    if (__VdlySet__total_angle_pipe__v14) {
        vlSelfRef.x_pipe[7U] = __VdlyVal__x_pipe__v14;
    }
    if (__VdlySet__x_pipe__v15) {
        vlSelfRef.x_pipe[8U] = __VdlyVal__x_pipe__v15;
    }
    if (__VdlySet__total_angle_pipe__v16) {
        vlSelfRef.x_pipe[8U] = __VdlyVal__x_pipe__v16;
    }
    if (__VdlySet__x_pipe__v17) {
        vlSelfRef.x_pipe[9U] = __VdlyVal__x_pipe__v17;
    }
    if (__VdlySet__total_angle_pipe__v18) {
        vlSelfRef.x_pipe[9U] = __VdlyVal__x_pipe__v18;
    }
    if (__VdlySet__x_pipe__v19) {
        vlSelfRef.x_pipe[10U] = __VdlyVal__x_pipe__v19;
    }
    if (__VdlySet__total_angle_pipe__v20) {
        vlSelfRef.x_pipe[10U] = __VdlyVal__x_pipe__v20;
    }
    if (__VdlySet__x_pipe__v21) {
        vlSelfRef.x_pipe[11U] = __VdlyVal__x_pipe__v21;
    }
    if (__VdlySet__total_angle_pipe__v22) {
        vlSelfRef.x_pipe[11U] = __VdlyVal__x_pipe__v22;
    }
    if (__VdlySet__x_pipe__v23) {
        vlSelfRef.x_pipe[12U] = __VdlyVal__x_pipe__v23;
    }
    if (__VdlySet__total_angle_pipe__v24) {
        vlSelfRef.x_pipe[12U] = __VdlyVal__x_pipe__v24;
    }
    if (__VdlySet__x_pipe__v25) {
        vlSelfRef.x_pipe[13U] = __VdlyVal__x_pipe__v25;
    }
    if (__VdlySet__total_angle_pipe__v26) {
        vlSelfRef.x_pipe[13U] = __VdlyVal__x_pipe__v26;
    }
    if (__VdlySet__x_pipe__v27) {
        vlSelfRef.x_pipe[14U] = __VdlyVal__x_pipe__v27;
    }
    if (__VdlySet__total_angle_pipe__v28) {
        vlSelfRef.x_pipe[14U] = __VdlyVal__x_pipe__v28;
    }
    if (__VdlySet__x_pipe__v29) {
        vlSelfRef.x_pipe[15U] = __VdlyVal__x_pipe__v29;
    }
    if (__VdlySet__total_angle_pipe__v30) {
        vlSelfRef.x_pipe[15U] = __VdlyVal__x_pipe__v30;
    }
    if (__VdlySet__x_pipe__v31) {
        vlSelfRef.x_pipe[16U] = __VdlyVal__x_pipe__v31;
    }
    if (__VdlySet__x_pipe__v32) {
        vlSelfRef.y_pipe[16U] = __VdlyVal__y_pipe__v32;
        vlSelfRef.x_pipe[16U] = __VdlyVal__x_pipe__v32;
    }
    vlSelfRef.data_cossin_valid_out = vlSelfRef.valid_pipe[16U];
    vlSelfRef.sin = ((1U == (3U & (vlSelfRef.y_pipe[16U] 
                                   >> 0x0000000fU)))
                      ? 0x00007fffU : ((2U == (3U & 
                                               (vlSelfRef.y_pipe[16U] 
                                                >> 0x0000000fU)))
                                        ? 0x00008000U
                                        : (0x0000ffffU 
                                           & vlSelfRef.y_pipe[16U])));
    __VdfgRegularize_h6e95ff9d_0_10 = (0x0001ffffU 
                                       & (vlSelfRef.x_flip_pipe[16U]
                                           ? (- vlSelfRef.x_pipe[16U])
                                           : vlSelfRef.x_pipe[16U]));
    vlSelfRef.cos = ((1U == (3U & (__VdfgRegularize_h6e95ff9d_0_10 
                                   >> 0x0000000fU)))
                      ? 0x00007fffU : ((2U == (3U & 
                                               (__VdfgRegularize_h6e95ff9d_0_10 
                                                >> 0x0000000fU)))
                                        ? 0x00008000U
                                        : (0x0000ffffU 
                                           & __VdfgRegularize_h6e95ff9d_0_10)));
}
