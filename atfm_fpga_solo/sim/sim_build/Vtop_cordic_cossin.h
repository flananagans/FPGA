// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_CORDIC_COSSIN_H_
#define VERILATED_VTOP_CORDIC_COSSIN_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_cordic_cossin final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clk;
    CData/*0:0*/ rst;
    CData/*0:0*/ data_angle_valid_in;
    CData/*0:0*/ data_cossin_valid_out;
    SData/*15:0*/ angle;
    SData/*15:0*/ cos;
    SData/*15:0*/ sin;
    VlUnpacked<IData/*16:0*/, 17> x_pipe;
    VlUnpacked<IData/*16:0*/, 17> y_pipe;
    VlUnpacked<CData/*0:0*/, 17> x_flip_pipe;
    VlUnpacked<SData/*15:0*/, 17> total_angle_pipe;
    VlUnpacked<SData/*15:0*/, 17> desired_angle_pipe;
    VlUnpacked<CData/*0:0*/, 17> valid_pipe;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ NUM_ITERATIONS = 0x00000010U;
    static constexpr IData/*16:0*/ X_INIT = 0x00004dbaU;
    static constexpr IData/*16:0*/ Y_INIT = 0U;
    static constexpr double PI = 3.14159265358979312e+00;
    static constexpr double SCALING_FACTOR_REAL = 6.07252935008881445e-01;

    // CONSTRUCTORS
    Vtop_cordic_cossin();
    ~Vtop_cordic_cossin();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_cordic_cossin);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
