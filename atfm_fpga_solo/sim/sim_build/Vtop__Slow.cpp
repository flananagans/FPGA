// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic, Vtop_cordic_cossin__W10_N10);
    VL_CELL(__PVT__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic, Vtop_cordic_cossin__W10_N10);
    VL_CELL(__PVT__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic, Vtop_cordic_cossin__W10_N10);
    VL_CELL(__PVT__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic, Vtop_cordic_cossin__W10_N10);
    VL_CELL(__PVT__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic, Vtop_cordic_cossin__W10_N10);
    VL_CELL(__PVT__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic, Vtop_cordic_cossin__W10_N10);
    VL_CELL(__PVT__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic, Vtop_cordic_cossin__W10_N10);
    VL_CELL(__PVT__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic, Vtop_cordic_cossin__W10_N10);
    VL_CELL(__PVT__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic, Vtop_cordic_cossin__W10_N10);
    VL_CELL(__PVT__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic, Vtop_cordic_cossin__W10_N10);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vtop::_settle__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__2\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->harmonic_generator__DOT__clk = vlTOPp->clk;
    vlTOPp->harmonic_generator__DOT__rst = vlTOPp->rst;
    vlTOPp->harmonic_generator__DOT__data_valid_in 
        = vlTOPp->data_valid_in;
    vlTOPp->harmonic_generator__DOT__angle = vlTOPp->angle;
    vlTOPp->harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__angle_n 
        = vlTOPp->angle;
    vlTOPp->harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__angle_n 
        = (0xffffU & ((IData)(vlTOPp->angle) << 1U));
    vlTOPp->harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__angle_n 
        = (0xffffU & ((IData)(3U) * (IData)(vlTOPp->angle)));
    vlTOPp->harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__angle_n 
        = (0xffffU & ((IData)(vlTOPp->angle) << 2U));
    vlTOPp->harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__angle_n 
        = (0xffffU & ((IData)(5U) * (IData)(vlTOPp->angle)));
    vlTOPp->harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__angle_n 
        = (0xffffU & ((IData)(6U) * (IData)(vlTOPp->angle)));
    vlTOPp->harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__angle_n 
        = (0xffffU & ((IData)(7U) * (IData)(vlTOPp->angle)));
    vlTOPp->harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__angle_n 
        = (0xffffU & ((IData)(vlTOPp->angle) << 3U));
    vlTOPp->harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__angle_n 
        = (0xffffU & ((IData)(9U) * (IData)(vlTOPp->angle)));
    vlTOPp->harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__angle_n 
        = (0xffffU & ((IData)(0xaU) * (IData)(vlTOPp->angle)));
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.clk 
        = vlTOPp->clk;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.clk 
        = vlTOPp->clk;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.clk 
        = vlTOPp->clk;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.clk 
        = vlTOPp->clk;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.clk 
        = vlTOPp->clk;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.clk 
        = vlTOPp->clk;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.clk 
        = vlTOPp->clk;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.clk 
        = vlTOPp->clk;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.clk 
        = vlTOPp->clk;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.clk 
        = vlTOPp->clk;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.data_angle_valid_in 
        = vlTOPp->data_valid_in;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.rst 
        = vlTOPp->rst;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.data_angle_valid_in 
        = vlTOPp->data_valid_in;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.rst 
        = vlTOPp->rst;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.data_angle_valid_in 
        = vlTOPp->data_valid_in;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.rst 
        = vlTOPp->rst;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.data_angle_valid_in 
        = vlTOPp->data_valid_in;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.rst 
        = vlTOPp->rst;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.data_angle_valid_in 
        = vlTOPp->data_valid_in;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.rst 
        = vlTOPp->rst;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.data_angle_valid_in 
        = vlTOPp->data_valid_in;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.rst 
        = vlTOPp->rst;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.data_angle_valid_in 
        = vlTOPp->data_valid_in;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.rst 
        = vlTOPp->rst;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.data_angle_valid_in 
        = vlTOPp->data_valid_in;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.rst 
        = vlTOPp->rst;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.data_angle_valid_in 
        = vlTOPp->data_valid_in;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.rst 
        = vlTOPp->rst;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.data_angle_valid_in 
        = vlTOPp->data_valid_in;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.rst 
        = vlTOPp->rst;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.angle 
        = vlTOPp->harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__angle_n;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.angle 
        = vlTOPp->harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__angle_n;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.angle 
        = vlTOPp->harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__angle_n;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.angle 
        = vlTOPp->harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__angle_n;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.angle 
        = vlTOPp->harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__angle_n;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.angle 
        = vlTOPp->harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__angle_n;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.angle 
        = vlTOPp->harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__angle_n;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.angle 
        = vlTOPp->harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__angle_n;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.angle 
        = vlTOPp->harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__angle_n;
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.angle 
        = vlTOPp->harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__angle_n;
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->harmonic_generator__DOT__valid_arr = ((0x3feU 
                                                   & (IData)(vlTOPp->harmonic_generator__DOT__valid_arr)) 
                                                  | (IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.data_cossin_valid_out));
    vlTOPp->harmonic_generator__DOT__cos_arr_out[0U] 
        = ((0xffff0000U & vlTOPp->harmonic_generator__DOT__cos_arr_out[0U]) 
           | (IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.cos));
    vlTOPp->harmonic_generator__DOT__sin_arr_out[0U] 
        = ((0xffff0000U & vlTOPp->harmonic_generator__DOT__sin_arr_out[0U]) 
           | (IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.sin));
    vlTOPp->harmonic_generator__DOT__valid_arr = ((0x3fdU 
                                                   & (IData)(vlTOPp->harmonic_generator__DOT__valid_arr)) 
                                                  | ((IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.data_cossin_valid_out) 
                                                     << 1U));
    vlTOPp->harmonic_generator__DOT__cos_arr_out[0U] 
        = ((0xffffU & vlTOPp->harmonic_generator__DOT__cos_arr_out[0U]) 
           | (0xffff0000U & ((IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.cos) 
                             << 0x10U)));
    vlTOPp->harmonic_generator__DOT__sin_arr_out[0U] 
        = ((0xffffU & vlTOPp->harmonic_generator__DOT__sin_arr_out[0U]) 
           | (0xffff0000U & ((IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.sin) 
                             << 0x10U)));
    vlTOPp->harmonic_generator__DOT__valid_arr = ((0x3fbU 
                                                   & (IData)(vlTOPp->harmonic_generator__DOT__valid_arr)) 
                                                  | ((IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.data_cossin_valid_out) 
                                                     << 2U));
    vlTOPp->harmonic_generator__DOT__cos_arr_out[1U] 
        = ((0xffff0000U & vlTOPp->harmonic_generator__DOT__cos_arr_out[1U]) 
           | (IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.cos));
    vlTOPp->harmonic_generator__DOT__sin_arr_out[1U] 
        = ((0xffff0000U & vlTOPp->harmonic_generator__DOT__sin_arr_out[1U]) 
           | (IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.sin));
    vlTOPp->harmonic_generator__DOT__valid_arr = ((0x3f7U 
                                                   & (IData)(vlTOPp->harmonic_generator__DOT__valid_arr)) 
                                                  | ((IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.data_cossin_valid_out) 
                                                     << 3U));
    vlTOPp->harmonic_generator__DOT__cos_arr_out[1U] 
        = ((0xffffU & vlTOPp->harmonic_generator__DOT__cos_arr_out[1U]) 
           | (0xffff0000U & ((IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.cos) 
                             << 0x10U)));
    vlTOPp->harmonic_generator__DOT__sin_arr_out[1U] 
        = ((0xffffU & vlTOPp->harmonic_generator__DOT__sin_arr_out[1U]) 
           | (0xffff0000U & ((IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.sin) 
                             << 0x10U)));
    vlTOPp->harmonic_generator__DOT__valid_arr = ((0x3efU 
                                                   & (IData)(vlTOPp->harmonic_generator__DOT__valid_arr)) 
                                                  | ((IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.data_cossin_valid_out) 
                                                     << 4U));
    vlTOPp->harmonic_generator__DOT__cos_arr_out[2U] 
        = ((0xffff0000U & vlTOPp->harmonic_generator__DOT__cos_arr_out[2U]) 
           | (IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.cos));
    vlTOPp->harmonic_generator__DOT__sin_arr_out[2U] 
        = ((0xffff0000U & vlTOPp->harmonic_generator__DOT__sin_arr_out[2U]) 
           | (IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.sin));
    vlTOPp->harmonic_generator__DOT__valid_arr = ((0x3dfU 
                                                   & (IData)(vlTOPp->harmonic_generator__DOT__valid_arr)) 
                                                  | ((IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.data_cossin_valid_out) 
                                                     << 5U));
    vlTOPp->harmonic_generator__DOT__cos_arr_out[2U] 
        = ((0xffffU & vlTOPp->harmonic_generator__DOT__cos_arr_out[2U]) 
           | (0xffff0000U & ((IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.cos) 
                             << 0x10U)));
    vlTOPp->harmonic_generator__DOT__sin_arr_out[2U] 
        = ((0xffffU & vlTOPp->harmonic_generator__DOT__sin_arr_out[2U]) 
           | (0xffff0000U & ((IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.sin) 
                             << 0x10U)));
    vlTOPp->harmonic_generator__DOT__valid_arr = ((0x3bfU 
                                                   & (IData)(vlTOPp->harmonic_generator__DOT__valid_arr)) 
                                                  | ((IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.data_cossin_valid_out) 
                                                     << 6U));
    vlTOPp->harmonic_generator__DOT__cos_arr_out[3U] 
        = ((0xffff0000U & vlTOPp->harmonic_generator__DOT__cos_arr_out[3U]) 
           | (IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.cos));
    vlTOPp->harmonic_generator__DOT__sin_arr_out[3U] 
        = ((0xffff0000U & vlTOPp->harmonic_generator__DOT__sin_arr_out[3U]) 
           | (IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.sin));
    vlTOPp->harmonic_generator__DOT__valid_arr = ((0x37fU 
                                                   & (IData)(vlTOPp->harmonic_generator__DOT__valid_arr)) 
                                                  | ((IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.data_cossin_valid_out) 
                                                     << 7U));
    vlTOPp->harmonic_generator__DOT__cos_arr_out[3U] 
        = ((0xffffU & vlTOPp->harmonic_generator__DOT__cos_arr_out[3U]) 
           | (0xffff0000U & ((IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.cos) 
                             << 0x10U)));
    vlTOPp->harmonic_generator__DOT__sin_arr_out[3U] 
        = ((0xffffU & vlTOPp->harmonic_generator__DOT__sin_arr_out[3U]) 
           | (0xffff0000U & ((IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.sin) 
                             << 0x10U)));
    vlTOPp->harmonic_generator__DOT__valid_arr = ((0x2ffU 
                                                   & (IData)(vlTOPp->harmonic_generator__DOT__valid_arr)) 
                                                  | ((IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.data_cossin_valid_out) 
                                                     << 8U));
    vlTOPp->harmonic_generator__DOT__cos_arr_out[4U] 
        = ((0xffff0000U & vlTOPp->harmonic_generator__DOT__cos_arr_out[4U]) 
           | (IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.cos));
    vlTOPp->harmonic_generator__DOT__sin_arr_out[4U] 
        = ((0xffff0000U & vlTOPp->harmonic_generator__DOT__sin_arr_out[4U]) 
           | (IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.sin));
    vlTOPp->harmonic_generator__DOT__valid_arr = ((0x1ffU 
                                                   & (IData)(vlTOPp->harmonic_generator__DOT__valid_arr)) 
                                                  | ((IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.data_cossin_valid_out) 
                                                     << 9U));
    vlTOPp->harmonic_generator__DOT__cos_arr_out[4U] 
        = ((0xffffU & vlTOPp->harmonic_generator__DOT__cos_arr_out[4U]) 
           | (0xffff0000U & ((IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.cos) 
                             << 0x10U)));
    vlTOPp->harmonic_generator__DOT__sin_arr_out[4U] 
        = ((0xffffU & vlTOPp->harmonic_generator__DOT__sin_arr_out[4U]) 
           | (0xffff0000U & ((IData)(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.sin) 
                             << 0x10U)));
    vlTOPp->harmonic_generator__DOT__data_valid_out 
        = (0x3ffU == (IData)(vlTOPp->harmonic_generator__DOT__valid_arr));
    vlTOPp->cos_arr_out[0U] = vlTOPp->harmonic_generator__DOT__cos_arr_out[0U];
    vlTOPp->cos_arr_out[1U] = vlTOPp->harmonic_generator__DOT__cos_arr_out[1U];
    vlTOPp->cos_arr_out[2U] = vlTOPp->harmonic_generator__DOT__cos_arr_out[2U];
    vlTOPp->cos_arr_out[3U] = vlTOPp->harmonic_generator__DOT__cos_arr_out[3U];
    vlTOPp->cos_arr_out[4U] = vlTOPp->harmonic_generator__DOT__cos_arr_out[4U];
    vlTOPp->sin_arr_out[0U] = vlTOPp->harmonic_generator__DOT__sin_arr_out[0U];
    vlTOPp->sin_arr_out[1U] = vlTOPp->harmonic_generator__DOT__sin_arr_out[1U];
    vlTOPp->sin_arr_out[2U] = vlTOPp->harmonic_generator__DOT__sin_arr_out[2U];
    vlTOPp->sin_arr_out[3U] = vlTOPp->harmonic_generator__DOT__sin_arr_out[3U];
    vlTOPp->sin_arr_out[4U] = vlTOPp->harmonic_generator__DOT__sin_arr_out[4U];
    vlTOPp->data_valid_out = vlTOPp->harmonic_generator__DOT__data_valid_out;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic__clk 
        = vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.clk;
    vlTOPp->__Vclklast__TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic__clk 
        = vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.clk;
    vlTOPp->__Vclklast__TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic__clk 
        = vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.clk;
    vlTOPp->__Vclklast__TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic__clk 
        = vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.clk;
    vlTOPp->__Vclklast__TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic__clk 
        = vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.clk;
    vlTOPp->__Vclklast__TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic__clk 
        = vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.clk;
    vlTOPp->__Vclklast__TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic__clk 
        = vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.clk;
    vlTOPp->__Vclklast__TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic__clk 
        = vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.clk;
    vlTOPp->__Vclklast__TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic__clk 
        = vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.clk;
    vlTOPp->__Vclklast__TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic__clk 
        = vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.clk;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic._settle__TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic__1(vlSymsp);
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic._settle__TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic__2(vlSymsp);
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic._settle__TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic__3(vlSymsp);
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic._settle__TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic__4(vlSymsp);
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic._settle__TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic__5(vlSymsp);
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic._settle__TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic__6(vlSymsp);
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic._settle__TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic__7(vlSymsp);
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic._settle__TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic__8(vlSymsp);
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic._settle__TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic__9(vlSymsp);
    vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic._settle__TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic__10(vlSymsp);
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    data_valid_in = VL_RAND_RESET_I(1);
    angle = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(160, cos_arr_out);
    VL_RAND_RESET_W(160, sin_arr_out);
    data_valid_out = VL_RAND_RESET_I(1);
    harmonic_generator__DOT__clk = VL_RAND_RESET_I(1);
    harmonic_generator__DOT__rst = VL_RAND_RESET_I(1);
    harmonic_generator__DOT__data_valid_in = VL_RAND_RESET_I(1);
    harmonic_generator__DOT__angle = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(160, harmonic_generator__DOT__cos_arr_out);
    VL_RAND_RESET_W(160, harmonic_generator__DOT__sin_arr_out);
    harmonic_generator__DOT__data_valid_out = VL_RAND_RESET_I(1);
    harmonic_generator__DOT__valid_arr = VL_RAND_RESET_I(10);
    harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__angle_n = VL_RAND_RESET_I(16);
    harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__angle_n = VL_RAND_RESET_I(16);
    harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__angle_n = VL_RAND_RESET_I(16);
    harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__angle_n = VL_RAND_RESET_I(16);
    harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__angle_n = VL_RAND_RESET_I(16);
    harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__angle_n = VL_RAND_RESET_I(16);
    harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__angle_n = VL_RAND_RESET_I(16);
    harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__angle_n = VL_RAND_RESET_I(16);
    harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__angle_n = VL_RAND_RESET_I(16);
    harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__angle_n = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
