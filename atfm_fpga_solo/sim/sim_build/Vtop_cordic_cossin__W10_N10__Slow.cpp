// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_cordic_cossin__W10_N10.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop_cordic_cossin__W10_N10) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_cordic_cossin__W10_N10::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtop_cordic_cossin__W10_N10::~Vtop_cordic_cossin__W10_N10() {
}

void Vtop_cordic_cossin__W10_N10::_settle__TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin__W10_N10::_settle__TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->data_cossin_valid_out = this->valid_pipe[0x10U];
    this->__Vfunc_trim_overflow_bit__0__inp = (0x1ffffU 
                                               & (this->x_flip_pipe
                                                  [0x10U]
                                                   ? 
                                                  (- 
                                                   this->x_pipe
                                                   [0x10U])
                                                   : 
                                                  this->x_pipe
                                                  [0x10U]));
    {
        {
            {
                if ((1U == (3U & (this->__Vfunc_trim_overflow_bit__0__inp 
                                  >> 0xfU)))) {
                    this->__Vfunc_trim_overflow_bit__0__Vfuncout = 0x7fffU;
                    goto __Vlabel3;
                } else {
                    if ((2U == (3U & (this->__Vfunc_trim_overflow_bit__0__inp 
                                      >> 0xfU)))) {
                        this->__Vfunc_trim_overflow_bit__0__Vfuncout = 0x8000U;
                        goto __Vlabel2;
                    } else {
                        this->__Vfunc_trim_overflow_bit__0__Vfuncout 
                            = (0xffffU & this->__Vfunc_trim_overflow_bit__0__inp);
                        goto __Vlabel1;
                    }
                }
                __Vlabel3: ;
            }
            __Vlabel2: ;
        }
        __Vlabel1: ;
    }
    this->cos = this->__Vfunc_trim_overflow_bit__0__Vfuncout;
    this->__Vfunc_trim_overflow_bit__1__inp = this->y_pipe
        [0x10U];
    {
        {
            {
                if ((1U == (3U & (this->__Vfunc_trim_overflow_bit__1__inp 
                                  >> 0xfU)))) {
                    this->__Vfunc_trim_overflow_bit__1__Vfuncout = 0x7fffU;
                    goto __Vlabel6;
                } else {
                    if ((2U == (3U & (this->__Vfunc_trim_overflow_bit__1__inp 
                                      >> 0xfU)))) {
                        this->__Vfunc_trim_overflow_bit__1__Vfuncout = 0x8000U;
                        goto __Vlabel5;
                    } else {
                        this->__Vfunc_trim_overflow_bit__1__Vfuncout 
                            = (0xffffU & this->__Vfunc_trim_overflow_bit__1__inp);
                        goto __Vlabel4;
                    }
                }
                __Vlabel6: ;
            }
            __Vlabel5: ;
        }
        __Vlabel4: ;
    }
    this->sin = this->__Vfunc_trim_overflow_bit__1__Vfuncout;
}

void Vtop_cordic_cossin__W10_N10::_settle__TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin__W10_N10::_settle__TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic__2\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->data_cossin_valid_out = this->valid_pipe[0x10U];
    this->__Vfunc_trim_overflow_bit__34__inp = (0x1ffffU 
                                                & (this->x_flip_pipe
                                                   [0x10U]
                                                    ? 
                                                   (- 
                                                    this->x_pipe
                                                    [0x10U])
                                                    : 
                                                   this->x_pipe
                                                   [0x10U]));
    {
        {
            {
                if ((1U == (3U & (this->__Vfunc_trim_overflow_bit__34__inp 
                                  >> 0xfU)))) {
                    this->__Vfunc_trim_overflow_bit__34__Vfuncout = 0x7fffU;
                    goto __Vlabel9;
                } else {
                    if ((2U == (3U & (this->__Vfunc_trim_overflow_bit__34__inp 
                                      >> 0xfU)))) {
                        this->__Vfunc_trim_overflow_bit__34__Vfuncout = 0x8000U;
                        goto __Vlabel8;
                    } else {
                        this->__Vfunc_trim_overflow_bit__34__Vfuncout 
                            = (0xffffU & this->__Vfunc_trim_overflow_bit__34__inp);
                        goto __Vlabel7;
                    }
                }
                __Vlabel9: ;
            }
            __Vlabel8: ;
        }
        __Vlabel7: ;
    }
    this->cos = this->__Vfunc_trim_overflow_bit__34__Vfuncout;
    this->__Vfunc_trim_overflow_bit__35__inp = this->y_pipe
        [0x10U];
    {
        {
            {
                if ((1U == (3U & (this->__Vfunc_trim_overflow_bit__35__inp 
                                  >> 0xfU)))) {
                    this->__Vfunc_trim_overflow_bit__35__Vfuncout = 0x7fffU;
                    goto __Vlabel12;
                } else {
                    if ((2U == (3U & (this->__Vfunc_trim_overflow_bit__35__inp 
                                      >> 0xfU)))) {
                        this->__Vfunc_trim_overflow_bit__35__Vfuncout = 0x8000U;
                        goto __Vlabel11;
                    } else {
                        this->__Vfunc_trim_overflow_bit__35__Vfuncout 
                            = (0xffffU & this->__Vfunc_trim_overflow_bit__35__inp);
                        goto __Vlabel10;
                    }
                }
                __Vlabel12: ;
            }
            __Vlabel11: ;
        }
        __Vlabel10: ;
    }
    this->sin = this->__Vfunc_trim_overflow_bit__35__Vfuncout;
}

void Vtop_cordic_cossin__W10_N10::_settle__TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin__W10_N10::_settle__TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->data_cossin_valid_out = this->valid_pipe[0x10U];
    this->__Vfunc_trim_overflow_bit__68__inp = (0x1ffffU 
                                                & (this->x_flip_pipe
                                                   [0x10U]
                                                    ? 
                                                   (- 
                                                    this->x_pipe
                                                    [0x10U])
                                                    : 
                                                   this->x_pipe
                                                   [0x10U]));
    {
        {
            {
                if ((1U == (3U & (this->__Vfunc_trim_overflow_bit__68__inp 
                                  >> 0xfU)))) {
                    this->__Vfunc_trim_overflow_bit__68__Vfuncout = 0x7fffU;
                    goto __Vlabel15;
                } else {
                    if ((2U == (3U & (this->__Vfunc_trim_overflow_bit__68__inp 
                                      >> 0xfU)))) {
                        this->__Vfunc_trim_overflow_bit__68__Vfuncout = 0x8000U;
                        goto __Vlabel14;
                    } else {
                        this->__Vfunc_trim_overflow_bit__68__Vfuncout 
                            = (0xffffU & this->__Vfunc_trim_overflow_bit__68__inp);
                        goto __Vlabel13;
                    }
                }
                __Vlabel15: ;
            }
            __Vlabel14: ;
        }
        __Vlabel13: ;
    }
    this->cos = this->__Vfunc_trim_overflow_bit__68__Vfuncout;
    this->__Vfunc_trim_overflow_bit__69__inp = this->y_pipe
        [0x10U];
    {
        {
            {
                if ((1U == (3U & (this->__Vfunc_trim_overflow_bit__69__inp 
                                  >> 0xfU)))) {
                    this->__Vfunc_trim_overflow_bit__69__Vfuncout = 0x7fffU;
                    goto __Vlabel18;
                } else {
                    if ((2U == (3U & (this->__Vfunc_trim_overflow_bit__69__inp 
                                      >> 0xfU)))) {
                        this->__Vfunc_trim_overflow_bit__69__Vfuncout = 0x8000U;
                        goto __Vlabel17;
                    } else {
                        this->__Vfunc_trim_overflow_bit__69__Vfuncout 
                            = (0xffffU & this->__Vfunc_trim_overflow_bit__69__inp);
                        goto __Vlabel16;
                    }
                }
                __Vlabel18: ;
            }
            __Vlabel17: ;
        }
        __Vlabel16: ;
    }
    this->sin = this->__Vfunc_trim_overflow_bit__69__Vfuncout;
}

void Vtop_cordic_cossin__W10_N10::_settle__TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin__W10_N10::_settle__TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->data_cossin_valid_out = this->valid_pipe[0x10U];
    this->__Vfunc_trim_overflow_bit__102__inp = (0x1ffffU 
                                                 & (this->x_flip_pipe
                                                    [0x10U]
                                                     ? 
                                                    (- 
                                                     this->x_pipe
                                                     [0x10U])
                                                     : 
                                                    this->x_pipe
                                                    [0x10U]));
    {
        {
            {
                if ((1U == (3U & (this->__Vfunc_trim_overflow_bit__102__inp 
                                  >> 0xfU)))) {
                    this->__Vfunc_trim_overflow_bit__102__Vfuncout = 0x7fffU;
                    goto __Vlabel21;
                } else {
                    if ((2U == (3U & (this->__Vfunc_trim_overflow_bit__102__inp 
                                      >> 0xfU)))) {
                        this->__Vfunc_trim_overflow_bit__102__Vfuncout = 0x8000U;
                        goto __Vlabel20;
                    } else {
                        this->__Vfunc_trim_overflow_bit__102__Vfuncout 
                            = (0xffffU & this->__Vfunc_trim_overflow_bit__102__inp);
                        goto __Vlabel19;
                    }
                }
                __Vlabel21: ;
            }
            __Vlabel20: ;
        }
        __Vlabel19: ;
    }
    this->cos = this->__Vfunc_trim_overflow_bit__102__Vfuncout;
    this->__Vfunc_trim_overflow_bit__103__inp = this->y_pipe
        [0x10U];
    {
        {
            {
                if ((1U == (3U & (this->__Vfunc_trim_overflow_bit__103__inp 
                                  >> 0xfU)))) {
                    this->__Vfunc_trim_overflow_bit__103__Vfuncout = 0x7fffU;
                    goto __Vlabel24;
                } else {
                    if ((2U == (3U & (this->__Vfunc_trim_overflow_bit__103__inp 
                                      >> 0xfU)))) {
                        this->__Vfunc_trim_overflow_bit__103__Vfuncout = 0x8000U;
                        goto __Vlabel23;
                    } else {
                        this->__Vfunc_trim_overflow_bit__103__Vfuncout 
                            = (0xffffU & this->__Vfunc_trim_overflow_bit__103__inp);
                        goto __Vlabel22;
                    }
                }
                __Vlabel24: ;
            }
            __Vlabel23: ;
        }
        __Vlabel22: ;
    }
    this->sin = this->__Vfunc_trim_overflow_bit__103__Vfuncout;
}

void Vtop_cordic_cossin__W10_N10::_settle__TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin__W10_N10::_settle__TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic__5\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->data_cossin_valid_out = this->valid_pipe[0x10U];
    this->__Vfunc_trim_overflow_bit__136__inp = (0x1ffffU 
                                                 & (this->x_flip_pipe
                                                    [0x10U]
                                                     ? 
                                                    (- 
                                                     this->x_pipe
                                                     [0x10U])
                                                     : 
                                                    this->x_pipe
                                                    [0x10U]));
    {
        {
            {
                if ((1U == (3U & (this->__Vfunc_trim_overflow_bit__136__inp 
                                  >> 0xfU)))) {
                    this->__Vfunc_trim_overflow_bit__136__Vfuncout = 0x7fffU;
                    goto __Vlabel27;
                } else {
                    if ((2U == (3U & (this->__Vfunc_trim_overflow_bit__136__inp 
                                      >> 0xfU)))) {
                        this->__Vfunc_trim_overflow_bit__136__Vfuncout = 0x8000U;
                        goto __Vlabel26;
                    } else {
                        this->__Vfunc_trim_overflow_bit__136__Vfuncout 
                            = (0xffffU & this->__Vfunc_trim_overflow_bit__136__inp);
                        goto __Vlabel25;
                    }
                }
                __Vlabel27: ;
            }
            __Vlabel26: ;
        }
        __Vlabel25: ;
    }
    this->cos = this->__Vfunc_trim_overflow_bit__136__Vfuncout;
    this->__Vfunc_trim_overflow_bit__137__inp = this->y_pipe
        [0x10U];
    {
        {
            {
                if ((1U == (3U & (this->__Vfunc_trim_overflow_bit__137__inp 
                                  >> 0xfU)))) {
                    this->__Vfunc_trim_overflow_bit__137__Vfuncout = 0x7fffU;
                    goto __Vlabel30;
                } else {
                    if ((2U == (3U & (this->__Vfunc_trim_overflow_bit__137__inp 
                                      >> 0xfU)))) {
                        this->__Vfunc_trim_overflow_bit__137__Vfuncout = 0x8000U;
                        goto __Vlabel29;
                    } else {
                        this->__Vfunc_trim_overflow_bit__137__Vfuncout 
                            = (0xffffU & this->__Vfunc_trim_overflow_bit__137__inp);
                        goto __Vlabel28;
                    }
                }
                __Vlabel30: ;
            }
            __Vlabel29: ;
        }
        __Vlabel28: ;
    }
    this->sin = this->__Vfunc_trim_overflow_bit__137__Vfuncout;
}

void Vtop_cordic_cossin__W10_N10::_settle__TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin__W10_N10::_settle__TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic__6\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->data_cossin_valid_out = this->valid_pipe[0x10U];
    this->__Vfunc_trim_overflow_bit__170__inp = (0x1ffffU 
                                                 & (this->x_flip_pipe
                                                    [0x10U]
                                                     ? 
                                                    (- 
                                                     this->x_pipe
                                                     [0x10U])
                                                     : 
                                                    this->x_pipe
                                                    [0x10U]));
    {
        {
            {
                if ((1U == (3U & (this->__Vfunc_trim_overflow_bit__170__inp 
                                  >> 0xfU)))) {
                    this->__Vfunc_trim_overflow_bit__170__Vfuncout = 0x7fffU;
                    goto __Vlabel33;
                } else {
                    if ((2U == (3U & (this->__Vfunc_trim_overflow_bit__170__inp 
                                      >> 0xfU)))) {
                        this->__Vfunc_trim_overflow_bit__170__Vfuncout = 0x8000U;
                        goto __Vlabel32;
                    } else {
                        this->__Vfunc_trim_overflow_bit__170__Vfuncout 
                            = (0xffffU & this->__Vfunc_trim_overflow_bit__170__inp);
                        goto __Vlabel31;
                    }
                }
                __Vlabel33: ;
            }
            __Vlabel32: ;
        }
        __Vlabel31: ;
    }
    this->cos = this->__Vfunc_trim_overflow_bit__170__Vfuncout;
    this->__Vfunc_trim_overflow_bit__171__inp = this->y_pipe
        [0x10U];
    {
        {
            {
                if ((1U == (3U & (this->__Vfunc_trim_overflow_bit__171__inp 
                                  >> 0xfU)))) {
                    this->__Vfunc_trim_overflow_bit__171__Vfuncout = 0x7fffU;
                    goto __Vlabel36;
                } else {
                    if ((2U == (3U & (this->__Vfunc_trim_overflow_bit__171__inp 
                                      >> 0xfU)))) {
                        this->__Vfunc_trim_overflow_bit__171__Vfuncout = 0x8000U;
                        goto __Vlabel35;
                    } else {
                        this->__Vfunc_trim_overflow_bit__171__Vfuncout 
                            = (0xffffU & this->__Vfunc_trim_overflow_bit__171__inp);
                        goto __Vlabel34;
                    }
                }
                __Vlabel36: ;
            }
            __Vlabel35: ;
        }
        __Vlabel34: ;
    }
    this->sin = this->__Vfunc_trim_overflow_bit__171__Vfuncout;
}

void Vtop_cordic_cossin__W10_N10::_settle__TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin__W10_N10::_settle__TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic__7\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->data_cossin_valid_out = this->valid_pipe[0x10U];
    this->__Vfunc_trim_overflow_bit__204__inp = (0x1ffffU 
                                                 & (this->x_flip_pipe
                                                    [0x10U]
                                                     ? 
                                                    (- 
                                                     this->x_pipe
                                                     [0x10U])
                                                     : 
                                                    this->x_pipe
                                                    [0x10U]));
    {
        {
            {
                if ((1U == (3U & (this->__Vfunc_trim_overflow_bit__204__inp 
                                  >> 0xfU)))) {
                    this->__Vfunc_trim_overflow_bit__204__Vfuncout = 0x7fffU;
                    goto __Vlabel39;
                } else {
                    if ((2U == (3U & (this->__Vfunc_trim_overflow_bit__204__inp 
                                      >> 0xfU)))) {
                        this->__Vfunc_trim_overflow_bit__204__Vfuncout = 0x8000U;
                        goto __Vlabel38;
                    } else {
                        this->__Vfunc_trim_overflow_bit__204__Vfuncout 
                            = (0xffffU & this->__Vfunc_trim_overflow_bit__204__inp);
                        goto __Vlabel37;
                    }
                }
                __Vlabel39: ;
            }
            __Vlabel38: ;
        }
        __Vlabel37: ;
    }
    this->cos = this->__Vfunc_trim_overflow_bit__204__Vfuncout;
    this->__Vfunc_trim_overflow_bit__205__inp = this->y_pipe
        [0x10U];
    {
        {
            {
                if ((1U == (3U & (this->__Vfunc_trim_overflow_bit__205__inp 
                                  >> 0xfU)))) {
                    this->__Vfunc_trim_overflow_bit__205__Vfuncout = 0x7fffU;
                    goto __Vlabel42;
                } else {
                    if ((2U == (3U & (this->__Vfunc_trim_overflow_bit__205__inp 
                                      >> 0xfU)))) {
                        this->__Vfunc_trim_overflow_bit__205__Vfuncout = 0x8000U;
                        goto __Vlabel41;
                    } else {
                        this->__Vfunc_trim_overflow_bit__205__Vfuncout 
                            = (0xffffU & this->__Vfunc_trim_overflow_bit__205__inp);
                        goto __Vlabel40;
                    }
                }
                __Vlabel42: ;
            }
            __Vlabel41: ;
        }
        __Vlabel40: ;
    }
    this->sin = this->__Vfunc_trim_overflow_bit__205__Vfuncout;
}

void Vtop_cordic_cossin__W10_N10::_settle__TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin__W10_N10::_settle__TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic__8\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->data_cossin_valid_out = this->valid_pipe[0x10U];
    this->__Vfunc_trim_overflow_bit__238__inp = (0x1ffffU 
                                                 & (this->x_flip_pipe
                                                    [0x10U]
                                                     ? 
                                                    (- 
                                                     this->x_pipe
                                                     [0x10U])
                                                     : 
                                                    this->x_pipe
                                                    [0x10U]));
    {
        {
            {
                if ((1U == (3U & (this->__Vfunc_trim_overflow_bit__238__inp 
                                  >> 0xfU)))) {
                    this->__Vfunc_trim_overflow_bit__238__Vfuncout = 0x7fffU;
                    goto __Vlabel45;
                } else {
                    if ((2U == (3U & (this->__Vfunc_trim_overflow_bit__238__inp 
                                      >> 0xfU)))) {
                        this->__Vfunc_trim_overflow_bit__238__Vfuncout = 0x8000U;
                        goto __Vlabel44;
                    } else {
                        this->__Vfunc_trim_overflow_bit__238__Vfuncout 
                            = (0xffffU & this->__Vfunc_trim_overflow_bit__238__inp);
                        goto __Vlabel43;
                    }
                }
                __Vlabel45: ;
            }
            __Vlabel44: ;
        }
        __Vlabel43: ;
    }
    this->cos = this->__Vfunc_trim_overflow_bit__238__Vfuncout;
    this->__Vfunc_trim_overflow_bit__239__inp = this->y_pipe
        [0x10U];
    {
        {
            {
                if ((1U == (3U & (this->__Vfunc_trim_overflow_bit__239__inp 
                                  >> 0xfU)))) {
                    this->__Vfunc_trim_overflow_bit__239__Vfuncout = 0x7fffU;
                    goto __Vlabel48;
                } else {
                    if ((2U == (3U & (this->__Vfunc_trim_overflow_bit__239__inp 
                                      >> 0xfU)))) {
                        this->__Vfunc_trim_overflow_bit__239__Vfuncout = 0x8000U;
                        goto __Vlabel47;
                    } else {
                        this->__Vfunc_trim_overflow_bit__239__Vfuncout 
                            = (0xffffU & this->__Vfunc_trim_overflow_bit__239__inp);
                        goto __Vlabel46;
                    }
                }
                __Vlabel48: ;
            }
            __Vlabel47: ;
        }
        __Vlabel46: ;
    }
    this->sin = this->__Vfunc_trim_overflow_bit__239__Vfuncout;
}

void Vtop_cordic_cossin__W10_N10::_settle__TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic__9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin__W10_N10::_settle__TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic__9\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->data_cossin_valid_out = this->valid_pipe[0x10U];
    this->__Vfunc_trim_overflow_bit__272__inp = (0x1ffffU 
                                                 & (this->x_flip_pipe
                                                    [0x10U]
                                                     ? 
                                                    (- 
                                                     this->x_pipe
                                                     [0x10U])
                                                     : 
                                                    this->x_pipe
                                                    [0x10U]));
    {
        {
            {
                if ((1U == (3U & (this->__Vfunc_trim_overflow_bit__272__inp 
                                  >> 0xfU)))) {
                    this->__Vfunc_trim_overflow_bit__272__Vfuncout = 0x7fffU;
                    goto __Vlabel51;
                } else {
                    if ((2U == (3U & (this->__Vfunc_trim_overflow_bit__272__inp 
                                      >> 0xfU)))) {
                        this->__Vfunc_trim_overflow_bit__272__Vfuncout = 0x8000U;
                        goto __Vlabel50;
                    } else {
                        this->__Vfunc_trim_overflow_bit__272__Vfuncout 
                            = (0xffffU & this->__Vfunc_trim_overflow_bit__272__inp);
                        goto __Vlabel49;
                    }
                }
                __Vlabel51: ;
            }
            __Vlabel50: ;
        }
        __Vlabel49: ;
    }
    this->cos = this->__Vfunc_trim_overflow_bit__272__Vfuncout;
    this->__Vfunc_trim_overflow_bit__273__inp = this->y_pipe
        [0x10U];
    {
        {
            {
                if ((1U == (3U & (this->__Vfunc_trim_overflow_bit__273__inp 
                                  >> 0xfU)))) {
                    this->__Vfunc_trim_overflow_bit__273__Vfuncout = 0x7fffU;
                    goto __Vlabel54;
                } else {
                    if ((2U == (3U & (this->__Vfunc_trim_overflow_bit__273__inp 
                                      >> 0xfU)))) {
                        this->__Vfunc_trim_overflow_bit__273__Vfuncout = 0x8000U;
                        goto __Vlabel53;
                    } else {
                        this->__Vfunc_trim_overflow_bit__273__Vfuncout 
                            = (0xffffU & this->__Vfunc_trim_overflow_bit__273__inp);
                        goto __Vlabel52;
                    }
                }
                __Vlabel54: ;
            }
            __Vlabel53: ;
        }
        __Vlabel52: ;
    }
    this->sin = this->__Vfunc_trim_overflow_bit__273__Vfuncout;
}

void Vtop_cordic_cossin__W10_N10::_settle__TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic__10(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin__W10_N10::_settle__TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic__10\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->data_cossin_valid_out = this->valid_pipe[0x10U];
    this->__Vfunc_trim_overflow_bit__306__inp = (0x1ffffU 
                                                 & (this->x_flip_pipe
                                                    [0x10U]
                                                     ? 
                                                    (- 
                                                     this->x_pipe
                                                     [0x10U])
                                                     : 
                                                    this->x_pipe
                                                    [0x10U]));
    {
        {
            {
                if ((1U == (3U & (this->__Vfunc_trim_overflow_bit__306__inp 
                                  >> 0xfU)))) {
                    this->__Vfunc_trim_overflow_bit__306__Vfuncout = 0x7fffU;
                    goto __Vlabel57;
                } else {
                    if ((2U == (3U & (this->__Vfunc_trim_overflow_bit__306__inp 
                                      >> 0xfU)))) {
                        this->__Vfunc_trim_overflow_bit__306__Vfuncout = 0x8000U;
                        goto __Vlabel56;
                    } else {
                        this->__Vfunc_trim_overflow_bit__306__Vfuncout 
                            = (0xffffU & this->__Vfunc_trim_overflow_bit__306__inp);
                        goto __Vlabel55;
                    }
                }
                __Vlabel57: ;
            }
            __Vlabel56: ;
        }
        __Vlabel55: ;
    }
    this->cos = this->__Vfunc_trim_overflow_bit__306__Vfuncout;
    this->__Vfunc_trim_overflow_bit__307__inp = this->y_pipe
        [0x10U];
    {
        {
            {
                if ((1U == (3U & (this->__Vfunc_trim_overflow_bit__307__inp 
                                  >> 0xfU)))) {
                    this->__Vfunc_trim_overflow_bit__307__Vfuncout = 0x7fffU;
                    goto __Vlabel60;
                } else {
                    if ((2U == (3U & (this->__Vfunc_trim_overflow_bit__307__inp 
                                      >> 0xfU)))) {
                        this->__Vfunc_trim_overflow_bit__307__Vfuncout = 0x8000U;
                        goto __Vlabel59;
                    } else {
                        this->__Vfunc_trim_overflow_bit__307__Vfuncout 
                            = (0xffffU & this->__Vfunc_trim_overflow_bit__307__inp);
                        goto __Vlabel58;
                    }
                }
                __Vlabel60: ;
            }
            __Vlabel59: ;
        }
        __Vlabel58: ;
    }
    this->sin = this->__Vfunc_trim_overflow_bit__307__Vfuncout;
}

void Vtop_cordic_cossin__W10_N10::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin__W10_N10::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    data_angle_valid_in = VL_RAND_RESET_I(1);
    angle = VL_RAND_RESET_I(16);
    cos = VL_RAND_RESET_I(16);
    sin = VL_RAND_RESET_I(16);
    data_cossin_valid_out = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<17; ++__Vi0) {
            x_pipe[__Vi0] = VL_RAND_RESET_I(17);
    }}
    { int __Vi0=0; for (; __Vi0<17; ++__Vi0) {
            y_pipe[__Vi0] = VL_RAND_RESET_I(17);
    }}
    { int __Vi0=0; for (; __Vi0<17; ++__Vi0) {
            x_flip_pipe[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<17; ++__Vi0) {
            total_angle_pipe[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<17; ++__Vi0) {
            desired_angle_pipe[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<17; ++__Vi0) {
            valid_pipe[__Vi0] = VL_RAND_RESET_I(1);
    }}
    __Vfunc_trim_overflow_bit__0__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_trim_overflow_bit__0__inp = VL_RAND_RESET_I(17);
    __Vfunc_trim_overflow_bit__1__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_trim_overflow_bit__1__inp = VL_RAND_RESET_I(17);
    __Vfunc_trim_overflow_bit__34__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_trim_overflow_bit__34__inp = VL_RAND_RESET_I(17);
    __Vfunc_trim_overflow_bit__35__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_trim_overflow_bit__35__inp = VL_RAND_RESET_I(17);
    __Vfunc_trim_overflow_bit__68__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_trim_overflow_bit__68__inp = VL_RAND_RESET_I(17);
    __Vfunc_trim_overflow_bit__69__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_trim_overflow_bit__69__inp = VL_RAND_RESET_I(17);
    __Vfunc_trim_overflow_bit__102__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_trim_overflow_bit__102__inp = VL_RAND_RESET_I(17);
    __Vfunc_trim_overflow_bit__103__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_trim_overflow_bit__103__inp = VL_RAND_RESET_I(17);
    __Vfunc_trim_overflow_bit__136__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_trim_overflow_bit__136__inp = VL_RAND_RESET_I(17);
    __Vfunc_trim_overflow_bit__137__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_trim_overflow_bit__137__inp = VL_RAND_RESET_I(17);
    __Vfunc_trim_overflow_bit__170__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_trim_overflow_bit__170__inp = VL_RAND_RESET_I(17);
    __Vfunc_trim_overflow_bit__171__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_trim_overflow_bit__171__inp = VL_RAND_RESET_I(17);
    __Vfunc_trim_overflow_bit__204__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_trim_overflow_bit__204__inp = VL_RAND_RESET_I(17);
    __Vfunc_trim_overflow_bit__205__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_trim_overflow_bit__205__inp = VL_RAND_RESET_I(17);
    __Vfunc_trim_overflow_bit__238__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_trim_overflow_bit__238__inp = VL_RAND_RESET_I(17);
    __Vfunc_trim_overflow_bit__239__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_trim_overflow_bit__239__inp = VL_RAND_RESET_I(17);
    __Vfunc_trim_overflow_bit__272__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_trim_overflow_bit__272__inp = VL_RAND_RESET_I(17);
    __Vfunc_trim_overflow_bit__273__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_trim_overflow_bit__273__inp = VL_RAND_RESET_I(17);
    __Vfunc_trim_overflow_bit__306__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_trim_overflow_bit__306__inp = VL_RAND_RESET_I(17);
    __Vfunc_trim_overflow_bit__307__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_trim_overflow_bit__307__inp = VL_RAND_RESET_I(17);
    __Vdlyvset__total_angle_pipe__v0 = 0;
    __Vdlyvval__valid_pipe__v0 = VL_RAND_RESET_I(1);
    __Vdlyvset__x_pipe__v0 = 0;
    __Vdlyvset__y_pipe__v0 = 0;
    __Vdlyvval__desired_angle_pipe__v0 = VL_RAND_RESET_I(16);
    __Vdlyvset__desired_angle_pipe__v0 = 0;
    __Vdlyvval__x_flip_pipe__v0 = VL_RAND_RESET_I(1);
    __Vdlyvset__x_flip_pipe__v0 = 0;
    __Vdlyvval__valid_pipe__v1 = VL_RAND_RESET_I(1);
    __Vdlyvval__x_pipe__v1 = VL_RAND_RESET_I(17);
    __Vdlyvset__x_pipe__v1 = 0;
    __Vdlyvval__total_angle_pipe__v1 = VL_RAND_RESET_I(16);
    __Vdlyvval__y_pipe__v1 = VL_RAND_RESET_I(17);
    __Vdlyvval__total_angle_pipe__v2 = VL_RAND_RESET_I(16);
    __Vdlyvset__total_angle_pipe__v2 = 0;
    __Vdlyvval__x_pipe__v2 = VL_RAND_RESET_I(17);
    __Vdlyvval__y_pipe__v2 = VL_RAND_RESET_I(17);
    __Vdlyvval__desired_angle_pipe__v1 = VL_RAND_RESET_I(16);
    __Vdlyvset__desired_angle_pipe__v1 = 0;
    __Vdlyvval__x_flip_pipe__v1 = VL_RAND_RESET_I(1);
    __Vdlyvset__x_flip_pipe__v1 = 0;
    __Vdlyvval__valid_pipe__v2 = VL_RAND_RESET_I(1);
    __Vdlyvval__x_pipe__v3 = VL_RAND_RESET_I(17);
    __Vdlyvset__x_pipe__v3 = 0;
    __Vdlyvval__total_angle_pipe__v3 = VL_RAND_RESET_I(16);
    __Vdlyvval__y_pipe__v3 = VL_RAND_RESET_I(17);
    __Vdlyvval__total_angle_pipe__v4 = VL_RAND_RESET_I(16);
    __Vdlyvset__total_angle_pipe__v4 = 0;
    __Vdlyvval__x_pipe__v4 = VL_RAND_RESET_I(17);
    __Vdlyvval__y_pipe__v4 = VL_RAND_RESET_I(17);
    __Vdlyvval__desired_angle_pipe__v2 = VL_RAND_RESET_I(16);
    __Vdlyvset__desired_angle_pipe__v2 = 0;
    __Vdlyvval__x_flip_pipe__v2 = VL_RAND_RESET_I(1);
    __Vdlyvset__x_flip_pipe__v2 = 0;
    __Vdlyvval__valid_pipe__v3 = VL_RAND_RESET_I(1);
    __Vdlyvval__x_pipe__v5 = VL_RAND_RESET_I(17);
    __Vdlyvset__x_pipe__v5 = 0;
    __Vdlyvval__total_angle_pipe__v5 = VL_RAND_RESET_I(16);
    __Vdlyvval__y_pipe__v5 = VL_RAND_RESET_I(17);
    __Vdlyvval__total_angle_pipe__v6 = VL_RAND_RESET_I(16);
    __Vdlyvset__total_angle_pipe__v6 = 0;
    __Vdlyvval__x_pipe__v6 = VL_RAND_RESET_I(17);
    __Vdlyvval__y_pipe__v6 = VL_RAND_RESET_I(17);
    __Vdlyvval__desired_angle_pipe__v3 = VL_RAND_RESET_I(16);
    __Vdlyvset__desired_angle_pipe__v3 = 0;
    __Vdlyvval__x_flip_pipe__v3 = VL_RAND_RESET_I(1);
    __Vdlyvset__x_flip_pipe__v3 = 0;
    __Vdlyvval__valid_pipe__v4 = VL_RAND_RESET_I(1);
    __Vdlyvval__x_pipe__v7 = VL_RAND_RESET_I(17);
    __Vdlyvset__x_pipe__v7 = 0;
    __Vdlyvval__total_angle_pipe__v7 = VL_RAND_RESET_I(16);
    __Vdlyvval__y_pipe__v7 = VL_RAND_RESET_I(17);
    __Vdlyvval__total_angle_pipe__v8 = VL_RAND_RESET_I(16);
    __Vdlyvset__total_angle_pipe__v8 = 0;
    __Vdlyvval__x_pipe__v8 = VL_RAND_RESET_I(17);
    __Vdlyvval__y_pipe__v8 = VL_RAND_RESET_I(17);
    __Vdlyvval__desired_angle_pipe__v4 = VL_RAND_RESET_I(16);
    __Vdlyvset__desired_angle_pipe__v4 = 0;
    __Vdlyvval__x_flip_pipe__v4 = VL_RAND_RESET_I(1);
    __Vdlyvset__x_flip_pipe__v4 = 0;
    __Vdlyvval__valid_pipe__v5 = VL_RAND_RESET_I(1);
    __Vdlyvval__x_pipe__v9 = VL_RAND_RESET_I(17);
    __Vdlyvset__x_pipe__v9 = 0;
    __Vdlyvval__total_angle_pipe__v9 = VL_RAND_RESET_I(16);
    __Vdlyvval__y_pipe__v9 = VL_RAND_RESET_I(17);
    __Vdlyvval__total_angle_pipe__v10 = VL_RAND_RESET_I(16);
    __Vdlyvset__total_angle_pipe__v10 = 0;
    __Vdlyvval__x_pipe__v10 = VL_RAND_RESET_I(17);
    __Vdlyvval__y_pipe__v10 = VL_RAND_RESET_I(17);
    __Vdlyvval__desired_angle_pipe__v5 = VL_RAND_RESET_I(16);
    __Vdlyvset__desired_angle_pipe__v5 = 0;
    __Vdlyvval__x_flip_pipe__v5 = VL_RAND_RESET_I(1);
    __Vdlyvset__x_flip_pipe__v5 = 0;
    __Vdlyvval__valid_pipe__v6 = VL_RAND_RESET_I(1);
    __Vdlyvval__x_pipe__v11 = VL_RAND_RESET_I(17);
    __Vdlyvset__x_pipe__v11 = 0;
    __Vdlyvval__total_angle_pipe__v11 = VL_RAND_RESET_I(16);
    __Vdlyvval__y_pipe__v11 = VL_RAND_RESET_I(17);
    __Vdlyvval__total_angle_pipe__v12 = VL_RAND_RESET_I(16);
    __Vdlyvset__total_angle_pipe__v12 = 0;
    __Vdlyvval__x_pipe__v12 = VL_RAND_RESET_I(17);
    __Vdlyvval__y_pipe__v12 = VL_RAND_RESET_I(17);
    __Vdlyvval__desired_angle_pipe__v6 = VL_RAND_RESET_I(16);
    __Vdlyvset__desired_angle_pipe__v6 = 0;
    __Vdlyvval__x_flip_pipe__v6 = VL_RAND_RESET_I(1);
    __Vdlyvset__x_flip_pipe__v6 = 0;
    __Vdlyvval__valid_pipe__v7 = VL_RAND_RESET_I(1);
    __Vdlyvval__x_pipe__v13 = VL_RAND_RESET_I(17);
    __Vdlyvset__x_pipe__v13 = 0;
    __Vdlyvval__total_angle_pipe__v13 = VL_RAND_RESET_I(16);
    __Vdlyvval__y_pipe__v13 = VL_RAND_RESET_I(17);
    __Vdlyvval__total_angle_pipe__v14 = VL_RAND_RESET_I(16);
    __Vdlyvset__total_angle_pipe__v14 = 0;
    __Vdlyvval__x_pipe__v14 = VL_RAND_RESET_I(17);
    __Vdlyvval__y_pipe__v14 = VL_RAND_RESET_I(17);
    __Vdlyvval__desired_angle_pipe__v7 = VL_RAND_RESET_I(16);
    __Vdlyvset__desired_angle_pipe__v7 = 0;
    __Vdlyvval__x_flip_pipe__v7 = VL_RAND_RESET_I(1);
    __Vdlyvset__x_flip_pipe__v7 = 0;
    __Vdlyvval__valid_pipe__v8 = VL_RAND_RESET_I(1);
    __Vdlyvval__x_pipe__v15 = VL_RAND_RESET_I(17);
    __Vdlyvset__x_pipe__v15 = 0;
    __Vdlyvval__total_angle_pipe__v15 = VL_RAND_RESET_I(16);
    __Vdlyvval__y_pipe__v15 = VL_RAND_RESET_I(17);
    __Vdlyvval__total_angle_pipe__v16 = VL_RAND_RESET_I(16);
    __Vdlyvset__total_angle_pipe__v16 = 0;
    __Vdlyvval__x_pipe__v16 = VL_RAND_RESET_I(17);
    __Vdlyvval__y_pipe__v16 = VL_RAND_RESET_I(17);
    __Vdlyvval__desired_angle_pipe__v8 = VL_RAND_RESET_I(16);
    __Vdlyvset__desired_angle_pipe__v8 = 0;
    __Vdlyvval__x_flip_pipe__v8 = VL_RAND_RESET_I(1);
    __Vdlyvset__x_flip_pipe__v8 = 0;
    __Vdlyvval__valid_pipe__v9 = VL_RAND_RESET_I(1);
    __Vdlyvval__x_pipe__v17 = VL_RAND_RESET_I(17);
    __Vdlyvset__x_pipe__v17 = 0;
    __Vdlyvval__total_angle_pipe__v17 = VL_RAND_RESET_I(16);
    __Vdlyvval__y_pipe__v17 = VL_RAND_RESET_I(17);
    __Vdlyvval__total_angle_pipe__v18 = VL_RAND_RESET_I(16);
    __Vdlyvset__total_angle_pipe__v18 = 0;
    __Vdlyvval__x_pipe__v18 = VL_RAND_RESET_I(17);
    __Vdlyvval__y_pipe__v18 = VL_RAND_RESET_I(17);
    __Vdlyvval__desired_angle_pipe__v9 = VL_RAND_RESET_I(16);
    __Vdlyvset__desired_angle_pipe__v9 = 0;
    __Vdlyvval__x_flip_pipe__v9 = VL_RAND_RESET_I(1);
    __Vdlyvset__x_flip_pipe__v9 = 0;
    __Vdlyvval__valid_pipe__v10 = VL_RAND_RESET_I(1);
    __Vdlyvval__x_pipe__v19 = VL_RAND_RESET_I(17);
    __Vdlyvset__x_pipe__v19 = 0;
    __Vdlyvval__total_angle_pipe__v19 = VL_RAND_RESET_I(16);
    __Vdlyvval__y_pipe__v19 = VL_RAND_RESET_I(17);
    __Vdlyvval__total_angle_pipe__v20 = VL_RAND_RESET_I(16);
    __Vdlyvset__total_angle_pipe__v20 = 0;
    __Vdlyvval__x_pipe__v20 = VL_RAND_RESET_I(17);
    __Vdlyvval__y_pipe__v20 = VL_RAND_RESET_I(17);
    __Vdlyvval__desired_angle_pipe__v10 = VL_RAND_RESET_I(16);
    __Vdlyvset__desired_angle_pipe__v10 = 0;
    __Vdlyvval__x_flip_pipe__v10 = VL_RAND_RESET_I(1);
    __Vdlyvset__x_flip_pipe__v10 = 0;
    __Vdlyvval__valid_pipe__v11 = VL_RAND_RESET_I(1);
    __Vdlyvval__x_pipe__v21 = VL_RAND_RESET_I(17);
    __Vdlyvset__x_pipe__v21 = 0;
    __Vdlyvval__total_angle_pipe__v21 = VL_RAND_RESET_I(16);
    __Vdlyvval__y_pipe__v21 = VL_RAND_RESET_I(17);
    __Vdlyvval__total_angle_pipe__v22 = VL_RAND_RESET_I(16);
    __Vdlyvset__total_angle_pipe__v22 = 0;
    __Vdlyvval__x_pipe__v22 = VL_RAND_RESET_I(17);
    __Vdlyvval__y_pipe__v22 = VL_RAND_RESET_I(17);
    __Vdlyvval__desired_angle_pipe__v11 = VL_RAND_RESET_I(16);
    __Vdlyvset__desired_angle_pipe__v11 = 0;
    __Vdlyvval__x_flip_pipe__v11 = VL_RAND_RESET_I(1);
    __Vdlyvset__x_flip_pipe__v11 = 0;
    __Vdlyvval__valid_pipe__v12 = VL_RAND_RESET_I(1);
    __Vdlyvval__x_pipe__v23 = VL_RAND_RESET_I(17);
    __Vdlyvset__x_pipe__v23 = 0;
    __Vdlyvval__total_angle_pipe__v23 = VL_RAND_RESET_I(16);
    __Vdlyvval__y_pipe__v23 = VL_RAND_RESET_I(17);
    __Vdlyvval__total_angle_pipe__v24 = VL_RAND_RESET_I(16);
    __Vdlyvset__total_angle_pipe__v24 = 0;
    __Vdlyvval__x_pipe__v24 = VL_RAND_RESET_I(17);
    __Vdlyvval__y_pipe__v24 = VL_RAND_RESET_I(17);
    __Vdlyvval__desired_angle_pipe__v12 = VL_RAND_RESET_I(16);
    __Vdlyvset__desired_angle_pipe__v12 = 0;
    __Vdlyvval__x_flip_pipe__v12 = VL_RAND_RESET_I(1);
    __Vdlyvset__x_flip_pipe__v12 = 0;
    __Vdlyvval__valid_pipe__v13 = VL_RAND_RESET_I(1);
    __Vdlyvval__x_pipe__v25 = VL_RAND_RESET_I(17);
    __Vdlyvset__x_pipe__v25 = 0;
    __Vdlyvval__total_angle_pipe__v25 = VL_RAND_RESET_I(16);
    __Vdlyvval__y_pipe__v25 = VL_RAND_RESET_I(17);
    __Vdlyvval__total_angle_pipe__v26 = VL_RAND_RESET_I(16);
    __Vdlyvset__total_angle_pipe__v26 = 0;
    __Vdlyvval__x_pipe__v26 = VL_RAND_RESET_I(17);
    __Vdlyvval__y_pipe__v26 = VL_RAND_RESET_I(17);
    __Vdlyvval__desired_angle_pipe__v13 = VL_RAND_RESET_I(16);
    __Vdlyvset__desired_angle_pipe__v13 = 0;
    __Vdlyvval__x_flip_pipe__v13 = VL_RAND_RESET_I(1);
    __Vdlyvset__x_flip_pipe__v13 = 0;
    __Vdlyvval__valid_pipe__v14 = VL_RAND_RESET_I(1);
    __Vdlyvval__x_pipe__v27 = VL_RAND_RESET_I(17);
    __Vdlyvset__x_pipe__v27 = 0;
    __Vdlyvval__total_angle_pipe__v27 = VL_RAND_RESET_I(16);
    __Vdlyvval__y_pipe__v27 = VL_RAND_RESET_I(17);
    __Vdlyvval__total_angle_pipe__v28 = VL_RAND_RESET_I(16);
    __Vdlyvset__total_angle_pipe__v28 = 0;
    __Vdlyvval__x_pipe__v28 = VL_RAND_RESET_I(17);
    __Vdlyvval__y_pipe__v28 = VL_RAND_RESET_I(17);
    __Vdlyvval__desired_angle_pipe__v14 = VL_RAND_RESET_I(16);
    __Vdlyvset__desired_angle_pipe__v14 = 0;
    __Vdlyvval__x_flip_pipe__v14 = VL_RAND_RESET_I(1);
    __Vdlyvset__x_flip_pipe__v14 = 0;
    __Vdlyvval__valid_pipe__v15 = VL_RAND_RESET_I(1);
    __Vdlyvval__x_pipe__v29 = VL_RAND_RESET_I(17);
    __Vdlyvset__x_pipe__v29 = 0;
    __Vdlyvval__total_angle_pipe__v29 = VL_RAND_RESET_I(16);
    __Vdlyvval__y_pipe__v29 = VL_RAND_RESET_I(17);
    __Vdlyvval__total_angle_pipe__v30 = VL_RAND_RESET_I(16);
    __Vdlyvset__total_angle_pipe__v30 = 0;
    __Vdlyvval__x_pipe__v30 = VL_RAND_RESET_I(17);
    __Vdlyvval__y_pipe__v30 = VL_RAND_RESET_I(17);
    __Vdlyvval__desired_angle_pipe__v15 = VL_RAND_RESET_I(16);
    __Vdlyvset__desired_angle_pipe__v15 = 0;
    __Vdlyvval__x_flip_pipe__v15 = VL_RAND_RESET_I(1);
    __Vdlyvset__x_flip_pipe__v15 = 0;
    __Vdlyvval__valid_pipe__v16 = VL_RAND_RESET_I(1);
    __Vdlyvval__x_pipe__v31 = VL_RAND_RESET_I(17);
    __Vdlyvset__x_pipe__v31 = 0;
    __Vdlyvval__total_angle_pipe__v31 = VL_RAND_RESET_I(16);
    __Vdlyvval__y_pipe__v31 = VL_RAND_RESET_I(17);
    __Vdlyvval__total_angle_pipe__v32 = VL_RAND_RESET_I(16);
    __Vdlyvset__total_angle_pipe__v32 = 0;
    __Vdlyvval__x_pipe__v32 = VL_RAND_RESET_I(17);
    __Vdlyvval__y_pipe__v32 = VL_RAND_RESET_I(17);
    __Vdlyvval__desired_angle_pipe__v16 = VL_RAND_RESET_I(16);
    __Vdlyvset__desired_angle_pipe__v16 = 0;
    __Vdlyvval__x_flip_pipe__v16 = VL_RAND_RESET_I(1);
    __Vdlyvset__x_flip_pipe__v16 = 0;
}
