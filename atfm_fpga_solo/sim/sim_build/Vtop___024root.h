// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_cordic_cossin;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:
    // CELLS
    Vtop_cordic_cossin* __PVT__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic;
    Vtop_cordic_cossin* __PVT__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic;
    Vtop_cordic_cossin* __PVT__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic;
    Vtop_cordic_cossin* __PVT__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic;
    Vtop_cordic_cossin* __PVT__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic;
    Vtop_cordic_cossin* __PVT__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic;
    Vtop_cordic_cossin* __PVT__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic;
    Vtop_cordic_cossin* __PVT__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic;
    Vtop_cordic_cossin* __PVT__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic;
    Vtop_cordic_cossin* __PVT__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(data_valid_in,0,0);
    VL_OUT8(data_valid_out,0,0);
    CData/*0:0*/ harmonic_generator__DOT__clk;
    CData/*0:0*/ harmonic_generator__DOT__rst;
    CData/*0:0*/ harmonic_generator__DOT__data_valid_in;
    CData/*0:0*/ harmonic_generator__DOT__data_valid_out;
    CData/*0:0*/ __Vtrigprevexpr___TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic__clk__0;
    VL_IN16(angle,15,0);
    VL_OUTW(cos_arr_out,159,0,5);
    VL_OUTW(sin_arr_out,159,0,5);
    SData/*15:0*/ harmonic_generator__DOT__angle;
    VlWide<5>/*159:0*/ harmonic_generator__DOT__cos_arr_out;
    VlWide<5>/*159:0*/ harmonic_generator__DOT__sin_arr_out;
    SData/*9:0*/ harmonic_generator__DOT__valid_arr;
    SData/*15:0*/ harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__angle_n;
    SData/*15:0*/ harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__angle_n;
    SData/*15:0*/ harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__angle_n;
    SData/*15:0*/ harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__angle_n;
    SData/*15:0*/ harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__angle_n;
    SData/*15:0*/ harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__angle_n;
    SData/*15:0*/ harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__angle_n;
    SData/*15:0*/ harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__angle_n;
    SData/*15:0*/ harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__angle_n;
    SData/*15:0*/ harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__angle_n;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ harmonic_generator__DOT__MAX_HARMONIC = 0x0000000aU;
    static constexpr IData/*31:0*/ harmonic_generator__DOT__DATA_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ harmonic_generator__DOT__CORDIC_NUM_ITER = 0x00000010U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
