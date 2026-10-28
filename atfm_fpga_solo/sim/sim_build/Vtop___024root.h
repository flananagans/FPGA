// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(data_valid_in,0,0);
    VL_OUT8(data_valid_out,0,0);
    VL_OUT8(busy,0,0);
    CData/*0:0*/ modulator__DOT__clk;
    CData/*0:0*/ modulator__DOT__rst;
    CData/*0:0*/ modulator__DOT__data_valid_in;
    CData/*0:0*/ modulator__DOT__data_valid_out;
    CData/*0:0*/ modulator__DOT__busy;
    CData/*3:0*/ modulator__DOT__idx;
    CData/*1:0*/ modulator__DOT__mac_state;
    CData/*0:0*/ __Vtrigprevexpr___TOP__modulator__DOT__clk__0;
    VL_INW(a_values,159,0,5);
    VL_INW(b_values,159,0,5);
    VL_INW(cos_harmonics,159,0,5);
    VL_INW(sin_harmonics,159,0,5);
    VL_OUT16(modulator_sum_out,15,0);
    VlWide<5>/*159:0*/ modulator__DOT__a_values;
    VlWide<5>/*159:0*/ modulator__DOT__b_values;
    VlWide<5>/*159:0*/ modulator__DOT__cos_harmonics;
    VlWide<5>/*159:0*/ modulator__DOT__sin_harmonics;
    SData/*15:0*/ modulator__DOT__modulator_sum_out;
    VlWide<5>/*159:0*/ modulator__DOT__a_reg;
    VlWide<5>/*159:0*/ modulator__DOT__b_reg;
    VlWide<5>/*159:0*/ modulator__DOT__cos_reg;
    VlWide<5>/*159:0*/ modulator__DOT__sin_reg;
    SData/*15:0*/ modulator__DOT__a_temp;
    SData/*15:0*/ modulator__DOT__b_temp;
    SData/*15:0*/ modulator__DOT__cos_temp;
    SData/*15:0*/ modulator__DOT__sin_temp;
    IData/*31:0*/ modulator__DOT__prod_a_temp;
    IData/*31:0*/ modulator__DOT__prod_b_temp;
    QData/*36:0*/ modulator__DOT__mac_cur;
    QData/*36:0*/ modulator__DOT__mac_next;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ modulator__DOT__MAX_HARMONIC = 0x0000000aU;
    static constexpr IData/*31:0*/ modulator__DOT__DATA_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ modulator__DOT__MAC_WIDTH = 0x00000025U;
    static constexpr IData/*31:0*/ modulator__DOT__LOAD_MAC_DELAY = 2U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
