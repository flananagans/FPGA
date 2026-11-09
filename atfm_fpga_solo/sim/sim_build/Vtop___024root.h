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
    VL_OUT8(sat_hi,0,0);
    VL_OUT8(sat_lo,0,0);
    VL_OUT8(data_valid_out,0,0);
    VL_OUT8(busy,0,0);
    CData/*0:0*/ pid_controller__DOT__clk;
    CData/*0:0*/ pid_controller__DOT__rst;
    CData/*0:0*/ pid_controller__DOT__data_valid_in;
    CData/*0:0*/ pid_controller__DOT__sat_hi;
    CData/*0:0*/ pid_controller__DOT__sat_lo;
    CData/*0:0*/ pid_controller__DOT__data_valid_out;
    CData/*0:0*/ pid_controller__DOT__busy;
    CData/*0:0*/ pid_controller__DOT__accept_data;
    CData/*0:0*/ pid_controller__DOT__non_pos_i_prod;
    CData/*0:0*/ pid_controller__DOT__i_clamp;
    CData/*0:0*/ pid_controller__DOT__sat_hi_current;
    CData/*0:0*/ pid_controller__DOT__sat_lo_current;
    CData/*0:0*/ __Vtrigprevexpr___TOP__pid_controller__DOT__clk__0;
    VL_IN16(inp_sig,13,0);
    VL_IN16(ref_sig,13,0);
    VL_OUT16(out_sig,13,0);
    SData/*13:0*/ pid_controller__DOT__inp_sig;
    SData/*13:0*/ pid_controller__DOT__ref_sig;
    SData/*13:0*/ pid_controller__DOT__out_sig;
    SData/*14:0*/ pid_controller__DOT__vel;
    SData/*14:0*/ pid_controller__DOT__vel_d;
    VL_IN(Kp,31,0);
    VL_IN(Ki,31,0);
    VL_IN(Kd,31,0);
    IData/*31:0*/ pid_controller__DOT__Kp;
    IData/*31:0*/ pid_controller__DOT__Ki;
    IData/*31:0*/ pid_controller__DOT__Kd;
    IData/*20:0*/ pid_controller__DOT__deriv_vel;
    IData/*20:0*/ pid_controller__DOT__deriv_scaled;
    IData/*20:0*/ pid_controller__DOT__deriv_vel_filt;
    QData/*46:0*/ pid_controller__DOT__p_prod;
    QData/*46:0*/ pid_controller__DOT__i_prod;
    QData/*46:0*/ pid_controller__DOT__d_prod;
    QData/*46:0*/ pid_controller__DOT__p_term;
    QData/*46:0*/ pid_controller__DOT__d_term;
    QData/*47:0*/ pid_controller__DOT__i_next;
    QData/*46:0*/ pid_controller__DOT__i_current;
    QData/*49:0*/ pid_controller__DOT__pid_sum;
    QData/*49:0*/ pid_controller__DOT__unbounded_pid_sum;
    QData/*46:0*/ pid_controller__DOT__i_bounded;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr SData/*13:0*/ pid_controller__DOT__OUT_MAX = 0x1fffU;
    static constexpr SData/*13:0*/ pid_controller__DOT__OUT_MIN = 0x2000U;
    static constexpr IData/*31:0*/ pid_controller__DOT__GAIN_DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ pid_controller__DOT__SIG_DATA_WIDTH = 0x0000000eU;
    static constexpr IData/*31:0*/ pid_controller__DOT__FRAC_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ pid_controller__DOT__ALPHA_DIV_FACTOR = 3U;
    static constexpr IData/*31:0*/ pid_controller__DOT__DERIV_FRAC_BITS = 5U;
    static constexpr IData/*31:0*/ pid_controller__DOT__PROD_WIDTH = 0x0000002fU;
    static constexpr QData/*46:0*/ pid_controller__DOT__I_MAX = 0x0000000003331999ULL;
    static constexpr QData/*46:0*/ pid_controller__DOT__I_MIN = 0x00007ffffccce667ULL;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
