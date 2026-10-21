// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _VTOP_CORDIC_COSSIN__W10_N10_H_
#define _VTOP_CORDIC_COSSIN__W10_N10_H_  // guard

#include "verilated.h"
#include "Vtop__Dpi.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop_cordic_cossin__W10_N10) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(data_angle_valid_in,0,0);
    VL_OUT8(data_cossin_valid_out,0,0);
    VL_IN16(angle,15,0);
    VL_OUT16(cos,15,0);
    VL_OUT16(sin,15,0);
    
    // LOCAL SIGNALS
    IData/*16:0*/ x_pipe[17];
    IData/*16:0*/ y_pipe[17];
    CData/*0:0*/ x_flip_pipe[17];
    SData/*15:0*/ total_angle_pipe[17];
    SData/*15:0*/ desired_angle_pipe[17];
    CData/*0:0*/ valid_pipe[17];
    
    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __Vdlyvset__total_angle_pipe__v0;
        CData/*0:0*/ __Vdlyvval__valid_pipe__v0;
        CData/*0:0*/ __Vdlyvset__x_pipe__v0;
        CData/*0:0*/ __Vdlyvset__y_pipe__v0;
        CData/*0:0*/ __Vdlyvset__desired_angle_pipe__v0;
        CData/*0:0*/ __Vdlyvval__x_flip_pipe__v0;
        CData/*0:0*/ __Vdlyvset__x_flip_pipe__v0;
        CData/*0:0*/ __Vdlyvval__valid_pipe__v1;
        CData/*0:0*/ __Vdlyvset__x_pipe__v1;
        CData/*0:0*/ __Vdlyvset__total_angle_pipe__v2;
        CData/*0:0*/ __Vdlyvset__desired_angle_pipe__v1;
        CData/*0:0*/ __Vdlyvval__x_flip_pipe__v1;
        CData/*0:0*/ __Vdlyvset__x_flip_pipe__v1;
        CData/*0:0*/ __Vdlyvval__valid_pipe__v2;
        CData/*0:0*/ __Vdlyvset__x_pipe__v3;
        CData/*0:0*/ __Vdlyvset__total_angle_pipe__v4;
        CData/*0:0*/ __Vdlyvset__desired_angle_pipe__v2;
        CData/*0:0*/ __Vdlyvval__x_flip_pipe__v2;
        CData/*0:0*/ __Vdlyvset__x_flip_pipe__v2;
        CData/*0:0*/ __Vdlyvval__valid_pipe__v3;
        CData/*0:0*/ __Vdlyvset__x_pipe__v5;
        CData/*0:0*/ __Vdlyvset__total_angle_pipe__v6;
        CData/*0:0*/ __Vdlyvset__desired_angle_pipe__v3;
        CData/*0:0*/ __Vdlyvval__x_flip_pipe__v3;
        CData/*0:0*/ __Vdlyvset__x_flip_pipe__v3;
        CData/*0:0*/ __Vdlyvval__valid_pipe__v4;
        CData/*0:0*/ __Vdlyvset__x_pipe__v7;
        CData/*0:0*/ __Vdlyvset__total_angle_pipe__v8;
        CData/*0:0*/ __Vdlyvset__desired_angle_pipe__v4;
        CData/*0:0*/ __Vdlyvval__x_flip_pipe__v4;
        CData/*0:0*/ __Vdlyvset__x_flip_pipe__v4;
        CData/*0:0*/ __Vdlyvval__valid_pipe__v5;
        CData/*0:0*/ __Vdlyvset__x_pipe__v9;
        CData/*0:0*/ __Vdlyvset__total_angle_pipe__v10;
        CData/*0:0*/ __Vdlyvset__desired_angle_pipe__v5;
        CData/*0:0*/ __Vdlyvval__x_flip_pipe__v5;
        CData/*0:0*/ __Vdlyvset__x_flip_pipe__v5;
        CData/*0:0*/ __Vdlyvval__valid_pipe__v6;
        CData/*0:0*/ __Vdlyvset__x_pipe__v11;
        CData/*0:0*/ __Vdlyvset__total_angle_pipe__v12;
        CData/*0:0*/ __Vdlyvset__desired_angle_pipe__v6;
        CData/*0:0*/ __Vdlyvval__x_flip_pipe__v6;
        CData/*0:0*/ __Vdlyvset__x_flip_pipe__v6;
        CData/*0:0*/ __Vdlyvval__valid_pipe__v7;
        CData/*0:0*/ __Vdlyvset__x_pipe__v13;
        CData/*0:0*/ __Vdlyvset__total_angle_pipe__v14;
        CData/*0:0*/ __Vdlyvset__desired_angle_pipe__v7;
        CData/*0:0*/ __Vdlyvval__x_flip_pipe__v7;
        CData/*0:0*/ __Vdlyvset__x_flip_pipe__v7;
        CData/*0:0*/ __Vdlyvval__valid_pipe__v8;
        CData/*0:0*/ __Vdlyvset__x_pipe__v15;
        CData/*0:0*/ __Vdlyvset__total_angle_pipe__v16;
        CData/*0:0*/ __Vdlyvset__desired_angle_pipe__v8;
        CData/*0:0*/ __Vdlyvval__x_flip_pipe__v8;
        CData/*0:0*/ __Vdlyvset__x_flip_pipe__v8;
        CData/*0:0*/ __Vdlyvval__valid_pipe__v9;
        CData/*0:0*/ __Vdlyvset__x_pipe__v17;
        CData/*0:0*/ __Vdlyvset__total_angle_pipe__v18;
        CData/*0:0*/ __Vdlyvset__desired_angle_pipe__v9;
        CData/*0:0*/ __Vdlyvval__x_flip_pipe__v9;
        CData/*0:0*/ __Vdlyvset__x_flip_pipe__v9;
        CData/*0:0*/ __Vdlyvval__valid_pipe__v10;
        CData/*0:0*/ __Vdlyvset__x_pipe__v19;
        CData/*0:0*/ __Vdlyvset__total_angle_pipe__v20;
    };
    struct {
        CData/*0:0*/ __Vdlyvset__desired_angle_pipe__v10;
        CData/*0:0*/ __Vdlyvval__x_flip_pipe__v10;
        CData/*0:0*/ __Vdlyvset__x_flip_pipe__v10;
        CData/*0:0*/ __Vdlyvval__valid_pipe__v11;
        CData/*0:0*/ __Vdlyvset__x_pipe__v21;
        CData/*0:0*/ __Vdlyvset__total_angle_pipe__v22;
        CData/*0:0*/ __Vdlyvset__desired_angle_pipe__v11;
        CData/*0:0*/ __Vdlyvval__x_flip_pipe__v11;
        CData/*0:0*/ __Vdlyvset__x_flip_pipe__v11;
        CData/*0:0*/ __Vdlyvval__valid_pipe__v12;
        CData/*0:0*/ __Vdlyvset__x_pipe__v23;
        CData/*0:0*/ __Vdlyvset__total_angle_pipe__v24;
        CData/*0:0*/ __Vdlyvset__desired_angle_pipe__v12;
        CData/*0:0*/ __Vdlyvval__x_flip_pipe__v12;
        CData/*0:0*/ __Vdlyvset__x_flip_pipe__v12;
        CData/*0:0*/ __Vdlyvval__valid_pipe__v13;
        CData/*0:0*/ __Vdlyvset__x_pipe__v25;
        CData/*0:0*/ __Vdlyvset__total_angle_pipe__v26;
        CData/*0:0*/ __Vdlyvset__desired_angle_pipe__v13;
        CData/*0:0*/ __Vdlyvval__x_flip_pipe__v13;
        CData/*0:0*/ __Vdlyvset__x_flip_pipe__v13;
        CData/*0:0*/ __Vdlyvval__valid_pipe__v14;
        CData/*0:0*/ __Vdlyvset__x_pipe__v27;
        CData/*0:0*/ __Vdlyvset__total_angle_pipe__v28;
        CData/*0:0*/ __Vdlyvset__desired_angle_pipe__v14;
        CData/*0:0*/ __Vdlyvval__x_flip_pipe__v14;
        CData/*0:0*/ __Vdlyvset__x_flip_pipe__v14;
        CData/*0:0*/ __Vdlyvval__valid_pipe__v15;
        CData/*0:0*/ __Vdlyvset__x_pipe__v29;
        CData/*0:0*/ __Vdlyvset__total_angle_pipe__v30;
        CData/*0:0*/ __Vdlyvset__desired_angle_pipe__v15;
        CData/*0:0*/ __Vdlyvval__x_flip_pipe__v15;
        CData/*0:0*/ __Vdlyvset__x_flip_pipe__v15;
        CData/*0:0*/ __Vdlyvval__valid_pipe__v16;
        CData/*0:0*/ __Vdlyvset__x_pipe__v31;
        CData/*0:0*/ __Vdlyvset__total_angle_pipe__v32;
        CData/*0:0*/ __Vdlyvset__desired_angle_pipe__v16;
        CData/*0:0*/ __Vdlyvval__x_flip_pipe__v16;
        CData/*0:0*/ __Vdlyvset__x_flip_pipe__v16;
        SData/*15:0*/ __Vfunc_trim_overflow_bit__0__Vfuncout;
        SData/*15:0*/ __Vfunc_trim_overflow_bit__1__Vfuncout;
        SData/*15:0*/ __Vfunc_trim_overflow_bit__34__Vfuncout;
        SData/*15:0*/ __Vfunc_trim_overflow_bit__35__Vfuncout;
        SData/*15:0*/ __Vfunc_trim_overflow_bit__68__Vfuncout;
        SData/*15:0*/ __Vfunc_trim_overflow_bit__69__Vfuncout;
        SData/*15:0*/ __Vfunc_trim_overflow_bit__102__Vfuncout;
        SData/*15:0*/ __Vfunc_trim_overflow_bit__103__Vfuncout;
        SData/*15:0*/ __Vfunc_trim_overflow_bit__136__Vfuncout;
        SData/*15:0*/ __Vfunc_trim_overflow_bit__137__Vfuncout;
        SData/*15:0*/ __Vfunc_trim_overflow_bit__170__Vfuncout;
        SData/*15:0*/ __Vfunc_trim_overflow_bit__171__Vfuncout;
        SData/*15:0*/ __Vfunc_trim_overflow_bit__204__Vfuncout;
        SData/*15:0*/ __Vfunc_trim_overflow_bit__205__Vfuncout;
        SData/*15:0*/ __Vfunc_trim_overflow_bit__238__Vfuncout;
        SData/*15:0*/ __Vfunc_trim_overflow_bit__239__Vfuncout;
        SData/*15:0*/ __Vfunc_trim_overflow_bit__272__Vfuncout;
        SData/*15:0*/ __Vfunc_trim_overflow_bit__273__Vfuncout;
        SData/*15:0*/ __Vfunc_trim_overflow_bit__306__Vfuncout;
        SData/*15:0*/ __Vfunc_trim_overflow_bit__307__Vfuncout;
        SData/*15:0*/ __Vdlyvval__desired_angle_pipe__v0;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v1;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v2;
        SData/*15:0*/ __Vdlyvval__desired_angle_pipe__v1;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v3;
    };
    struct {
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v4;
        SData/*15:0*/ __Vdlyvval__desired_angle_pipe__v2;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v5;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v6;
        SData/*15:0*/ __Vdlyvval__desired_angle_pipe__v3;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v7;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v8;
        SData/*15:0*/ __Vdlyvval__desired_angle_pipe__v4;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v9;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v10;
        SData/*15:0*/ __Vdlyvval__desired_angle_pipe__v5;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v11;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v12;
        SData/*15:0*/ __Vdlyvval__desired_angle_pipe__v6;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v13;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v14;
        SData/*15:0*/ __Vdlyvval__desired_angle_pipe__v7;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v15;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v16;
        SData/*15:0*/ __Vdlyvval__desired_angle_pipe__v8;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v17;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v18;
        SData/*15:0*/ __Vdlyvval__desired_angle_pipe__v9;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v19;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v20;
        SData/*15:0*/ __Vdlyvval__desired_angle_pipe__v10;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v21;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v22;
        SData/*15:0*/ __Vdlyvval__desired_angle_pipe__v11;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v23;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v24;
        SData/*15:0*/ __Vdlyvval__desired_angle_pipe__v12;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v25;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v26;
        SData/*15:0*/ __Vdlyvval__desired_angle_pipe__v13;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v27;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v28;
        SData/*15:0*/ __Vdlyvval__desired_angle_pipe__v14;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v29;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v30;
        SData/*15:0*/ __Vdlyvval__desired_angle_pipe__v15;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v31;
        SData/*15:0*/ __Vdlyvval__total_angle_pipe__v32;
        SData/*15:0*/ __Vdlyvval__desired_angle_pipe__v16;
        IData/*16:0*/ __Vfunc_trim_overflow_bit__0__inp;
        IData/*16:0*/ __Vfunc_trim_overflow_bit__1__inp;
        IData/*16:0*/ __Vfunc_trim_overflow_bit__34__inp;
        IData/*16:0*/ __Vfunc_trim_overflow_bit__35__inp;
        IData/*16:0*/ __Vfunc_trim_overflow_bit__68__inp;
        IData/*16:0*/ __Vfunc_trim_overflow_bit__69__inp;
        IData/*16:0*/ __Vfunc_trim_overflow_bit__102__inp;
        IData/*16:0*/ __Vfunc_trim_overflow_bit__103__inp;
        IData/*16:0*/ __Vfunc_trim_overflow_bit__136__inp;
        IData/*16:0*/ __Vfunc_trim_overflow_bit__137__inp;
        IData/*16:0*/ __Vfunc_trim_overflow_bit__170__inp;
        IData/*16:0*/ __Vfunc_trim_overflow_bit__171__inp;
        IData/*16:0*/ __Vfunc_trim_overflow_bit__204__inp;
        IData/*16:0*/ __Vfunc_trim_overflow_bit__205__inp;
        IData/*16:0*/ __Vfunc_trim_overflow_bit__238__inp;
        IData/*16:0*/ __Vfunc_trim_overflow_bit__239__inp;
        IData/*16:0*/ __Vfunc_trim_overflow_bit__272__inp;
        IData/*16:0*/ __Vfunc_trim_overflow_bit__273__inp;
        IData/*16:0*/ __Vfunc_trim_overflow_bit__306__inp;
        IData/*16:0*/ __Vfunc_trim_overflow_bit__307__inp;
    };
    struct {
        IData/*16:0*/ __Vdlyvval__x_pipe__v1;
        IData/*16:0*/ __Vdlyvval__y_pipe__v1;
        IData/*16:0*/ __Vdlyvval__x_pipe__v2;
        IData/*16:0*/ __Vdlyvval__y_pipe__v2;
        IData/*16:0*/ __Vdlyvval__x_pipe__v3;
        IData/*16:0*/ __Vdlyvval__y_pipe__v3;
        IData/*16:0*/ __Vdlyvval__x_pipe__v4;
        IData/*16:0*/ __Vdlyvval__y_pipe__v4;
        IData/*16:0*/ __Vdlyvval__x_pipe__v5;
        IData/*16:0*/ __Vdlyvval__y_pipe__v5;
        IData/*16:0*/ __Vdlyvval__x_pipe__v6;
        IData/*16:0*/ __Vdlyvval__y_pipe__v6;
        IData/*16:0*/ __Vdlyvval__x_pipe__v7;
        IData/*16:0*/ __Vdlyvval__y_pipe__v7;
        IData/*16:0*/ __Vdlyvval__x_pipe__v8;
        IData/*16:0*/ __Vdlyvval__y_pipe__v8;
        IData/*16:0*/ __Vdlyvval__x_pipe__v9;
        IData/*16:0*/ __Vdlyvval__y_pipe__v9;
        IData/*16:0*/ __Vdlyvval__x_pipe__v10;
        IData/*16:0*/ __Vdlyvval__y_pipe__v10;
        IData/*16:0*/ __Vdlyvval__x_pipe__v11;
        IData/*16:0*/ __Vdlyvval__y_pipe__v11;
        IData/*16:0*/ __Vdlyvval__x_pipe__v12;
        IData/*16:0*/ __Vdlyvval__y_pipe__v12;
        IData/*16:0*/ __Vdlyvval__x_pipe__v13;
        IData/*16:0*/ __Vdlyvval__y_pipe__v13;
        IData/*16:0*/ __Vdlyvval__x_pipe__v14;
        IData/*16:0*/ __Vdlyvval__y_pipe__v14;
        IData/*16:0*/ __Vdlyvval__x_pipe__v15;
        IData/*16:0*/ __Vdlyvval__y_pipe__v15;
        IData/*16:0*/ __Vdlyvval__x_pipe__v16;
        IData/*16:0*/ __Vdlyvval__y_pipe__v16;
        IData/*16:0*/ __Vdlyvval__x_pipe__v17;
        IData/*16:0*/ __Vdlyvval__y_pipe__v17;
        IData/*16:0*/ __Vdlyvval__x_pipe__v18;
        IData/*16:0*/ __Vdlyvval__y_pipe__v18;
        IData/*16:0*/ __Vdlyvval__x_pipe__v19;
        IData/*16:0*/ __Vdlyvval__y_pipe__v19;
        IData/*16:0*/ __Vdlyvval__x_pipe__v20;
        IData/*16:0*/ __Vdlyvval__y_pipe__v20;
        IData/*16:0*/ __Vdlyvval__x_pipe__v21;
        IData/*16:0*/ __Vdlyvval__y_pipe__v21;
        IData/*16:0*/ __Vdlyvval__x_pipe__v22;
        IData/*16:0*/ __Vdlyvval__y_pipe__v22;
        IData/*16:0*/ __Vdlyvval__x_pipe__v23;
        IData/*16:0*/ __Vdlyvval__y_pipe__v23;
        IData/*16:0*/ __Vdlyvval__x_pipe__v24;
        IData/*16:0*/ __Vdlyvval__y_pipe__v24;
        IData/*16:0*/ __Vdlyvval__x_pipe__v25;
        IData/*16:0*/ __Vdlyvval__y_pipe__v25;
        IData/*16:0*/ __Vdlyvval__x_pipe__v26;
        IData/*16:0*/ __Vdlyvval__y_pipe__v26;
        IData/*16:0*/ __Vdlyvval__x_pipe__v27;
        IData/*16:0*/ __Vdlyvval__y_pipe__v27;
        IData/*16:0*/ __Vdlyvval__x_pipe__v28;
        IData/*16:0*/ __Vdlyvval__y_pipe__v28;
        IData/*16:0*/ __Vdlyvval__x_pipe__v29;
        IData/*16:0*/ __Vdlyvval__y_pipe__v29;
        IData/*16:0*/ __Vdlyvval__x_pipe__v30;
        IData/*16:0*/ __Vdlyvval__y_pipe__v30;
        IData/*16:0*/ __Vdlyvval__x_pipe__v31;
        IData/*16:0*/ __Vdlyvval__y_pipe__v31;
        IData/*16:0*/ __Vdlyvval__x_pipe__v32;
        IData/*16:0*/ __Vdlyvval__y_pipe__v32;
    };
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_cordic_cossin__W10_N10);  ///< Copying not allowed
  public:
    Vtop_cordic_cossin__W10_N10(const char* name = "TOP");
    ~Vtop_cordic_cossin__W10_N10();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic__11(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic__12(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic__13(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic__14(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic__15(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic__16(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic__17(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic__18(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic__19(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic__20(Vtop__Syms* __restrict vlSymsp);
    void _settle__TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic__1(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic__2(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic__3(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic__4(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic__5(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic__6(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic__7(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic__8(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic__9(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic__10(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
