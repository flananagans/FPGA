// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_cordic_cossin__W10_N10.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtop_cordic_cossin__W10_N10::_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic__11(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin__W10_N10::_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic__11\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__y_pipe__v0 = 0U;
    this->__Vdlyvset__x_flip_pipe__v0 = 0U;
    this->__Vdlyvset__x_flip_pipe__v1 = 0U;
    this->__Vdlyvset__x_flip_pipe__v2 = 0U;
    this->__Vdlyvset__x_flip_pipe__v3 = 0U;
    this->__Vdlyvset__x_flip_pipe__v4 = 0U;
    this->__Vdlyvset__x_flip_pipe__v5 = 0U;
    this->__Vdlyvset__x_flip_pipe__v6 = 0U;
    this->__Vdlyvset__x_flip_pipe__v7 = 0U;
    this->__Vdlyvset__x_flip_pipe__v8 = 0U;
    this->__Vdlyvset__x_flip_pipe__v9 = 0U;
    this->__Vdlyvset__x_flip_pipe__v10 = 0U;
    this->__Vdlyvset__x_flip_pipe__v11 = 0U;
    this->__Vdlyvset__x_flip_pipe__v12 = 0U;
    this->__Vdlyvset__x_flip_pipe__v13 = 0U;
    this->__Vdlyvset__x_flip_pipe__v14 = 0U;
    this->__Vdlyvset__x_flip_pipe__v15 = 0U;
    this->__Vdlyvset__x_flip_pipe__v16 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v0 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v1 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v2 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v3 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v4 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v5 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v6 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v7 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v8 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v9 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v10 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v11 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v12 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v13 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v14 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v15 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v16 = 0U;
    this->__Vdlyvset__total_angle_pipe__v0 = 0U;
    this->__Vdlyvset__total_angle_pipe__v2 = 0U;
    this->__Vdlyvset__total_angle_pipe__v4 = 0U;
    this->__Vdlyvset__total_angle_pipe__v6 = 0U;
    this->__Vdlyvset__total_angle_pipe__v8 = 0U;
    this->__Vdlyvset__total_angle_pipe__v10 = 0U;
    this->__Vdlyvset__total_angle_pipe__v12 = 0U;
    this->__Vdlyvset__total_angle_pipe__v14 = 0U;
    this->__Vdlyvset__total_angle_pipe__v16 = 0U;
    this->__Vdlyvset__total_angle_pipe__v18 = 0U;
    this->__Vdlyvset__total_angle_pipe__v20 = 0U;
    this->__Vdlyvset__total_angle_pipe__v22 = 0U;
    this->__Vdlyvset__total_angle_pipe__v24 = 0U;
    this->__Vdlyvset__total_angle_pipe__v26 = 0U;
    this->__Vdlyvset__total_angle_pipe__v28 = 0U;
    this->__Vdlyvset__total_angle_pipe__v30 = 0U;
    this->__Vdlyvset__total_angle_pipe__v32 = 0U;
    this->__Vdlyvset__x_pipe__v0 = 0U;
    this->__Vdlyvset__x_pipe__v1 = 0U;
    this->__Vdlyvset__x_pipe__v3 = 0U;
    this->__Vdlyvset__x_pipe__v5 = 0U;
    this->__Vdlyvset__x_pipe__v7 = 0U;
    this->__Vdlyvset__x_pipe__v9 = 0U;
    this->__Vdlyvset__x_pipe__v11 = 0U;
    this->__Vdlyvset__x_pipe__v13 = 0U;
    this->__Vdlyvset__x_pipe__v15 = 0U;
    this->__Vdlyvset__x_pipe__v17 = 0U;
    this->__Vdlyvset__x_pipe__v19 = 0U;
    this->__Vdlyvset__x_pipe__v21 = 0U;
    this->__Vdlyvset__x_pipe__v23 = 0U;
    this->__Vdlyvset__x_pipe__v25 = 0U;
    this->__Vdlyvset__x_pipe__v27 = 0U;
    this->__Vdlyvset__x_pipe__v29 = 0U;
    this->__Vdlyvset__x_pipe__v31 = 0U;
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvset__y_pipe__v0 = 1U;
    }
    this->__Vdlyvval__valid_pipe__v0 = ((~ (IData)(this->rst)) 
                                        & (IData)(this->data_angle_valid_in));
    this->__Vdlyvval__valid_pipe__v1 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [0U]);
    this->__Vdlyvval__valid_pipe__v2 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [1U]);
    this->__Vdlyvval__valid_pipe__v3 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [2U]);
    this->__Vdlyvval__valid_pipe__v4 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [3U]);
    this->__Vdlyvval__valid_pipe__v5 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [4U]);
    this->__Vdlyvval__valid_pipe__v6 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [5U]);
    this->__Vdlyvval__valid_pipe__v7 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [6U]);
    this->__Vdlyvval__valid_pipe__v8 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [7U]);
    this->__Vdlyvval__valid_pipe__v9 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [8U]);
    this->__Vdlyvval__valid_pipe__v10 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [9U]);
    this->__Vdlyvval__valid_pipe__v11 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xaU]);
    this->__Vdlyvval__valid_pipe__v12 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xbU]);
    this->__Vdlyvval__valid_pipe__v13 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xcU]);
    this->__Vdlyvval__valid_pipe__v14 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xdU]);
    this->__Vdlyvval__valid_pipe__v15 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xeU]);
    this->__Vdlyvval__valid_pipe__v16 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xfU]);
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v0 = (1U & (
                                                   (0x8000U 
                                                    & (IData)(this->angle))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->angle) 
                                                     >> 0xeU))
                                                    : 
                                                   ((IData)(this->angle) 
                                                    >> 0xeU)));
        this->__Vdlyvset__x_flip_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v1 = this->x_flip_pipe
            [0U];
        this->__Vdlyvset__x_flip_pipe__v1 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v2 = this->x_flip_pipe
            [1U];
        this->__Vdlyvset__x_flip_pipe__v2 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v3 = this->x_flip_pipe
            [2U];
        this->__Vdlyvset__x_flip_pipe__v3 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v4 = this->x_flip_pipe
            [3U];
        this->__Vdlyvset__x_flip_pipe__v4 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v5 = this->x_flip_pipe
            [4U];
        this->__Vdlyvset__x_flip_pipe__v5 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v6 = this->x_flip_pipe
            [5U];
        this->__Vdlyvset__x_flip_pipe__v6 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v7 = this->x_flip_pipe
            [6U];
        this->__Vdlyvset__x_flip_pipe__v7 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v8 = this->x_flip_pipe
            [7U];
        this->__Vdlyvset__x_flip_pipe__v8 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v9 = this->x_flip_pipe
            [8U];
        this->__Vdlyvset__x_flip_pipe__v9 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v10 = this->x_flip_pipe
            [9U];
        this->__Vdlyvset__x_flip_pipe__v10 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v11 = this->x_flip_pipe
            [0xaU];
        this->__Vdlyvset__x_flip_pipe__v11 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v12 = this->x_flip_pipe
            [0xbU];
        this->__Vdlyvset__x_flip_pipe__v12 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v13 = this->x_flip_pipe
            [0xcU];
        this->__Vdlyvset__x_flip_pipe__v13 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v14 = this->x_flip_pipe
            [0xdU];
        this->__Vdlyvset__x_flip_pipe__v14 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v15 = this->x_flip_pipe
            [0xeU];
        this->__Vdlyvset__x_flip_pipe__v15 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v16 = this->x_flip_pipe
            [0xfU];
        this->__Vdlyvset__x_flip_pipe__v16 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__desired_angle_pipe__v0 = 
            (0xffffU & ((0x8000U & (IData)(this->angle))
                         ? ((0x4000U & (IData)(this->angle))
                             ? (IData)(this->angle)
                             : ((IData)(0x8000U) - 
                                VL_EXTENDS_II(16,16, (IData)(this->angle))))
                         : ((0x4000U & (IData)(this->angle))
                             ? ((IData)(0x8000U) - 
                                VL_EXTENDS_II(16,16, (IData)(this->angle)))
                             : (IData)(this->angle))));
        this->__Vdlyvset__desired_angle_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvset__total_angle_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvset__x_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0U], this->desired_angle_pipe
                       [0U])) {
            this->__Vdlyvval__x_pipe__v1 = (0x1ffffU 
                                            & (this->x_pipe
                                               [0U] 
                                               - this->y_pipe
                                               [0U]));
            this->__Vdlyvset__x_pipe__v1 = 1U;
            this->__Vdlyvval__total_angle_pipe__v1 
                = (0xffffU & ((IData)(0x2000U) + this->total_angle_pipe
                              [0U]));
            this->__Vdlyvval__y_pipe__v1 = (0x1ffffU 
                                            & (this->y_pipe
                                               [0U] 
                                               + this->x_pipe
                                               [0U]));
        } else {
            this->__Vdlyvval__total_angle_pipe__v2 
                = (0xffffU & (this->total_angle_pipe
                              [0U] - (IData)(0x2000U)));
            this->__Vdlyvset__total_angle_pipe__v2 = 1U;
            this->__Vdlyvval__x_pipe__v2 = (0x1ffffU 
                                            & (this->x_pipe
                                               [0U] 
                                               + this->y_pipe
                                               [0U]));
            this->__Vdlyvval__y_pipe__v2 = (0x1ffffU 
                                            & (this->y_pipe
                                               [0U] 
                                               - this->x_pipe
                                               [0U]));
        }
        this->__Vdlyvval__desired_angle_pipe__v1 = 
            this->desired_angle_pipe[0U];
        this->__Vdlyvset__desired_angle_pipe__v1 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [1U], this->desired_angle_pipe
                       [1U])) {
            this->__Vdlyvval__x_pipe__v3 = (0x1ffffU 
                                            & (this->x_pipe
                                               [1U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [1U], 1U)));
            this->__Vdlyvset__x_pipe__v3 = 1U;
            this->__Vdlyvval__total_angle_pipe__v3 
                = (0xffffU & ((IData)(0x12e4U) + this->total_angle_pipe
                              [1U]));
            this->__Vdlyvval__y_pipe__v3 = (0x1ffffU 
                                            & (this->y_pipe
                                               [1U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [1U], 1U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v4 
                = (0xffffU & (this->total_angle_pipe
                              [1U] - (IData)(0x12e4U)));
            this->__Vdlyvset__total_angle_pipe__v4 = 1U;
            this->__Vdlyvval__x_pipe__v4 = (0x1ffffU 
                                            & (this->x_pipe
                                               [1U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [1U], 1U)));
            this->__Vdlyvval__y_pipe__v4 = (0x1ffffU 
                                            & (this->y_pipe
                                               [1U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [1U], 1U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v2 = 
            this->desired_angle_pipe[1U];
        this->__Vdlyvset__desired_angle_pipe__v2 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [2U], this->desired_angle_pipe
                       [2U])) {
            this->__Vdlyvval__x_pipe__v5 = (0x1ffffU 
                                            & (this->x_pipe
                                               [2U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [2U], 2U)));
            this->__Vdlyvset__x_pipe__v5 = 1U;
            this->__Vdlyvval__total_angle_pipe__v5 
                = (0xffffU & ((IData)(0x9fbU) + this->total_angle_pipe
                              [2U]));
            this->__Vdlyvval__y_pipe__v5 = (0x1ffffU 
                                            & (this->y_pipe
                                               [2U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [2U], 2U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v6 
                = (0xffffU & (this->total_angle_pipe
                              [2U] - (IData)(0x9fbU)));
            this->__Vdlyvset__total_angle_pipe__v6 = 1U;
            this->__Vdlyvval__x_pipe__v6 = (0x1ffffU 
                                            & (this->x_pipe
                                               [2U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [2U], 2U)));
            this->__Vdlyvval__y_pipe__v6 = (0x1ffffU 
                                            & (this->y_pipe
                                               [2U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [2U], 2U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v3 = 
            this->desired_angle_pipe[2U];
        this->__Vdlyvset__desired_angle_pipe__v3 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [3U], this->desired_angle_pipe
                       [3U])) {
            this->__Vdlyvval__x_pipe__v7 = (0x1ffffU 
                                            & (this->x_pipe
                                               [3U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [3U], 3U)));
            this->__Vdlyvset__x_pipe__v7 = 1U;
            this->__Vdlyvval__total_angle_pipe__v7 
                = (0xffffU & ((IData)(0x511U) + this->total_angle_pipe
                              [3U]));
            this->__Vdlyvval__y_pipe__v7 = (0x1ffffU 
                                            & (this->y_pipe
                                               [3U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [3U], 3U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v8 
                = (0xffffU & (this->total_angle_pipe
                              [3U] - (IData)(0x511U)));
            this->__Vdlyvset__total_angle_pipe__v8 = 1U;
            this->__Vdlyvval__x_pipe__v8 = (0x1ffffU 
                                            & (this->x_pipe
                                               [3U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [3U], 3U)));
            this->__Vdlyvval__y_pipe__v8 = (0x1ffffU 
                                            & (this->y_pipe
                                               [3U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [3U], 3U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v4 = 
            this->desired_angle_pipe[3U];
        this->__Vdlyvset__desired_angle_pipe__v4 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [4U], this->desired_angle_pipe
                       [4U])) {
            this->__Vdlyvval__x_pipe__v9 = (0x1ffffU 
                                            & (this->x_pipe
                                               [4U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [4U], 4U)));
            this->__Vdlyvset__x_pipe__v9 = 1U;
            this->__Vdlyvval__total_angle_pipe__v9 
                = (0xffffU & ((IData)(0x28bU) + this->total_angle_pipe
                              [4U]));
            this->__Vdlyvval__y_pipe__v9 = (0x1ffffU 
                                            & (this->y_pipe
                                               [4U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [4U], 4U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v10 
                = (0xffffU & (this->total_angle_pipe
                              [4U] - (IData)(0x28bU)));
            this->__Vdlyvset__total_angle_pipe__v10 = 1U;
            this->__Vdlyvval__x_pipe__v10 = (0x1ffffU 
                                             & (this->x_pipe
                                                [4U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [4U], 4U)));
            this->__Vdlyvval__y_pipe__v10 = (0x1ffffU 
                                             & (this->y_pipe
                                                [4U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [4U], 4U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v5 = 
            this->desired_angle_pipe[4U];
        this->__Vdlyvset__desired_angle_pipe__v5 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [5U], this->desired_angle_pipe
                       [5U])) {
            this->__Vdlyvval__x_pipe__v11 = (0x1ffffU 
                                             & (this->x_pipe
                                                [5U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [5U], 5U)));
            this->__Vdlyvset__x_pipe__v11 = 1U;
            this->__Vdlyvval__total_angle_pipe__v11 
                = (0xffffU & ((IData)(0x146U) + this->total_angle_pipe
                              [5U]));
            this->__Vdlyvval__y_pipe__v11 = (0x1ffffU 
                                             & (this->y_pipe
                                                [5U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [5U], 5U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v12 
                = (0xffffU & (this->total_angle_pipe
                              [5U] - (IData)(0x146U)));
            this->__Vdlyvset__total_angle_pipe__v12 = 1U;
            this->__Vdlyvval__x_pipe__v12 = (0x1ffffU 
                                             & (this->x_pipe
                                                [5U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [5U], 5U)));
            this->__Vdlyvval__y_pipe__v12 = (0x1ffffU 
                                             & (this->y_pipe
                                                [5U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [5U], 5U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v6 = 
            this->desired_angle_pipe[5U];
        this->__Vdlyvset__desired_angle_pipe__v6 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [6U], this->desired_angle_pipe
                       [6U])) {
            this->__Vdlyvval__x_pipe__v13 = (0x1ffffU 
                                             & (this->x_pipe
                                                [6U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [6U], 6U)));
            this->__Vdlyvset__x_pipe__v13 = 1U;
            this->__Vdlyvval__total_angle_pipe__v13 
                = (0xffffU & ((IData)(0xa3U) + this->total_angle_pipe
                              [6U]));
            this->__Vdlyvval__y_pipe__v13 = (0x1ffffU 
                                             & (this->y_pipe
                                                [6U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [6U], 6U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v14 
                = (0xffffU & (this->total_angle_pipe
                              [6U] - (IData)(0xa3U)));
            this->__Vdlyvset__total_angle_pipe__v14 = 1U;
            this->__Vdlyvval__x_pipe__v14 = (0x1ffffU 
                                             & (this->x_pipe
                                                [6U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [6U], 6U)));
            this->__Vdlyvval__y_pipe__v14 = (0x1ffffU 
                                             & (this->y_pipe
                                                [6U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [6U], 6U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v7 = 
            this->desired_angle_pipe[6U];
        this->__Vdlyvset__desired_angle_pipe__v7 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [7U], this->desired_angle_pipe
                       [7U])) {
            this->__Vdlyvval__x_pipe__v15 = (0x1ffffU 
                                             & (this->x_pipe
                                                [7U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [7U], 7U)));
            this->__Vdlyvset__x_pipe__v15 = 1U;
            this->__Vdlyvval__total_angle_pipe__v15 
                = (0xffffU & ((IData)(0x51U) + this->total_angle_pipe
                              [7U]));
            this->__Vdlyvval__y_pipe__v15 = (0x1ffffU 
                                             & (this->y_pipe
                                                [7U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [7U], 7U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v16 
                = (0xffffU & (this->total_angle_pipe
                              [7U] - (IData)(0x51U)));
            this->__Vdlyvset__total_angle_pipe__v16 = 1U;
            this->__Vdlyvval__x_pipe__v16 = (0x1ffffU 
                                             & (this->x_pipe
                                                [7U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [7U], 7U)));
            this->__Vdlyvval__y_pipe__v16 = (0x1ffffU 
                                             & (this->y_pipe
                                                [7U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [7U], 7U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v8 = 
            this->desired_angle_pipe[7U];
        this->__Vdlyvset__desired_angle_pipe__v8 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [8U], this->desired_angle_pipe
                       [8U])) {
            this->__Vdlyvval__x_pipe__v17 = (0x1ffffU 
                                             & (this->x_pipe
                                                [8U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [8U], 8U)));
            this->__Vdlyvset__x_pipe__v17 = 1U;
            this->__Vdlyvval__total_angle_pipe__v17 
                = (0xffffU & ((IData)(0x29U) + this->total_angle_pipe
                              [8U]));
            this->__Vdlyvval__y_pipe__v17 = (0x1ffffU 
                                             & (this->y_pipe
                                                [8U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [8U], 8U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v18 
                = (0xffffU & (this->total_angle_pipe
                              [8U] - (IData)(0x29U)));
            this->__Vdlyvset__total_angle_pipe__v18 = 1U;
            this->__Vdlyvval__x_pipe__v18 = (0x1ffffU 
                                             & (this->x_pipe
                                                [8U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [8U], 8U)));
            this->__Vdlyvval__y_pipe__v18 = (0x1ffffU 
                                             & (this->y_pipe
                                                [8U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [8U], 8U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v9 = 
            this->desired_angle_pipe[8U];
        this->__Vdlyvset__desired_angle_pipe__v9 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [9U], this->desired_angle_pipe
                       [9U])) {
            this->__Vdlyvval__x_pipe__v19 = (0x1ffffU 
                                             & (this->x_pipe
                                                [9U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [9U], 9U)));
            this->__Vdlyvset__x_pipe__v19 = 1U;
            this->__Vdlyvval__total_angle_pipe__v19 
                = (0xffffU & ((IData)(0x14U) + this->total_angle_pipe
                              [9U]));
            this->__Vdlyvval__y_pipe__v19 = (0x1ffffU 
                                             & (this->y_pipe
                                                [9U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [9U], 9U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v20 
                = (0xffffU & (this->total_angle_pipe
                              [9U] - (IData)(0x14U)));
            this->__Vdlyvset__total_angle_pipe__v20 = 1U;
            this->__Vdlyvval__x_pipe__v20 = (0x1ffffU 
                                             & (this->x_pipe
                                                [9U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [9U], 9U)));
            this->__Vdlyvval__y_pipe__v20 = (0x1ffffU 
                                             & (this->y_pipe
                                                [9U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [9U], 9U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v10 = 
            this->desired_angle_pipe[9U];
        this->__Vdlyvset__desired_angle_pipe__v10 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xaU], this->desired_angle_pipe
                       [0xaU])) {
            this->__Vdlyvval__x_pipe__v21 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xaU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xaU], 0xaU)));
            this->__Vdlyvset__x_pipe__v21 = 1U;
            this->__Vdlyvval__total_angle_pipe__v21 
                = (0xffffU & ((IData)(0xaU) + this->total_angle_pipe
                              [0xaU]));
            this->__Vdlyvval__y_pipe__v21 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xaU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xaU], 0xaU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v22 
                = (0xffffU & (this->total_angle_pipe
                              [0xaU] - (IData)(0xaU)));
            this->__Vdlyvset__total_angle_pipe__v22 = 1U;
            this->__Vdlyvval__x_pipe__v22 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xaU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xaU], 0xaU)));
            this->__Vdlyvval__y_pipe__v22 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xaU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xaU], 0xaU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v11 = 
            this->desired_angle_pipe[0xaU];
        this->__Vdlyvset__desired_angle_pipe__v11 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xbU], this->desired_angle_pipe
                       [0xbU])) {
            this->__Vdlyvval__x_pipe__v23 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xbU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xbU], 0xbU)));
            this->__Vdlyvset__x_pipe__v23 = 1U;
            this->__Vdlyvval__total_angle_pipe__v23 
                = (0xffffU & ((IData)(5U) + this->total_angle_pipe
                              [0xbU]));
            this->__Vdlyvval__y_pipe__v23 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xbU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xbU], 0xbU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v24 
                = (0xffffU & (this->total_angle_pipe
                              [0xbU] - (IData)(5U)));
            this->__Vdlyvset__total_angle_pipe__v24 = 1U;
            this->__Vdlyvval__x_pipe__v24 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xbU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xbU], 0xbU)));
            this->__Vdlyvval__y_pipe__v24 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xbU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xbU], 0xbU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v12 = 
            this->desired_angle_pipe[0xbU];
        this->__Vdlyvset__desired_angle_pipe__v12 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xcU], this->desired_angle_pipe
                       [0xcU])) {
            this->__Vdlyvval__x_pipe__v25 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xcU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xcU], 0xcU)));
            this->__Vdlyvset__x_pipe__v25 = 1U;
            this->__Vdlyvval__total_angle_pipe__v25 
                = (0xffffU & ((IData)(3U) + this->total_angle_pipe
                              [0xcU]));
            this->__Vdlyvval__y_pipe__v25 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xcU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xcU], 0xcU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v26 
                = (0xffffU & (this->total_angle_pipe
                              [0xcU] - (IData)(3U)));
            this->__Vdlyvset__total_angle_pipe__v26 = 1U;
            this->__Vdlyvval__x_pipe__v26 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xcU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xcU], 0xcU)));
            this->__Vdlyvval__y_pipe__v26 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xcU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xcU], 0xcU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v13 = 
            this->desired_angle_pipe[0xcU];
        this->__Vdlyvset__desired_angle_pipe__v13 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xdU], this->desired_angle_pipe
                       [0xdU])) {
            this->__Vdlyvval__x_pipe__v27 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xdU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xdU], 0xdU)));
            this->__Vdlyvset__x_pipe__v27 = 1U;
            this->__Vdlyvval__total_angle_pipe__v27 
                = (0xffffU & ((IData)(1U) + this->total_angle_pipe
                              [0xdU]));
            this->__Vdlyvval__y_pipe__v27 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xdU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xdU], 0xdU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v28 
                = (0xffffU & (this->total_angle_pipe
                              [0xdU] - (IData)(1U)));
            this->__Vdlyvset__total_angle_pipe__v28 = 1U;
            this->__Vdlyvval__x_pipe__v28 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xdU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xdU], 0xdU)));
            this->__Vdlyvval__y_pipe__v28 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xdU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xdU], 0xdU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v14 = 
            this->desired_angle_pipe[0xdU];
        this->__Vdlyvset__desired_angle_pipe__v14 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xeU], this->desired_angle_pipe
                       [0xeU])) {
            this->__Vdlyvval__x_pipe__v29 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xeU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xeU], 0xeU)));
            this->__Vdlyvset__x_pipe__v29 = 1U;
            this->__Vdlyvval__total_angle_pipe__v29 
                = (0xffffU & ((IData)(1U) + this->total_angle_pipe
                              [0xeU]));
            this->__Vdlyvval__y_pipe__v29 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xeU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xeU], 0xeU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v30 
                = (0xffffU & (this->total_angle_pipe
                              [0xeU] - (IData)(1U)));
            this->__Vdlyvset__total_angle_pipe__v30 = 1U;
            this->__Vdlyvval__x_pipe__v30 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xeU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xeU], 0xeU)));
            this->__Vdlyvval__y_pipe__v30 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xeU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xeU], 0xeU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v15 = 
            this->desired_angle_pipe[0xeU];
        this->__Vdlyvset__desired_angle_pipe__v15 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xfU], this->desired_angle_pipe
                       [0xfU])) {
            this->__Vdlyvval__x_pipe__v31 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xfU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xfU], 0xfU)));
            this->__Vdlyvset__x_pipe__v31 = 1U;
            this->__Vdlyvval__total_angle_pipe__v31 
                = this->total_angle_pipe[0xfU];
            this->__Vdlyvval__y_pipe__v31 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xfU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xfU], 0xfU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v32 
                = this->total_angle_pipe[0xfU];
            this->__Vdlyvset__total_angle_pipe__v32 = 1U;
            this->__Vdlyvval__x_pipe__v32 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xfU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xfU], 0xfU)));
            this->__Vdlyvval__y_pipe__v32 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xfU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xfU], 0xfU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v16 = 
            this->desired_angle_pipe[0xfU];
        this->__Vdlyvset__desired_angle_pipe__v16 = 1U;
    }
    this->valid_pipe[0U] = this->__Vdlyvval__valid_pipe__v0;
    this->valid_pipe[1U] = this->__Vdlyvval__valid_pipe__v1;
    this->valid_pipe[2U] = this->__Vdlyvval__valid_pipe__v2;
    this->valid_pipe[3U] = this->__Vdlyvval__valid_pipe__v3;
    this->valid_pipe[4U] = this->__Vdlyvval__valid_pipe__v4;
    this->valid_pipe[5U] = this->__Vdlyvval__valid_pipe__v5;
    this->valid_pipe[6U] = this->__Vdlyvval__valid_pipe__v6;
    this->valid_pipe[7U] = this->__Vdlyvval__valid_pipe__v7;
    this->valid_pipe[8U] = this->__Vdlyvval__valid_pipe__v8;
    this->valid_pipe[9U] = this->__Vdlyvval__valid_pipe__v9;
    this->valid_pipe[0xaU] = this->__Vdlyvval__valid_pipe__v10;
    this->valid_pipe[0xbU] = this->__Vdlyvval__valid_pipe__v11;
    this->valid_pipe[0xcU] = this->__Vdlyvval__valid_pipe__v12;
    this->valid_pipe[0xdU] = this->__Vdlyvval__valid_pipe__v13;
    this->valid_pipe[0xeU] = this->__Vdlyvval__valid_pipe__v14;
    this->valid_pipe[0xfU] = this->__Vdlyvval__valid_pipe__v15;
    this->valid_pipe[0x10U] = this->__Vdlyvval__valid_pipe__v16;
    if (this->__Vdlyvset__x_flip_pipe__v0) {
        this->x_flip_pipe[0U] = this->__Vdlyvval__x_flip_pipe__v0;
    }
    if (this->__Vdlyvset__x_flip_pipe__v1) {
        this->x_flip_pipe[1U] = this->__Vdlyvval__x_flip_pipe__v1;
    }
    if (this->__Vdlyvset__x_flip_pipe__v2) {
        this->x_flip_pipe[2U] = this->__Vdlyvval__x_flip_pipe__v2;
    }
    if (this->__Vdlyvset__x_flip_pipe__v3) {
        this->x_flip_pipe[3U] = this->__Vdlyvval__x_flip_pipe__v3;
    }
    if (this->__Vdlyvset__x_flip_pipe__v4) {
        this->x_flip_pipe[4U] = this->__Vdlyvval__x_flip_pipe__v4;
    }
    if (this->__Vdlyvset__x_flip_pipe__v5) {
        this->x_flip_pipe[5U] = this->__Vdlyvval__x_flip_pipe__v5;
    }
    if (this->__Vdlyvset__x_flip_pipe__v6) {
        this->x_flip_pipe[6U] = this->__Vdlyvval__x_flip_pipe__v6;
    }
    if (this->__Vdlyvset__x_flip_pipe__v7) {
        this->x_flip_pipe[7U] = this->__Vdlyvval__x_flip_pipe__v7;
    }
    if (this->__Vdlyvset__x_flip_pipe__v8) {
        this->x_flip_pipe[8U] = this->__Vdlyvval__x_flip_pipe__v8;
    }
    if (this->__Vdlyvset__x_flip_pipe__v9) {
        this->x_flip_pipe[9U] = this->__Vdlyvval__x_flip_pipe__v9;
    }
    if (this->__Vdlyvset__x_flip_pipe__v10) {
        this->x_flip_pipe[0xaU] = this->__Vdlyvval__x_flip_pipe__v10;
    }
    if (this->__Vdlyvset__x_flip_pipe__v11) {
        this->x_flip_pipe[0xbU] = this->__Vdlyvval__x_flip_pipe__v11;
    }
    if (this->__Vdlyvset__x_flip_pipe__v12) {
        this->x_flip_pipe[0xcU] = this->__Vdlyvval__x_flip_pipe__v12;
    }
    if (this->__Vdlyvset__x_flip_pipe__v13) {
        this->x_flip_pipe[0xdU] = this->__Vdlyvval__x_flip_pipe__v13;
    }
    if (this->__Vdlyvset__x_flip_pipe__v14) {
        this->x_flip_pipe[0xeU] = this->__Vdlyvval__x_flip_pipe__v14;
    }
    if (this->__Vdlyvset__x_flip_pipe__v15) {
        this->x_flip_pipe[0xfU] = this->__Vdlyvval__x_flip_pipe__v15;
    }
    if (this->__Vdlyvset__x_flip_pipe__v16) {
        this->x_flip_pipe[0x10U] = this->__Vdlyvval__x_flip_pipe__v16;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v0) {
        this->desired_angle_pipe[0U] = this->__Vdlyvval__desired_angle_pipe__v0;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v1) {
        this->desired_angle_pipe[1U] = this->__Vdlyvval__desired_angle_pipe__v1;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v2) {
        this->desired_angle_pipe[2U] = this->__Vdlyvval__desired_angle_pipe__v2;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v3) {
        this->desired_angle_pipe[3U] = this->__Vdlyvval__desired_angle_pipe__v3;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v4) {
        this->desired_angle_pipe[4U] = this->__Vdlyvval__desired_angle_pipe__v4;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v5) {
        this->desired_angle_pipe[5U] = this->__Vdlyvval__desired_angle_pipe__v5;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v6) {
        this->desired_angle_pipe[6U] = this->__Vdlyvval__desired_angle_pipe__v6;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v7) {
        this->desired_angle_pipe[7U] = this->__Vdlyvval__desired_angle_pipe__v7;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v8) {
        this->desired_angle_pipe[8U] = this->__Vdlyvval__desired_angle_pipe__v8;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v9) {
        this->desired_angle_pipe[9U] = this->__Vdlyvval__desired_angle_pipe__v9;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v10) {
        this->desired_angle_pipe[0xaU] = this->__Vdlyvval__desired_angle_pipe__v10;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v11) {
        this->desired_angle_pipe[0xbU] = this->__Vdlyvval__desired_angle_pipe__v11;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v12) {
        this->desired_angle_pipe[0xcU] = this->__Vdlyvval__desired_angle_pipe__v12;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v13) {
        this->desired_angle_pipe[0xdU] = this->__Vdlyvval__desired_angle_pipe__v13;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v14) {
        this->desired_angle_pipe[0xeU] = this->__Vdlyvval__desired_angle_pipe__v14;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v15) {
        this->desired_angle_pipe[0xfU] = this->__Vdlyvval__desired_angle_pipe__v15;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v16) {
        this->desired_angle_pipe[0x10U] = this->__Vdlyvval__desired_angle_pipe__v16;
    }
    if (this->__Vdlyvset__total_angle_pipe__v0) {
        this->total_angle_pipe[0U] = 0U;
    }
    if (this->__Vdlyvset__x_pipe__v1) {
        this->total_angle_pipe[1U] = this->__Vdlyvval__total_angle_pipe__v1;
    }
    if (this->__Vdlyvset__total_angle_pipe__v2) {
        this->total_angle_pipe[1U] = this->__Vdlyvval__total_angle_pipe__v2;
    }
    if (this->__Vdlyvset__x_pipe__v3) {
        this->total_angle_pipe[2U] = this->__Vdlyvval__total_angle_pipe__v3;
    }
    if (this->__Vdlyvset__total_angle_pipe__v4) {
        this->total_angle_pipe[2U] = this->__Vdlyvval__total_angle_pipe__v4;
    }
    if (this->__Vdlyvset__x_pipe__v5) {
        this->total_angle_pipe[3U] = this->__Vdlyvval__total_angle_pipe__v5;
    }
    if (this->__Vdlyvset__total_angle_pipe__v6) {
        this->total_angle_pipe[3U] = this->__Vdlyvval__total_angle_pipe__v6;
    }
    if (this->__Vdlyvset__x_pipe__v7) {
        this->total_angle_pipe[4U] = this->__Vdlyvval__total_angle_pipe__v7;
    }
    if (this->__Vdlyvset__total_angle_pipe__v8) {
        this->total_angle_pipe[4U] = this->__Vdlyvval__total_angle_pipe__v8;
    }
    if (this->__Vdlyvset__x_pipe__v9) {
        this->total_angle_pipe[5U] = this->__Vdlyvval__total_angle_pipe__v9;
    }
    if (this->__Vdlyvset__total_angle_pipe__v10) {
        this->total_angle_pipe[5U] = this->__Vdlyvval__total_angle_pipe__v10;
    }
    if (this->__Vdlyvset__x_pipe__v11) {
        this->total_angle_pipe[6U] = this->__Vdlyvval__total_angle_pipe__v11;
    }
    if (this->__Vdlyvset__total_angle_pipe__v12) {
        this->total_angle_pipe[6U] = this->__Vdlyvval__total_angle_pipe__v12;
    }
    if (this->__Vdlyvset__x_pipe__v13) {
        this->total_angle_pipe[7U] = this->__Vdlyvval__total_angle_pipe__v13;
    }
    if (this->__Vdlyvset__total_angle_pipe__v14) {
        this->total_angle_pipe[7U] = this->__Vdlyvval__total_angle_pipe__v14;
    }
    if (this->__Vdlyvset__x_pipe__v15) {
        this->total_angle_pipe[8U] = this->__Vdlyvval__total_angle_pipe__v15;
    }
    if (this->__Vdlyvset__total_angle_pipe__v16) {
        this->total_angle_pipe[8U] = this->__Vdlyvval__total_angle_pipe__v16;
    }
    if (this->__Vdlyvset__x_pipe__v17) {
        this->total_angle_pipe[9U] = this->__Vdlyvval__total_angle_pipe__v17;
    }
    if (this->__Vdlyvset__total_angle_pipe__v18) {
        this->total_angle_pipe[9U] = this->__Vdlyvval__total_angle_pipe__v18;
    }
    if (this->__Vdlyvset__x_pipe__v19) {
        this->total_angle_pipe[0xaU] = this->__Vdlyvval__total_angle_pipe__v19;
    }
    if (this->__Vdlyvset__total_angle_pipe__v20) {
        this->total_angle_pipe[0xaU] = this->__Vdlyvval__total_angle_pipe__v20;
    }
    if (this->__Vdlyvset__x_pipe__v21) {
        this->total_angle_pipe[0xbU] = this->__Vdlyvval__total_angle_pipe__v21;
    }
    if (this->__Vdlyvset__total_angle_pipe__v22) {
        this->total_angle_pipe[0xbU] = this->__Vdlyvval__total_angle_pipe__v22;
    }
    if (this->__Vdlyvset__x_pipe__v23) {
        this->total_angle_pipe[0xcU] = this->__Vdlyvval__total_angle_pipe__v23;
    }
    if (this->__Vdlyvset__total_angle_pipe__v24) {
        this->total_angle_pipe[0xcU] = this->__Vdlyvval__total_angle_pipe__v24;
    }
    if (this->__Vdlyvset__x_pipe__v25) {
        this->total_angle_pipe[0xdU] = this->__Vdlyvval__total_angle_pipe__v25;
    }
    if (this->__Vdlyvset__total_angle_pipe__v26) {
        this->total_angle_pipe[0xdU] = this->__Vdlyvval__total_angle_pipe__v26;
    }
    if (this->__Vdlyvset__x_pipe__v27) {
        this->total_angle_pipe[0xeU] = this->__Vdlyvval__total_angle_pipe__v27;
    }
    if (this->__Vdlyvset__total_angle_pipe__v28) {
        this->total_angle_pipe[0xeU] = this->__Vdlyvval__total_angle_pipe__v28;
    }
    if (this->__Vdlyvset__x_pipe__v29) {
        this->total_angle_pipe[0xfU] = this->__Vdlyvval__total_angle_pipe__v29;
    }
    if (this->__Vdlyvset__total_angle_pipe__v30) {
        this->total_angle_pipe[0xfU] = this->__Vdlyvval__total_angle_pipe__v30;
    }
    if (this->__Vdlyvset__x_pipe__v31) {
        this->total_angle_pipe[0x10U] = this->__Vdlyvval__total_angle_pipe__v31;
    }
    if (this->__Vdlyvset__total_angle_pipe__v32) {
        this->total_angle_pipe[0x10U] = this->__Vdlyvval__total_angle_pipe__v32;
    }
    if (this->__Vdlyvset__y_pipe__v0) {
        this->y_pipe[0U] = 0U;
    }
    if (this->__Vdlyvset__x_pipe__v1) {
        this->y_pipe[1U] = this->__Vdlyvval__y_pipe__v1;
    }
    if (this->__Vdlyvset__total_angle_pipe__v2) {
        this->y_pipe[1U] = this->__Vdlyvval__y_pipe__v2;
    }
    if (this->__Vdlyvset__x_pipe__v3) {
        this->y_pipe[2U] = this->__Vdlyvval__y_pipe__v3;
    }
    if (this->__Vdlyvset__total_angle_pipe__v4) {
        this->y_pipe[2U] = this->__Vdlyvval__y_pipe__v4;
    }
    if (this->__Vdlyvset__x_pipe__v5) {
        this->y_pipe[3U] = this->__Vdlyvval__y_pipe__v5;
    }
    if (this->__Vdlyvset__total_angle_pipe__v6) {
        this->y_pipe[3U] = this->__Vdlyvval__y_pipe__v6;
    }
    if (this->__Vdlyvset__x_pipe__v7) {
        this->y_pipe[4U] = this->__Vdlyvval__y_pipe__v7;
    }
    if (this->__Vdlyvset__total_angle_pipe__v8) {
        this->y_pipe[4U] = this->__Vdlyvval__y_pipe__v8;
    }
    if (this->__Vdlyvset__x_pipe__v9) {
        this->y_pipe[5U] = this->__Vdlyvval__y_pipe__v9;
    }
    if (this->__Vdlyvset__total_angle_pipe__v10) {
        this->y_pipe[5U] = this->__Vdlyvval__y_pipe__v10;
    }
    if (this->__Vdlyvset__x_pipe__v11) {
        this->y_pipe[6U] = this->__Vdlyvval__y_pipe__v11;
    }
    if (this->__Vdlyvset__total_angle_pipe__v12) {
        this->y_pipe[6U] = this->__Vdlyvval__y_pipe__v12;
    }
    if (this->__Vdlyvset__x_pipe__v13) {
        this->y_pipe[7U] = this->__Vdlyvval__y_pipe__v13;
    }
    if (this->__Vdlyvset__total_angle_pipe__v14) {
        this->y_pipe[7U] = this->__Vdlyvval__y_pipe__v14;
    }
    if (this->__Vdlyvset__x_pipe__v15) {
        this->y_pipe[8U] = this->__Vdlyvval__y_pipe__v15;
    }
    if (this->__Vdlyvset__total_angle_pipe__v16) {
        this->y_pipe[8U] = this->__Vdlyvval__y_pipe__v16;
    }
    if (this->__Vdlyvset__x_pipe__v17) {
        this->y_pipe[9U] = this->__Vdlyvval__y_pipe__v17;
    }
    if (this->__Vdlyvset__total_angle_pipe__v18) {
        this->y_pipe[9U] = this->__Vdlyvval__y_pipe__v18;
    }
    if (this->__Vdlyvset__x_pipe__v19) {
        this->y_pipe[0xaU] = this->__Vdlyvval__y_pipe__v19;
    }
    if (this->__Vdlyvset__total_angle_pipe__v20) {
        this->y_pipe[0xaU] = this->__Vdlyvval__y_pipe__v20;
    }
    if (this->__Vdlyvset__x_pipe__v21) {
        this->y_pipe[0xbU] = this->__Vdlyvval__y_pipe__v21;
    }
    if (this->__Vdlyvset__total_angle_pipe__v22) {
        this->y_pipe[0xbU] = this->__Vdlyvval__y_pipe__v22;
    }
    if (this->__Vdlyvset__x_pipe__v23) {
        this->y_pipe[0xcU] = this->__Vdlyvval__y_pipe__v23;
    }
    if (this->__Vdlyvset__total_angle_pipe__v24) {
        this->y_pipe[0xcU] = this->__Vdlyvval__y_pipe__v24;
    }
    if (this->__Vdlyvset__x_pipe__v25) {
        this->y_pipe[0xdU] = this->__Vdlyvval__y_pipe__v25;
    }
    if (this->__Vdlyvset__total_angle_pipe__v26) {
        this->y_pipe[0xdU] = this->__Vdlyvval__y_pipe__v26;
    }
    if (this->__Vdlyvset__x_pipe__v27) {
        this->y_pipe[0xeU] = this->__Vdlyvval__y_pipe__v27;
    }
    if (this->__Vdlyvset__total_angle_pipe__v28) {
        this->y_pipe[0xeU] = this->__Vdlyvval__y_pipe__v28;
    }
    if (this->__Vdlyvset__x_pipe__v29) {
        this->y_pipe[0xfU] = this->__Vdlyvval__y_pipe__v29;
    }
    if (this->__Vdlyvset__total_angle_pipe__v30) {
        this->y_pipe[0xfU] = this->__Vdlyvval__y_pipe__v30;
    }
    if (this->__Vdlyvset__x_pipe__v31) {
        this->y_pipe[0x10U] = this->__Vdlyvval__y_pipe__v31;
    }
    if (this->__Vdlyvset__total_angle_pipe__v32) {
        this->y_pipe[0x10U] = this->__Vdlyvval__y_pipe__v32;
    }
    if (this->__Vdlyvset__x_pipe__v0) {
        this->x_pipe[0U] = 0x4dbaU;
    }
    if (this->__Vdlyvset__x_pipe__v1) {
        this->x_pipe[1U] = this->__Vdlyvval__x_pipe__v1;
    }
    if (this->__Vdlyvset__total_angle_pipe__v2) {
        this->x_pipe[1U] = this->__Vdlyvval__x_pipe__v2;
    }
    if (this->__Vdlyvset__x_pipe__v3) {
        this->x_pipe[2U] = this->__Vdlyvval__x_pipe__v3;
    }
    if (this->__Vdlyvset__total_angle_pipe__v4) {
        this->x_pipe[2U] = this->__Vdlyvval__x_pipe__v4;
    }
    if (this->__Vdlyvset__x_pipe__v5) {
        this->x_pipe[3U] = this->__Vdlyvval__x_pipe__v5;
    }
    if (this->__Vdlyvset__total_angle_pipe__v6) {
        this->x_pipe[3U] = this->__Vdlyvval__x_pipe__v6;
    }
    if (this->__Vdlyvset__x_pipe__v7) {
        this->x_pipe[4U] = this->__Vdlyvval__x_pipe__v7;
    }
    if (this->__Vdlyvset__total_angle_pipe__v8) {
        this->x_pipe[4U] = this->__Vdlyvval__x_pipe__v8;
    }
    if (this->__Vdlyvset__x_pipe__v9) {
        this->x_pipe[5U] = this->__Vdlyvval__x_pipe__v9;
    }
    if (this->__Vdlyvset__total_angle_pipe__v10) {
        this->x_pipe[5U] = this->__Vdlyvval__x_pipe__v10;
    }
    if (this->__Vdlyvset__x_pipe__v11) {
        this->x_pipe[6U] = this->__Vdlyvval__x_pipe__v11;
    }
    if (this->__Vdlyvset__total_angle_pipe__v12) {
        this->x_pipe[6U] = this->__Vdlyvval__x_pipe__v12;
    }
    if (this->__Vdlyvset__x_pipe__v13) {
        this->x_pipe[7U] = this->__Vdlyvval__x_pipe__v13;
    }
    if (this->__Vdlyvset__total_angle_pipe__v14) {
        this->x_pipe[7U] = this->__Vdlyvval__x_pipe__v14;
    }
    if (this->__Vdlyvset__x_pipe__v15) {
        this->x_pipe[8U] = this->__Vdlyvval__x_pipe__v15;
    }
    if (this->__Vdlyvset__total_angle_pipe__v16) {
        this->x_pipe[8U] = this->__Vdlyvval__x_pipe__v16;
    }
    if (this->__Vdlyvset__x_pipe__v17) {
        this->x_pipe[9U] = this->__Vdlyvval__x_pipe__v17;
    }
    if (this->__Vdlyvset__total_angle_pipe__v18) {
        this->x_pipe[9U] = this->__Vdlyvval__x_pipe__v18;
    }
    if (this->__Vdlyvset__x_pipe__v19) {
        this->x_pipe[0xaU] = this->__Vdlyvval__x_pipe__v19;
    }
    if (this->__Vdlyvset__total_angle_pipe__v20) {
        this->x_pipe[0xaU] = this->__Vdlyvval__x_pipe__v20;
    }
    if (this->__Vdlyvset__x_pipe__v21) {
        this->x_pipe[0xbU] = this->__Vdlyvval__x_pipe__v21;
    }
    if (this->__Vdlyvset__total_angle_pipe__v22) {
        this->x_pipe[0xbU] = this->__Vdlyvval__x_pipe__v22;
    }
    if (this->__Vdlyvset__x_pipe__v23) {
        this->x_pipe[0xcU] = this->__Vdlyvval__x_pipe__v23;
    }
    if (this->__Vdlyvset__total_angle_pipe__v24) {
        this->x_pipe[0xcU] = this->__Vdlyvval__x_pipe__v24;
    }
    if (this->__Vdlyvset__x_pipe__v25) {
        this->x_pipe[0xdU] = this->__Vdlyvval__x_pipe__v25;
    }
    if (this->__Vdlyvset__total_angle_pipe__v26) {
        this->x_pipe[0xdU] = this->__Vdlyvval__x_pipe__v26;
    }
    if (this->__Vdlyvset__x_pipe__v27) {
        this->x_pipe[0xeU] = this->__Vdlyvval__x_pipe__v27;
    }
    if (this->__Vdlyvset__total_angle_pipe__v28) {
        this->x_pipe[0xeU] = this->__Vdlyvval__x_pipe__v28;
    }
    if (this->__Vdlyvset__x_pipe__v29) {
        this->x_pipe[0xfU] = this->__Vdlyvval__x_pipe__v29;
    }
    if (this->__Vdlyvset__total_angle_pipe__v30) {
        this->x_pipe[0xfU] = this->__Vdlyvval__x_pipe__v30;
    }
    if (this->__Vdlyvset__x_pipe__v31) {
        this->x_pipe[0x10U] = this->__Vdlyvval__x_pipe__v31;
    }
    if (this->__Vdlyvset__total_angle_pipe__v32) {
        this->x_pipe[0x10U] = this->__Vdlyvval__x_pipe__v32;
    }
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

VL_INLINE_OPT void Vtop_cordic_cossin__W10_N10::_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic__12(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin__W10_N10::_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic__12\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__y_pipe__v0 = 0U;
    this->__Vdlyvset__x_flip_pipe__v0 = 0U;
    this->__Vdlyvset__x_flip_pipe__v1 = 0U;
    this->__Vdlyvset__x_flip_pipe__v2 = 0U;
    this->__Vdlyvset__x_flip_pipe__v3 = 0U;
    this->__Vdlyvset__x_flip_pipe__v4 = 0U;
    this->__Vdlyvset__x_flip_pipe__v5 = 0U;
    this->__Vdlyvset__x_flip_pipe__v6 = 0U;
    this->__Vdlyvset__x_flip_pipe__v7 = 0U;
    this->__Vdlyvset__x_flip_pipe__v8 = 0U;
    this->__Vdlyvset__x_flip_pipe__v9 = 0U;
    this->__Vdlyvset__x_flip_pipe__v10 = 0U;
    this->__Vdlyvset__x_flip_pipe__v11 = 0U;
    this->__Vdlyvset__x_flip_pipe__v12 = 0U;
    this->__Vdlyvset__x_flip_pipe__v13 = 0U;
    this->__Vdlyvset__x_flip_pipe__v14 = 0U;
    this->__Vdlyvset__x_flip_pipe__v15 = 0U;
    this->__Vdlyvset__x_flip_pipe__v16 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v0 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v1 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v2 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v3 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v4 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v5 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v6 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v7 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v8 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v9 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v10 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v11 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v12 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v13 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v14 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v15 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v16 = 0U;
    this->__Vdlyvset__total_angle_pipe__v0 = 0U;
    this->__Vdlyvset__total_angle_pipe__v2 = 0U;
    this->__Vdlyvset__total_angle_pipe__v4 = 0U;
    this->__Vdlyvset__total_angle_pipe__v6 = 0U;
    this->__Vdlyvset__total_angle_pipe__v8 = 0U;
    this->__Vdlyvset__total_angle_pipe__v10 = 0U;
    this->__Vdlyvset__total_angle_pipe__v12 = 0U;
    this->__Vdlyvset__total_angle_pipe__v14 = 0U;
    this->__Vdlyvset__total_angle_pipe__v16 = 0U;
    this->__Vdlyvset__total_angle_pipe__v18 = 0U;
    this->__Vdlyvset__total_angle_pipe__v20 = 0U;
    this->__Vdlyvset__total_angle_pipe__v22 = 0U;
    this->__Vdlyvset__total_angle_pipe__v24 = 0U;
    this->__Vdlyvset__total_angle_pipe__v26 = 0U;
    this->__Vdlyvset__total_angle_pipe__v28 = 0U;
    this->__Vdlyvset__total_angle_pipe__v30 = 0U;
    this->__Vdlyvset__total_angle_pipe__v32 = 0U;
    this->__Vdlyvset__x_pipe__v0 = 0U;
    this->__Vdlyvset__x_pipe__v1 = 0U;
    this->__Vdlyvset__x_pipe__v3 = 0U;
    this->__Vdlyvset__x_pipe__v5 = 0U;
    this->__Vdlyvset__x_pipe__v7 = 0U;
    this->__Vdlyvset__x_pipe__v9 = 0U;
    this->__Vdlyvset__x_pipe__v11 = 0U;
    this->__Vdlyvset__x_pipe__v13 = 0U;
    this->__Vdlyvset__x_pipe__v15 = 0U;
    this->__Vdlyvset__x_pipe__v17 = 0U;
    this->__Vdlyvset__x_pipe__v19 = 0U;
    this->__Vdlyvset__x_pipe__v21 = 0U;
    this->__Vdlyvset__x_pipe__v23 = 0U;
    this->__Vdlyvset__x_pipe__v25 = 0U;
    this->__Vdlyvset__x_pipe__v27 = 0U;
    this->__Vdlyvset__x_pipe__v29 = 0U;
    this->__Vdlyvset__x_pipe__v31 = 0U;
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvset__y_pipe__v0 = 1U;
    }
    this->__Vdlyvval__valid_pipe__v0 = ((~ (IData)(this->rst)) 
                                        & (IData)(this->data_angle_valid_in));
    this->__Vdlyvval__valid_pipe__v1 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [0U]);
    this->__Vdlyvval__valid_pipe__v2 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [1U]);
    this->__Vdlyvval__valid_pipe__v3 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [2U]);
    this->__Vdlyvval__valid_pipe__v4 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [3U]);
    this->__Vdlyvval__valid_pipe__v5 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [4U]);
    this->__Vdlyvval__valid_pipe__v6 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [5U]);
    this->__Vdlyvval__valid_pipe__v7 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [6U]);
    this->__Vdlyvval__valid_pipe__v8 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [7U]);
    this->__Vdlyvval__valid_pipe__v9 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [8U]);
    this->__Vdlyvval__valid_pipe__v10 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [9U]);
    this->__Vdlyvval__valid_pipe__v11 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xaU]);
    this->__Vdlyvval__valid_pipe__v12 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xbU]);
    this->__Vdlyvval__valid_pipe__v13 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xcU]);
    this->__Vdlyvval__valid_pipe__v14 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xdU]);
    this->__Vdlyvval__valid_pipe__v15 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xeU]);
    this->__Vdlyvval__valid_pipe__v16 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xfU]);
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v0 = (1U & (
                                                   (0x8000U 
                                                    & (IData)(this->angle))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->angle) 
                                                     >> 0xeU))
                                                    : 
                                                   ((IData)(this->angle) 
                                                    >> 0xeU)));
        this->__Vdlyvset__x_flip_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v1 = this->x_flip_pipe
            [0U];
        this->__Vdlyvset__x_flip_pipe__v1 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v2 = this->x_flip_pipe
            [1U];
        this->__Vdlyvset__x_flip_pipe__v2 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v3 = this->x_flip_pipe
            [2U];
        this->__Vdlyvset__x_flip_pipe__v3 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v4 = this->x_flip_pipe
            [3U];
        this->__Vdlyvset__x_flip_pipe__v4 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v5 = this->x_flip_pipe
            [4U];
        this->__Vdlyvset__x_flip_pipe__v5 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v6 = this->x_flip_pipe
            [5U];
        this->__Vdlyvset__x_flip_pipe__v6 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v7 = this->x_flip_pipe
            [6U];
        this->__Vdlyvset__x_flip_pipe__v7 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v8 = this->x_flip_pipe
            [7U];
        this->__Vdlyvset__x_flip_pipe__v8 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v9 = this->x_flip_pipe
            [8U];
        this->__Vdlyvset__x_flip_pipe__v9 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v10 = this->x_flip_pipe
            [9U];
        this->__Vdlyvset__x_flip_pipe__v10 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v11 = this->x_flip_pipe
            [0xaU];
        this->__Vdlyvset__x_flip_pipe__v11 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v12 = this->x_flip_pipe
            [0xbU];
        this->__Vdlyvset__x_flip_pipe__v12 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v13 = this->x_flip_pipe
            [0xcU];
        this->__Vdlyvset__x_flip_pipe__v13 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v14 = this->x_flip_pipe
            [0xdU];
        this->__Vdlyvset__x_flip_pipe__v14 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v15 = this->x_flip_pipe
            [0xeU];
        this->__Vdlyvset__x_flip_pipe__v15 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v16 = this->x_flip_pipe
            [0xfU];
        this->__Vdlyvset__x_flip_pipe__v16 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__desired_angle_pipe__v0 = 
            (0xffffU & ((0x8000U & (IData)(this->angle))
                         ? ((0x4000U & (IData)(this->angle))
                             ? (IData)(this->angle)
                             : ((IData)(0x8000U) - 
                                VL_EXTENDS_II(16,16, (IData)(this->angle))))
                         : ((0x4000U & (IData)(this->angle))
                             ? ((IData)(0x8000U) - 
                                VL_EXTENDS_II(16,16, (IData)(this->angle)))
                             : (IData)(this->angle))));
        this->__Vdlyvset__desired_angle_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvset__total_angle_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvset__x_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0U], this->desired_angle_pipe
                       [0U])) {
            this->__Vdlyvval__x_pipe__v1 = (0x1ffffU 
                                            & (this->x_pipe
                                               [0U] 
                                               - this->y_pipe
                                               [0U]));
            this->__Vdlyvset__x_pipe__v1 = 1U;
            this->__Vdlyvval__total_angle_pipe__v1 
                = (0xffffU & ((IData)(0x2000U) + this->total_angle_pipe
                              [0U]));
            this->__Vdlyvval__y_pipe__v1 = (0x1ffffU 
                                            & (this->y_pipe
                                               [0U] 
                                               + this->x_pipe
                                               [0U]));
        } else {
            this->__Vdlyvval__total_angle_pipe__v2 
                = (0xffffU & (this->total_angle_pipe
                              [0U] - (IData)(0x2000U)));
            this->__Vdlyvset__total_angle_pipe__v2 = 1U;
            this->__Vdlyvval__x_pipe__v2 = (0x1ffffU 
                                            & (this->x_pipe
                                               [0U] 
                                               + this->y_pipe
                                               [0U]));
            this->__Vdlyvval__y_pipe__v2 = (0x1ffffU 
                                            & (this->y_pipe
                                               [0U] 
                                               - this->x_pipe
                                               [0U]));
        }
        this->__Vdlyvval__desired_angle_pipe__v1 = 
            this->desired_angle_pipe[0U];
        this->__Vdlyvset__desired_angle_pipe__v1 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [1U], this->desired_angle_pipe
                       [1U])) {
            this->__Vdlyvval__x_pipe__v3 = (0x1ffffU 
                                            & (this->x_pipe
                                               [1U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [1U], 1U)));
            this->__Vdlyvset__x_pipe__v3 = 1U;
            this->__Vdlyvval__total_angle_pipe__v3 
                = (0xffffU & ((IData)(0x12e4U) + this->total_angle_pipe
                              [1U]));
            this->__Vdlyvval__y_pipe__v3 = (0x1ffffU 
                                            & (this->y_pipe
                                               [1U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [1U], 1U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v4 
                = (0xffffU & (this->total_angle_pipe
                              [1U] - (IData)(0x12e4U)));
            this->__Vdlyvset__total_angle_pipe__v4 = 1U;
            this->__Vdlyvval__x_pipe__v4 = (0x1ffffU 
                                            & (this->x_pipe
                                               [1U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [1U], 1U)));
            this->__Vdlyvval__y_pipe__v4 = (0x1ffffU 
                                            & (this->y_pipe
                                               [1U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [1U], 1U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v2 = 
            this->desired_angle_pipe[1U];
        this->__Vdlyvset__desired_angle_pipe__v2 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [2U], this->desired_angle_pipe
                       [2U])) {
            this->__Vdlyvval__x_pipe__v5 = (0x1ffffU 
                                            & (this->x_pipe
                                               [2U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [2U], 2U)));
            this->__Vdlyvset__x_pipe__v5 = 1U;
            this->__Vdlyvval__total_angle_pipe__v5 
                = (0xffffU & ((IData)(0x9fbU) + this->total_angle_pipe
                              [2U]));
            this->__Vdlyvval__y_pipe__v5 = (0x1ffffU 
                                            & (this->y_pipe
                                               [2U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [2U], 2U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v6 
                = (0xffffU & (this->total_angle_pipe
                              [2U] - (IData)(0x9fbU)));
            this->__Vdlyvset__total_angle_pipe__v6 = 1U;
            this->__Vdlyvval__x_pipe__v6 = (0x1ffffU 
                                            & (this->x_pipe
                                               [2U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [2U], 2U)));
            this->__Vdlyvval__y_pipe__v6 = (0x1ffffU 
                                            & (this->y_pipe
                                               [2U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [2U], 2U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v3 = 
            this->desired_angle_pipe[2U];
        this->__Vdlyvset__desired_angle_pipe__v3 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [3U], this->desired_angle_pipe
                       [3U])) {
            this->__Vdlyvval__x_pipe__v7 = (0x1ffffU 
                                            & (this->x_pipe
                                               [3U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [3U], 3U)));
            this->__Vdlyvset__x_pipe__v7 = 1U;
            this->__Vdlyvval__total_angle_pipe__v7 
                = (0xffffU & ((IData)(0x511U) + this->total_angle_pipe
                              [3U]));
            this->__Vdlyvval__y_pipe__v7 = (0x1ffffU 
                                            & (this->y_pipe
                                               [3U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [3U], 3U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v8 
                = (0xffffU & (this->total_angle_pipe
                              [3U] - (IData)(0x511U)));
            this->__Vdlyvset__total_angle_pipe__v8 = 1U;
            this->__Vdlyvval__x_pipe__v8 = (0x1ffffU 
                                            & (this->x_pipe
                                               [3U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [3U], 3U)));
            this->__Vdlyvval__y_pipe__v8 = (0x1ffffU 
                                            & (this->y_pipe
                                               [3U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [3U], 3U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v4 = 
            this->desired_angle_pipe[3U];
        this->__Vdlyvset__desired_angle_pipe__v4 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [4U], this->desired_angle_pipe
                       [4U])) {
            this->__Vdlyvval__x_pipe__v9 = (0x1ffffU 
                                            & (this->x_pipe
                                               [4U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [4U], 4U)));
            this->__Vdlyvset__x_pipe__v9 = 1U;
            this->__Vdlyvval__total_angle_pipe__v9 
                = (0xffffU & ((IData)(0x28bU) + this->total_angle_pipe
                              [4U]));
            this->__Vdlyvval__y_pipe__v9 = (0x1ffffU 
                                            & (this->y_pipe
                                               [4U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [4U], 4U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v10 
                = (0xffffU & (this->total_angle_pipe
                              [4U] - (IData)(0x28bU)));
            this->__Vdlyvset__total_angle_pipe__v10 = 1U;
            this->__Vdlyvval__x_pipe__v10 = (0x1ffffU 
                                             & (this->x_pipe
                                                [4U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [4U], 4U)));
            this->__Vdlyvval__y_pipe__v10 = (0x1ffffU 
                                             & (this->y_pipe
                                                [4U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [4U], 4U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v5 = 
            this->desired_angle_pipe[4U];
        this->__Vdlyvset__desired_angle_pipe__v5 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [5U], this->desired_angle_pipe
                       [5U])) {
            this->__Vdlyvval__x_pipe__v11 = (0x1ffffU 
                                             & (this->x_pipe
                                                [5U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [5U], 5U)));
            this->__Vdlyvset__x_pipe__v11 = 1U;
            this->__Vdlyvval__total_angle_pipe__v11 
                = (0xffffU & ((IData)(0x146U) + this->total_angle_pipe
                              [5U]));
            this->__Vdlyvval__y_pipe__v11 = (0x1ffffU 
                                             & (this->y_pipe
                                                [5U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [5U], 5U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v12 
                = (0xffffU & (this->total_angle_pipe
                              [5U] - (IData)(0x146U)));
            this->__Vdlyvset__total_angle_pipe__v12 = 1U;
            this->__Vdlyvval__x_pipe__v12 = (0x1ffffU 
                                             & (this->x_pipe
                                                [5U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [5U], 5U)));
            this->__Vdlyvval__y_pipe__v12 = (0x1ffffU 
                                             & (this->y_pipe
                                                [5U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [5U], 5U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v6 = 
            this->desired_angle_pipe[5U];
        this->__Vdlyvset__desired_angle_pipe__v6 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [6U], this->desired_angle_pipe
                       [6U])) {
            this->__Vdlyvval__x_pipe__v13 = (0x1ffffU 
                                             & (this->x_pipe
                                                [6U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [6U], 6U)));
            this->__Vdlyvset__x_pipe__v13 = 1U;
            this->__Vdlyvval__total_angle_pipe__v13 
                = (0xffffU & ((IData)(0xa3U) + this->total_angle_pipe
                              [6U]));
            this->__Vdlyvval__y_pipe__v13 = (0x1ffffU 
                                             & (this->y_pipe
                                                [6U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [6U], 6U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v14 
                = (0xffffU & (this->total_angle_pipe
                              [6U] - (IData)(0xa3U)));
            this->__Vdlyvset__total_angle_pipe__v14 = 1U;
            this->__Vdlyvval__x_pipe__v14 = (0x1ffffU 
                                             & (this->x_pipe
                                                [6U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [6U], 6U)));
            this->__Vdlyvval__y_pipe__v14 = (0x1ffffU 
                                             & (this->y_pipe
                                                [6U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [6U], 6U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v7 = 
            this->desired_angle_pipe[6U];
        this->__Vdlyvset__desired_angle_pipe__v7 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [7U], this->desired_angle_pipe
                       [7U])) {
            this->__Vdlyvval__x_pipe__v15 = (0x1ffffU 
                                             & (this->x_pipe
                                                [7U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [7U], 7U)));
            this->__Vdlyvset__x_pipe__v15 = 1U;
            this->__Vdlyvval__total_angle_pipe__v15 
                = (0xffffU & ((IData)(0x51U) + this->total_angle_pipe
                              [7U]));
            this->__Vdlyvval__y_pipe__v15 = (0x1ffffU 
                                             & (this->y_pipe
                                                [7U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [7U], 7U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v16 
                = (0xffffU & (this->total_angle_pipe
                              [7U] - (IData)(0x51U)));
            this->__Vdlyvset__total_angle_pipe__v16 = 1U;
            this->__Vdlyvval__x_pipe__v16 = (0x1ffffU 
                                             & (this->x_pipe
                                                [7U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [7U], 7U)));
            this->__Vdlyvval__y_pipe__v16 = (0x1ffffU 
                                             & (this->y_pipe
                                                [7U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [7U], 7U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v8 = 
            this->desired_angle_pipe[7U];
        this->__Vdlyvset__desired_angle_pipe__v8 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [8U], this->desired_angle_pipe
                       [8U])) {
            this->__Vdlyvval__x_pipe__v17 = (0x1ffffU 
                                             & (this->x_pipe
                                                [8U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [8U], 8U)));
            this->__Vdlyvset__x_pipe__v17 = 1U;
            this->__Vdlyvval__total_angle_pipe__v17 
                = (0xffffU & ((IData)(0x29U) + this->total_angle_pipe
                              [8U]));
            this->__Vdlyvval__y_pipe__v17 = (0x1ffffU 
                                             & (this->y_pipe
                                                [8U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [8U], 8U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v18 
                = (0xffffU & (this->total_angle_pipe
                              [8U] - (IData)(0x29U)));
            this->__Vdlyvset__total_angle_pipe__v18 = 1U;
            this->__Vdlyvval__x_pipe__v18 = (0x1ffffU 
                                             & (this->x_pipe
                                                [8U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [8U], 8U)));
            this->__Vdlyvval__y_pipe__v18 = (0x1ffffU 
                                             & (this->y_pipe
                                                [8U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [8U], 8U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v9 = 
            this->desired_angle_pipe[8U];
        this->__Vdlyvset__desired_angle_pipe__v9 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [9U], this->desired_angle_pipe
                       [9U])) {
            this->__Vdlyvval__x_pipe__v19 = (0x1ffffU 
                                             & (this->x_pipe
                                                [9U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [9U], 9U)));
            this->__Vdlyvset__x_pipe__v19 = 1U;
            this->__Vdlyvval__total_angle_pipe__v19 
                = (0xffffU & ((IData)(0x14U) + this->total_angle_pipe
                              [9U]));
            this->__Vdlyvval__y_pipe__v19 = (0x1ffffU 
                                             & (this->y_pipe
                                                [9U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [9U], 9U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v20 
                = (0xffffU & (this->total_angle_pipe
                              [9U] - (IData)(0x14U)));
            this->__Vdlyvset__total_angle_pipe__v20 = 1U;
            this->__Vdlyvval__x_pipe__v20 = (0x1ffffU 
                                             & (this->x_pipe
                                                [9U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [9U], 9U)));
            this->__Vdlyvval__y_pipe__v20 = (0x1ffffU 
                                             & (this->y_pipe
                                                [9U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [9U], 9U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v10 = 
            this->desired_angle_pipe[9U];
        this->__Vdlyvset__desired_angle_pipe__v10 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xaU], this->desired_angle_pipe
                       [0xaU])) {
            this->__Vdlyvval__x_pipe__v21 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xaU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xaU], 0xaU)));
            this->__Vdlyvset__x_pipe__v21 = 1U;
            this->__Vdlyvval__total_angle_pipe__v21 
                = (0xffffU & ((IData)(0xaU) + this->total_angle_pipe
                              [0xaU]));
            this->__Vdlyvval__y_pipe__v21 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xaU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xaU], 0xaU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v22 
                = (0xffffU & (this->total_angle_pipe
                              [0xaU] - (IData)(0xaU)));
            this->__Vdlyvset__total_angle_pipe__v22 = 1U;
            this->__Vdlyvval__x_pipe__v22 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xaU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xaU], 0xaU)));
            this->__Vdlyvval__y_pipe__v22 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xaU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xaU], 0xaU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v11 = 
            this->desired_angle_pipe[0xaU];
        this->__Vdlyvset__desired_angle_pipe__v11 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xbU], this->desired_angle_pipe
                       [0xbU])) {
            this->__Vdlyvval__x_pipe__v23 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xbU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xbU], 0xbU)));
            this->__Vdlyvset__x_pipe__v23 = 1U;
            this->__Vdlyvval__total_angle_pipe__v23 
                = (0xffffU & ((IData)(5U) + this->total_angle_pipe
                              [0xbU]));
            this->__Vdlyvval__y_pipe__v23 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xbU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xbU], 0xbU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v24 
                = (0xffffU & (this->total_angle_pipe
                              [0xbU] - (IData)(5U)));
            this->__Vdlyvset__total_angle_pipe__v24 = 1U;
            this->__Vdlyvval__x_pipe__v24 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xbU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xbU], 0xbU)));
            this->__Vdlyvval__y_pipe__v24 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xbU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xbU], 0xbU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v12 = 
            this->desired_angle_pipe[0xbU];
        this->__Vdlyvset__desired_angle_pipe__v12 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xcU], this->desired_angle_pipe
                       [0xcU])) {
            this->__Vdlyvval__x_pipe__v25 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xcU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xcU], 0xcU)));
            this->__Vdlyvset__x_pipe__v25 = 1U;
            this->__Vdlyvval__total_angle_pipe__v25 
                = (0xffffU & ((IData)(3U) + this->total_angle_pipe
                              [0xcU]));
            this->__Vdlyvval__y_pipe__v25 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xcU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xcU], 0xcU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v26 
                = (0xffffU & (this->total_angle_pipe
                              [0xcU] - (IData)(3U)));
            this->__Vdlyvset__total_angle_pipe__v26 = 1U;
            this->__Vdlyvval__x_pipe__v26 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xcU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xcU], 0xcU)));
            this->__Vdlyvval__y_pipe__v26 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xcU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xcU], 0xcU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v13 = 
            this->desired_angle_pipe[0xcU];
        this->__Vdlyvset__desired_angle_pipe__v13 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xdU], this->desired_angle_pipe
                       [0xdU])) {
            this->__Vdlyvval__x_pipe__v27 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xdU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xdU], 0xdU)));
            this->__Vdlyvset__x_pipe__v27 = 1U;
            this->__Vdlyvval__total_angle_pipe__v27 
                = (0xffffU & ((IData)(1U) + this->total_angle_pipe
                              [0xdU]));
            this->__Vdlyvval__y_pipe__v27 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xdU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xdU], 0xdU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v28 
                = (0xffffU & (this->total_angle_pipe
                              [0xdU] - (IData)(1U)));
            this->__Vdlyvset__total_angle_pipe__v28 = 1U;
            this->__Vdlyvval__x_pipe__v28 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xdU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xdU], 0xdU)));
            this->__Vdlyvval__y_pipe__v28 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xdU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xdU], 0xdU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v14 = 
            this->desired_angle_pipe[0xdU];
        this->__Vdlyvset__desired_angle_pipe__v14 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xeU], this->desired_angle_pipe
                       [0xeU])) {
            this->__Vdlyvval__x_pipe__v29 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xeU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xeU], 0xeU)));
            this->__Vdlyvset__x_pipe__v29 = 1U;
            this->__Vdlyvval__total_angle_pipe__v29 
                = (0xffffU & ((IData)(1U) + this->total_angle_pipe
                              [0xeU]));
            this->__Vdlyvval__y_pipe__v29 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xeU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xeU], 0xeU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v30 
                = (0xffffU & (this->total_angle_pipe
                              [0xeU] - (IData)(1U)));
            this->__Vdlyvset__total_angle_pipe__v30 = 1U;
            this->__Vdlyvval__x_pipe__v30 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xeU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xeU], 0xeU)));
            this->__Vdlyvval__y_pipe__v30 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xeU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xeU], 0xeU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v15 = 
            this->desired_angle_pipe[0xeU];
        this->__Vdlyvset__desired_angle_pipe__v15 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xfU], this->desired_angle_pipe
                       [0xfU])) {
            this->__Vdlyvval__x_pipe__v31 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xfU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xfU], 0xfU)));
            this->__Vdlyvset__x_pipe__v31 = 1U;
            this->__Vdlyvval__total_angle_pipe__v31 
                = this->total_angle_pipe[0xfU];
            this->__Vdlyvval__y_pipe__v31 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xfU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xfU], 0xfU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v32 
                = this->total_angle_pipe[0xfU];
            this->__Vdlyvset__total_angle_pipe__v32 = 1U;
            this->__Vdlyvval__x_pipe__v32 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xfU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xfU], 0xfU)));
            this->__Vdlyvval__y_pipe__v32 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xfU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xfU], 0xfU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v16 = 
            this->desired_angle_pipe[0xfU];
        this->__Vdlyvset__desired_angle_pipe__v16 = 1U;
    }
    this->valid_pipe[0U] = this->__Vdlyvval__valid_pipe__v0;
    this->valid_pipe[1U] = this->__Vdlyvval__valid_pipe__v1;
    this->valid_pipe[2U] = this->__Vdlyvval__valid_pipe__v2;
    this->valid_pipe[3U] = this->__Vdlyvval__valid_pipe__v3;
    this->valid_pipe[4U] = this->__Vdlyvval__valid_pipe__v4;
    this->valid_pipe[5U] = this->__Vdlyvval__valid_pipe__v5;
    this->valid_pipe[6U] = this->__Vdlyvval__valid_pipe__v6;
    this->valid_pipe[7U] = this->__Vdlyvval__valid_pipe__v7;
    this->valid_pipe[8U] = this->__Vdlyvval__valid_pipe__v8;
    this->valid_pipe[9U] = this->__Vdlyvval__valid_pipe__v9;
    this->valid_pipe[0xaU] = this->__Vdlyvval__valid_pipe__v10;
    this->valid_pipe[0xbU] = this->__Vdlyvval__valid_pipe__v11;
    this->valid_pipe[0xcU] = this->__Vdlyvval__valid_pipe__v12;
    this->valid_pipe[0xdU] = this->__Vdlyvval__valid_pipe__v13;
    this->valid_pipe[0xeU] = this->__Vdlyvval__valid_pipe__v14;
    this->valid_pipe[0xfU] = this->__Vdlyvval__valid_pipe__v15;
    this->valid_pipe[0x10U] = this->__Vdlyvval__valid_pipe__v16;
    if (this->__Vdlyvset__x_flip_pipe__v0) {
        this->x_flip_pipe[0U] = this->__Vdlyvval__x_flip_pipe__v0;
    }
    if (this->__Vdlyvset__x_flip_pipe__v1) {
        this->x_flip_pipe[1U] = this->__Vdlyvval__x_flip_pipe__v1;
    }
    if (this->__Vdlyvset__x_flip_pipe__v2) {
        this->x_flip_pipe[2U] = this->__Vdlyvval__x_flip_pipe__v2;
    }
    if (this->__Vdlyvset__x_flip_pipe__v3) {
        this->x_flip_pipe[3U] = this->__Vdlyvval__x_flip_pipe__v3;
    }
    if (this->__Vdlyvset__x_flip_pipe__v4) {
        this->x_flip_pipe[4U] = this->__Vdlyvval__x_flip_pipe__v4;
    }
    if (this->__Vdlyvset__x_flip_pipe__v5) {
        this->x_flip_pipe[5U] = this->__Vdlyvval__x_flip_pipe__v5;
    }
    if (this->__Vdlyvset__x_flip_pipe__v6) {
        this->x_flip_pipe[6U] = this->__Vdlyvval__x_flip_pipe__v6;
    }
    if (this->__Vdlyvset__x_flip_pipe__v7) {
        this->x_flip_pipe[7U] = this->__Vdlyvval__x_flip_pipe__v7;
    }
    if (this->__Vdlyvset__x_flip_pipe__v8) {
        this->x_flip_pipe[8U] = this->__Vdlyvval__x_flip_pipe__v8;
    }
    if (this->__Vdlyvset__x_flip_pipe__v9) {
        this->x_flip_pipe[9U] = this->__Vdlyvval__x_flip_pipe__v9;
    }
    if (this->__Vdlyvset__x_flip_pipe__v10) {
        this->x_flip_pipe[0xaU] = this->__Vdlyvval__x_flip_pipe__v10;
    }
    if (this->__Vdlyvset__x_flip_pipe__v11) {
        this->x_flip_pipe[0xbU] = this->__Vdlyvval__x_flip_pipe__v11;
    }
    if (this->__Vdlyvset__x_flip_pipe__v12) {
        this->x_flip_pipe[0xcU] = this->__Vdlyvval__x_flip_pipe__v12;
    }
    if (this->__Vdlyvset__x_flip_pipe__v13) {
        this->x_flip_pipe[0xdU] = this->__Vdlyvval__x_flip_pipe__v13;
    }
    if (this->__Vdlyvset__x_flip_pipe__v14) {
        this->x_flip_pipe[0xeU] = this->__Vdlyvval__x_flip_pipe__v14;
    }
    if (this->__Vdlyvset__x_flip_pipe__v15) {
        this->x_flip_pipe[0xfU] = this->__Vdlyvval__x_flip_pipe__v15;
    }
    if (this->__Vdlyvset__x_flip_pipe__v16) {
        this->x_flip_pipe[0x10U] = this->__Vdlyvval__x_flip_pipe__v16;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v0) {
        this->desired_angle_pipe[0U] = this->__Vdlyvval__desired_angle_pipe__v0;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v1) {
        this->desired_angle_pipe[1U] = this->__Vdlyvval__desired_angle_pipe__v1;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v2) {
        this->desired_angle_pipe[2U] = this->__Vdlyvval__desired_angle_pipe__v2;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v3) {
        this->desired_angle_pipe[3U] = this->__Vdlyvval__desired_angle_pipe__v3;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v4) {
        this->desired_angle_pipe[4U] = this->__Vdlyvval__desired_angle_pipe__v4;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v5) {
        this->desired_angle_pipe[5U] = this->__Vdlyvval__desired_angle_pipe__v5;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v6) {
        this->desired_angle_pipe[6U] = this->__Vdlyvval__desired_angle_pipe__v6;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v7) {
        this->desired_angle_pipe[7U] = this->__Vdlyvval__desired_angle_pipe__v7;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v8) {
        this->desired_angle_pipe[8U] = this->__Vdlyvval__desired_angle_pipe__v8;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v9) {
        this->desired_angle_pipe[9U] = this->__Vdlyvval__desired_angle_pipe__v9;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v10) {
        this->desired_angle_pipe[0xaU] = this->__Vdlyvval__desired_angle_pipe__v10;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v11) {
        this->desired_angle_pipe[0xbU] = this->__Vdlyvval__desired_angle_pipe__v11;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v12) {
        this->desired_angle_pipe[0xcU] = this->__Vdlyvval__desired_angle_pipe__v12;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v13) {
        this->desired_angle_pipe[0xdU] = this->__Vdlyvval__desired_angle_pipe__v13;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v14) {
        this->desired_angle_pipe[0xeU] = this->__Vdlyvval__desired_angle_pipe__v14;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v15) {
        this->desired_angle_pipe[0xfU] = this->__Vdlyvval__desired_angle_pipe__v15;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v16) {
        this->desired_angle_pipe[0x10U] = this->__Vdlyvval__desired_angle_pipe__v16;
    }
    if (this->__Vdlyvset__total_angle_pipe__v0) {
        this->total_angle_pipe[0U] = 0U;
    }
    if (this->__Vdlyvset__x_pipe__v1) {
        this->total_angle_pipe[1U] = this->__Vdlyvval__total_angle_pipe__v1;
    }
    if (this->__Vdlyvset__total_angle_pipe__v2) {
        this->total_angle_pipe[1U] = this->__Vdlyvval__total_angle_pipe__v2;
    }
    if (this->__Vdlyvset__x_pipe__v3) {
        this->total_angle_pipe[2U] = this->__Vdlyvval__total_angle_pipe__v3;
    }
    if (this->__Vdlyvset__total_angle_pipe__v4) {
        this->total_angle_pipe[2U] = this->__Vdlyvval__total_angle_pipe__v4;
    }
    if (this->__Vdlyvset__x_pipe__v5) {
        this->total_angle_pipe[3U] = this->__Vdlyvval__total_angle_pipe__v5;
    }
    if (this->__Vdlyvset__total_angle_pipe__v6) {
        this->total_angle_pipe[3U] = this->__Vdlyvval__total_angle_pipe__v6;
    }
    if (this->__Vdlyvset__x_pipe__v7) {
        this->total_angle_pipe[4U] = this->__Vdlyvval__total_angle_pipe__v7;
    }
    if (this->__Vdlyvset__total_angle_pipe__v8) {
        this->total_angle_pipe[4U] = this->__Vdlyvval__total_angle_pipe__v8;
    }
    if (this->__Vdlyvset__x_pipe__v9) {
        this->total_angle_pipe[5U] = this->__Vdlyvval__total_angle_pipe__v9;
    }
    if (this->__Vdlyvset__total_angle_pipe__v10) {
        this->total_angle_pipe[5U] = this->__Vdlyvval__total_angle_pipe__v10;
    }
    if (this->__Vdlyvset__x_pipe__v11) {
        this->total_angle_pipe[6U] = this->__Vdlyvval__total_angle_pipe__v11;
    }
    if (this->__Vdlyvset__total_angle_pipe__v12) {
        this->total_angle_pipe[6U] = this->__Vdlyvval__total_angle_pipe__v12;
    }
    if (this->__Vdlyvset__x_pipe__v13) {
        this->total_angle_pipe[7U] = this->__Vdlyvval__total_angle_pipe__v13;
    }
    if (this->__Vdlyvset__total_angle_pipe__v14) {
        this->total_angle_pipe[7U] = this->__Vdlyvval__total_angle_pipe__v14;
    }
    if (this->__Vdlyvset__x_pipe__v15) {
        this->total_angle_pipe[8U] = this->__Vdlyvval__total_angle_pipe__v15;
    }
    if (this->__Vdlyvset__total_angle_pipe__v16) {
        this->total_angle_pipe[8U] = this->__Vdlyvval__total_angle_pipe__v16;
    }
    if (this->__Vdlyvset__x_pipe__v17) {
        this->total_angle_pipe[9U] = this->__Vdlyvval__total_angle_pipe__v17;
    }
    if (this->__Vdlyvset__total_angle_pipe__v18) {
        this->total_angle_pipe[9U] = this->__Vdlyvval__total_angle_pipe__v18;
    }
    if (this->__Vdlyvset__x_pipe__v19) {
        this->total_angle_pipe[0xaU] = this->__Vdlyvval__total_angle_pipe__v19;
    }
    if (this->__Vdlyvset__total_angle_pipe__v20) {
        this->total_angle_pipe[0xaU] = this->__Vdlyvval__total_angle_pipe__v20;
    }
    if (this->__Vdlyvset__x_pipe__v21) {
        this->total_angle_pipe[0xbU] = this->__Vdlyvval__total_angle_pipe__v21;
    }
    if (this->__Vdlyvset__total_angle_pipe__v22) {
        this->total_angle_pipe[0xbU] = this->__Vdlyvval__total_angle_pipe__v22;
    }
    if (this->__Vdlyvset__x_pipe__v23) {
        this->total_angle_pipe[0xcU] = this->__Vdlyvval__total_angle_pipe__v23;
    }
    if (this->__Vdlyvset__total_angle_pipe__v24) {
        this->total_angle_pipe[0xcU] = this->__Vdlyvval__total_angle_pipe__v24;
    }
    if (this->__Vdlyvset__x_pipe__v25) {
        this->total_angle_pipe[0xdU] = this->__Vdlyvval__total_angle_pipe__v25;
    }
    if (this->__Vdlyvset__total_angle_pipe__v26) {
        this->total_angle_pipe[0xdU] = this->__Vdlyvval__total_angle_pipe__v26;
    }
    if (this->__Vdlyvset__x_pipe__v27) {
        this->total_angle_pipe[0xeU] = this->__Vdlyvval__total_angle_pipe__v27;
    }
    if (this->__Vdlyvset__total_angle_pipe__v28) {
        this->total_angle_pipe[0xeU] = this->__Vdlyvval__total_angle_pipe__v28;
    }
    if (this->__Vdlyvset__x_pipe__v29) {
        this->total_angle_pipe[0xfU] = this->__Vdlyvval__total_angle_pipe__v29;
    }
    if (this->__Vdlyvset__total_angle_pipe__v30) {
        this->total_angle_pipe[0xfU] = this->__Vdlyvval__total_angle_pipe__v30;
    }
    if (this->__Vdlyvset__x_pipe__v31) {
        this->total_angle_pipe[0x10U] = this->__Vdlyvval__total_angle_pipe__v31;
    }
    if (this->__Vdlyvset__total_angle_pipe__v32) {
        this->total_angle_pipe[0x10U] = this->__Vdlyvval__total_angle_pipe__v32;
    }
    if (this->__Vdlyvset__y_pipe__v0) {
        this->y_pipe[0U] = 0U;
    }
    if (this->__Vdlyvset__x_pipe__v1) {
        this->y_pipe[1U] = this->__Vdlyvval__y_pipe__v1;
    }
    if (this->__Vdlyvset__total_angle_pipe__v2) {
        this->y_pipe[1U] = this->__Vdlyvval__y_pipe__v2;
    }
    if (this->__Vdlyvset__x_pipe__v3) {
        this->y_pipe[2U] = this->__Vdlyvval__y_pipe__v3;
    }
    if (this->__Vdlyvset__total_angle_pipe__v4) {
        this->y_pipe[2U] = this->__Vdlyvval__y_pipe__v4;
    }
    if (this->__Vdlyvset__x_pipe__v5) {
        this->y_pipe[3U] = this->__Vdlyvval__y_pipe__v5;
    }
    if (this->__Vdlyvset__total_angle_pipe__v6) {
        this->y_pipe[3U] = this->__Vdlyvval__y_pipe__v6;
    }
    if (this->__Vdlyvset__x_pipe__v7) {
        this->y_pipe[4U] = this->__Vdlyvval__y_pipe__v7;
    }
    if (this->__Vdlyvset__total_angle_pipe__v8) {
        this->y_pipe[4U] = this->__Vdlyvval__y_pipe__v8;
    }
    if (this->__Vdlyvset__x_pipe__v9) {
        this->y_pipe[5U] = this->__Vdlyvval__y_pipe__v9;
    }
    if (this->__Vdlyvset__total_angle_pipe__v10) {
        this->y_pipe[5U] = this->__Vdlyvval__y_pipe__v10;
    }
    if (this->__Vdlyvset__x_pipe__v11) {
        this->y_pipe[6U] = this->__Vdlyvval__y_pipe__v11;
    }
    if (this->__Vdlyvset__total_angle_pipe__v12) {
        this->y_pipe[6U] = this->__Vdlyvval__y_pipe__v12;
    }
    if (this->__Vdlyvset__x_pipe__v13) {
        this->y_pipe[7U] = this->__Vdlyvval__y_pipe__v13;
    }
    if (this->__Vdlyvset__total_angle_pipe__v14) {
        this->y_pipe[7U] = this->__Vdlyvval__y_pipe__v14;
    }
    if (this->__Vdlyvset__x_pipe__v15) {
        this->y_pipe[8U] = this->__Vdlyvval__y_pipe__v15;
    }
    if (this->__Vdlyvset__total_angle_pipe__v16) {
        this->y_pipe[8U] = this->__Vdlyvval__y_pipe__v16;
    }
    if (this->__Vdlyvset__x_pipe__v17) {
        this->y_pipe[9U] = this->__Vdlyvval__y_pipe__v17;
    }
    if (this->__Vdlyvset__total_angle_pipe__v18) {
        this->y_pipe[9U] = this->__Vdlyvval__y_pipe__v18;
    }
    if (this->__Vdlyvset__x_pipe__v19) {
        this->y_pipe[0xaU] = this->__Vdlyvval__y_pipe__v19;
    }
    if (this->__Vdlyvset__total_angle_pipe__v20) {
        this->y_pipe[0xaU] = this->__Vdlyvval__y_pipe__v20;
    }
    if (this->__Vdlyvset__x_pipe__v21) {
        this->y_pipe[0xbU] = this->__Vdlyvval__y_pipe__v21;
    }
    if (this->__Vdlyvset__total_angle_pipe__v22) {
        this->y_pipe[0xbU] = this->__Vdlyvval__y_pipe__v22;
    }
    if (this->__Vdlyvset__x_pipe__v23) {
        this->y_pipe[0xcU] = this->__Vdlyvval__y_pipe__v23;
    }
    if (this->__Vdlyvset__total_angle_pipe__v24) {
        this->y_pipe[0xcU] = this->__Vdlyvval__y_pipe__v24;
    }
    if (this->__Vdlyvset__x_pipe__v25) {
        this->y_pipe[0xdU] = this->__Vdlyvval__y_pipe__v25;
    }
    if (this->__Vdlyvset__total_angle_pipe__v26) {
        this->y_pipe[0xdU] = this->__Vdlyvval__y_pipe__v26;
    }
    if (this->__Vdlyvset__x_pipe__v27) {
        this->y_pipe[0xeU] = this->__Vdlyvval__y_pipe__v27;
    }
    if (this->__Vdlyvset__total_angle_pipe__v28) {
        this->y_pipe[0xeU] = this->__Vdlyvval__y_pipe__v28;
    }
    if (this->__Vdlyvset__x_pipe__v29) {
        this->y_pipe[0xfU] = this->__Vdlyvval__y_pipe__v29;
    }
    if (this->__Vdlyvset__total_angle_pipe__v30) {
        this->y_pipe[0xfU] = this->__Vdlyvval__y_pipe__v30;
    }
    if (this->__Vdlyvset__x_pipe__v31) {
        this->y_pipe[0x10U] = this->__Vdlyvval__y_pipe__v31;
    }
    if (this->__Vdlyvset__total_angle_pipe__v32) {
        this->y_pipe[0x10U] = this->__Vdlyvval__y_pipe__v32;
    }
    if (this->__Vdlyvset__x_pipe__v0) {
        this->x_pipe[0U] = 0x4dbaU;
    }
    if (this->__Vdlyvset__x_pipe__v1) {
        this->x_pipe[1U] = this->__Vdlyvval__x_pipe__v1;
    }
    if (this->__Vdlyvset__total_angle_pipe__v2) {
        this->x_pipe[1U] = this->__Vdlyvval__x_pipe__v2;
    }
    if (this->__Vdlyvset__x_pipe__v3) {
        this->x_pipe[2U] = this->__Vdlyvval__x_pipe__v3;
    }
    if (this->__Vdlyvset__total_angle_pipe__v4) {
        this->x_pipe[2U] = this->__Vdlyvval__x_pipe__v4;
    }
    if (this->__Vdlyvset__x_pipe__v5) {
        this->x_pipe[3U] = this->__Vdlyvval__x_pipe__v5;
    }
    if (this->__Vdlyvset__total_angle_pipe__v6) {
        this->x_pipe[3U] = this->__Vdlyvval__x_pipe__v6;
    }
    if (this->__Vdlyvset__x_pipe__v7) {
        this->x_pipe[4U] = this->__Vdlyvval__x_pipe__v7;
    }
    if (this->__Vdlyvset__total_angle_pipe__v8) {
        this->x_pipe[4U] = this->__Vdlyvval__x_pipe__v8;
    }
    if (this->__Vdlyvset__x_pipe__v9) {
        this->x_pipe[5U] = this->__Vdlyvval__x_pipe__v9;
    }
    if (this->__Vdlyvset__total_angle_pipe__v10) {
        this->x_pipe[5U] = this->__Vdlyvval__x_pipe__v10;
    }
    if (this->__Vdlyvset__x_pipe__v11) {
        this->x_pipe[6U] = this->__Vdlyvval__x_pipe__v11;
    }
    if (this->__Vdlyvset__total_angle_pipe__v12) {
        this->x_pipe[6U] = this->__Vdlyvval__x_pipe__v12;
    }
    if (this->__Vdlyvset__x_pipe__v13) {
        this->x_pipe[7U] = this->__Vdlyvval__x_pipe__v13;
    }
    if (this->__Vdlyvset__total_angle_pipe__v14) {
        this->x_pipe[7U] = this->__Vdlyvval__x_pipe__v14;
    }
    if (this->__Vdlyvset__x_pipe__v15) {
        this->x_pipe[8U] = this->__Vdlyvval__x_pipe__v15;
    }
    if (this->__Vdlyvset__total_angle_pipe__v16) {
        this->x_pipe[8U] = this->__Vdlyvval__x_pipe__v16;
    }
    if (this->__Vdlyvset__x_pipe__v17) {
        this->x_pipe[9U] = this->__Vdlyvval__x_pipe__v17;
    }
    if (this->__Vdlyvset__total_angle_pipe__v18) {
        this->x_pipe[9U] = this->__Vdlyvval__x_pipe__v18;
    }
    if (this->__Vdlyvset__x_pipe__v19) {
        this->x_pipe[0xaU] = this->__Vdlyvval__x_pipe__v19;
    }
    if (this->__Vdlyvset__total_angle_pipe__v20) {
        this->x_pipe[0xaU] = this->__Vdlyvval__x_pipe__v20;
    }
    if (this->__Vdlyvset__x_pipe__v21) {
        this->x_pipe[0xbU] = this->__Vdlyvval__x_pipe__v21;
    }
    if (this->__Vdlyvset__total_angle_pipe__v22) {
        this->x_pipe[0xbU] = this->__Vdlyvval__x_pipe__v22;
    }
    if (this->__Vdlyvset__x_pipe__v23) {
        this->x_pipe[0xcU] = this->__Vdlyvval__x_pipe__v23;
    }
    if (this->__Vdlyvset__total_angle_pipe__v24) {
        this->x_pipe[0xcU] = this->__Vdlyvval__x_pipe__v24;
    }
    if (this->__Vdlyvset__x_pipe__v25) {
        this->x_pipe[0xdU] = this->__Vdlyvval__x_pipe__v25;
    }
    if (this->__Vdlyvset__total_angle_pipe__v26) {
        this->x_pipe[0xdU] = this->__Vdlyvval__x_pipe__v26;
    }
    if (this->__Vdlyvset__x_pipe__v27) {
        this->x_pipe[0xeU] = this->__Vdlyvval__x_pipe__v27;
    }
    if (this->__Vdlyvset__total_angle_pipe__v28) {
        this->x_pipe[0xeU] = this->__Vdlyvval__x_pipe__v28;
    }
    if (this->__Vdlyvset__x_pipe__v29) {
        this->x_pipe[0xfU] = this->__Vdlyvval__x_pipe__v29;
    }
    if (this->__Vdlyvset__total_angle_pipe__v30) {
        this->x_pipe[0xfU] = this->__Vdlyvval__x_pipe__v30;
    }
    if (this->__Vdlyvset__x_pipe__v31) {
        this->x_pipe[0x10U] = this->__Vdlyvval__x_pipe__v31;
    }
    if (this->__Vdlyvset__total_angle_pipe__v32) {
        this->x_pipe[0x10U] = this->__Vdlyvval__x_pipe__v32;
    }
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

VL_INLINE_OPT void Vtop_cordic_cossin__W10_N10::_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic__13(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin__W10_N10::_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic__13\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__y_pipe__v0 = 0U;
    this->__Vdlyvset__x_flip_pipe__v0 = 0U;
    this->__Vdlyvset__x_flip_pipe__v1 = 0U;
    this->__Vdlyvset__x_flip_pipe__v2 = 0U;
    this->__Vdlyvset__x_flip_pipe__v3 = 0U;
    this->__Vdlyvset__x_flip_pipe__v4 = 0U;
    this->__Vdlyvset__x_flip_pipe__v5 = 0U;
    this->__Vdlyvset__x_flip_pipe__v6 = 0U;
    this->__Vdlyvset__x_flip_pipe__v7 = 0U;
    this->__Vdlyvset__x_flip_pipe__v8 = 0U;
    this->__Vdlyvset__x_flip_pipe__v9 = 0U;
    this->__Vdlyvset__x_flip_pipe__v10 = 0U;
    this->__Vdlyvset__x_flip_pipe__v11 = 0U;
    this->__Vdlyvset__x_flip_pipe__v12 = 0U;
    this->__Vdlyvset__x_flip_pipe__v13 = 0U;
    this->__Vdlyvset__x_flip_pipe__v14 = 0U;
    this->__Vdlyvset__x_flip_pipe__v15 = 0U;
    this->__Vdlyvset__x_flip_pipe__v16 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v0 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v1 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v2 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v3 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v4 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v5 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v6 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v7 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v8 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v9 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v10 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v11 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v12 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v13 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v14 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v15 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v16 = 0U;
    this->__Vdlyvset__total_angle_pipe__v0 = 0U;
    this->__Vdlyvset__total_angle_pipe__v2 = 0U;
    this->__Vdlyvset__total_angle_pipe__v4 = 0U;
    this->__Vdlyvset__total_angle_pipe__v6 = 0U;
    this->__Vdlyvset__total_angle_pipe__v8 = 0U;
    this->__Vdlyvset__total_angle_pipe__v10 = 0U;
    this->__Vdlyvset__total_angle_pipe__v12 = 0U;
    this->__Vdlyvset__total_angle_pipe__v14 = 0U;
    this->__Vdlyvset__total_angle_pipe__v16 = 0U;
    this->__Vdlyvset__total_angle_pipe__v18 = 0U;
    this->__Vdlyvset__total_angle_pipe__v20 = 0U;
    this->__Vdlyvset__total_angle_pipe__v22 = 0U;
    this->__Vdlyvset__total_angle_pipe__v24 = 0U;
    this->__Vdlyvset__total_angle_pipe__v26 = 0U;
    this->__Vdlyvset__total_angle_pipe__v28 = 0U;
    this->__Vdlyvset__total_angle_pipe__v30 = 0U;
    this->__Vdlyvset__total_angle_pipe__v32 = 0U;
    this->__Vdlyvset__x_pipe__v0 = 0U;
    this->__Vdlyvset__x_pipe__v1 = 0U;
    this->__Vdlyvset__x_pipe__v3 = 0U;
    this->__Vdlyvset__x_pipe__v5 = 0U;
    this->__Vdlyvset__x_pipe__v7 = 0U;
    this->__Vdlyvset__x_pipe__v9 = 0U;
    this->__Vdlyvset__x_pipe__v11 = 0U;
    this->__Vdlyvset__x_pipe__v13 = 0U;
    this->__Vdlyvset__x_pipe__v15 = 0U;
    this->__Vdlyvset__x_pipe__v17 = 0U;
    this->__Vdlyvset__x_pipe__v19 = 0U;
    this->__Vdlyvset__x_pipe__v21 = 0U;
    this->__Vdlyvset__x_pipe__v23 = 0U;
    this->__Vdlyvset__x_pipe__v25 = 0U;
    this->__Vdlyvset__x_pipe__v27 = 0U;
    this->__Vdlyvset__x_pipe__v29 = 0U;
    this->__Vdlyvset__x_pipe__v31 = 0U;
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvset__y_pipe__v0 = 1U;
    }
    this->__Vdlyvval__valid_pipe__v0 = ((~ (IData)(this->rst)) 
                                        & (IData)(this->data_angle_valid_in));
    this->__Vdlyvval__valid_pipe__v1 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [0U]);
    this->__Vdlyvval__valid_pipe__v2 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [1U]);
    this->__Vdlyvval__valid_pipe__v3 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [2U]);
    this->__Vdlyvval__valid_pipe__v4 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [3U]);
    this->__Vdlyvval__valid_pipe__v5 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [4U]);
    this->__Vdlyvval__valid_pipe__v6 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [5U]);
    this->__Vdlyvval__valid_pipe__v7 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [6U]);
    this->__Vdlyvval__valid_pipe__v8 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [7U]);
    this->__Vdlyvval__valid_pipe__v9 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [8U]);
    this->__Vdlyvval__valid_pipe__v10 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [9U]);
    this->__Vdlyvval__valid_pipe__v11 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xaU]);
    this->__Vdlyvval__valid_pipe__v12 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xbU]);
    this->__Vdlyvval__valid_pipe__v13 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xcU]);
    this->__Vdlyvval__valid_pipe__v14 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xdU]);
    this->__Vdlyvval__valid_pipe__v15 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xeU]);
    this->__Vdlyvval__valid_pipe__v16 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xfU]);
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v0 = (1U & (
                                                   (0x8000U 
                                                    & (IData)(this->angle))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->angle) 
                                                     >> 0xeU))
                                                    : 
                                                   ((IData)(this->angle) 
                                                    >> 0xeU)));
        this->__Vdlyvset__x_flip_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v1 = this->x_flip_pipe
            [0U];
        this->__Vdlyvset__x_flip_pipe__v1 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v2 = this->x_flip_pipe
            [1U];
        this->__Vdlyvset__x_flip_pipe__v2 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v3 = this->x_flip_pipe
            [2U];
        this->__Vdlyvset__x_flip_pipe__v3 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v4 = this->x_flip_pipe
            [3U];
        this->__Vdlyvset__x_flip_pipe__v4 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v5 = this->x_flip_pipe
            [4U];
        this->__Vdlyvset__x_flip_pipe__v5 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v6 = this->x_flip_pipe
            [5U];
        this->__Vdlyvset__x_flip_pipe__v6 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v7 = this->x_flip_pipe
            [6U];
        this->__Vdlyvset__x_flip_pipe__v7 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v8 = this->x_flip_pipe
            [7U];
        this->__Vdlyvset__x_flip_pipe__v8 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v9 = this->x_flip_pipe
            [8U];
        this->__Vdlyvset__x_flip_pipe__v9 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v10 = this->x_flip_pipe
            [9U];
        this->__Vdlyvset__x_flip_pipe__v10 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v11 = this->x_flip_pipe
            [0xaU];
        this->__Vdlyvset__x_flip_pipe__v11 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v12 = this->x_flip_pipe
            [0xbU];
        this->__Vdlyvset__x_flip_pipe__v12 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v13 = this->x_flip_pipe
            [0xcU];
        this->__Vdlyvset__x_flip_pipe__v13 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v14 = this->x_flip_pipe
            [0xdU];
        this->__Vdlyvset__x_flip_pipe__v14 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v15 = this->x_flip_pipe
            [0xeU];
        this->__Vdlyvset__x_flip_pipe__v15 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v16 = this->x_flip_pipe
            [0xfU];
        this->__Vdlyvset__x_flip_pipe__v16 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__desired_angle_pipe__v0 = 
            (0xffffU & ((0x8000U & (IData)(this->angle))
                         ? ((0x4000U & (IData)(this->angle))
                             ? (IData)(this->angle)
                             : ((IData)(0x8000U) - 
                                VL_EXTENDS_II(16,16, (IData)(this->angle))))
                         : ((0x4000U & (IData)(this->angle))
                             ? ((IData)(0x8000U) - 
                                VL_EXTENDS_II(16,16, (IData)(this->angle)))
                             : (IData)(this->angle))));
        this->__Vdlyvset__desired_angle_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvset__total_angle_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvset__x_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0U], this->desired_angle_pipe
                       [0U])) {
            this->__Vdlyvval__x_pipe__v1 = (0x1ffffU 
                                            & (this->x_pipe
                                               [0U] 
                                               - this->y_pipe
                                               [0U]));
            this->__Vdlyvset__x_pipe__v1 = 1U;
            this->__Vdlyvval__total_angle_pipe__v1 
                = (0xffffU & ((IData)(0x2000U) + this->total_angle_pipe
                              [0U]));
            this->__Vdlyvval__y_pipe__v1 = (0x1ffffU 
                                            & (this->y_pipe
                                               [0U] 
                                               + this->x_pipe
                                               [0U]));
        } else {
            this->__Vdlyvval__total_angle_pipe__v2 
                = (0xffffU & (this->total_angle_pipe
                              [0U] - (IData)(0x2000U)));
            this->__Vdlyvset__total_angle_pipe__v2 = 1U;
            this->__Vdlyvval__x_pipe__v2 = (0x1ffffU 
                                            & (this->x_pipe
                                               [0U] 
                                               + this->y_pipe
                                               [0U]));
            this->__Vdlyvval__y_pipe__v2 = (0x1ffffU 
                                            & (this->y_pipe
                                               [0U] 
                                               - this->x_pipe
                                               [0U]));
        }
        this->__Vdlyvval__desired_angle_pipe__v1 = 
            this->desired_angle_pipe[0U];
        this->__Vdlyvset__desired_angle_pipe__v1 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [1U], this->desired_angle_pipe
                       [1U])) {
            this->__Vdlyvval__x_pipe__v3 = (0x1ffffU 
                                            & (this->x_pipe
                                               [1U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [1U], 1U)));
            this->__Vdlyvset__x_pipe__v3 = 1U;
            this->__Vdlyvval__total_angle_pipe__v3 
                = (0xffffU & ((IData)(0x12e4U) + this->total_angle_pipe
                              [1U]));
            this->__Vdlyvval__y_pipe__v3 = (0x1ffffU 
                                            & (this->y_pipe
                                               [1U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [1U], 1U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v4 
                = (0xffffU & (this->total_angle_pipe
                              [1U] - (IData)(0x12e4U)));
            this->__Vdlyvset__total_angle_pipe__v4 = 1U;
            this->__Vdlyvval__x_pipe__v4 = (0x1ffffU 
                                            & (this->x_pipe
                                               [1U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [1U], 1U)));
            this->__Vdlyvval__y_pipe__v4 = (0x1ffffU 
                                            & (this->y_pipe
                                               [1U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [1U], 1U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v2 = 
            this->desired_angle_pipe[1U];
        this->__Vdlyvset__desired_angle_pipe__v2 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [2U], this->desired_angle_pipe
                       [2U])) {
            this->__Vdlyvval__x_pipe__v5 = (0x1ffffU 
                                            & (this->x_pipe
                                               [2U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [2U], 2U)));
            this->__Vdlyvset__x_pipe__v5 = 1U;
            this->__Vdlyvval__total_angle_pipe__v5 
                = (0xffffU & ((IData)(0x9fbU) + this->total_angle_pipe
                              [2U]));
            this->__Vdlyvval__y_pipe__v5 = (0x1ffffU 
                                            & (this->y_pipe
                                               [2U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [2U], 2U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v6 
                = (0xffffU & (this->total_angle_pipe
                              [2U] - (IData)(0x9fbU)));
            this->__Vdlyvset__total_angle_pipe__v6 = 1U;
            this->__Vdlyvval__x_pipe__v6 = (0x1ffffU 
                                            & (this->x_pipe
                                               [2U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [2U], 2U)));
            this->__Vdlyvval__y_pipe__v6 = (0x1ffffU 
                                            & (this->y_pipe
                                               [2U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [2U], 2U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v3 = 
            this->desired_angle_pipe[2U];
        this->__Vdlyvset__desired_angle_pipe__v3 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [3U], this->desired_angle_pipe
                       [3U])) {
            this->__Vdlyvval__x_pipe__v7 = (0x1ffffU 
                                            & (this->x_pipe
                                               [3U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [3U], 3U)));
            this->__Vdlyvset__x_pipe__v7 = 1U;
            this->__Vdlyvval__total_angle_pipe__v7 
                = (0xffffU & ((IData)(0x511U) + this->total_angle_pipe
                              [3U]));
            this->__Vdlyvval__y_pipe__v7 = (0x1ffffU 
                                            & (this->y_pipe
                                               [3U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [3U], 3U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v8 
                = (0xffffU & (this->total_angle_pipe
                              [3U] - (IData)(0x511U)));
            this->__Vdlyvset__total_angle_pipe__v8 = 1U;
            this->__Vdlyvval__x_pipe__v8 = (0x1ffffU 
                                            & (this->x_pipe
                                               [3U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [3U], 3U)));
            this->__Vdlyvval__y_pipe__v8 = (0x1ffffU 
                                            & (this->y_pipe
                                               [3U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [3U], 3U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v4 = 
            this->desired_angle_pipe[3U];
        this->__Vdlyvset__desired_angle_pipe__v4 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [4U], this->desired_angle_pipe
                       [4U])) {
            this->__Vdlyvval__x_pipe__v9 = (0x1ffffU 
                                            & (this->x_pipe
                                               [4U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [4U], 4U)));
            this->__Vdlyvset__x_pipe__v9 = 1U;
            this->__Vdlyvval__total_angle_pipe__v9 
                = (0xffffU & ((IData)(0x28bU) + this->total_angle_pipe
                              [4U]));
            this->__Vdlyvval__y_pipe__v9 = (0x1ffffU 
                                            & (this->y_pipe
                                               [4U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [4U], 4U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v10 
                = (0xffffU & (this->total_angle_pipe
                              [4U] - (IData)(0x28bU)));
            this->__Vdlyvset__total_angle_pipe__v10 = 1U;
            this->__Vdlyvval__x_pipe__v10 = (0x1ffffU 
                                             & (this->x_pipe
                                                [4U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [4U], 4U)));
            this->__Vdlyvval__y_pipe__v10 = (0x1ffffU 
                                             & (this->y_pipe
                                                [4U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [4U], 4U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v5 = 
            this->desired_angle_pipe[4U];
        this->__Vdlyvset__desired_angle_pipe__v5 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [5U], this->desired_angle_pipe
                       [5U])) {
            this->__Vdlyvval__x_pipe__v11 = (0x1ffffU 
                                             & (this->x_pipe
                                                [5U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [5U], 5U)));
            this->__Vdlyvset__x_pipe__v11 = 1U;
            this->__Vdlyvval__total_angle_pipe__v11 
                = (0xffffU & ((IData)(0x146U) + this->total_angle_pipe
                              [5U]));
            this->__Vdlyvval__y_pipe__v11 = (0x1ffffU 
                                             & (this->y_pipe
                                                [5U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [5U], 5U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v12 
                = (0xffffU & (this->total_angle_pipe
                              [5U] - (IData)(0x146U)));
            this->__Vdlyvset__total_angle_pipe__v12 = 1U;
            this->__Vdlyvval__x_pipe__v12 = (0x1ffffU 
                                             & (this->x_pipe
                                                [5U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [5U], 5U)));
            this->__Vdlyvval__y_pipe__v12 = (0x1ffffU 
                                             & (this->y_pipe
                                                [5U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [5U], 5U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v6 = 
            this->desired_angle_pipe[5U];
        this->__Vdlyvset__desired_angle_pipe__v6 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [6U], this->desired_angle_pipe
                       [6U])) {
            this->__Vdlyvval__x_pipe__v13 = (0x1ffffU 
                                             & (this->x_pipe
                                                [6U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [6U], 6U)));
            this->__Vdlyvset__x_pipe__v13 = 1U;
            this->__Vdlyvval__total_angle_pipe__v13 
                = (0xffffU & ((IData)(0xa3U) + this->total_angle_pipe
                              [6U]));
            this->__Vdlyvval__y_pipe__v13 = (0x1ffffU 
                                             & (this->y_pipe
                                                [6U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [6U], 6U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v14 
                = (0xffffU & (this->total_angle_pipe
                              [6U] - (IData)(0xa3U)));
            this->__Vdlyvset__total_angle_pipe__v14 = 1U;
            this->__Vdlyvval__x_pipe__v14 = (0x1ffffU 
                                             & (this->x_pipe
                                                [6U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [6U], 6U)));
            this->__Vdlyvval__y_pipe__v14 = (0x1ffffU 
                                             & (this->y_pipe
                                                [6U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [6U], 6U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v7 = 
            this->desired_angle_pipe[6U];
        this->__Vdlyvset__desired_angle_pipe__v7 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [7U], this->desired_angle_pipe
                       [7U])) {
            this->__Vdlyvval__x_pipe__v15 = (0x1ffffU 
                                             & (this->x_pipe
                                                [7U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [7U], 7U)));
            this->__Vdlyvset__x_pipe__v15 = 1U;
            this->__Vdlyvval__total_angle_pipe__v15 
                = (0xffffU & ((IData)(0x51U) + this->total_angle_pipe
                              [7U]));
            this->__Vdlyvval__y_pipe__v15 = (0x1ffffU 
                                             & (this->y_pipe
                                                [7U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [7U], 7U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v16 
                = (0xffffU & (this->total_angle_pipe
                              [7U] - (IData)(0x51U)));
            this->__Vdlyvset__total_angle_pipe__v16 = 1U;
            this->__Vdlyvval__x_pipe__v16 = (0x1ffffU 
                                             & (this->x_pipe
                                                [7U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [7U], 7U)));
            this->__Vdlyvval__y_pipe__v16 = (0x1ffffU 
                                             & (this->y_pipe
                                                [7U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [7U], 7U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v8 = 
            this->desired_angle_pipe[7U];
        this->__Vdlyvset__desired_angle_pipe__v8 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [8U], this->desired_angle_pipe
                       [8U])) {
            this->__Vdlyvval__x_pipe__v17 = (0x1ffffU 
                                             & (this->x_pipe
                                                [8U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [8U], 8U)));
            this->__Vdlyvset__x_pipe__v17 = 1U;
            this->__Vdlyvval__total_angle_pipe__v17 
                = (0xffffU & ((IData)(0x29U) + this->total_angle_pipe
                              [8U]));
            this->__Vdlyvval__y_pipe__v17 = (0x1ffffU 
                                             & (this->y_pipe
                                                [8U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [8U], 8U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v18 
                = (0xffffU & (this->total_angle_pipe
                              [8U] - (IData)(0x29U)));
            this->__Vdlyvset__total_angle_pipe__v18 = 1U;
            this->__Vdlyvval__x_pipe__v18 = (0x1ffffU 
                                             & (this->x_pipe
                                                [8U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [8U], 8U)));
            this->__Vdlyvval__y_pipe__v18 = (0x1ffffU 
                                             & (this->y_pipe
                                                [8U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [8U], 8U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v9 = 
            this->desired_angle_pipe[8U];
        this->__Vdlyvset__desired_angle_pipe__v9 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [9U], this->desired_angle_pipe
                       [9U])) {
            this->__Vdlyvval__x_pipe__v19 = (0x1ffffU 
                                             & (this->x_pipe
                                                [9U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [9U], 9U)));
            this->__Vdlyvset__x_pipe__v19 = 1U;
            this->__Vdlyvval__total_angle_pipe__v19 
                = (0xffffU & ((IData)(0x14U) + this->total_angle_pipe
                              [9U]));
            this->__Vdlyvval__y_pipe__v19 = (0x1ffffU 
                                             & (this->y_pipe
                                                [9U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [9U], 9U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v20 
                = (0xffffU & (this->total_angle_pipe
                              [9U] - (IData)(0x14U)));
            this->__Vdlyvset__total_angle_pipe__v20 = 1U;
            this->__Vdlyvval__x_pipe__v20 = (0x1ffffU 
                                             & (this->x_pipe
                                                [9U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [9U], 9U)));
            this->__Vdlyvval__y_pipe__v20 = (0x1ffffU 
                                             & (this->y_pipe
                                                [9U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [9U], 9U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v10 = 
            this->desired_angle_pipe[9U];
        this->__Vdlyvset__desired_angle_pipe__v10 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xaU], this->desired_angle_pipe
                       [0xaU])) {
            this->__Vdlyvval__x_pipe__v21 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xaU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xaU], 0xaU)));
            this->__Vdlyvset__x_pipe__v21 = 1U;
            this->__Vdlyvval__total_angle_pipe__v21 
                = (0xffffU & ((IData)(0xaU) + this->total_angle_pipe
                              [0xaU]));
            this->__Vdlyvval__y_pipe__v21 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xaU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xaU], 0xaU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v22 
                = (0xffffU & (this->total_angle_pipe
                              [0xaU] - (IData)(0xaU)));
            this->__Vdlyvset__total_angle_pipe__v22 = 1U;
            this->__Vdlyvval__x_pipe__v22 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xaU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xaU], 0xaU)));
            this->__Vdlyvval__y_pipe__v22 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xaU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xaU], 0xaU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v11 = 
            this->desired_angle_pipe[0xaU];
        this->__Vdlyvset__desired_angle_pipe__v11 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xbU], this->desired_angle_pipe
                       [0xbU])) {
            this->__Vdlyvval__x_pipe__v23 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xbU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xbU], 0xbU)));
            this->__Vdlyvset__x_pipe__v23 = 1U;
            this->__Vdlyvval__total_angle_pipe__v23 
                = (0xffffU & ((IData)(5U) + this->total_angle_pipe
                              [0xbU]));
            this->__Vdlyvval__y_pipe__v23 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xbU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xbU], 0xbU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v24 
                = (0xffffU & (this->total_angle_pipe
                              [0xbU] - (IData)(5U)));
            this->__Vdlyvset__total_angle_pipe__v24 = 1U;
            this->__Vdlyvval__x_pipe__v24 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xbU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xbU], 0xbU)));
            this->__Vdlyvval__y_pipe__v24 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xbU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xbU], 0xbU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v12 = 
            this->desired_angle_pipe[0xbU];
        this->__Vdlyvset__desired_angle_pipe__v12 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xcU], this->desired_angle_pipe
                       [0xcU])) {
            this->__Vdlyvval__x_pipe__v25 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xcU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xcU], 0xcU)));
            this->__Vdlyvset__x_pipe__v25 = 1U;
            this->__Vdlyvval__total_angle_pipe__v25 
                = (0xffffU & ((IData)(3U) + this->total_angle_pipe
                              [0xcU]));
            this->__Vdlyvval__y_pipe__v25 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xcU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xcU], 0xcU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v26 
                = (0xffffU & (this->total_angle_pipe
                              [0xcU] - (IData)(3U)));
            this->__Vdlyvset__total_angle_pipe__v26 = 1U;
            this->__Vdlyvval__x_pipe__v26 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xcU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xcU], 0xcU)));
            this->__Vdlyvval__y_pipe__v26 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xcU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xcU], 0xcU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v13 = 
            this->desired_angle_pipe[0xcU];
        this->__Vdlyvset__desired_angle_pipe__v13 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xdU], this->desired_angle_pipe
                       [0xdU])) {
            this->__Vdlyvval__x_pipe__v27 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xdU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xdU], 0xdU)));
            this->__Vdlyvset__x_pipe__v27 = 1U;
            this->__Vdlyvval__total_angle_pipe__v27 
                = (0xffffU & ((IData)(1U) + this->total_angle_pipe
                              [0xdU]));
            this->__Vdlyvval__y_pipe__v27 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xdU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xdU], 0xdU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v28 
                = (0xffffU & (this->total_angle_pipe
                              [0xdU] - (IData)(1U)));
            this->__Vdlyvset__total_angle_pipe__v28 = 1U;
            this->__Vdlyvval__x_pipe__v28 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xdU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xdU], 0xdU)));
            this->__Vdlyvval__y_pipe__v28 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xdU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xdU], 0xdU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v14 = 
            this->desired_angle_pipe[0xdU];
        this->__Vdlyvset__desired_angle_pipe__v14 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xeU], this->desired_angle_pipe
                       [0xeU])) {
            this->__Vdlyvval__x_pipe__v29 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xeU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xeU], 0xeU)));
            this->__Vdlyvset__x_pipe__v29 = 1U;
            this->__Vdlyvval__total_angle_pipe__v29 
                = (0xffffU & ((IData)(1U) + this->total_angle_pipe
                              [0xeU]));
            this->__Vdlyvval__y_pipe__v29 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xeU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xeU], 0xeU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v30 
                = (0xffffU & (this->total_angle_pipe
                              [0xeU] - (IData)(1U)));
            this->__Vdlyvset__total_angle_pipe__v30 = 1U;
            this->__Vdlyvval__x_pipe__v30 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xeU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xeU], 0xeU)));
            this->__Vdlyvval__y_pipe__v30 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xeU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xeU], 0xeU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v15 = 
            this->desired_angle_pipe[0xeU];
        this->__Vdlyvset__desired_angle_pipe__v15 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xfU], this->desired_angle_pipe
                       [0xfU])) {
            this->__Vdlyvval__x_pipe__v31 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xfU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xfU], 0xfU)));
            this->__Vdlyvset__x_pipe__v31 = 1U;
            this->__Vdlyvval__total_angle_pipe__v31 
                = this->total_angle_pipe[0xfU];
            this->__Vdlyvval__y_pipe__v31 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xfU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xfU], 0xfU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v32 
                = this->total_angle_pipe[0xfU];
            this->__Vdlyvset__total_angle_pipe__v32 = 1U;
            this->__Vdlyvval__x_pipe__v32 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xfU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xfU], 0xfU)));
            this->__Vdlyvval__y_pipe__v32 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xfU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xfU], 0xfU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v16 = 
            this->desired_angle_pipe[0xfU];
        this->__Vdlyvset__desired_angle_pipe__v16 = 1U;
    }
    this->valid_pipe[0U] = this->__Vdlyvval__valid_pipe__v0;
    this->valid_pipe[1U] = this->__Vdlyvval__valid_pipe__v1;
    this->valid_pipe[2U] = this->__Vdlyvval__valid_pipe__v2;
    this->valid_pipe[3U] = this->__Vdlyvval__valid_pipe__v3;
    this->valid_pipe[4U] = this->__Vdlyvval__valid_pipe__v4;
    this->valid_pipe[5U] = this->__Vdlyvval__valid_pipe__v5;
    this->valid_pipe[6U] = this->__Vdlyvval__valid_pipe__v6;
    this->valid_pipe[7U] = this->__Vdlyvval__valid_pipe__v7;
    this->valid_pipe[8U] = this->__Vdlyvval__valid_pipe__v8;
    this->valid_pipe[9U] = this->__Vdlyvval__valid_pipe__v9;
    this->valid_pipe[0xaU] = this->__Vdlyvval__valid_pipe__v10;
    this->valid_pipe[0xbU] = this->__Vdlyvval__valid_pipe__v11;
    this->valid_pipe[0xcU] = this->__Vdlyvval__valid_pipe__v12;
    this->valid_pipe[0xdU] = this->__Vdlyvval__valid_pipe__v13;
    this->valid_pipe[0xeU] = this->__Vdlyvval__valid_pipe__v14;
    this->valid_pipe[0xfU] = this->__Vdlyvval__valid_pipe__v15;
    this->valid_pipe[0x10U] = this->__Vdlyvval__valid_pipe__v16;
    if (this->__Vdlyvset__x_flip_pipe__v0) {
        this->x_flip_pipe[0U] = this->__Vdlyvval__x_flip_pipe__v0;
    }
    if (this->__Vdlyvset__x_flip_pipe__v1) {
        this->x_flip_pipe[1U] = this->__Vdlyvval__x_flip_pipe__v1;
    }
    if (this->__Vdlyvset__x_flip_pipe__v2) {
        this->x_flip_pipe[2U] = this->__Vdlyvval__x_flip_pipe__v2;
    }
    if (this->__Vdlyvset__x_flip_pipe__v3) {
        this->x_flip_pipe[3U] = this->__Vdlyvval__x_flip_pipe__v3;
    }
    if (this->__Vdlyvset__x_flip_pipe__v4) {
        this->x_flip_pipe[4U] = this->__Vdlyvval__x_flip_pipe__v4;
    }
    if (this->__Vdlyvset__x_flip_pipe__v5) {
        this->x_flip_pipe[5U] = this->__Vdlyvval__x_flip_pipe__v5;
    }
    if (this->__Vdlyvset__x_flip_pipe__v6) {
        this->x_flip_pipe[6U] = this->__Vdlyvval__x_flip_pipe__v6;
    }
    if (this->__Vdlyvset__x_flip_pipe__v7) {
        this->x_flip_pipe[7U] = this->__Vdlyvval__x_flip_pipe__v7;
    }
    if (this->__Vdlyvset__x_flip_pipe__v8) {
        this->x_flip_pipe[8U] = this->__Vdlyvval__x_flip_pipe__v8;
    }
    if (this->__Vdlyvset__x_flip_pipe__v9) {
        this->x_flip_pipe[9U] = this->__Vdlyvval__x_flip_pipe__v9;
    }
    if (this->__Vdlyvset__x_flip_pipe__v10) {
        this->x_flip_pipe[0xaU] = this->__Vdlyvval__x_flip_pipe__v10;
    }
    if (this->__Vdlyvset__x_flip_pipe__v11) {
        this->x_flip_pipe[0xbU] = this->__Vdlyvval__x_flip_pipe__v11;
    }
    if (this->__Vdlyvset__x_flip_pipe__v12) {
        this->x_flip_pipe[0xcU] = this->__Vdlyvval__x_flip_pipe__v12;
    }
    if (this->__Vdlyvset__x_flip_pipe__v13) {
        this->x_flip_pipe[0xdU] = this->__Vdlyvval__x_flip_pipe__v13;
    }
    if (this->__Vdlyvset__x_flip_pipe__v14) {
        this->x_flip_pipe[0xeU] = this->__Vdlyvval__x_flip_pipe__v14;
    }
    if (this->__Vdlyvset__x_flip_pipe__v15) {
        this->x_flip_pipe[0xfU] = this->__Vdlyvval__x_flip_pipe__v15;
    }
    if (this->__Vdlyvset__x_flip_pipe__v16) {
        this->x_flip_pipe[0x10U] = this->__Vdlyvval__x_flip_pipe__v16;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v0) {
        this->desired_angle_pipe[0U] = this->__Vdlyvval__desired_angle_pipe__v0;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v1) {
        this->desired_angle_pipe[1U] = this->__Vdlyvval__desired_angle_pipe__v1;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v2) {
        this->desired_angle_pipe[2U] = this->__Vdlyvval__desired_angle_pipe__v2;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v3) {
        this->desired_angle_pipe[3U] = this->__Vdlyvval__desired_angle_pipe__v3;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v4) {
        this->desired_angle_pipe[4U] = this->__Vdlyvval__desired_angle_pipe__v4;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v5) {
        this->desired_angle_pipe[5U] = this->__Vdlyvval__desired_angle_pipe__v5;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v6) {
        this->desired_angle_pipe[6U] = this->__Vdlyvval__desired_angle_pipe__v6;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v7) {
        this->desired_angle_pipe[7U] = this->__Vdlyvval__desired_angle_pipe__v7;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v8) {
        this->desired_angle_pipe[8U] = this->__Vdlyvval__desired_angle_pipe__v8;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v9) {
        this->desired_angle_pipe[9U] = this->__Vdlyvval__desired_angle_pipe__v9;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v10) {
        this->desired_angle_pipe[0xaU] = this->__Vdlyvval__desired_angle_pipe__v10;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v11) {
        this->desired_angle_pipe[0xbU] = this->__Vdlyvval__desired_angle_pipe__v11;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v12) {
        this->desired_angle_pipe[0xcU] = this->__Vdlyvval__desired_angle_pipe__v12;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v13) {
        this->desired_angle_pipe[0xdU] = this->__Vdlyvval__desired_angle_pipe__v13;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v14) {
        this->desired_angle_pipe[0xeU] = this->__Vdlyvval__desired_angle_pipe__v14;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v15) {
        this->desired_angle_pipe[0xfU] = this->__Vdlyvval__desired_angle_pipe__v15;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v16) {
        this->desired_angle_pipe[0x10U] = this->__Vdlyvval__desired_angle_pipe__v16;
    }
    if (this->__Vdlyvset__total_angle_pipe__v0) {
        this->total_angle_pipe[0U] = 0U;
    }
    if (this->__Vdlyvset__x_pipe__v1) {
        this->total_angle_pipe[1U] = this->__Vdlyvval__total_angle_pipe__v1;
    }
    if (this->__Vdlyvset__total_angle_pipe__v2) {
        this->total_angle_pipe[1U] = this->__Vdlyvval__total_angle_pipe__v2;
    }
    if (this->__Vdlyvset__x_pipe__v3) {
        this->total_angle_pipe[2U] = this->__Vdlyvval__total_angle_pipe__v3;
    }
    if (this->__Vdlyvset__total_angle_pipe__v4) {
        this->total_angle_pipe[2U] = this->__Vdlyvval__total_angle_pipe__v4;
    }
    if (this->__Vdlyvset__x_pipe__v5) {
        this->total_angle_pipe[3U] = this->__Vdlyvval__total_angle_pipe__v5;
    }
    if (this->__Vdlyvset__total_angle_pipe__v6) {
        this->total_angle_pipe[3U] = this->__Vdlyvval__total_angle_pipe__v6;
    }
    if (this->__Vdlyvset__x_pipe__v7) {
        this->total_angle_pipe[4U] = this->__Vdlyvval__total_angle_pipe__v7;
    }
    if (this->__Vdlyvset__total_angle_pipe__v8) {
        this->total_angle_pipe[4U] = this->__Vdlyvval__total_angle_pipe__v8;
    }
    if (this->__Vdlyvset__x_pipe__v9) {
        this->total_angle_pipe[5U] = this->__Vdlyvval__total_angle_pipe__v9;
    }
    if (this->__Vdlyvset__total_angle_pipe__v10) {
        this->total_angle_pipe[5U] = this->__Vdlyvval__total_angle_pipe__v10;
    }
    if (this->__Vdlyvset__x_pipe__v11) {
        this->total_angle_pipe[6U] = this->__Vdlyvval__total_angle_pipe__v11;
    }
    if (this->__Vdlyvset__total_angle_pipe__v12) {
        this->total_angle_pipe[6U] = this->__Vdlyvval__total_angle_pipe__v12;
    }
    if (this->__Vdlyvset__x_pipe__v13) {
        this->total_angle_pipe[7U] = this->__Vdlyvval__total_angle_pipe__v13;
    }
    if (this->__Vdlyvset__total_angle_pipe__v14) {
        this->total_angle_pipe[7U] = this->__Vdlyvval__total_angle_pipe__v14;
    }
    if (this->__Vdlyvset__x_pipe__v15) {
        this->total_angle_pipe[8U] = this->__Vdlyvval__total_angle_pipe__v15;
    }
    if (this->__Vdlyvset__total_angle_pipe__v16) {
        this->total_angle_pipe[8U] = this->__Vdlyvval__total_angle_pipe__v16;
    }
    if (this->__Vdlyvset__x_pipe__v17) {
        this->total_angle_pipe[9U] = this->__Vdlyvval__total_angle_pipe__v17;
    }
    if (this->__Vdlyvset__total_angle_pipe__v18) {
        this->total_angle_pipe[9U] = this->__Vdlyvval__total_angle_pipe__v18;
    }
    if (this->__Vdlyvset__x_pipe__v19) {
        this->total_angle_pipe[0xaU] = this->__Vdlyvval__total_angle_pipe__v19;
    }
    if (this->__Vdlyvset__total_angle_pipe__v20) {
        this->total_angle_pipe[0xaU] = this->__Vdlyvval__total_angle_pipe__v20;
    }
    if (this->__Vdlyvset__x_pipe__v21) {
        this->total_angle_pipe[0xbU] = this->__Vdlyvval__total_angle_pipe__v21;
    }
    if (this->__Vdlyvset__total_angle_pipe__v22) {
        this->total_angle_pipe[0xbU] = this->__Vdlyvval__total_angle_pipe__v22;
    }
    if (this->__Vdlyvset__x_pipe__v23) {
        this->total_angle_pipe[0xcU] = this->__Vdlyvval__total_angle_pipe__v23;
    }
    if (this->__Vdlyvset__total_angle_pipe__v24) {
        this->total_angle_pipe[0xcU] = this->__Vdlyvval__total_angle_pipe__v24;
    }
    if (this->__Vdlyvset__x_pipe__v25) {
        this->total_angle_pipe[0xdU] = this->__Vdlyvval__total_angle_pipe__v25;
    }
    if (this->__Vdlyvset__total_angle_pipe__v26) {
        this->total_angle_pipe[0xdU] = this->__Vdlyvval__total_angle_pipe__v26;
    }
    if (this->__Vdlyvset__x_pipe__v27) {
        this->total_angle_pipe[0xeU] = this->__Vdlyvval__total_angle_pipe__v27;
    }
    if (this->__Vdlyvset__total_angle_pipe__v28) {
        this->total_angle_pipe[0xeU] = this->__Vdlyvval__total_angle_pipe__v28;
    }
    if (this->__Vdlyvset__x_pipe__v29) {
        this->total_angle_pipe[0xfU] = this->__Vdlyvval__total_angle_pipe__v29;
    }
    if (this->__Vdlyvset__total_angle_pipe__v30) {
        this->total_angle_pipe[0xfU] = this->__Vdlyvval__total_angle_pipe__v30;
    }
    if (this->__Vdlyvset__x_pipe__v31) {
        this->total_angle_pipe[0x10U] = this->__Vdlyvval__total_angle_pipe__v31;
    }
    if (this->__Vdlyvset__total_angle_pipe__v32) {
        this->total_angle_pipe[0x10U] = this->__Vdlyvval__total_angle_pipe__v32;
    }
    if (this->__Vdlyvset__y_pipe__v0) {
        this->y_pipe[0U] = 0U;
    }
    if (this->__Vdlyvset__x_pipe__v1) {
        this->y_pipe[1U] = this->__Vdlyvval__y_pipe__v1;
    }
    if (this->__Vdlyvset__total_angle_pipe__v2) {
        this->y_pipe[1U] = this->__Vdlyvval__y_pipe__v2;
    }
    if (this->__Vdlyvset__x_pipe__v3) {
        this->y_pipe[2U] = this->__Vdlyvval__y_pipe__v3;
    }
    if (this->__Vdlyvset__total_angle_pipe__v4) {
        this->y_pipe[2U] = this->__Vdlyvval__y_pipe__v4;
    }
    if (this->__Vdlyvset__x_pipe__v5) {
        this->y_pipe[3U] = this->__Vdlyvval__y_pipe__v5;
    }
    if (this->__Vdlyvset__total_angle_pipe__v6) {
        this->y_pipe[3U] = this->__Vdlyvval__y_pipe__v6;
    }
    if (this->__Vdlyvset__x_pipe__v7) {
        this->y_pipe[4U] = this->__Vdlyvval__y_pipe__v7;
    }
    if (this->__Vdlyvset__total_angle_pipe__v8) {
        this->y_pipe[4U] = this->__Vdlyvval__y_pipe__v8;
    }
    if (this->__Vdlyvset__x_pipe__v9) {
        this->y_pipe[5U] = this->__Vdlyvval__y_pipe__v9;
    }
    if (this->__Vdlyvset__total_angle_pipe__v10) {
        this->y_pipe[5U] = this->__Vdlyvval__y_pipe__v10;
    }
    if (this->__Vdlyvset__x_pipe__v11) {
        this->y_pipe[6U] = this->__Vdlyvval__y_pipe__v11;
    }
    if (this->__Vdlyvset__total_angle_pipe__v12) {
        this->y_pipe[6U] = this->__Vdlyvval__y_pipe__v12;
    }
    if (this->__Vdlyvset__x_pipe__v13) {
        this->y_pipe[7U] = this->__Vdlyvval__y_pipe__v13;
    }
    if (this->__Vdlyvset__total_angle_pipe__v14) {
        this->y_pipe[7U] = this->__Vdlyvval__y_pipe__v14;
    }
    if (this->__Vdlyvset__x_pipe__v15) {
        this->y_pipe[8U] = this->__Vdlyvval__y_pipe__v15;
    }
    if (this->__Vdlyvset__total_angle_pipe__v16) {
        this->y_pipe[8U] = this->__Vdlyvval__y_pipe__v16;
    }
    if (this->__Vdlyvset__x_pipe__v17) {
        this->y_pipe[9U] = this->__Vdlyvval__y_pipe__v17;
    }
    if (this->__Vdlyvset__total_angle_pipe__v18) {
        this->y_pipe[9U] = this->__Vdlyvval__y_pipe__v18;
    }
    if (this->__Vdlyvset__x_pipe__v19) {
        this->y_pipe[0xaU] = this->__Vdlyvval__y_pipe__v19;
    }
    if (this->__Vdlyvset__total_angle_pipe__v20) {
        this->y_pipe[0xaU] = this->__Vdlyvval__y_pipe__v20;
    }
    if (this->__Vdlyvset__x_pipe__v21) {
        this->y_pipe[0xbU] = this->__Vdlyvval__y_pipe__v21;
    }
    if (this->__Vdlyvset__total_angle_pipe__v22) {
        this->y_pipe[0xbU] = this->__Vdlyvval__y_pipe__v22;
    }
    if (this->__Vdlyvset__x_pipe__v23) {
        this->y_pipe[0xcU] = this->__Vdlyvval__y_pipe__v23;
    }
    if (this->__Vdlyvset__total_angle_pipe__v24) {
        this->y_pipe[0xcU] = this->__Vdlyvval__y_pipe__v24;
    }
    if (this->__Vdlyvset__x_pipe__v25) {
        this->y_pipe[0xdU] = this->__Vdlyvval__y_pipe__v25;
    }
    if (this->__Vdlyvset__total_angle_pipe__v26) {
        this->y_pipe[0xdU] = this->__Vdlyvval__y_pipe__v26;
    }
    if (this->__Vdlyvset__x_pipe__v27) {
        this->y_pipe[0xeU] = this->__Vdlyvval__y_pipe__v27;
    }
    if (this->__Vdlyvset__total_angle_pipe__v28) {
        this->y_pipe[0xeU] = this->__Vdlyvval__y_pipe__v28;
    }
    if (this->__Vdlyvset__x_pipe__v29) {
        this->y_pipe[0xfU] = this->__Vdlyvval__y_pipe__v29;
    }
    if (this->__Vdlyvset__total_angle_pipe__v30) {
        this->y_pipe[0xfU] = this->__Vdlyvval__y_pipe__v30;
    }
    if (this->__Vdlyvset__x_pipe__v31) {
        this->y_pipe[0x10U] = this->__Vdlyvval__y_pipe__v31;
    }
    if (this->__Vdlyvset__total_angle_pipe__v32) {
        this->y_pipe[0x10U] = this->__Vdlyvval__y_pipe__v32;
    }
    if (this->__Vdlyvset__x_pipe__v0) {
        this->x_pipe[0U] = 0x4dbaU;
    }
    if (this->__Vdlyvset__x_pipe__v1) {
        this->x_pipe[1U] = this->__Vdlyvval__x_pipe__v1;
    }
    if (this->__Vdlyvset__total_angle_pipe__v2) {
        this->x_pipe[1U] = this->__Vdlyvval__x_pipe__v2;
    }
    if (this->__Vdlyvset__x_pipe__v3) {
        this->x_pipe[2U] = this->__Vdlyvval__x_pipe__v3;
    }
    if (this->__Vdlyvset__total_angle_pipe__v4) {
        this->x_pipe[2U] = this->__Vdlyvval__x_pipe__v4;
    }
    if (this->__Vdlyvset__x_pipe__v5) {
        this->x_pipe[3U] = this->__Vdlyvval__x_pipe__v5;
    }
    if (this->__Vdlyvset__total_angle_pipe__v6) {
        this->x_pipe[3U] = this->__Vdlyvval__x_pipe__v6;
    }
    if (this->__Vdlyvset__x_pipe__v7) {
        this->x_pipe[4U] = this->__Vdlyvval__x_pipe__v7;
    }
    if (this->__Vdlyvset__total_angle_pipe__v8) {
        this->x_pipe[4U] = this->__Vdlyvval__x_pipe__v8;
    }
    if (this->__Vdlyvset__x_pipe__v9) {
        this->x_pipe[5U] = this->__Vdlyvval__x_pipe__v9;
    }
    if (this->__Vdlyvset__total_angle_pipe__v10) {
        this->x_pipe[5U] = this->__Vdlyvval__x_pipe__v10;
    }
    if (this->__Vdlyvset__x_pipe__v11) {
        this->x_pipe[6U] = this->__Vdlyvval__x_pipe__v11;
    }
    if (this->__Vdlyvset__total_angle_pipe__v12) {
        this->x_pipe[6U] = this->__Vdlyvval__x_pipe__v12;
    }
    if (this->__Vdlyvset__x_pipe__v13) {
        this->x_pipe[7U] = this->__Vdlyvval__x_pipe__v13;
    }
    if (this->__Vdlyvset__total_angle_pipe__v14) {
        this->x_pipe[7U] = this->__Vdlyvval__x_pipe__v14;
    }
    if (this->__Vdlyvset__x_pipe__v15) {
        this->x_pipe[8U] = this->__Vdlyvval__x_pipe__v15;
    }
    if (this->__Vdlyvset__total_angle_pipe__v16) {
        this->x_pipe[8U] = this->__Vdlyvval__x_pipe__v16;
    }
    if (this->__Vdlyvset__x_pipe__v17) {
        this->x_pipe[9U] = this->__Vdlyvval__x_pipe__v17;
    }
    if (this->__Vdlyvset__total_angle_pipe__v18) {
        this->x_pipe[9U] = this->__Vdlyvval__x_pipe__v18;
    }
    if (this->__Vdlyvset__x_pipe__v19) {
        this->x_pipe[0xaU] = this->__Vdlyvval__x_pipe__v19;
    }
    if (this->__Vdlyvset__total_angle_pipe__v20) {
        this->x_pipe[0xaU] = this->__Vdlyvval__x_pipe__v20;
    }
    if (this->__Vdlyvset__x_pipe__v21) {
        this->x_pipe[0xbU] = this->__Vdlyvval__x_pipe__v21;
    }
    if (this->__Vdlyvset__total_angle_pipe__v22) {
        this->x_pipe[0xbU] = this->__Vdlyvval__x_pipe__v22;
    }
    if (this->__Vdlyvset__x_pipe__v23) {
        this->x_pipe[0xcU] = this->__Vdlyvval__x_pipe__v23;
    }
    if (this->__Vdlyvset__total_angle_pipe__v24) {
        this->x_pipe[0xcU] = this->__Vdlyvval__x_pipe__v24;
    }
    if (this->__Vdlyvset__x_pipe__v25) {
        this->x_pipe[0xdU] = this->__Vdlyvval__x_pipe__v25;
    }
    if (this->__Vdlyvset__total_angle_pipe__v26) {
        this->x_pipe[0xdU] = this->__Vdlyvval__x_pipe__v26;
    }
    if (this->__Vdlyvset__x_pipe__v27) {
        this->x_pipe[0xeU] = this->__Vdlyvval__x_pipe__v27;
    }
    if (this->__Vdlyvset__total_angle_pipe__v28) {
        this->x_pipe[0xeU] = this->__Vdlyvval__x_pipe__v28;
    }
    if (this->__Vdlyvset__x_pipe__v29) {
        this->x_pipe[0xfU] = this->__Vdlyvval__x_pipe__v29;
    }
    if (this->__Vdlyvset__total_angle_pipe__v30) {
        this->x_pipe[0xfU] = this->__Vdlyvval__x_pipe__v30;
    }
    if (this->__Vdlyvset__x_pipe__v31) {
        this->x_pipe[0x10U] = this->__Vdlyvval__x_pipe__v31;
    }
    if (this->__Vdlyvset__total_angle_pipe__v32) {
        this->x_pipe[0x10U] = this->__Vdlyvval__x_pipe__v32;
    }
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

VL_INLINE_OPT void Vtop_cordic_cossin__W10_N10::_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic__14(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin__W10_N10::_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic__14\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__y_pipe__v0 = 0U;
    this->__Vdlyvset__x_flip_pipe__v0 = 0U;
    this->__Vdlyvset__x_flip_pipe__v1 = 0U;
    this->__Vdlyvset__x_flip_pipe__v2 = 0U;
    this->__Vdlyvset__x_flip_pipe__v3 = 0U;
    this->__Vdlyvset__x_flip_pipe__v4 = 0U;
    this->__Vdlyvset__x_flip_pipe__v5 = 0U;
    this->__Vdlyvset__x_flip_pipe__v6 = 0U;
    this->__Vdlyvset__x_flip_pipe__v7 = 0U;
    this->__Vdlyvset__x_flip_pipe__v8 = 0U;
    this->__Vdlyvset__x_flip_pipe__v9 = 0U;
    this->__Vdlyvset__x_flip_pipe__v10 = 0U;
    this->__Vdlyvset__x_flip_pipe__v11 = 0U;
    this->__Vdlyvset__x_flip_pipe__v12 = 0U;
    this->__Vdlyvset__x_flip_pipe__v13 = 0U;
    this->__Vdlyvset__x_flip_pipe__v14 = 0U;
    this->__Vdlyvset__x_flip_pipe__v15 = 0U;
    this->__Vdlyvset__x_flip_pipe__v16 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v0 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v1 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v2 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v3 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v4 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v5 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v6 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v7 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v8 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v9 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v10 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v11 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v12 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v13 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v14 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v15 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v16 = 0U;
    this->__Vdlyvset__total_angle_pipe__v0 = 0U;
    this->__Vdlyvset__total_angle_pipe__v2 = 0U;
    this->__Vdlyvset__total_angle_pipe__v4 = 0U;
    this->__Vdlyvset__total_angle_pipe__v6 = 0U;
    this->__Vdlyvset__total_angle_pipe__v8 = 0U;
    this->__Vdlyvset__total_angle_pipe__v10 = 0U;
    this->__Vdlyvset__total_angle_pipe__v12 = 0U;
    this->__Vdlyvset__total_angle_pipe__v14 = 0U;
    this->__Vdlyvset__total_angle_pipe__v16 = 0U;
    this->__Vdlyvset__total_angle_pipe__v18 = 0U;
    this->__Vdlyvset__total_angle_pipe__v20 = 0U;
    this->__Vdlyvset__total_angle_pipe__v22 = 0U;
    this->__Vdlyvset__total_angle_pipe__v24 = 0U;
    this->__Vdlyvset__total_angle_pipe__v26 = 0U;
    this->__Vdlyvset__total_angle_pipe__v28 = 0U;
    this->__Vdlyvset__total_angle_pipe__v30 = 0U;
    this->__Vdlyvset__total_angle_pipe__v32 = 0U;
    this->__Vdlyvset__x_pipe__v0 = 0U;
    this->__Vdlyvset__x_pipe__v1 = 0U;
    this->__Vdlyvset__x_pipe__v3 = 0U;
    this->__Vdlyvset__x_pipe__v5 = 0U;
    this->__Vdlyvset__x_pipe__v7 = 0U;
    this->__Vdlyvset__x_pipe__v9 = 0U;
    this->__Vdlyvset__x_pipe__v11 = 0U;
    this->__Vdlyvset__x_pipe__v13 = 0U;
    this->__Vdlyvset__x_pipe__v15 = 0U;
    this->__Vdlyvset__x_pipe__v17 = 0U;
    this->__Vdlyvset__x_pipe__v19 = 0U;
    this->__Vdlyvset__x_pipe__v21 = 0U;
    this->__Vdlyvset__x_pipe__v23 = 0U;
    this->__Vdlyvset__x_pipe__v25 = 0U;
    this->__Vdlyvset__x_pipe__v27 = 0U;
    this->__Vdlyvset__x_pipe__v29 = 0U;
    this->__Vdlyvset__x_pipe__v31 = 0U;
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvset__y_pipe__v0 = 1U;
    }
    this->__Vdlyvval__valid_pipe__v0 = ((~ (IData)(this->rst)) 
                                        & (IData)(this->data_angle_valid_in));
    this->__Vdlyvval__valid_pipe__v1 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [0U]);
    this->__Vdlyvval__valid_pipe__v2 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [1U]);
    this->__Vdlyvval__valid_pipe__v3 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [2U]);
    this->__Vdlyvval__valid_pipe__v4 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [3U]);
    this->__Vdlyvval__valid_pipe__v5 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [4U]);
    this->__Vdlyvval__valid_pipe__v6 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [5U]);
    this->__Vdlyvval__valid_pipe__v7 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [6U]);
    this->__Vdlyvval__valid_pipe__v8 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [7U]);
    this->__Vdlyvval__valid_pipe__v9 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [8U]);
    this->__Vdlyvval__valid_pipe__v10 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [9U]);
    this->__Vdlyvval__valid_pipe__v11 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xaU]);
    this->__Vdlyvval__valid_pipe__v12 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xbU]);
    this->__Vdlyvval__valid_pipe__v13 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xcU]);
    this->__Vdlyvval__valid_pipe__v14 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xdU]);
    this->__Vdlyvval__valid_pipe__v15 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xeU]);
    this->__Vdlyvval__valid_pipe__v16 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xfU]);
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v0 = (1U & (
                                                   (0x8000U 
                                                    & (IData)(this->angle))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->angle) 
                                                     >> 0xeU))
                                                    : 
                                                   ((IData)(this->angle) 
                                                    >> 0xeU)));
        this->__Vdlyvset__x_flip_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v1 = this->x_flip_pipe
            [0U];
        this->__Vdlyvset__x_flip_pipe__v1 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v2 = this->x_flip_pipe
            [1U];
        this->__Vdlyvset__x_flip_pipe__v2 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v3 = this->x_flip_pipe
            [2U];
        this->__Vdlyvset__x_flip_pipe__v3 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v4 = this->x_flip_pipe
            [3U];
        this->__Vdlyvset__x_flip_pipe__v4 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v5 = this->x_flip_pipe
            [4U];
        this->__Vdlyvset__x_flip_pipe__v5 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v6 = this->x_flip_pipe
            [5U];
        this->__Vdlyvset__x_flip_pipe__v6 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v7 = this->x_flip_pipe
            [6U];
        this->__Vdlyvset__x_flip_pipe__v7 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v8 = this->x_flip_pipe
            [7U];
        this->__Vdlyvset__x_flip_pipe__v8 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v9 = this->x_flip_pipe
            [8U];
        this->__Vdlyvset__x_flip_pipe__v9 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v10 = this->x_flip_pipe
            [9U];
        this->__Vdlyvset__x_flip_pipe__v10 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v11 = this->x_flip_pipe
            [0xaU];
        this->__Vdlyvset__x_flip_pipe__v11 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v12 = this->x_flip_pipe
            [0xbU];
        this->__Vdlyvset__x_flip_pipe__v12 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v13 = this->x_flip_pipe
            [0xcU];
        this->__Vdlyvset__x_flip_pipe__v13 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v14 = this->x_flip_pipe
            [0xdU];
        this->__Vdlyvset__x_flip_pipe__v14 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v15 = this->x_flip_pipe
            [0xeU];
        this->__Vdlyvset__x_flip_pipe__v15 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v16 = this->x_flip_pipe
            [0xfU];
        this->__Vdlyvset__x_flip_pipe__v16 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__desired_angle_pipe__v0 = 
            (0xffffU & ((0x8000U & (IData)(this->angle))
                         ? ((0x4000U & (IData)(this->angle))
                             ? (IData)(this->angle)
                             : ((IData)(0x8000U) - 
                                VL_EXTENDS_II(16,16, (IData)(this->angle))))
                         : ((0x4000U & (IData)(this->angle))
                             ? ((IData)(0x8000U) - 
                                VL_EXTENDS_II(16,16, (IData)(this->angle)))
                             : (IData)(this->angle))));
        this->__Vdlyvset__desired_angle_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvset__total_angle_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvset__x_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0U], this->desired_angle_pipe
                       [0U])) {
            this->__Vdlyvval__x_pipe__v1 = (0x1ffffU 
                                            & (this->x_pipe
                                               [0U] 
                                               - this->y_pipe
                                               [0U]));
            this->__Vdlyvset__x_pipe__v1 = 1U;
            this->__Vdlyvval__total_angle_pipe__v1 
                = (0xffffU & ((IData)(0x2000U) + this->total_angle_pipe
                              [0U]));
            this->__Vdlyvval__y_pipe__v1 = (0x1ffffU 
                                            & (this->y_pipe
                                               [0U] 
                                               + this->x_pipe
                                               [0U]));
        } else {
            this->__Vdlyvval__total_angle_pipe__v2 
                = (0xffffU & (this->total_angle_pipe
                              [0U] - (IData)(0x2000U)));
            this->__Vdlyvset__total_angle_pipe__v2 = 1U;
            this->__Vdlyvval__x_pipe__v2 = (0x1ffffU 
                                            & (this->x_pipe
                                               [0U] 
                                               + this->y_pipe
                                               [0U]));
            this->__Vdlyvval__y_pipe__v2 = (0x1ffffU 
                                            & (this->y_pipe
                                               [0U] 
                                               - this->x_pipe
                                               [0U]));
        }
        this->__Vdlyvval__desired_angle_pipe__v1 = 
            this->desired_angle_pipe[0U];
        this->__Vdlyvset__desired_angle_pipe__v1 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [1U], this->desired_angle_pipe
                       [1U])) {
            this->__Vdlyvval__x_pipe__v3 = (0x1ffffU 
                                            & (this->x_pipe
                                               [1U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [1U], 1U)));
            this->__Vdlyvset__x_pipe__v3 = 1U;
            this->__Vdlyvval__total_angle_pipe__v3 
                = (0xffffU & ((IData)(0x12e4U) + this->total_angle_pipe
                              [1U]));
            this->__Vdlyvval__y_pipe__v3 = (0x1ffffU 
                                            & (this->y_pipe
                                               [1U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [1U], 1U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v4 
                = (0xffffU & (this->total_angle_pipe
                              [1U] - (IData)(0x12e4U)));
            this->__Vdlyvset__total_angle_pipe__v4 = 1U;
            this->__Vdlyvval__x_pipe__v4 = (0x1ffffU 
                                            & (this->x_pipe
                                               [1U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [1U], 1U)));
            this->__Vdlyvval__y_pipe__v4 = (0x1ffffU 
                                            & (this->y_pipe
                                               [1U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [1U], 1U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v2 = 
            this->desired_angle_pipe[1U];
        this->__Vdlyvset__desired_angle_pipe__v2 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [2U], this->desired_angle_pipe
                       [2U])) {
            this->__Vdlyvval__x_pipe__v5 = (0x1ffffU 
                                            & (this->x_pipe
                                               [2U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [2U], 2U)));
            this->__Vdlyvset__x_pipe__v5 = 1U;
            this->__Vdlyvval__total_angle_pipe__v5 
                = (0xffffU & ((IData)(0x9fbU) + this->total_angle_pipe
                              [2U]));
            this->__Vdlyvval__y_pipe__v5 = (0x1ffffU 
                                            & (this->y_pipe
                                               [2U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [2U], 2U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v6 
                = (0xffffU & (this->total_angle_pipe
                              [2U] - (IData)(0x9fbU)));
            this->__Vdlyvset__total_angle_pipe__v6 = 1U;
            this->__Vdlyvval__x_pipe__v6 = (0x1ffffU 
                                            & (this->x_pipe
                                               [2U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [2U], 2U)));
            this->__Vdlyvval__y_pipe__v6 = (0x1ffffU 
                                            & (this->y_pipe
                                               [2U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [2U], 2U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v3 = 
            this->desired_angle_pipe[2U];
        this->__Vdlyvset__desired_angle_pipe__v3 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [3U], this->desired_angle_pipe
                       [3U])) {
            this->__Vdlyvval__x_pipe__v7 = (0x1ffffU 
                                            & (this->x_pipe
                                               [3U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [3U], 3U)));
            this->__Vdlyvset__x_pipe__v7 = 1U;
            this->__Vdlyvval__total_angle_pipe__v7 
                = (0xffffU & ((IData)(0x511U) + this->total_angle_pipe
                              [3U]));
            this->__Vdlyvval__y_pipe__v7 = (0x1ffffU 
                                            & (this->y_pipe
                                               [3U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [3U], 3U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v8 
                = (0xffffU & (this->total_angle_pipe
                              [3U] - (IData)(0x511U)));
            this->__Vdlyvset__total_angle_pipe__v8 = 1U;
            this->__Vdlyvval__x_pipe__v8 = (0x1ffffU 
                                            & (this->x_pipe
                                               [3U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [3U], 3U)));
            this->__Vdlyvval__y_pipe__v8 = (0x1ffffU 
                                            & (this->y_pipe
                                               [3U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [3U], 3U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v4 = 
            this->desired_angle_pipe[3U];
        this->__Vdlyvset__desired_angle_pipe__v4 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [4U], this->desired_angle_pipe
                       [4U])) {
            this->__Vdlyvval__x_pipe__v9 = (0x1ffffU 
                                            & (this->x_pipe
                                               [4U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [4U], 4U)));
            this->__Vdlyvset__x_pipe__v9 = 1U;
            this->__Vdlyvval__total_angle_pipe__v9 
                = (0xffffU & ((IData)(0x28bU) + this->total_angle_pipe
                              [4U]));
            this->__Vdlyvval__y_pipe__v9 = (0x1ffffU 
                                            & (this->y_pipe
                                               [4U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [4U], 4U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v10 
                = (0xffffU & (this->total_angle_pipe
                              [4U] - (IData)(0x28bU)));
            this->__Vdlyvset__total_angle_pipe__v10 = 1U;
            this->__Vdlyvval__x_pipe__v10 = (0x1ffffU 
                                             & (this->x_pipe
                                                [4U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [4U], 4U)));
            this->__Vdlyvval__y_pipe__v10 = (0x1ffffU 
                                             & (this->y_pipe
                                                [4U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [4U], 4U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v5 = 
            this->desired_angle_pipe[4U];
        this->__Vdlyvset__desired_angle_pipe__v5 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [5U], this->desired_angle_pipe
                       [5U])) {
            this->__Vdlyvval__x_pipe__v11 = (0x1ffffU 
                                             & (this->x_pipe
                                                [5U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [5U], 5U)));
            this->__Vdlyvset__x_pipe__v11 = 1U;
            this->__Vdlyvval__total_angle_pipe__v11 
                = (0xffffU & ((IData)(0x146U) + this->total_angle_pipe
                              [5U]));
            this->__Vdlyvval__y_pipe__v11 = (0x1ffffU 
                                             & (this->y_pipe
                                                [5U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [5U], 5U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v12 
                = (0xffffU & (this->total_angle_pipe
                              [5U] - (IData)(0x146U)));
            this->__Vdlyvset__total_angle_pipe__v12 = 1U;
            this->__Vdlyvval__x_pipe__v12 = (0x1ffffU 
                                             & (this->x_pipe
                                                [5U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [5U], 5U)));
            this->__Vdlyvval__y_pipe__v12 = (0x1ffffU 
                                             & (this->y_pipe
                                                [5U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [5U], 5U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v6 = 
            this->desired_angle_pipe[5U];
        this->__Vdlyvset__desired_angle_pipe__v6 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [6U], this->desired_angle_pipe
                       [6U])) {
            this->__Vdlyvval__x_pipe__v13 = (0x1ffffU 
                                             & (this->x_pipe
                                                [6U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [6U], 6U)));
            this->__Vdlyvset__x_pipe__v13 = 1U;
            this->__Vdlyvval__total_angle_pipe__v13 
                = (0xffffU & ((IData)(0xa3U) + this->total_angle_pipe
                              [6U]));
            this->__Vdlyvval__y_pipe__v13 = (0x1ffffU 
                                             & (this->y_pipe
                                                [6U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [6U], 6U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v14 
                = (0xffffU & (this->total_angle_pipe
                              [6U] - (IData)(0xa3U)));
            this->__Vdlyvset__total_angle_pipe__v14 = 1U;
            this->__Vdlyvval__x_pipe__v14 = (0x1ffffU 
                                             & (this->x_pipe
                                                [6U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [6U], 6U)));
            this->__Vdlyvval__y_pipe__v14 = (0x1ffffU 
                                             & (this->y_pipe
                                                [6U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [6U], 6U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v7 = 
            this->desired_angle_pipe[6U];
        this->__Vdlyvset__desired_angle_pipe__v7 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [7U], this->desired_angle_pipe
                       [7U])) {
            this->__Vdlyvval__x_pipe__v15 = (0x1ffffU 
                                             & (this->x_pipe
                                                [7U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [7U], 7U)));
            this->__Vdlyvset__x_pipe__v15 = 1U;
            this->__Vdlyvval__total_angle_pipe__v15 
                = (0xffffU & ((IData)(0x51U) + this->total_angle_pipe
                              [7U]));
            this->__Vdlyvval__y_pipe__v15 = (0x1ffffU 
                                             & (this->y_pipe
                                                [7U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [7U], 7U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v16 
                = (0xffffU & (this->total_angle_pipe
                              [7U] - (IData)(0x51U)));
            this->__Vdlyvset__total_angle_pipe__v16 = 1U;
            this->__Vdlyvval__x_pipe__v16 = (0x1ffffU 
                                             & (this->x_pipe
                                                [7U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [7U], 7U)));
            this->__Vdlyvval__y_pipe__v16 = (0x1ffffU 
                                             & (this->y_pipe
                                                [7U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [7U], 7U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v8 = 
            this->desired_angle_pipe[7U];
        this->__Vdlyvset__desired_angle_pipe__v8 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [8U], this->desired_angle_pipe
                       [8U])) {
            this->__Vdlyvval__x_pipe__v17 = (0x1ffffU 
                                             & (this->x_pipe
                                                [8U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [8U], 8U)));
            this->__Vdlyvset__x_pipe__v17 = 1U;
            this->__Vdlyvval__total_angle_pipe__v17 
                = (0xffffU & ((IData)(0x29U) + this->total_angle_pipe
                              [8U]));
            this->__Vdlyvval__y_pipe__v17 = (0x1ffffU 
                                             & (this->y_pipe
                                                [8U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [8U], 8U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v18 
                = (0xffffU & (this->total_angle_pipe
                              [8U] - (IData)(0x29U)));
            this->__Vdlyvset__total_angle_pipe__v18 = 1U;
            this->__Vdlyvval__x_pipe__v18 = (0x1ffffU 
                                             & (this->x_pipe
                                                [8U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [8U], 8U)));
            this->__Vdlyvval__y_pipe__v18 = (0x1ffffU 
                                             & (this->y_pipe
                                                [8U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [8U], 8U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v9 = 
            this->desired_angle_pipe[8U];
        this->__Vdlyvset__desired_angle_pipe__v9 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [9U], this->desired_angle_pipe
                       [9U])) {
            this->__Vdlyvval__x_pipe__v19 = (0x1ffffU 
                                             & (this->x_pipe
                                                [9U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [9U], 9U)));
            this->__Vdlyvset__x_pipe__v19 = 1U;
            this->__Vdlyvval__total_angle_pipe__v19 
                = (0xffffU & ((IData)(0x14U) + this->total_angle_pipe
                              [9U]));
            this->__Vdlyvval__y_pipe__v19 = (0x1ffffU 
                                             & (this->y_pipe
                                                [9U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [9U], 9U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v20 
                = (0xffffU & (this->total_angle_pipe
                              [9U] - (IData)(0x14U)));
            this->__Vdlyvset__total_angle_pipe__v20 = 1U;
            this->__Vdlyvval__x_pipe__v20 = (0x1ffffU 
                                             & (this->x_pipe
                                                [9U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [9U], 9U)));
            this->__Vdlyvval__y_pipe__v20 = (0x1ffffU 
                                             & (this->y_pipe
                                                [9U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [9U], 9U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v10 = 
            this->desired_angle_pipe[9U];
        this->__Vdlyvset__desired_angle_pipe__v10 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xaU], this->desired_angle_pipe
                       [0xaU])) {
            this->__Vdlyvval__x_pipe__v21 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xaU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xaU], 0xaU)));
            this->__Vdlyvset__x_pipe__v21 = 1U;
            this->__Vdlyvval__total_angle_pipe__v21 
                = (0xffffU & ((IData)(0xaU) + this->total_angle_pipe
                              [0xaU]));
            this->__Vdlyvval__y_pipe__v21 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xaU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xaU], 0xaU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v22 
                = (0xffffU & (this->total_angle_pipe
                              [0xaU] - (IData)(0xaU)));
            this->__Vdlyvset__total_angle_pipe__v22 = 1U;
            this->__Vdlyvval__x_pipe__v22 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xaU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xaU], 0xaU)));
            this->__Vdlyvval__y_pipe__v22 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xaU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xaU], 0xaU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v11 = 
            this->desired_angle_pipe[0xaU];
        this->__Vdlyvset__desired_angle_pipe__v11 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xbU], this->desired_angle_pipe
                       [0xbU])) {
            this->__Vdlyvval__x_pipe__v23 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xbU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xbU], 0xbU)));
            this->__Vdlyvset__x_pipe__v23 = 1U;
            this->__Vdlyvval__total_angle_pipe__v23 
                = (0xffffU & ((IData)(5U) + this->total_angle_pipe
                              [0xbU]));
            this->__Vdlyvval__y_pipe__v23 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xbU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xbU], 0xbU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v24 
                = (0xffffU & (this->total_angle_pipe
                              [0xbU] - (IData)(5U)));
            this->__Vdlyvset__total_angle_pipe__v24 = 1U;
            this->__Vdlyvval__x_pipe__v24 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xbU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xbU], 0xbU)));
            this->__Vdlyvval__y_pipe__v24 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xbU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xbU], 0xbU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v12 = 
            this->desired_angle_pipe[0xbU];
        this->__Vdlyvset__desired_angle_pipe__v12 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xcU], this->desired_angle_pipe
                       [0xcU])) {
            this->__Vdlyvval__x_pipe__v25 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xcU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xcU], 0xcU)));
            this->__Vdlyvset__x_pipe__v25 = 1U;
            this->__Vdlyvval__total_angle_pipe__v25 
                = (0xffffU & ((IData)(3U) + this->total_angle_pipe
                              [0xcU]));
            this->__Vdlyvval__y_pipe__v25 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xcU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xcU], 0xcU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v26 
                = (0xffffU & (this->total_angle_pipe
                              [0xcU] - (IData)(3U)));
            this->__Vdlyvset__total_angle_pipe__v26 = 1U;
            this->__Vdlyvval__x_pipe__v26 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xcU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xcU], 0xcU)));
            this->__Vdlyvval__y_pipe__v26 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xcU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xcU], 0xcU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v13 = 
            this->desired_angle_pipe[0xcU];
        this->__Vdlyvset__desired_angle_pipe__v13 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xdU], this->desired_angle_pipe
                       [0xdU])) {
            this->__Vdlyvval__x_pipe__v27 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xdU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xdU], 0xdU)));
            this->__Vdlyvset__x_pipe__v27 = 1U;
            this->__Vdlyvval__total_angle_pipe__v27 
                = (0xffffU & ((IData)(1U) + this->total_angle_pipe
                              [0xdU]));
            this->__Vdlyvval__y_pipe__v27 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xdU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xdU], 0xdU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v28 
                = (0xffffU & (this->total_angle_pipe
                              [0xdU] - (IData)(1U)));
            this->__Vdlyvset__total_angle_pipe__v28 = 1U;
            this->__Vdlyvval__x_pipe__v28 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xdU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xdU], 0xdU)));
            this->__Vdlyvval__y_pipe__v28 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xdU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xdU], 0xdU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v14 = 
            this->desired_angle_pipe[0xdU];
        this->__Vdlyvset__desired_angle_pipe__v14 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xeU], this->desired_angle_pipe
                       [0xeU])) {
            this->__Vdlyvval__x_pipe__v29 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xeU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xeU], 0xeU)));
            this->__Vdlyvset__x_pipe__v29 = 1U;
            this->__Vdlyvval__total_angle_pipe__v29 
                = (0xffffU & ((IData)(1U) + this->total_angle_pipe
                              [0xeU]));
            this->__Vdlyvval__y_pipe__v29 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xeU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xeU], 0xeU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v30 
                = (0xffffU & (this->total_angle_pipe
                              [0xeU] - (IData)(1U)));
            this->__Vdlyvset__total_angle_pipe__v30 = 1U;
            this->__Vdlyvval__x_pipe__v30 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xeU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xeU], 0xeU)));
            this->__Vdlyvval__y_pipe__v30 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xeU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xeU], 0xeU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v15 = 
            this->desired_angle_pipe[0xeU];
        this->__Vdlyvset__desired_angle_pipe__v15 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xfU], this->desired_angle_pipe
                       [0xfU])) {
            this->__Vdlyvval__x_pipe__v31 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xfU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xfU], 0xfU)));
            this->__Vdlyvset__x_pipe__v31 = 1U;
            this->__Vdlyvval__total_angle_pipe__v31 
                = this->total_angle_pipe[0xfU];
            this->__Vdlyvval__y_pipe__v31 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xfU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xfU], 0xfU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v32 
                = this->total_angle_pipe[0xfU];
            this->__Vdlyvset__total_angle_pipe__v32 = 1U;
            this->__Vdlyvval__x_pipe__v32 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xfU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xfU], 0xfU)));
            this->__Vdlyvval__y_pipe__v32 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xfU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xfU], 0xfU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v16 = 
            this->desired_angle_pipe[0xfU];
        this->__Vdlyvset__desired_angle_pipe__v16 = 1U;
    }
    this->valid_pipe[0U] = this->__Vdlyvval__valid_pipe__v0;
    this->valid_pipe[1U] = this->__Vdlyvval__valid_pipe__v1;
    this->valid_pipe[2U] = this->__Vdlyvval__valid_pipe__v2;
    this->valid_pipe[3U] = this->__Vdlyvval__valid_pipe__v3;
    this->valid_pipe[4U] = this->__Vdlyvval__valid_pipe__v4;
    this->valid_pipe[5U] = this->__Vdlyvval__valid_pipe__v5;
    this->valid_pipe[6U] = this->__Vdlyvval__valid_pipe__v6;
    this->valid_pipe[7U] = this->__Vdlyvval__valid_pipe__v7;
    this->valid_pipe[8U] = this->__Vdlyvval__valid_pipe__v8;
    this->valid_pipe[9U] = this->__Vdlyvval__valid_pipe__v9;
    this->valid_pipe[0xaU] = this->__Vdlyvval__valid_pipe__v10;
    this->valid_pipe[0xbU] = this->__Vdlyvval__valid_pipe__v11;
    this->valid_pipe[0xcU] = this->__Vdlyvval__valid_pipe__v12;
    this->valid_pipe[0xdU] = this->__Vdlyvval__valid_pipe__v13;
    this->valid_pipe[0xeU] = this->__Vdlyvval__valid_pipe__v14;
    this->valid_pipe[0xfU] = this->__Vdlyvval__valid_pipe__v15;
    this->valid_pipe[0x10U] = this->__Vdlyvval__valid_pipe__v16;
    if (this->__Vdlyvset__x_flip_pipe__v0) {
        this->x_flip_pipe[0U] = this->__Vdlyvval__x_flip_pipe__v0;
    }
    if (this->__Vdlyvset__x_flip_pipe__v1) {
        this->x_flip_pipe[1U] = this->__Vdlyvval__x_flip_pipe__v1;
    }
    if (this->__Vdlyvset__x_flip_pipe__v2) {
        this->x_flip_pipe[2U] = this->__Vdlyvval__x_flip_pipe__v2;
    }
    if (this->__Vdlyvset__x_flip_pipe__v3) {
        this->x_flip_pipe[3U] = this->__Vdlyvval__x_flip_pipe__v3;
    }
    if (this->__Vdlyvset__x_flip_pipe__v4) {
        this->x_flip_pipe[4U] = this->__Vdlyvval__x_flip_pipe__v4;
    }
    if (this->__Vdlyvset__x_flip_pipe__v5) {
        this->x_flip_pipe[5U] = this->__Vdlyvval__x_flip_pipe__v5;
    }
    if (this->__Vdlyvset__x_flip_pipe__v6) {
        this->x_flip_pipe[6U] = this->__Vdlyvval__x_flip_pipe__v6;
    }
    if (this->__Vdlyvset__x_flip_pipe__v7) {
        this->x_flip_pipe[7U] = this->__Vdlyvval__x_flip_pipe__v7;
    }
    if (this->__Vdlyvset__x_flip_pipe__v8) {
        this->x_flip_pipe[8U] = this->__Vdlyvval__x_flip_pipe__v8;
    }
    if (this->__Vdlyvset__x_flip_pipe__v9) {
        this->x_flip_pipe[9U] = this->__Vdlyvval__x_flip_pipe__v9;
    }
    if (this->__Vdlyvset__x_flip_pipe__v10) {
        this->x_flip_pipe[0xaU] = this->__Vdlyvval__x_flip_pipe__v10;
    }
    if (this->__Vdlyvset__x_flip_pipe__v11) {
        this->x_flip_pipe[0xbU] = this->__Vdlyvval__x_flip_pipe__v11;
    }
    if (this->__Vdlyvset__x_flip_pipe__v12) {
        this->x_flip_pipe[0xcU] = this->__Vdlyvval__x_flip_pipe__v12;
    }
    if (this->__Vdlyvset__x_flip_pipe__v13) {
        this->x_flip_pipe[0xdU] = this->__Vdlyvval__x_flip_pipe__v13;
    }
    if (this->__Vdlyvset__x_flip_pipe__v14) {
        this->x_flip_pipe[0xeU] = this->__Vdlyvval__x_flip_pipe__v14;
    }
    if (this->__Vdlyvset__x_flip_pipe__v15) {
        this->x_flip_pipe[0xfU] = this->__Vdlyvval__x_flip_pipe__v15;
    }
    if (this->__Vdlyvset__x_flip_pipe__v16) {
        this->x_flip_pipe[0x10U] = this->__Vdlyvval__x_flip_pipe__v16;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v0) {
        this->desired_angle_pipe[0U] = this->__Vdlyvval__desired_angle_pipe__v0;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v1) {
        this->desired_angle_pipe[1U] = this->__Vdlyvval__desired_angle_pipe__v1;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v2) {
        this->desired_angle_pipe[2U] = this->__Vdlyvval__desired_angle_pipe__v2;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v3) {
        this->desired_angle_pipe[3U] = this->__Vdlyvval__desired_angle_pipe__v3;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v4) {
        this->desired_angle_pipe[4U] = this->__Vdlyvval__desired_angle_pipe__v4;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v5) {
        this->desired_angle_pipe[5U] = this->__Vdlyvval__desired_angle_pipe__v5;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v6) {
        this->desired_angle_pipe[6U] = this->__Vdlyvval__desired_angle_pipe__v6;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v7) {
        this->desired_angle_pipe[7U] = this->__Vdlyvval__desired_angle_pipe__v7;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v8) {
        this->desired_angle_pipe[8U] = this->__Vdlyvval__desired_angle_pipe__v8;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v9) {
        this->desired_angle_pipe[9U] = this->__Vdlyvval__desired_angle_pipe__v9;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v10) {
        this->desired_angle_pipe[0xaU] = this->__Vdlyvval__desired_angle_pipe__v10;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v11) {
        this->desired_angle_pipe[0xbU] = this->__Vdlyvval__desired_angle_pipe__v11;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v12) {
        this->desired_angle_pipe[0xcU] = this->__Vdlyvval__desired_angle_pipe__v12;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v13) {
        this->desired_angle_pipe[0xdU] = this->__Vdlyvval__desired_angle_pipe__v13;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v14) {
        this->desired_angle_pipe[0xeU] = this->__Vdlyvval__desired_angle_pipe__v14;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v15) {
        this->desired_angle_pipe[0xfU] = this->__Vdlyvval__desired_angle_pipe__v15;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v16) {
        this->desired_angle_pipe[0x10U] = this->__Vdlyvval__desired_angle_pipe__v16;
    }
    if (this->__Vdlyvset__total_angle_pipe__v0) {
        this->total_angle_pipe[0U] = 0U;
    }
    if (this->__Vdlyvset__x_pipe__v1) {
        this->total_angle_pipe[1U] = this->__Vdlyvval__total_angle_pipe__v1;
    }
    if (this->__Vdlyvset__total_angle_pipe__v2) {
        this->total_angle_pipe[1U] = this->__Vdlyvval__total_angle_pipe__v2;
    }
    if (this->__Vdlyvset__x_pipe__v3) {
        this->total_angle_pipe[2U] = this->__Vdlyvval__total_angle_pipe__v3;
    }
    if (this->__Vdlyvset__total_angle_pipe__v4) {
        this->total_angle_pipe[2U] = this->__Vdlyvval__total_angle_pipe__v4;
    }
    if (this->__Vdlyvset__x_pipe__v5) {
        this->total_angle_pipe[3U] = this->__Vdlyvval__total_angle_pipe__v5;
    }
    if (this->__Vdlyvset__total_angle_pipe__v6) {
        this->total_angle_pipe[3U] = this->__Vdlyvval__total_angle_pipe__v6;
    }
    if (this->__Vdlyvset__x_pipe__v7) {
        this->total_angle_pipe[4U] = this->__Vdlyvval__total_angle_pipe__v7;
    }
    if (this->__Vdlyvset__total_angle_pipe__v8) {
        this->total_angle_pipe[4U] = this->__Vdlyvval__total_angle_pipe__v8;
    }
    if (this->__Vdlyvset__x_pipe__v9) {
        this->total_angle_pipe[5U] = this->__Vdlyvval__total_angle_pipe__v9;
    }
    if (this->__Vdlyvset__total_angle_pipe__v10) {
        this->total_angle_pipe[5U] = this->__Vdlyvval__total_angle_pipe__v10;
    }
    if (this->__Vdlyvset__x_pipe__v11) {
        this->total_angle_pipe[6U] = this->__Vdlyvval__total_angle_pipe__v11;
    }
    if (this->__Vdlyvset__total_angle_pipe__v12) {
        this->total_angle_pipe[6U] = this->__Vdlyvval__total_angle_pipe__v12;
    }
    if (this->__Vdlyvset__x_pipe__v13) {
        this->total_angle_pipe[7U] = this->__Vdlyvval__total_angle_pipe__v13;
    }
    if (this->__Vdlyvset__total_angle_pipe__v14) {
        this->total_angle_pipe[7U] = this->__Vdlyvval__total_angle_pipe__v14;
    }
    if (this->__Vdlyvset__x_pipe__v15) {
        this->total_angle_pipe[8U] = this->__Vdlyvval__total_angle_pipe__v15;
    }
    if (this->__Vdlyvset__total_angle_pipe__v16) {
        this->total_angle_pipe[8U] = this->__Vdlyvval__total_angle_pipe__v16;
    }
    if (this->__Vdlyvset__x_pipe__v17) {
        this->total_angle_pipe[9U] = this->__Vdlyvval__total_angle_pipe__v17;
    }
    if (this->__Vdlyvset__total_angle_pipe__v18) {
        this->total_angle_pipe[9U] = this->__Vdlyvval__total_angle_pipe__v18;
    }
    if (this->__Vdlyvset__x_pipe__v19) {
        this->total_angle_pipe[0xaU] = this->__Vdlyvval__total_angle_pipe__v19;
    }
    if (this->__Vdlyvset__total_angle_pipe__v20) {
        this->total_angle_pipe[0xaU] = this->__Vdlyvval__total_angle_pipe__v20;
    }
    if (this->__Vdlyvset__x_pipe__v21) {
        this->total_angle_pipe[0xbU] = this->__Vdlyvval__total_angle_pipe__v21;
    }
    if (this->__Vdlyvset__total_angle_pipe__v22) {
        this->total_angle_pipe[0xbU] = this->__Vdlyvval__total_angle_pipe__v22;
    }
    if (this->__Vdlyvset__x_pipe__v23) {
        this->total_angle_pipe[0xcU] = this->__Vdlyvval__total_angle_pipe__v23;
    }
    if (this->__Vdlyvset__total_angle_pipe__v24) {
        this->total_angle_pipe[0xcU] = this->__Vdlyvval__total_angle_pipe__v24;
    }
    if (this->__Vdlyvset__x_pipe__v25) {
        this->total_angle_pipe[0xdU] = this->__Vdlyvval__total_angle_pipe__v25;
    }
    if (this->__Vdlyvset__total_angle_pipe__v26) {
        this->total_angle_pipe[0xdU] = this->__Vdlyvval__total_angle_pipe__v26;
    }
    if (this->__Vdlyvset__x_pipe__v27) {
        this->total_angle_pipe[0xeU] = this->__Vdlyvval__total_angle_pipe__v27;
    }
    if (this->__Vdlyvset__total_angle_pipe__v28) {
        this->total_angle_pipe[0xeU] = this->__Vdlyvval__total_angle_pipe__v28;
    }
    if (this->__Vdlyvset__x_pipe__v29) {
        this->total_angle_pipe[0xfU] = this->__Vdlyvval__total_angle_pipe__v29;
    }
    if (this->__Vdlyvset__total_angle_pipe__v30) {
        this->total_angle_pipe[0xfU] = this->__Vdlyvval__total_angle_pipe__v30;
    }
    if (this->__Vdlyvset__x_pipe__v31) {
        this->total_angle_pipe[0x10U] = this->__Vdlyvval__total_angle_pipe__v31;
    }
    if (this->__Vdlyvset__total_angle_pipe__v32) {
        this->total_angle_pipe[0x10U] = this->__Vdlyvval__total_angle_pipe__v32;
    }
    if (this->__Vdlyvset__y_pipe__v0) {
        this->y_pipe[0U] = 0U;
    }
    if (this->__Vdlyvset__x_pipe__v1) {
        this->y_pipe[1U] = this->__Vdlyvval__y_pipe__v1;
    }
    if (this->__Vdlyvset__total_angle_pipe__v2) {
        this->y_pipe[1U] = this->__Vdlyvval__y_pipe__v2;
    }
    if (this->__Vdlyvset__x_pipe__v3) {
        this->y_pipe[2U] = this->__Vdlyvval__y_pipe__v3;
    }
    if (this->__Vdlyvset__total_angle_pipe__v4) {
        this->y_pipe[2U] = this->__Vdlyvval__y_pipe__v4;
    }
    if (this->__Vdlyvset__x_pipe__v5) {
        this->y_pipe[3U] = this->__Vdlyvval__y_pipe__v5;
    }
    if (this->__Vdlyvset__total_angle_pipe__v6) {
        this->y_pipe[3U] = this->__Vdlyvval__y_pipe__v6;
    }
    if (this->__Vdlyvset__x_pipe__v7) {
        this->y_pipe[4U] = this->__Vdlyvval__y_pipe__v7;
    }
    if (this->__Vdlyvset__total_angle_pipe__v8) {
        this->y_pipe[4U] = this->__Vdlyvval__y_pipe__v8;
    }
    if (this->__Vdlyvset__x_pipe__v9) {
        this->y_pipe[5U] = this->__Vdlyvval__y_pipe__v9;
    }
    if (this->__Vdlyvset__total_angle_pipe__v10) {
        this->y_pipe[5U] = this->__Vdlyvval__y_pipe__v10;
    }
    if (this->__Vdlyvset__x_pipe__v11) {
        this->y_pipe[6U] = this->__Vdlyvval__y_pipe__v11;
    }
    if (this->__Vdlyvset__total_angle_pipe__v12) {
        this->y_pipe[6U] = this->__Vdlyvval__y_pipe__v12;
    }
    if (this->__Vdlyvset__x_pipe__v13) {
        this->y_pipe[7U] = this->__Vdlyvval__y_pipe__v13;
    }
    if (this->__Vdlyvset__total_angle_pipe__v14) {
        this->y_pipe[7U] = this->__Vdlyvval__y_pipe__v14;
    }
    if (this->__Vdlyvset__x_pipe__v15) {
        this->y_pipe[8U] = this->__Vdlyvval__y_pipe__v15;
    }
    if (this->__Vdlyvset__total_angle_pipe__v16) {
        this->y_pipe[8U] = this->__Vdlyvval__y_pipe__v16;
    }
    if (this->__Vdlyvset__x_pipe__v17) {
        this->y_pipe[9U] = this->__Vdlyvval__y_pipe__v17;
    }
    if (this->__Vdlyvset__total_angle_pipe__v18) {
        this->y_pipe[9U] = this->__Vdlyvval__y_pipe__v18;
    }
    if (this->__Vdlyvset__x_pipe__v19) {
        this->y_pipe[0xaU] = this->__Vdlyvval__y_pipe__v19;
    }
    if (this->__Vdlyvset__total_angle_pipe__v20) {
        this->y_pipe[0xaU] = this->__Vdlyvval__y_pipe__v20;
    }
    if (this->__Vdlyvset__x_pipe__v21) {
        this->y_pipe[0xbU] = this->__Vdlyvval__y_pipe__v21;
    }
    if (this->__Vdlyvset__total_angle_pipe__v22) {
        this->y_pipe[0xbU] = this->__Vdlyvval__y_pipe__v22;
    }
    if (this->__Vdlyvset__x_pipe__v23) {
        this->y_pipe[0xcU] = this->__Vdlyvval__y_pipe__v23;
    }
    if (this->__Vdlyvset__total_angle_pipe__v24) {
        this->y_pipe[0xcU] = this->__Vdlyvval__y_pipe__v24;
    }
    if (this->__Vdlyvset__x_pipe__v25) {
        this->y_pipe[0xdU] = this->__Vdlyvval__y_pipe__v25;
    }
    if (this->__Vdlyvset__total_angle_pipe__v26) {
        this->y_pipe[0xdU] = this->__Vdlyvval__y_pipe__v26;
    }
    if (this->__Vdlyvset__x_pipe__v27) {
        this->y_pipe[0xeU] = this->__Vdlyvval__y_pipe__v27;
    }
    if (this->__Vdlyvset__total_angle_pipe__v28) {
        this->y_pipe[0xeU] = this->__Vdlyvval__y_pipe__v28;
    }
    if (this->__Vdlyvset__x_pipe__v29) {
        this->y_pipe[0xfU] = this->__Vdlyvval__y_pipe__v29;
    }
    if (this->__Vdlyvset__total_angle_pipe__v30) {
        this->y_pipe[0xfU] = this->__Vdlyvval__y_pipe__v30;
    }
    if (this->__Vdlyvset__x_pipe__v31) {
        this->y_pipe[0x10U] = this->__Vdlyvval__y_pipe__v31;
    }
    if (this->__Vdlyvset__total_angle_pipe__v32) {
        this->y_pipe[0x10U] = this->__Vdlyvval__y_pipe__v32;
    }
    if (this->__Vdlyvset__x_pipe__v0) {
        this->x_pipe[0U] = 0x4dbaU;
    }
    if (this->__Vdlyvset__x_pipe__v1) {
        this->x_pipe[1U] = this->__Vdlyvval__x_pipe__v1;
    }
    if (this->__Vdlyvset__total_angle_pipe__v2) {
        this->x_pipe[1U] = this->__Vdlyvval__x_pipe__v2;
    }
    if (this->__Vdlyvset__x_pipe__v3) {
        this->x_pipe[2U] = this->__Vdlyvval__x_pipe__v3;
    }
    if (this->__Vdlyvset__total_angle_pipe__v4) {
        this->x_pipe[2U] = this->__Vdlyvval__x_pipe__v4;
    }
    if (this->__Vdlyvset__x_pipe__v5) {
        this->x_pipe[3U] = this->__Vdlyvval__x_pipe__v5;
    }
    if (this->__Vdlyvset__total_angle_pipe__v6) {
        this->x_pipe[3U] = this->__Vdlyvval__x_pipe__v6;
    }
    if (this->__Vdlyvset__x_pipe__v7) {
        this->x_pipe[4U] = this->__Vdlyvval__x_pipe__v7;
    }
    if (this->__Vdlyvset__total_angle_pipe__v8) {
        this->x_pipe[4U] = this->__Vdlyvval__x_pipe__v8;
    }
    if (this->__Vdlyvset__x_pipe__v9) {
        this->x_pipe[5U] = this->__Vdlyvval__x_pipe__v9;
    }
    if (this->__Vdlyvset__total_angle_pipe__v10) {
        this->x_pipe[5U] = this->__Vdlyvval__x_pipe__v10;
    }
    if (this->__Vdlyvset__x_pipe__v11) {
        this->x_pipe[6U] = this->__Vdlyvval__x_pipe__v11;
    }
    if (this->__Vdlyvset__total_angle_pipe__v12) {
        this->x_pipe[6U] = this->__Vdlyvval__x_pipe__v12;
    }
    if (this->__Vdlyvset__x_pipe__v13) {
        this->x_pipe[7U] = this->__Vdlyvval__x_pipe__v13;
    }
    if (this->__Vdlyvset__total_angle_pipe__v14) {
        this->x_pipe[7U] = this->__Vdlyvval__x_pipe__v14;
    }
    if (this->__Vdlyvset__x_pipe__v15) {
        this->x_pipe[8U] = this->__Vdlyvval__x_pipe__v15;
    }
    if (this->__Vdlyvset__total_angle_pipe__v16) {
        this->x_pipe[8U] = this->__Vdlyvval__x_pipe__v16;
    }
    if (this->__Vdlyvset__x_pipe__v17) {
        this->x_pipe[9U] = this->__Vdlyvval__x_pipe__v17;
    }
    if (this->__Vdlyvset__total_angle_pipe__v18) {
        this->x_pipe[9U] = this->__Vdlyvval__x_pipe__v18;
    }
    if (this->__Vdlyvset__x_pipe__v19) {
        this->x_pipe[0xaU] = this->__Vdlyvval__x_pipe__v19;
    }
    if (this->__Vdlyvset__total_angle_pipe__v20) {
        this->x_pipe[0xaU] = this->__Vdlyvval__x_pipe__v20;
    }
    if (this->__Vdlyvset__x_pipe__v21) {
        this->x_pipe[0xbU] = this->__Vdlyvval__x_pipe__v21;
    }
    if (this->__Vdlyvset__total_angle_pipe__v22) {
        this->x_pipe[0xbU] = this->__Vdlyvval__x_pipe__v22;
    }
    if (this->__Vdlyvset__x_pipe__v23) {
        this->x_pipe[0xcU] = this->__Vdlyvval__x_pipe__v23;
    }
    if (this->__Vdlyvset__total_angle_pipe__v24) {
        this->x_pipe[0xcU] = this->__Vdlyvval__x_pipe__v24;
    }
    if (this->__Vdlyvset__x_pipe__v25) {
        this->x_pipe[0xdU] = this->__Vdlyvval__x_pipe__v25;
    }
    if (this->__Vdlyvset__total_angle_pipe__v26) {
        this->x_pipe[0xdU] = this->__Vdlyvval__x_pipe__v26;
    }
    if (this->__Vdlyvset__x_pipe__v27) {
        this->x_pipe[0xeU] = this->__Vdlyvval__x_pipe__v27;
    }
    if (this->__Vdlyvset__total_angle_pipe__v28) {
        this->x_pipe[0xeU] = this->__Vdlyvval__x_pipe__v28;
    }
    if (this->__Vdlyvset__x_pipe__v29) {
        this->x_pipe[0xfU] = this->__Vdlyvval__x_pipe__v29;
    }
    if (this->__Vdlyvset__total_angle_pipe__v30) {
        this->x_pipe[0xfU] = this->__Vdlyvval__x_pipe__v30;
    }
    if (this->__Vdlyvset__x_pipe__v31) {
        this->x_pipe[0x10U] = this->__Vdlyvval__x_pipe__v31;
    }
    if (this->__Vdlyvset__total_angle_pipe__v32) {
        this->x_pipe[0x10U] = this->__Vdlyvval__x_pipe__v32;
    }
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

VL_INLINE_OPT void Vtop_cordic_cossin__W10_N10::_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic__15(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin__W10_N10::_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic__15\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__y_pipe__v0 = 0U;
    this->__Vdlyvset__x_flip_pipe__v0 = 0U;
    this->__Vdlyvset__x_flip_pipe__v1 = 0U;
    this->__Vdlyvset__x_flip_pipe__v2 = 0U;
    this->__Vdlyvset__x_flip_pipe__v3 = 0U;
    this->__Vdlyvset__x_flip_pipe__v4 = 0U;
    this->__Vdlyvset__x_flip_pipe__v5 = 0U;
    this->__Vdlyvset__x_flip_pipe__v6 = 0U;
    this->__Vdlyvset__x_flip_pipe__v7 = 0U;
    this->__Vdlyvset__x_flip_pipe__v8 = 0U;
    this->__Vdlyvset__x_flip_pipe__v9 = 0U;
    this->__Vdlyvset__x_flip_pipe__v10 = 0U;
    this->__Vdlyvset__x_flip_pipe__v11 = 0U;
    this->__Vdlyvset__x_flip_pipe__v12 = 0U;
    this->__Vdlyvset__x_flip_pipe__v13 = 0U;
    this->__Vdlyvset__x_flip_pipe__v14 = 0U;
    this->__Vdlyvset__x_flip_pipe__v15 = 0U;
    this->__Vdlyvset__x_flip_pipe__v16 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v0 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v1 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v2 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v3 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v4 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v5 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v6 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v7 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v8 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v9 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v10 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v11 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v12 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v13 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v14 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v15 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v16 = 0U;
    this->__Vdlyvset__total_angle_pipe__v0 = 0U;
    this->__Vdlyvset__total_angle_pipe__v2 = 0U;
    this->__Vdlyvset__total_angle_pipe__v4 = 0U;
    this->__Vdlyvset__total_angle_pipe__v6 = 0U;
    this->__Vdlyvset__total_angle_pipe__v8 = 0U;
    this->__Vdlyvset__total_angle_pipe__v10 = 0U;
    this->__Vdlyvset__total_angle_pipe__v12 = 0U;
    this->__Vdlyvset__total_angle_pipe__v14 = 0U;
    this->__Vdlyvset__total_angle_pipe__v16 = 0U;
    this->__Vdlyvset__total_angle_pipe__v18 = 0U;
    this->__Vdlyvset__total_angle_pipe__v20 = 0U;
    this->__Vdlyvset__total_angle_pipe__v22 = 0U;
    this->__Vdlyvset__total_angle_pipe__v24 = 0U;
    this->__Vdlyvset__total_angle_pipe__v26 = 0U;
    this->__Vdlyvset__total_angle_pipe__v28 = 0U;
    this->__Vdlyvset__total_angle_pipe__v30 = 0U;
    this->__Vdlyvset__total_angle_pipe__v32 = 0U;
    this->__Vdlyvset__x_pipe__v0 = 0U;
    this->__Vdlyvset__x_pipe__v1 = 0U;
    this->__Vdlyvset__x_pipe__v3 = 0U;
    this->__Vdlyvset__x_pipe__v5 = 0U;
    this->__Vdlyvset__x_pipe__v7 = 0U;
    this->__Vdlyvset__x_pipe__v9 = 0U;
    this->__Vdlyvset__x_pipe__v11 = 0U;
    this->__Vdlyvset__x_pipe__v13 = 0U;
    this->__Vdlyvset__x_pipe__v15 = 0U;
    this->__Vdlyvset__x_pipe__v17 = 0U;
    this->__Vdlyvset__x_pipe__v19 = 0U;
    this->__Vdlyvset__x_pipe__v21 = 0U;
    this->__Vdlyvset__x_pipe__v23 = 0U;
    this->__Vdlyvset__x_pipe__v25 = 0U;
    this->__Vdlyvset__x_pipe__v27 = 0U;
    this->__Vdlyvset__x_pipe__v29 = 0U;
    this->__Vdlyvset__x_pipe__v31 = 0U;
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvset__y_pipe__v0 = 1U;
    }
    this->__Vdlyvval__valid_pipe__v0 = ((~ (IData)(this->rst)) 
                                        & (IData)(this->data_angle_valid_in));
    this->__Vdlyvval__valid_pipe__v1 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [0U]);
    this->__Vdlyvval__valid_pipe__v2 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [1U]);
    this->__Vdlyvval__valid_pipe__v3 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [2U]);
    this->__Vdlyvval__valid_pipe__v4 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [3U]);
    this->__Vdlyvval__valid_pipe__v5 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [4U]);
    this->__Vdlyvval__valid_pipe__v6 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [5U]);
    this->__Vdlyvval__valid_pipe__v7 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [6U]);
    this->__Vdlyvval__valid_pipe__v8 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [7U]);
    this->__Vdlyvval__valid_pipe__v9 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [8U]);
    this->__Vdlyvval__valid_pipe__v10 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [9U]);
    this->__Vdlyvval__valid_pipe__v11 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xaU]);
    this->__Vdlyvval__valid_pipe__v12 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xbU]);
    this->__Vdlyvval__valid_pipe__v13 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xcU]);
    this->__Vdlyvval__valid_pipe__v14 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xdU]);
    this->__Vdlyvval__valid_pipe__v15 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xeU]);
    this->__Vdlyvval__valid_pipe__v16 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xfU]);
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v0 = (1U & (
                                                   (0x8000U 
                                                    & (IData)(this->angle))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->angle) 
                                                     >> 0xeU))
                                                    : 
                                                   ((IData)(this->angle) 
                                                    >> 0xeU)));
        this->__Vdlyvset__x_flip_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v1 = this->x_flip_pipe
            [0U];
        this->__Vdlyvset__x_flip_pipe__v1 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v2 = this->x_flip_pipe
            [1U];
        this->__Vdlyvset__x_flip_pipe__v2 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v3 = this->x_flip_pipe
            [2U];
        this->__Vdlyvset__x_flip_pipe__v3 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v4 = this->x_flip_pipe
            [3U];
        this->__Vdlyvset__x_flip_pipe__v4 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v5 = this->x_flip_pipe
            [4U];
        this->__Vdlyvset__x_flip_pipe__v5 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v6 = this->x_flip_pipe
            [5U];
        this->__Vdlyvset__x_flip_pipe__v6 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v7 = this->x_flip_pipe
            [6U];
        this->__Vdlyvset__x_flip_pipe__v7 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v8 = this->x_flip_pipe
            [7U];
        this->__Vdlyvset__x_flip_pipe__v8 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v9 = this->x_flip_pipe
            [8U];
        this->__Vdlyvset__x_flip_pipe__v9 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v10 = this->x_flip_pipe
            [9U];
        this->__Vdlyvset__x_flip_pipe__v10 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v11 = this->x_flip_pipe
            [0xaU];
        this->__Vdlyvset__x_flip_pipe__v11 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v12 = this->x_flip_pipe
            [0xbU];
        this->__Vdlyvset__x_flip_pipe__v12 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v13 = this->x_flip_pipe
            [0xcU];
        this->__Vdlyvset__x_flip_pipe__v13 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v14 = this->x_flip_pipe
            [0xdU];
        this->__Vdlyvset__x_flip_pipe__v14 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v15 = this->x_flip_pipe
            [0xeU];
        this->__Vdlyvset__x_flip_pipe__v15 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v16 = this->x_flip_pipe
            [0xfU];
        this->__Vdlyvset__x_flip_pipe__v16 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__desired_angle_pipe__v0 = 
            (0xffffU & ((0x8000U & (IData)(this->angle))
                         ? ((0x4000U & (IData)(this->angle))
                             ? (IData)(this->angle)
                             : ((IData)(0x8000U) - 
                                VL_EXTENDS_II(16,16, (IData)(this->angle))))
                         : ((0x4000U & (IData)(this->angle))
                             ? ((IData)(0x8000U) - 
                                VL_EXTENDS_II(16,16, (IData)(this->angle)))
                             : (IData)(this->angle))));
        this->__Vdlyvset__desired_angle_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvset__total_angle_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvset__x_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0U], this->desired_angle_pipe
                       [0U])) {
            this->__Vdlyvval__x_pipe__v1 = (0x1ffffU 
                                            & (this->x_pipe
                                               [0U] 
                                               - this->y_pipe
                                               [0U]));
            this->__Vdlyvset__x_pipe__v1 = 1U;
            this->__Vdlyvval__total_angle_pipe__v1 
                = (0xffffU & ((IData)(0x2000U) + this->total_angle_pipe
                              [0U]));
            this->__Vdlyvval__y_pipe__v1 = (0x1ffffU 
                                            & (this->y_pipe
                                               [0U] 
                                               + this->x_pipe
                                               [0U]));
        } else {
            this->__Vdlyvval__total_angle_pipe__v2 
                = (0xffffU & (this->total_angle_pipe
                              [0U] - (IData)(0x2000U)));
            this->__Vdlyvset__total_angle_pipe__v2 = 1U;
            this->__Vdlyvval__x_pipe__v2 = (0x1ffffU 
                                            & (this->x_pipe
                                               [0U] 
                                               + this->y_pipe
                                               [0U]));
            this->__Vdlyvval__y_pipe__v2 = (0x1ffffU 
                                            & (this->y_pipe
                                               [0U] 
                                               - this->x_pipe
                                               [0U]));
        }
        this->__Vdlyvval__desired_angle_pipe__v1 = 
            this->desired_angle_pipe[0U];
        this->__Vdlyvset__desired_angle_pipe__v1 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [1U], this->desired_angle_pipe
                       [1U])) {
            this->__Vdlyvval__x_pipe__v3 = (0x1ffffU 
                                            & (this->x_pipe
                                               [1U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [1U], 1U)));
            this->__Vdlyvset__x_pipe__v3 = 1U;
            this->__Vdlyvval__total_angle_pipe__v3 
                = (0xffffU & ((IData)(0x12e4U) + this->total_angle_pipe
                              [1U]));
            this->__Vdlyvval__y_pipe__v3 = (0x1ffffU 
                                            & (this->y_pipe
                                               [1U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [1U], 1U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v4 
                = (0xffffU & (this->total_angle_pipe
                              [1U] - (IData)(0x12e4U)));
            this->__Vdlyvset__total_angle_pipe__v4 = 1U;
            this->__Vdlyvval__x_pipe__v4 = (0x1ffffU 
                                            & (this->x_pipe
                                               [1U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [1U], 1U)));
            this->__Vdlyvval__y_pipe__v4 = (0x1ffffU 
                                            & (this->y_pipe
                                               [1U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [1U], 1U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v2 = 
            this->desired_angle_pipe[1U];
        this->__Vdlyvset__desired_angle_pipe__v2 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [2U], this->desired_angle_pipe
                       [2U])) {
            this->__Vdlyvval__x_pipe__v5 = (0x1ffffU 
                                            & (this->x_pipe
                                               [2U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [2U], 2U)));
            this->__Vdlyvset__x_pipe__v5 = 1U;
            this->__Vdlyvval__total_angle_pipe__v5 
                = (0xffffU & ((IData)(0x9fbU) + this->total_angle_pipe
                              [2U]));
            this->__Vdlyvval__y_pipe__v5 = (0x1ffffU 
                                            & (this->y_pipe
                                               [2U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [2U], 2U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v6 
                = (0xffffU & (this->total_angle_pipe
                              [2U] - (IData)(0x9fbU)));
            this->__Vdlyvset__total_angle_pipe__v6 = 1U;
            this->__Vdlyvval__x_pipe__v6 = (0x1ffffU 
                                            & (this->x_pipe
                                               [2U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [2U], 2U)));
            this->__Vdlyvval__y_pipe__v6 = (0x1ffffU 
                                            & (this->y_pipe
                                               [2U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [2U], 2U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v3 = 
            this->desired_angle_pipe[2U];
        this->__Vdlyvset__desired_angle_pipe__v3 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [3U], this->desired_angle_pipe
                       [3U])) {
            this->__Vdlyvval__x_pipe__v7 = (0x1ffffU 
                                            & (this->x_pipe
                                               [3U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [3U], 3U)));
            this->__Vdlyvset__x_pipe__v7 = 1U;
            this->__Vdlyvval__total_angle_pipe__v7 
                = (0xffffU & ((IData)(0x511U) + this->total_angle_pipe
                              [3U]));
            this->__Vdlyvval__y_pipe__v7 = (0x1ffffU 
                                            & (this->y_pipe
                                               [3U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [3U], 3U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v8 
                = (0xffffU & (this->total_angle_pipe
                              [3U] - (IData)(0x511U)));
            this->__Vdlyvset__total_angle_pipe__v8 = 1U;
            this->__Vdlyvval__x_pipe__v8 = (0x1ffffU 
                                            & (this->x_pipe
                                               [3U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [3U], 3U)));
            this->__Vdlyvval__y_pipe__v8 = (0x1ffffU 
                                            & (this->y_pipe
                                               [3U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [3U], 3U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v4 = 
            this->desired_angle_pipe[3U];
        this->__Vdlyvset__desired_angle_pipe__v4 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [4U], this->desired_angle_pipe
                       [4U])) {
            this->__Vdlyvval__x_pipe__v9 = (0x1ffffU 
                                            & (this->x_pipe
                                               [4U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [4U], 4U)));
            this->__Vdlyvset__x_pipe__v9 = 1U;
            this->__Vdlyvval__total_angle_pipe__v9 
                = (0xffffU & ((IData)(0x28bU) + this->total_angle_pipe
                              [4U]));
            this->__Vdlyvval__y_pipe__v9 = (0x1ffffU 
                                            & (this->y_pipe
                                               [4U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [4U], 4U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v10 
                = (0xffffU & (this->total_angle_pipe
                              [4U] - (IData)(0x28bU)));
            this->__Vdlyvset__total_angle_pipe__v10 = 1U;
            this->__Vdlyvval__x_pipe__v10 = (0x1ffffU 
                                             & (this->x_pipe
                                                [4U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [4U], 4U)));
            this->__Vdlyvval__y_pipe__v10 = (0x1ffffU 
                                             & (this->y_pipe
                                                [4U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [4U], 4U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v5 = 
            this->desired_angle_pipe[4U];
        this->__Vdlyvset__desired_angle_pipe__v5 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [5U], this->desired_angle_pipe
                       [5U])) {
            this->__Vdlyvval__x_pipe__v11 = (0x1ffffU 
                                             & (this->x_pipe
                                                [5U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [5U], 5U)));
            this->__Vdlyvset__x_pipe__v11 = 1U;
            this->__Vdlyvval__total_angle_pipe__v11 
                = (0xffffU & ((IData)(0x146U) + this->total_angle_pipe
                              [5U]));
            this->__Vdlyvval__y_pipe__v11 = (0x1ffffU 
                                             & (this->y_pipe
                                                [5U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [5U], 5U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v12 
                = (0xffffU & (this->total_angle_pipe
                              [5U] - (IData)(0x146U)));
            this->__Vdlyvset__total_angle_pipe__v12 = 1U;
            this->__Vdlyvval__x_pipe__v12 = (0x1ffffU 
                                             & (this->x_pipe
                                                [5U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [5U], 5U)));
            this->__Vdlyvval__y_pipe__v12 = (0x1ffffU 
                                             & (this->y_pipe
                                                [5U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [5U], 5U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v6 = 
            this->desired_angle_pipe[5U];
        this->__Vdlyvset__desired_angle_pipe__v6 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [6U], this->desired_angle_pipe
                       [6U])) {
            this->__Vdlyvval__x_pipe__v13 = (0x1ffffU 
                                             & (this->x_pipe
                                                [6U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [6U], 6U)));
            this->__Vdlyvset__x_pipe__v13 = 1U;
            this->__Vdlyvval__total_angle_pipe__v13 
                = (0xffffU & ((IData)(0xa3U) + this->total_angle_pipe
                              [6U]));
            this->__Vdlyvval__y_pipe__v13 = (0x1ffffU 
                                             & (this->y_pipe
                                                [6U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [6U], 6U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v14 
                = (0xffffU & (this->total_angle_pipe
                              [6U] - (IData)(0xa3U)));
            this->__Vdlyvset__total_angle_pipe__v14 = 1U;
            this->__Vdlyvval__x_pipe__v14 = (0x1ffffU 
                                             & (this->x_pipe
                                                [6U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [6U], 6U)));
            this->__Vdlyvval__y_pipe__v14 = (0x1ffffU 
                                             & (this->y_pipe
                                                [6U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [6U], 6U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v7 = 
            this->desired_angle_pipe[6U];
        this->__Vdlyvset__desired_angle_pipe__v7 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [7U], this->desired_angle_pipe
                       [7U])) {
            this->__Vdlyvval__x_pipe__v15 = (0x1ffffU 
                                             & (this->x_pipe
                                                [7U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [7U], 7U)));
            this->__Vdlyvset__x_pipe__v15 = 1U;
            this->__Vdlyvval__total_angle_pipe__v15 
                = (0xffffU & ((IData)(0x51U) + this->total_angle_pipe
                              [7U]));
            this->__Vdlyvval__y_pipe__v15 = (0x1ffffU 
                                             & (this->y_pipe
                                                [7U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [7U], 7U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v16 
                = (0xffffU & (this->total_angle_pipe
                              [7U] - (IData)(0x51U)));
            this->__Vdlyvset__total_angle_pipe__v16 = 1U;
            this->__Vdlyvval__x_pipe__v16 = (0x1ffffU 
                                             & (this->x_pipe
                                                [7U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [7U], 7U)));
            this->__Vdlyvval__y_pipe__v16 = (0x1ffffU 
                                             & (this->y_pipe
                                                [7U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [7U], 7U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v8 = 
            this->desired_angle_pipe[7U];
        this->__Vdlyvset__desired_angle_pipe__v8 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [8U], this->desired_angle_pipe
                       [8U])) {
            this->__Vdlyvval__x_pipe__v17 = (0x1ffffU 
                                             & (this->x_pipe
                                                [8U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [8U], 8U)));
            this->__Vdlyvset__x_pipe__v17 = 1U;
            this->__Vdlyvval__total_angle_pipe__v17 
                = (0xffffU & ((IData)(0x29U) + this->total_angle_pipe
                              [8U]));
            this->__Vdlyvval__y_pipe__v17 = (0x1ffffU 
                                             & (this->y_pipe
                                                [8U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [8U], 8U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v18 
                = (0xffffU & (this->total_angle_pipe
                              [8U] - (IData)(0x29U)));
            this->__Vdlyvset__total_angle_pipe__v18 = 1U;
            this->__Vdlyvval__x_pipe__v18 = (0x1ffffU 
                                             & (this->x_pipe
                                                [8U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [8U], 8U)));
            this->__Vdlyvval__y_pipe__v18 = (0x1ffffU 
                                             & (this->y_pipe
                                                [8U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [8U], 8U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v9 = 
            this->desired_angle_pipe[8U];
        this->__Vdlyvset__desired_angle_pipe__v9 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [9U], this->desired_angle_pipe
                       [9U])) {
            this->__Vdlyvval__x_pipe__v19 = (0x1ffffU 
                                             & (this->x_pipe
                                                [9U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [9U], 9U)));
            this->__Vdlyvset__x_pipe__v19 = 1U;
            this->__Vdlyvval__total_angle_pipe__v19 
                = (0xffffU & ((IData)(0x14U) + this->total_angle_pipe
                              [9U]));
            this->__Vdlyvval__y_pipe__v19 = (0x1ffffU 
                                             & (this->y_pipe
                                                [9U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [9U], 9U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v20 
                = (0xffffU & (this->total_angle_pipe
                              [9U] - (IData)(0x14U)));
            this->__Vdlyvset__total_angle_pipe__v20 = 1U;
            this->__Vdlyvval__x_pipe__v20 = (0x1ffffU 
                                             & (this->x_pipe
                                                [9U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [9U], 9U)));
            this->__Vdlyvval__y_pipe__v20 = (0x1ffffU 
                                             & (this->y_pipe
                                                [9U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [9U], 9U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v10 = 
            this->desired_angle_pipe[9U];
        this->__Vdlyvset__desired_angle_pipe__v10 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xaU], this->desired_angle_pipe
                       [0xaU])) {
            this->__Vdlyvval__x_pipe__v21 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xaU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xaU], 0xaU)));
            this->__Vdlyvset__x_pipe__v21 = 1U;
            this->__Vdlyvval__total_angle_pipe__v21 
                = (0xffffU & ((IData)(0xaU) + this->total_angle_pipe
                              [0xaU]));
            this->__Vdlyvval__y_pipe__v21 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xaU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xaU], 0xaU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v22 
                = (0xffffU & (this->total_angle_pipe
                              [0xaU] - (IData)(0xaU)));
            this->__Vdlyvset__total_angle_pipe__v22 = 1U;
            this->__Vdlyvval__x_pipe__v22 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xaU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xaU], 0xaU)));
            this->__Vdlyvval__y_pipe__v22 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xaU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xaU], 0xaU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v11 = 
            this->desired_angle_pipe[0xaU];
        this->__Vdlyvset__desired_angle_pipe__v11 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xbU], this->desired_angle_pipe
                       [0xbU])) {
            this->__Vdlyvval__x_pipe__v23 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xbU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xbU], 0xbU)));
            this->__Vdlyvset__x_pipe__v23 = 1U;
            this->__Vdlyvval__total_angle_pipe__v23 
                = (0xffffU & ((IData)(5U) + this->total_angle_pipe
                              [0xbU]));
            this->__Vdlyvval__y_pipe__v23 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xbU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xbU], 0xbU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v24 
                = (0xffffU & (this->total_angle_pipe
                              [0xbU] - (IData)(5U)));
            this->__Vdlyvset__total_angle_pipe__v24 = 1U;
            this->__Vdlyvval__x_pipe__v24 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xbU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xbU], 0xbU)));
            this->__Vdlyvval__y_pipe__v24 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xbU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xbU], 0xbU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v12 = 
            this->desired_angle_pipe[0xbU];
        this->__Vdlyvset__desired_angle_pipe__v12 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xcU], this->desired_angle_pipe
                       [0xcU])) {
            this->__Vdlyvval__x_pipe__v25 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xcU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xcU], 0xcU)));
            this->__Vdlyvset__x_pipe__v25 = 1U;
            this->__Vdlyvval__total_angle_pipe__v25 
                = (0xffffU & ((IData)(3U) + this->total_angle_pipe
                              [0xcU]));
            this->__Vdlyvval__y_pipe__v25 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xcU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xcU], 0xcU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v26 
                = (0xffffU & (this->total_angle_pipe
                              [0xcU] - (IData)(3U)));
            this->__Vdlyvset__total_angle_pipe__v26 = 1U;
            this->__Vdlyvval__x_pipe__v26 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xcU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xcU], 0xcU)));
            this->__Vdlyvval__y_pipe__v26 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xcU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xcU], 0xcU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v13 = 
            this->desired_angle_pipe[0xcU];
        this->__Vdlyvset__desired_angle_pipe__v13 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xdU], this->desired_angle_pipe
                       [0xdU])) {
            this->__Vdlyvval__x_pipe__v27 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xdU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xdU], 0xdU)));
            this->__Vdlyvset__x_pipe__v27 = 1U;
            this->__Vdlyvval__total_angle_pipe__v27 
                = (0xffffU & ((IData)(1U) + this->total_angle_pipe
                              [0xdU]));
            this->__Vdlyvval__y_pipe__v27 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xdU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xdU], 0xdU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v28 
                = (0xffffU & (this->total_angle_pipe
                              [0xdU] - (IData)(1U)));
            this->__Vdlyvset__total_angle_pipe__v28 = 1U;
            this->__Vdlyvval__x_pipe__v28 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xdU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xdU], 0xdU)));
            this->__Vdlyvval__y_pipe__v28 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xdU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xdU], 0xdU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v14 = 
            this->desired_angle_pipe[0xdU];
        this->__Vdlyvset__desired_angle_pipe__v14 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xeU], this->desired_angle_pipe
                       [0xeU])) {
            this->__Vdlyvval__x_pipe__v29 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xeU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xeU], 0xeU)));
            this->__Vdlyvset__x_pipe__v29 = 1U;
            this->__Vdlyvval__total_angle_pipe__v29 
                = (0xffffU & ((IData)(1U) + this->total_angle_pipe
                              [0xeU]));
            this->__Vdlyvval__y_pipe__v29 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xeU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xeU], 0xeU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v30 
                = (0xffffU & (this->total_angle_pipe
                              [0xeU] - (IData)(1U)));
            this->__Vdlyvset__total_angle_pipe__v30 = 1U;
            this->__Vdlyvval__x_pipe__v30 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xeU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xeU], 0xeU)));
            this->__Vdlyvval__y_pipe__v30 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xeU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xeU], 0xeU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v15 = 
            this->desired_angle_pipe[0xeU];
        this->__Vdlyvset__desired_angle_pipe__v15 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xfU], this->desired_angle_pipe
                       [0xfU])) {
            this->__Vdlyvval__x_pipe__v31 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xfU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xfU], 0xfU)));
            this->__Vdlyvset__x_pipe__v31 = 1U;
            this->__Vdlyvval__total_angle_pipe__v31 
                = this->total_angle_pipe[0xfU];
            this->__Vdlyvval__y_pipe__v31 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xfU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xfU], 0xfU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v32 
                = this->total_angle_pipe[0xfU];
            this->__Vdlyvset__total_angle_pipe__v32 = 1U;
            this->__Vdlyvval__x_pipe__v32 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xfU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xfU], 0xfU)));
            this->__Vdlyvval__y_pipe__v32 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xfU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xfU], 0xfU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v16 = 
            this->desired_angle_pipe[0xfU];
        this->__Vdlyvset__desired_angle_pipe__v16 = 1U;
    }
    this->valid_pipe[0U] = this->__Vdlyvval__valid_pipe__v0;
    this->valid_pipe[1U] = this->__Vdlyvval__valid_pipe__v1;
    this->valid_pipe[2U] = this->__Vdlyvval__valid_pipe__v2;
    this->valid_pipe[3U] = this->__Vdlyvval__valid_pipe__v3;
    this->valid_pipe[4U] = this->__Vdlyvval__valid_pipe__v4;
    this->valid_pipe[5U] = this->__Vdlyvval__valid_pipe__v5;
    this->valid_pipe[6U] = this->__Vdlyvval__valid_pipe__v6;
    this->valid_pipe[7U] = this->__Vdlyvval__valid_pipe__v7;
    this->valid_pipe[8U] = this->__Vdlyvval__valid_pipe__v8;
    this->valid_pipe[9U] = this->__Vdlyvval__valid_pipe__v9;
    this->valid_pipe[0xaU] = this->__Vdlyvval__valid_pipe__v10;
    this->valid_pipe[0xbU] = this->__Vdlyvval__valid_pipe__v11;
    this->valid_pipe[0xcU] = this->__Vdlyvval__valid_pipe__v12;
    this->valid_pipe[0xdU] = this->__Vdlyvval__valid_pipe__v13;
    this->valid_pipe[0xeU] = this->__Vdlyvval__valid_pipe__v14;
    this->valid_pipe[0xfU] = this->__Vdlyvval__valid_pipe__v15;
    this->valid_pipe[0x10U] = this->__Vdlyvval__valid_pipe__v16;
    if (this->__Vdlyvset__x_flip_pipe__v0) {
        this->x_flip_pipe[0U] = this->__Vdlyvval__x_flip_pipe__v0;
    }
    if (this->__Vdlyvset__x_flip_pipe__v1) {
        this->x_flip_pipe[1U] = this->__Vdlyvval__x_flip_pipe__v1;
    }
    if (this->__Vdlyvset__x_flip_pipe__v2) {
        this->x_flip_pipe[2U] = this->__Vdlyvval__x_flip_pipe__v2;
    }
    if (this->__Vdlyvset__x_flip_pipe__v3) {
        this->x_flip_pipe[3U] = this->__Vdlyvval__x_flip_pipe__v3;
    }
    if (this->__Vdlyvset__x_flip_pipe__v4) {
        this->x_flip_pipe[4U] = this->__Vdlyvval__x_flip_pipe__v4;
    }
    if (this->__Vdlyvset__x_flip_pipe__v5) {
        this->x_flip_pipe[5U] = this->__Vdlyvval__x_flip_pipe__v5;
    }
    if (this->__Vdlyvset__x_flip_pipe__v6) {
        this->x_flip_pipe[6U] = this->__Vdlyvval__x_flip_pipe__v6;
    }
    if (this->__Vdlyvset__x_flip_pipe__v7) {
        this->x_flip_pipe[7U] = this->__Vdlyvval__x_flip_pipe__v7;
    }
    if (this->__Vdlyvset__x_flip_pipe__v8) {
        this->x_flip_pipe[8U] = this->__Vdlyvval__x_flip_pipe__v8;
    }
    if (this->__Vdlyvset__x_flip_pipe__v9) {
        this->x_flip_pipe[9U] = this->__Vdlyvval__x_flip_pipe__v9;
    }
    if (this->__Vdlyvset__x_flip_pipe__v10) {
        this->x_flip_pipe[0xaU] = this->__Vdlyvval__x_flip_pipe__v10;
    }
    if (this->__Vdlyvset__x_flip_pipe__v11) {
        this->x_flip_pipe[0xbU] = this->__Vdlyvval__x_flip_pipe__v11;
    }
    if (this->__Vdlyvset__x_flip_pipe__v12) {
        this->x_flip_pipe[0xcU] = this->__Vdlyvval__x_flip_pipe__v12;
    }
    if (this->__Vdlyvset__x_flip_pipe__v13) {
        this->x_flip_pipe[0xdU] = this->__Vdlyvval__x_flip_pipe__v13;
    }
    if (this->__Vdlyvset__x_flip_pipe__v14) {
        this->x_flip_pipe[0xeU] = this->__Vdlyvval__x_flip_pipe__v14;
    }
    if (this->__Vdlyvset__x_flip_pipe__v15) {
        this->x_flip_pipe[0xfU] = this->__Vdlyvval__x_flip_pipe__v15;
    }
    if (this->__Vdlyvset__x_flip_pipe__v16) {
        this->x_flip_pipe[0x10U] = this->__Vdlyvval__x_flip_pipe__v16;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v0) {
        this->desired_angle_pipe[0U] = this->__Vdlyvval__desired_angle_pipe__v0;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v1) {
        this->desired_angle_pipe[1U] = this->__Vdlyvval__desired_angle_pipe__v1;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v2) {
        this->desired_angle_pipe[2U] = this->__Vdlyvval__desired_angle_pipe__v2;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v3) {
        this->desired_angle_pipe[3U] = this->__Vdlyvval__desired_angle_pipe__v3;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v4) {
        this->desired_angle_pipe[4U] = this->__Vdlyvval__desired_angle_pipe__v4;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v5) {
        this->desired_angle_pipe[5U] = this->__Vdlyvval__desired_angle_pipe__v5;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v6) {
        this->desired_angle_pipe[6U] = this->__Vdlyvval__desired_angle_pipe__v6;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v7) {
        this->desired_angle_pipe[7U] = this->__Vdlyvval__desired_angle_pipe__v7;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v8) {
        this->desired_angle_pipe[8U] = this->__Vdlyvval__desired_angle_pipe__v8;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v9) {
        this->desired_angle_pipe[9U] = this->__Vdlyvval__desired_angle_pipe__v9;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v10) {
        this->desired_angle_pipe[0xaU] = this->__Vdlyvval__desired_angle_pipe__v10;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v11) {
        this->desired_angle_pipe[0xbU] = this->__Vdlyvval__desired_angle_pipe__v11;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v12) {
        this->desired_angle_pipe[0xcU] = this->__Vdlyvval__desired_angle_pipe__v12;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v13) {
        this->desired_angle_pipe[0xdU] = this->__Vdlyvval__desired_angle_pipe__v13;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v14) {
        this->desired_angle_pipe[0xeU] = this->__Vdlyvval__desired_angle_pipe__v14;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v15) {
        this->desired_angle_pipe[0xfU] = this->__Vdlyvval__desired_angle_pipe__v15;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v16) {
        this->desired_angle_pipe[0x10U] = this->__Vdlyvval__desired_angle_pipe__v16;
    }
    if (this->__Vdlyvset__total_angle_pipe__v0) {
        this->total_angle_pipe[0U] = 0U;
    }
    if (this->__Vdlyvset__x_pipe__v1) {
        this->total_angle_pipe[1U] = this->__Vdlyvval__total_angle_pipe__v1;
    }
    if (this->__Vdlyvset__total_angle_pipe__v2) {
        this->total_angle_pipe[1U] = this->__Vdlyvval__total_angle_pipe__v2;
    }
    if (this->__Vdlyvset__x_pipe__v3) {
        this->total_angle_pipe[2U] = this->__Vdlyvval__total_angle_pipe__v3;
    }
    if (this->__Vdlyvset__total_angle_pipe__v4) {
        this->total_angle_pipe[2U] = this->__Vdlyvval__total_angle_pipe__v4;
    }
    if (this->__Vdlyvset__x_pipe__v5) {
        this->total_angle_pipe[3U] = this->__Vdlyvval__total_angle_pipe__v5;
    }
    if (this->__Vdlyvset__total_angle_pipe__v6) {
        this->total_angle_pipe[3U] = this->__Vdlyvval__total_angle_pipe__v6;
    }
    if (this->__Vdlyvset__x_pipe__v7) {
        this->total_angle_pipe[4U] = this->__Vdlyvval__total_angle_pipe__v7;
    }
    if (this->__Vdlyvset__total_angle_pipe__v8) {
        this->total_angle_pipe[4U] = this->__Vdlyvval__total_angle_pipe__v8;
    }
    if (this->__Vdlyvset__x_pipe__v9) {
        this->total_angle_pipe[5U] = this->__Vdlyvval__total_angle_pipe__v9;
    }
    if (this->__Vdlyvset__total_angle_pipe__v10) {
        this->total_angle_pipe[5U] = this->__Vdlyvval__total_angle_pipe__v10;
    }
    if (this->__Vdlyvset__x_pipe__v11) {
        this->total_angle_pipe[6U] = this->__Vdlyvval__total_angle_pipe__v11;
    }
    if (this->__Vdlyvset__total_angle_pipe__v12) {
        this->total_angle_pipe[6U] = this->__Vdlyvval__total_angle_pipe__v12;
    }
    if (this->__Vdlyvset__x_pipe__v13) {
        this->total_angle_pipe[7U] = this->__Vdlyvval__total_angle_pipe__v13;
    }
    if (this->__Vdlyvset__total_angle_pipe__v14) {
        this->total_angle_pipe[7U] = this->__Vdlyvval__total_angle_pipe__v14;
    }
    if (this->__Vdlyvset__x_pipe__v15) {
        this->total_angle_pipe[8U] = this->__Vdlyvval__total_angle_pipe__v15;
    }
    if (this->__Vdlyvset__total_angle_pipe__v16) {
        this->total_angle_pipe[8U] = this->__Vdlyvval__total_angle_pipe__v16;
    }
    if (this->__Vdlyvset__x_pipe__v17) {
        this->total_angle_pipe[9U] = this->__Vdlyvval__total_angle_pipe__v17;
    }
    if (this->__Vdlyvset__total_angle_pipe__v18) {
        this->total_angle_pipe[9U] = this->__Vdlyvval__total_angle_pipe__v18;
    }
    if (this->__Vdlyvset__x_pipe__v19) {
        this->total_angle_pipe[0xaU] = this->__Vdlyvval__total_angle_pipe__v19;
    }
    if (this->__Vdlyvset__total_angle_pipe__v20) {
        this->total_angle_pipe[0xaU] = this->__Vdlyvval__total_angle_pipe__v20;
    }
    if (this->__Vdlyvset__x_pipe__v21) {
        this->total_angle_pipe[0xbU] = this->__Vdlyvval__total_angle_pipe__v21;
    }
    if (this->__Vdlyvset__total_angle_pipe__v22) {
        this->total_angle_pipe[0xbU] = this->__Vdlyvval__total_angle_pipe__v22;
    }
    if (this->__Vdlyvset__x_pipe__v23) {
        this->total_angle_pipe[0xcU] = this->__Vdlyvval__total_angle_pipe__v23;
    }
    if (this->__Vdlyvset__total_angle_pipe__v24) {
        this->total_angle_pipe[0xcU] = this->__Vdlyvval__total_angle_pipe__v24;
    }
    if (this->__Vdlyvset__x_pipe__v25) {
        this->total_angle_pipe[0xdU] = this->__Vdlyvval__total_angle_pipe__v25;
    }
    if (this->__Vdlyvset__total_angle_pipe__v26) {
        this->total_angle_pipe[0xdU] = this->__Vdlyvval__total_angle_pipe__v26;
    }
    if (this->__Vdlyvset__x_pipe__v27) {
        this->total_angle_pipe[0xeU] = this->__Vdlyvval__total_angle_pipe__v27;
    }
    if (this->__Vdlyvset__total_angle_pipe__v28) {
        this->total_angle_pipe[0xeU] = this->__Vdlyvval__total_angle_pipe__v28;
    }
    if (this->__Vdlyvset__x_pipe__v29) {
        this->total_angle_pipe[0xfU] = this->__Vdlyvval__total_angle_pipe__v29;
    }
    if (this->__Vdlyvset__total_angle_pipe__v30) {
        this->total_angle_pipe[0xfU] = this->__Vdlyvval__total_angle_pipe__v30;
    }
    if (this->__Vdlyvset__x_pipe__v31) {
        this->total_angle_pipe[0x10U] = this->__Vdlyvval__total_angle_pipe__v31;
    }
    if (this->__Vdlyvset__total_angle_pipe__v32) {
        this->total_angle_pipe[0x10U] = this->__Vdlyvval__total_angle_pipe__v32;
    }
    if (this->__Vdlyvset__y_pipe__v0) {
        this->y_pipe[0U] = 0U;
    }
    if (this->__Vdlyvset__x_pipe__v1) {
        this->y_pipe[1U] = this->__Vdlyvval__y_pipe__v1;
    }
    if (this->__Vdlyvset__total_angle_pipe__v2) {
        this->y_pipe[1U] = this->__Vdlyvval__y_pipe__v2;
    }
    if (this->__Vdlyvset__x_pipe__v3) {
        this->y_pipe[2U] = this->__Vdlyvval__y_pipe__v3;
    }
    if (this->__Vdlyvset__total_angle_pipe__v4) {
        this->y_pipe[2U] = this->__Vdlyvval__y_pipe__v4;
    }
    if (this->__Vdlyvset__x_pipe__v5) {
        this->y_pipe[3U] = this->__Vdlyvval__y_pipe__v5;
    }
    if (this->__Vdlyvset__total_angle_pipe__v6) {
        this->y_pipe[3U] = this->__Vdlyvval__y_pipe__v6;
    }
    if (this->__Vdlyvset__x_pipe__v7) {
        this->y_pipe[4U] = this->__Vdlyvval__y_pipe__v7;
    }
    if (this->__Vdlyvset__total_angle_pipe__v8) {
        this->y_pipe[4U] = this->__Vdlyvval__y_pipe__v8;
    }
    if (this->__Vdlyvset__x_pipe__v9) {
        this->y_pipe[5U] = this->__Vdlyvval__y_pipe__v9;
    }
    if (this->__Vdlyvset__total_angle_pipe__v10) {
        this->y_pipe[5U] = this->__Vdlyvval__y_pipe__v10;
    }
    if (this->__Vdlyvset__x_pipe__v11) {
        this->y_pipe[6U] = this->__Vdlyvval__y_pipe__v11;
    }
    if (this->__Vdlyvset__total_angle_pipe__v12) {
        this->y_pipe[6U] = this->__Vdlyvval__y_pipe__v12;
    }
    if (this->__Vdlyvset__x_pipe__v13) {
        this->y_pipe[7U] = this->__Vdlyvval__y_pipe__v13;
    }
    if (this->__Vdlyvset__total_angle_pipe__v14) {
        this->y_pipe[7U] = this->__Vdlyvval__y_pipe__v14;
    }
    if (this->__Vdlyvset__x_pipe__v15) {
        this->y_pipe[8U] = this->__Vdlyvval__y_pipe__v15;
    }
    if (this->__Vdlyvset__total_angle_pipe__v16) {
        this->y_pipe[8U] = this->__Vdlyvval__y_pipe__v16;
    }
    if (this->__Vdlyvset__x_pipe__v17) {
        this->y_pipe[9U] = this->__Vdlyvval__y_pipe__v17;
    }
    if (this->__Vdlyvset__total_angle_pipe__v18) {
        this->y_pipe[9U] = this->__Vdlyvval__y_pipe__v18;
    }
    if (this->__Vdlyvset__x_pipe__v19) {
        this->y_pipe[0xaU] = this->__Vdlyvval__y_pipe__v19;
    }
    if (this->__Vdlyvset__total_angle_pipe__v20) {
        this->y_pipe[0xaU] = this->__Vdlyvval__y_pipe__v20;
    }
    if (this->__Vdlyvset__x_pipe__v21) {
        this->y_pipe[0xbU] = this->__Vdlyvval__y_pipe__v21;
    }
    if (this->__Vdlyvset__total_angle_pipe__v22) {
        this->y_pipe[0xbU] = this->__Vdlyvval__y_pipe__v22;
    }
    if (this->__Vdlyvset__x_pipe__v23) {
        this->y_pipe[0xcU] = this->__Vdlyvval__y_pipe__v23;
    }
    if (this->__Vdlyvset__total_angle_pipe__v24) {
        this->y_pipe[0xcU] = this->__Vdlyvval__y_pipe__v24;
    }
    if (this->__Vdlyvset__x_pipe__v25) {
        this->y_pipe[0xdU] = this->__Vdlyvval__y_pipe__v25;
    }
    if (this->__Vdlyvset__total_angle_pipe__v26) {
        this->y_pipe[0xdU] = this->__Vdlyvval__y_pipe__v26;
    }
    if (this->__Vdlyvset__x_pipe__v27) {
        this->y_pipe[0xeU] = this->__Vdlyvval__y_pipe__v27;
    }
    if (this->__Vdlyvset__total_angle_pipe__v28) {
        this->y_pipe[0xeU] = this->__Vdlyvval__y_pipe__v28;
    }
    if (this->__Vdlyvset__x_pipe__v29) {
        this->y_pipe[0xfU] = this->__Vdlyvval__y_pipe__v29;
    }
    if (this->__Vdlyvset__total_angle_pipe__v30) {
        this->y_pipe[0xfU] = this->__Vdlyvval__y_pipe__v30;
    }
    if (this->__Vdlyvset__x_pipe__v31) {
        this->y_pipe[0x10U] = this->__Vdlyvval__y_pipe__v31;
    }
    if (this->__Vdlyvset__total_angle_pipe__v32) {
        this->y_pipe[0x10U] = this->__Vdlyvval__y_pipe__v32;
    }
    if (this->__Vdlyvset__x_pipe__v0) {
        this->x_pipe[0U] = 0x4dbaU;
    }
    if (this->__Vdlyvset__x_pipe__v1) {
        this->x_pipe[1U] = this->__Vdlyvval__x_pipe__v1;
    }
    if (this->__Vdlyvset__total_angle_pipe__v2) {
        this->x_pipe[1U] = this->__Vdlyvval__x_pipe__v2;
    }
    if (this->__Vdlyvset__x_pipe__v3) {
        this->x_pipe[2U] = this->__Vdlyvval__x_pipe__v3;
    }
    if (this->__Vdlyvset__total_angle_pipe__v4) {
        this->x_pipe[2U] = this->__Vdlyvval__x_pipe__v4;
    }
    if (this->__Vdlyvset__x_pipe__v5) {
        this->x_pipe[3U] = this->__Vdlyvval__x_pipe__v5;
    }
    if (this->__Vdlyvset__total_angle_pipe__v6) {
        this->x_pipe[3U] = this->__Vdlyvval__x_pipe__v6;
    }
    if (this->__Vdlyvset__x_pipe__v7) {
        this->x_pipe[4U] = this->__Vdlyvval__x_pipe__v7;
    }
    if (this->__Vdlyvset__total_angle_pipe__v8) {
        this->x_pipe[4U] = this->__Vdlyvval__x_pipe__v8;
    }
    if (this->__Vdlyvset__x_pipe__v9) {
        this->x_pipe[5U] = this->__Vdlyvval__x_pipe__v9;
    }
    if (this->__Vdlyvset__total_angle_pipe__v10) {
        this->x_pipe[5U] = this->__Vdlyvval__x_pipe__v10;
    }
    if (this->__Vdlyvset__x_pipe__v11) {
        this->x_pipe[6U] = this->__Vdlyvval__x_pipe__v11;
    }
    if (this->__Vdlyvset__total_angle_pipe__v12) {
        this->x_pipe[6U] = this->__Vdlyvval__x_pipe__v12;
    }
    if (this->__Vdlyvset__x_pipe__v13) {
        this->x_pipe[7U] = this->__Vdlyvval__x_pipe__v13;
    }
    if (this->__Vdlyvset__total_angle_pipe__v14) {
        this->x_pipe[7U] = this->__Vdlyvval__x_pipe__v14;
    }
    if (this->__Vdlyvset__x_pipe__v15) {
        this->x_pipe[8U] = this->__Vdlyvval__x_pipe__v15;
    }
    if (this->__Vdlyvset__total_angle_pipe__v16) {
        this->x_pipe[8U] = this->__Vdlyvval__x_pipe__v16;
    }
    if (this->__Vdlyvset__x_pipe__v17) {
        this->x_pipe[9U] = this->__Vdlyvval__x_pipe__v17;
    }
    if (this->__Vdlyvset__total_angle_pipe__v18) {
        this->x_pipe[9U] = this->__Vdlyvval__x_pipe__v18;
    }
    if (this->__Vdlyvset__x_pipe__v19) {
        this->x_pipe[0xaU] = this->__Vdlyvval__x_pipe__v19;
    }
    if (this->__Vdlyvset__total_angle_pipe__v20) {
        this->x_pipe[0xaU] = this->__Vdlyvval__x_pipe__v20;
    }
    if (this->__Vdlyvset__x_pipe__v21) {
        this->x_pipe[0xbU] = this->__Vdlyvval__x_pipe__v21;
    }
    if (this->__Vdlyvset__total_angle_pipe__v22) {
        this->x_pipe[0xbU] = this->__Vdlyvval__x_pipe__v22;
    }
    if (this->__Vdlyvset__x_pipe__v23) {
        this->x_pipe[0xcU] = this->__Vdlyvval__x_pipe__v23;
    }
    if (this->__Vdlyvset__total_angle_pipe__v24) {
        this->x_pipe[0xcU] = this->__Vdlyvval__x_pipe__v24;
    }
    if (this->__Vdlyvset__x_pipe__v25) {
        this->x_pipe[0xdU] = this->__Vdlyvval__x_pipe__v25;
    }
    if (this->__Vdlyvset__total_angle_pipe__v26) {
        this->x_pipe[0xdU] = this->__Vdlyvval__x_pipe__v26;
    }
    if (this->__Vdlyvset__x_pipe__v27) {
        this->x_pipe[0xeU] = this->__Vdlyvval__x_pipe__v27;
    }
    if (this->__Vdlyvset__total_angle_pipe__v28) {
        this->x_pipe[0xeU] = this->__Vdlyvval__x_pipe__v28;
    }
    if (this->__Vdlyvset__x_pipe__v29) {
        this->x_pipe[0xfU] = this->__Vdlyvval__x_pipe__v29;
    }
    if (this->__Vdlyvset__total_angle_pipe__v30) {
        this->x_pipe[0xfU] = this->__Vdlyvval__x_pipe__v30;
    }
    if (this->__Vdlyvset__x_pipe__v31) {
        this->x_pipe[0x10U] = this->__Vdlyvval__x_pipe__v31;
    }
    if (this->__Vdlyvset__total_angle_pipe__v32) {
        this->x_pipe[0x10U] = this->__Vdlyvval__x_pipe__v32;
    }
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

VL_INLINE_OPT void Vtop_cordic_cossin__W10_N10::_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic__16(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_cordic_cossin__W10_N10::_sequent__TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic__16\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__y_pipe__v0 = 0U;
    this->__Vdlyvset__x_flip_pipe__v0 = 0U;
    this->__Vdlyvset__x_flip_pipe__v1 = 0U;
    this->__Vdlyvset__x_flip_pipe__v2 = 0U;
    this->__Vdlyvset__x_flip_pipe__v3 = 0U;
    this->__Vdlyvset__x_flip_pipe__v4 = 0U;
    this->__Vdlyvset__x_flip_pipe__v5 = 0U;
    this->__Vdlyvset__x_flip_pipe__v6 = 0U;
    this->__Vdlyvset__x_flip_pipe__v7 = 0U;
    this->__Vdlyvset__x_flip_pipe__v8 = 0U;
    this->__Vdlyvset__x_flip_pipe__v9 = 0U;
    this->__Vdlyvset__x_flip_pipe__v10 = 0U;
    this->__Vdlyvset__x_flip_pipe__v11 = 0U;
    this->__Vdlyvset__x_flip_pipe__v12 = 0U;
    this->__Vdlyvset__x_flip_pipe__v13 = 0U;
    this->__Vdlyvset__x_flip_pipe__v14 = 0U;
    this->__Vdlyvset__x_flip_pipe__v15 = 0U;
    this->__Vdlyvset__x_flip_pipe__v16 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v0 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v1 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v2 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v3 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v4 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v5 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v6 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v7 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v8 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v9 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v10 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v11 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v12 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v13 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v14 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v15 = 0U;
    this->__Vdlyvset__desired_angle_pipe__v16 = 0U;
    this->__Vdlyvset__total_angle_pipe__v0 = 0U;
    this->__Vdlyvset__total_angle_pipe__v2 = 0U;
    this->__Vdlyvset__total_angle_pipe__v4 = 0U;
    this->__Vdlyvset__total_angle_pipe__v6 = 0U;
    this->__Vdlyvset__total_angle_pipe__v8 = 0U;
    this->__Vdlyvset__total_angle_pipe__v10 = 0U;
    this->__Vdlyvset__total_angle_pipe__v12 = 0U;
    this->__Vdlyvset__total_angle_pipe__v14 = 0U;
    this->__Vdlyvset__total_angle_pipe__v16 = 0U;
    this->__Vdlyvset__total_angle_pipe__v18 = 0U;
    this->__Vdlyvset__total_angle_pipe__v20 = 0U;
    this->__Vdlyvset__total_angle_pipe__v22 = 0U;
    this->__Vdlyvset__total_angle_pipe__v24 = 0U;
    this->__Vdlyvset__total_angle_pipe__v26 = 0U;
    this->__Vdlyvset__total_angle_pipe__v28 = 0U;
    this->__Vdlyvset__total_angle_pipe__v30 = 0U;
    this->__Vdlyvset__total_angle_pipe__v32 = 0U;
    this->__Vdlyvset__x_pipe__v0 = 0U;
    this->__Vdlyvset__x_pipe__v1 = 0U;
    this->__Vdlyvset__x_pipe__v3 = 0U;
    this->__Vdlyvset__x_pipe__v5 = 0U;
    this->__Vdlyvset__x_pipe__v7 = 0U;
    this->__Vdlyvset__x_pipe__v9 = 0U;
    this->__Vdlyvset__x_pipe__v11 = 0U;
    this->__Vdlyvset__x_pipe__v13 = 0U;
    this->__Vdlyvset__x_pipe__v15 = 0U;
    this->__Vdlyvset__x_pipe__v17 = 0U;
    this->__Vdlyvset__x_pipe__v19 = 0U;
    this->__Vdlyvset__x_pipe__v21 = 0U;
    this->__Vdlyvset__x_pipe__v23 = 0U;
    this->__Vdlyvset__x_pipe__v25 = 0U;
    this->__Vdlyvset__x_pipe__v27 = 0U;
    this->__Vdlyvset__x_pipe__v29 = 0U;
    this->__Vdlyvset__x_pipe__v31 = 0U;
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvset__y_pipe__v0 = 1U;
    }
    this->__Vdlyvval__valid_pipe__v0 = ((~ (IData)(this->rst)) 
                                        & (IData)(this->data_angle_valid_in));
    this->__Vdlyvval__valid_pipe__v1 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [0U]);
    this->__Vdlyvval__valid_pipe__v2 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [1U]);
    this->__Vdlyvval__valid_pipe__v3 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [2U]);
    this->__Vdlyvval__valid_pipe__v4 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [3U]);
    this->__Vdlyvval__valid_pipe__v5 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [4U]);
    this->__Vdlyvval__valid_pipe__v6 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [5U]);
    this->__Vdlyvval__valid_pipe__v7 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [6U]);
    this->__Vdlyvval__valid_pipe__v8 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [7U]);
    this->__Vdlyvval__valid_pipe__v9 = ((~ (IData)(this->rst)) 
                                        & this->valid_pipe
                                        [8U]);
    this->__Vdlyvval__valid_pipe__v10 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [9U]);
    this->__Vdlyvval__valid_pipe__v11 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xaU]);
    this->__Vdlyvval__valid_pipe__v12 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xbU]);
    this->__Vdlyvval__valid_pipe__v13 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xcU]);
    this->__Vdlyvval__valid_pipe__v14 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xdU]);
    this->__Vdlyvval__valid_pipe__v15 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xeU]);
    this->__Vdlyvval__valid_pipe__v16 = ((~ (IData)(this->rst)) 
                                         & this->valid_pipe
                                         [0xfU]);
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v0 = (1U & (
                                                   (0x8000U 
                                                    & (IData)(this->angle))
                                                    ? 
                                                   (~ 
                                                    ((IData)(this->angle) 
                                                     >> 0xeU))
                                                    : 
                                                   ((IData)(this->angle) 
                                                    >> 0xeU)));
        this->__Vdlyvset__x_flip_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v1 = this->x_flip_pipe
            [0U];
        this->__Vdlyvset__x_flip_pipe__v1 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v2 = this->x_flip_pipe
            [1U];
        this->__Vdlyvset__x_flip_pipe__v2 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v3 = this->x_flip_pipe
            [2U];
        this->__Vdlyvset__x_flip_pipe__v3 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v4 = this->x_flip_pipe
            [3U];
        this->__Vdlyvset__x_flip_pipe__v4 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v5 = this->x_flip_pipe
            [4U];
        this->__Vdlyvset__x_flip_pipe__v5 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v6 = this->x_flip_pipe
            [5U];
        this->__Vdlyvset__x_flip_pipe__v6 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v7 = this->x_flip_pipe
            [6U];
        this->__Vdlyvset__x_flip_pipe__v7 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v8 = this->x_flip_pipe
            [7U];
        this->__Vdlyvset__x_flip_pipe__v8 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v9 = this->x_flip_pipe
            [8U];
        this->__Vdlyvset__x_flip_pipe__v9 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v10 = this->x_flip_pipe
            [9U];
        this->__Vdlyvset__x_flip_pipe__v10 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v11 = this->x_flip_pipe
            [0xaU];
        this->__Vdlyvset__x_flip_pipe__v11 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v12 = this->x_flip_pipe
            [0xbU];
        this->__Vdlyvset__x_flip_pipe__v12 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v13 = this->x_flip_pipe
            [0xcU];
        this->__Vdlyvset__x_flip_pipe__v13 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v14 = this->x_flip_pipe
            [0xdU];
        this->__Vdlyvset__x_flip_pipe__v14 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v15 = this->x_flip_pipe
            [0xeU];
        this->__Vdlyvset__x_flip_pipe__v15 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__x_flip_pipe__v16 = this->x_flip_pipe
            [0xfU];
        this->__Vdlyvset__x_flip_pipe__v16 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvval__desired_angle_pipe__v0 = 
            (0xffffU & ((0x8000U & (IData)(this->angle))
                         ? ((0x4000U & (IData)(this->angle))
                             ? (IData)(this->angle)
                             : ((IData)(0x8000U) - 
                                VL_EXTENDS_II(16,16, (IData)(this->angle))))
                         : ((0x4000U & (IData)(this->angle))
                             ? ((IData)(0x8000U) - 
                                VL_EXTENDS_II(16,16, (IData)(this->angle)))
                             : (IData)(this->angle))));
        this->__Vdlyvset__desired_angle_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvset__total_angle_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        this->__Vdlyvset__x_pipe__v0 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0U], this->desired_angle_pipe
                       [0U])) {
            this->__Vdlyvval__x_pipe__v1 = (0x1ffffU 
                                            & (this->x_pipe
                                               [0U] 
                                               - this->y_pipe
                                               [0U]));
            this->__Vdlyvset__x_pipe__v1 = 1U;
            this->__Vdlyvval__total_angle_pipe__v1 
                = (0xffffU & ((IData)(0x2000U) + this->total_angle_pipe
                              [0U]));
            this->__Vdlyvval__y_pipe__v1 = (0x1ffffU 
                                            & (this->y_pipe
                                               [0U] 
                                               + this->x_pipe
                                               [0U]));
        } else {
            this->__Vdlyvval__total_angle_pipe__v2 
                = (0xffffU & (this->total_angle_pipe
                              [0U] - (IData)(0x2000U)));
            this->__Vdlyvset__total_angle_pipe__v2 = 1U;
            this->__Vdlyvval__x_pipe__v2 = (0x1ffffU 
                                            & (this->x_pipe
                                               [0U] 
                                               + this->y_pipe
                                               [0U]));
            this->__Vdlyvval__y_pipe__v2 = (0x1ffffU 
                                            & (this->y_pipe
                                               [0U] 
                                               - this->x_pipe
                                               [0U]));
        }
        this->__Vdlyvval__desired_angle_pipe__v1 = 
            this->desired_angle_pipe[0U];
        this->__Vdlyvset__desired_angle_pipe__v1 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [1U], this->desired_angle_pipe
                       [1U])) {
            this->__Vdlyvval__x_pipe__v3 = (0x1ffffU 
                                            & (this->x_pipe
                                               [1U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [1U], 1U)));
            this->__Vdlyvset__x_pipe__v3 = 1U;
            this->__Vdlyvval__total_angle_pipe__v3 
                = (0xffffU & ((IData)(0x12e4U) + this->total_angle_pipe
                              [1U]));
            this->__Vdlyvval__y_pipe__v3 = (0x1ffffU 
                                            & (this->y_pipe
                                               [1U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [1U], 1U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v4 
                = (0xffffU & (this->total_angle_pipe
                              [1U] - (IData)(0x12e4U)));
            this->__Vdlyvset__total_angle_pipe__v4 = 1U;
            this->__Vdlyvval__x_pipe__v4 = (0x1ffffU 
                                            & (this->x_pipe
                                               [1U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [1U], 1U)));
            this->__Vdlyvval__y_pipe__v4 = (0x1ffffU 
                                            & (this->y_pipe
                                               [1U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [1U], 1U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v2 = 
            this->desired_angle_pipe[1U];
        this->__Vdlyvset__desired_angle_pipe__v2 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [2U], this->desired_angle_pipe
                       [2U])) {
            this->__Vdlyvval__x_pipe__v5 = (0x1ffffU 
                                            & (this->x_pipe
                                               [2U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [2U], 2U)));
            this->__Vdlyvset__x_pipe__v5 = 1U;
            this->__Vdlyvval__total_angle_pipe__v5 
                = (0xffffU & ((IData)(0x9fbU) + this->total_angle_pipe
                              [2U]));
            this->__Vdlyvval__y_pipe__v5 = (0x1ffffU 
                                            & (this->y_pipe
                                               [2U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [2U], 2U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v6 
                = (0xffffU & (this->total_angle_pipe
                              [2U] - (IData)(0x9fbU)));
            this->__Vdlyvset__total_angle_pipe__v6 = 1U;
            this->__Vdlyvval__x_pipe__v6 = (0x1ffffU 
                                            & (this->x_pipe
                                               [2U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [2U], 2U)));
            this->__Vdlyvval__y_pipe__v6 = (0x1ffffU 
                                            & (this->y_pipe
                                               [2U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [2U], 2U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v3 = 
            this->desired_angle_pipe[2U];
        this->__Vdlyvset__desired_angle_pipe__v3 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [3U], this->desired_angle_pipe
                       [3U])) {
            this->__Vdlyvval__x_pipe__v7 = (0x1ffffU 
                                            & (this->x_pipe
                                               [3U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [3U], 3U)));
            this->__Vdlyvset__x_pipe__v7 = 1U;
            this->__Vdlyvval__total_angle_pipe__v7 
                = (0xffffU & ((IData)(0x511U) + this->total_angle_pipe
                              [3U]));
            this->__Vdlyvval__y_pipe__v7 = (0x1ffffU 
                                            & (this->y_pipe
                                               [3U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [3U], 3U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v8 
                = (0xffffU & (this->total_angle_pipe
                              [3U] - (IData)(0x511U)));
            this->__Vdlyvset__total_angle_pipe__v8 = 1U;
            this->__Vdlyvval__x_pipe__v8 = (0x1ffffU 
                                            & (this->x_pipe
                                               [3U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [3U], 3U)));
            this->__Vdlyvval__y_pipe__v8 = (0x1ffffU 
                                            & (this->y_pipe
                                               [3U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [3U], 3U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v4 = 
            this->desired_angle_pipe[3U];
        this->__Vdlyvset__desired_angle_pipe__v4 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [4U], this->desired_angle_pipe
                       [4U])) {
            this->__Vdlyvval__x_pipe__v9 = (0x1ffffU 
                                            & (this->x_pipe
                                               [4U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                this->y_pipe
                                                                [4U], 4U)));
            this->__Vdlyvset__x_pipe__v9 = 1U;
            this->__Vdlyvval__total_angle_pipe__v9 
                = (0xffffU & ((IData)(0x28bU) + this->total_angle_pipe
                              [4U]));
            this->__Vdlyvval__y_pipe__v9 = (0x1ffffU 
                                            & (this->y_pipe
                                               [4U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                this->x_pipe
                                                                [4U], 4U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v10 
                = (0xffffU & (this->total_angle_pipe
                              [4U] - (IData)(0x28bU)));
            this->__Vdlyvset__total_angle_pipe__v10 = 1U;
            this->__Vdlyvval__x_pipe__v10 = (0x1ffffU 
                                             & (this->x_pipe
                                                [4U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [4U], 4U)));
            this->__Vdlyvval__y_pipe__v10 = (0x1ffffU 
                                             & (this->y_pipe
                                                [4U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [4U], 4U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v5 = 
            this->desired_angle_pipe[4U];
        this->__Vdlyvset__desired_angle_pipe__v5 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [5U], this->desired_angle_pipe
                       [5U])) {
            this->__Vdlyvval__x_pipe__v11 = (0x1ffffU 
                                             & (this->x_pipe
                                                [5U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [5U], 5U)));
            this->__Vdlyvset__x_pipe__v11 = 1U;
            this->__Vdlyvval__total_angle_pipe__v11 
                = (0xffffU & ((IData)(0x146U) + this->total_angle_pipe
                              [5U]));
            this->__Vdlyvval__y_pipe__v11 = (0x1ffffU 
                                             & (this->y_pipe
                                                [5U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [5U], 5U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v12 
                = (0xffffU & (this->total_angle_pipe
                              [5U] - (IData)(0x146U)));
            this->__Vdlyvset__total_angle_pipe__v12 = 1U;
            this->__Vdlyvval__x_pipe__v12 = (0x1ffffU 
                                             & (this->x_pipe
                                                [5U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [5U], 5U)));
            this->__Vdlyvval__y_pipe__v12 = (0x1ffffU 
                                             & (this->y_pipe
                                                [5U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [5U], 5U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v6 = 
            this->desired_angle_pipe[5U];
        this->__Vdlyvset__desired_angle_pipe__v6 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [6U], this->desired_angle_pipe
                       [6U])) {
            this->__Vdlyvval__x_pipe__v13 = (0x1ffffU 
                                             & (this->x_pipe
                                                [6U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [6U], 6U)));
            this->__Vdlyvset__x_pipe__v13 = 1U;
            this->__Vdlyvval__total_angle_pipe__v13 
                = (0xffffU & ((IData)(0xa3U) + this->total_angle_pipe
                              [6U]));
            this->__Vdlyvval__y_pipe__v13 = (0x1ffffU 
                                             & (this->y_pipe
                                                [6U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [6U], 6U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v14 
                = (0xffffU & (this->total_angle_pipe
                              [6U] - (IData)(0xa3U)));
            this->__Vdlyvset__total_angle_pipe__v14 = 1U;
            this->__Vdlyvval__x_pipe__v14 = (0x1ffffU 
                                             & (this->x_pipe
                                                [6U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [6U], 6U)));
            this->__Vdlyvval__y_pipe__v14 = (0x1ffffU 
                                             & (this->y_pipe
                                                [6U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [6U], 6U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v7 = 
            this->desired_angle_pipe[6U];
        this->__Vdlyvset__desired_angle_pipe__v7 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [7U], this->desired_angle_pipe
                       [7U])) {
            this->__Vdlyvval__x_pipe__v15 = (0x1ffffU 
                                             & (this->x_pipe
                                                [7U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [7U], 7U)));
            this->__Vdlyvset__x_pipe__v15 = 1U;
            this->__Vdlyvval__total_angle_pipe__v15 
                = (0xffffU & ((IData)(0x51U) + this->total_angle_pipe
                              [7U]));
            this->__Vdlyvval__y_pipe__v15 = (0x1ffffU 
                                             & (this->y_pipe
                                                [7U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [7U], 7U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v16 
                = (0xffffU & (this->total_angle_pipe
                              [7U] - (IData)(0x51U)));
            this->__Vdlyvset__total_angle_pipe__v16 = 1U;
            this->__Vdlyvval__x_pipe__v16 = (0x1ffffU 
                                             & (this->x_pipe
                                                [7U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [7U], 7U)));
            this->__Vdlyvval__y_pipe__v16 = (0x1ffffU 
                                             & (this->y_pipe
                                                [7U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [7U], 7U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v8 = 
            this->desired_angle_pipe[7U];
        this->__Vdlyvset__desired_angle_pipe__v8 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [8U], this->desired_angle_pipe
                       [8U])) {
            this->__Vdlyvval__x_pipe__v17 = (0x1ffffU 
                                             & (this->x_pipe
                                                [8U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [8U], 8U)));
            this->__Vdlyvset__x_pipe__v17 = 1U;
            this->__Vdlyvval__total_angle_pipe__v17 
                = (0xffffU & ((IData)(0x29U) + this->total_angle_pipe
                              [8U]));
            this->__Vdlyvval__y_pipe__v17 = (0x1ffffU 
                                             & (this->y_pipe
                                                [8U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [8U], 8U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v18 
                = (0xffffU & (this->total_angle_pipe
                              [8U] - (IData)(0x29U)));
            this->__Vdlyvset__total_angle_pipe__v18 = 1U;
            this->__Vdlyvval__x_pipe__v18 = (0x1ffffU 
                                             & (this->x_pipe
                                                [8U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [8U], 8U)));
            this->__Vdlyvval__y_pipe__v18 = (0x1ffffU 
                                             & (this->y_pipe
                                                [8U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [8U], 8U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v9 = 
            this->desired_angle_pipe[8U];
        this->__Vdlyvset__desired_angle_pipe__v9 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [9U], this->desired_angle_pipe
                       [9U])) {
            this->__Vdlyvval__x_pipe__v19 = (0x1ffffU 
                                             & (this->x_pipe
                                                [9U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [9U], 9U)));
            this->__Vdlyvset__x_pipe__v19 = 1U;
            this->__Vdlyvval__total_angle_pipe__v19 
                = (0xffffU & ((IData)(0x14U) + this->total_angle_pipe
                              [9U]));
            this->__Vdlyvval__y_pipe__v19 = (0x1ffffU 
                                             & (this->y_pipe
                                                [9U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [9U], 9U)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v20 
                = (0xffffU & (this->total_angle_pipe
                              [9U] - (IData)(0x14U)));
            this->__Vdlyvset__total_angle_pipe__v20 = 1U;
            this->__Vdlyvval__x_pipe__v20 = (0x1ffffU 
                                             & (this->x_pipe
                                                [9U] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [9U], 9U)));
            this->__Vdlyvval__y_pipe__v20 = (0x1ffffU 
                                             & (this->y_pipe
                                                [9U] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [9U], 9U)));
        }
        this->__Vdlyvval__desired_angle_pipe__v10 = 
            this->desired_angle_pipe[9U];
        this->__Vdlyvset__desired_angle_pipe__v10 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xaU], this->desired_angle_pipe
                       [0xaU])) {
            this->__Vdlyvval__x_pipe__v21 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xaU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xaU], 0xaU)));
            this->__Vdlyvset__x_pipe__v21 = 1U;
            this->__Vdlyvval__total_angle_pipe__v21 
                = (0xffffU & ((IData)(0xaU) + this->total_angle_pipe
                              [0xaU]));
            this->__Vdlyvval__y_pipe__v21 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xaU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xaU], 0xaU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v22 
                = (0xffffU & (this->total_angle_pipe
                              [0xaU] - (IData)(0xaU)));
            this->__Vdlyvset__total_angle_pipe__v22 = 1U;
            this->__Vdlyvval__x_pipe__v22 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xaU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xaU], 0xaU)));
            this->__Vdlyvval__y_pipe__v22 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xaU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xaU], 0xaU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v11 = 
            this->desired_angle_pipe[0xaU];
        this->__Vdlyvset__desired_angle_pipe__v11 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xbU], this->desired_angle_pipe
                       [0xbU])) {
            this->__Vdlyvval__x_pipe__v23 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xbU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xbU], 0xbU)));
            this->__Vdlyvset__x_pipe__v23 = 1U;
            this->__Vdlyvval__total_angle_pipe__v23 
                = (0xffffU & ((IData)(5U) + this->total_angle_pipe
                              [0xbU]));
            this->__Vdlyvval__y_pipe__v23 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xbU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xbU], 0xbU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v24 
                = (0xffffU & (this->total_angle_pipe
                              [0xbU] - (IData)(5U)));
            this->__Vdlyvset__total_angle_pipe__v24 = 1U;
            this->__Vdlyvval__x_pipe__v24 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xbU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xbU], 0xbU)));
            this->__Vdlyvval__y_pipe__v24 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xbU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xbU], 0xbU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v12 = 
            this->desired_angle_pipe[0xbU];
        this->__Vdlyvset__desired_angle_pipe__v12 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xcU], this->desired_angle_pipe
                       [0xcU])) {
            this->__Vdlyvval__x_pipe__v25 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xcU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xcU], 0xcU)));
            this->__Vdlyvset__x_pipe__v25 = 1U;
            this->__Vdlyvval__total_angle_pipe__v25 
                = (0xffffU & ((IData)(3U) + this->total_angle_pipe
                              [0xcU]));
            this->__Vdlyvval__y_pipe__v25 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xcU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xcU], 0xcU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v26 
                = (0xffffU & (this->total_angle_pipe
                              [0xcU] - (IData)(3U)));
            this->__Vdlyvset__total_angle_pipe__v26 = 1U;
            this->__Vdlyvval__x_pipe__v26 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xcU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xcU], 0xcU)));
            this->__Vdlyvval__y_pipe__v26 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xcU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xcU], 0xcU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v13 = 
            this->desired_angle_pipe[0xcU];
        this->__Vdlyvset__desired_angle_pipe__v13 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xdU], this->desired_angle_pipe
                       [0xdU])) {
            this->__Vdlyvval__x_pipe__v27 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xdU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xdU], 0xdU)));
            this->__Vdlyvset__x_pipe__v27 = 1U;
            this->__Vdlyvval__total_angle_pipe__v27 
                = (0xffffU & ((IData)(1U) + this->total_angle_pipe
                              [0xdU]));
            this->__Vdlyvval__y_pipe__v27 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xdU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xdU], 0xdU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v28 
                = (0xffffU & (this->total_angle_pipe
                              [0xdU] - (IData)(1U)));
            this->__Vdlyvset__total_angle_pipe__v28 = 1U;
            this->__Vdlyvval__x_pipe__v28 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xdU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xdU], 0xdU)));
            this->__Vdlyvval__y_pipe__v28 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xdU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xdU], 0xdU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v14 = 
            this->desired_angle_pipe[0xdU];
        this->__Vdlyvset__desired_angle_pipe__v14 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xeU], this->desired_angle_pipe
                       [0xeU])) {
            this->__Vdlyvval__x_pipe__v29 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xeU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xeU], 0xeU)));
            this->__Vdlyvset__x_pipe__v29 = 1U;
            this->__Vdlyvval__total_angle_pipe__v29 
                = (0xffffU & ((IData)(1U) + this->total_angle_pipe
                              [0xeU]));
            this->__Vdlyvval__y_pipe__v29 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xeU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xeU], 0xeU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v30 
                = (0xffffU & (this->total_angle_pipe
                              [0xeU] - (IData)(1U)));
            this->__Vdlyvset__total_angle_pipe__v30 = 1U;
            this->__Vdlyvval__x_pipe__v30 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xeU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xeU], 0xeU)));
            this->__Vdlyvval__y_pipe__v30 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xeU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xeU], 0xeU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v15 = 
            this->desired_angle_pipe[0xeU];
        this->__Vdlyvset__desired_angle_pipe__v15 = 1U;
    }
    if ((1U & (~ (IData)(this->rst)))) {
        if (VL_LTS_III(1,16,16, this->total_angle_pipe
                       [0xfU], this->desired_angle_pipe
                       [0xfU])) {
            this->__Vdlyvval__x_pipe__v31 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xfU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xfU], 0xfU)));
            this->__Vdlyvset__x_pipe__v31 = 1U;
            this->__Vdlyvval__total_angle_pipe__v31 
                = this->total_angle_pipe[0xfU];
            this->__Vdlyvval__y_pipe__v31 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xfU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xfU], 0xfU)));
        } else {
            this->__Vdlyvval__total_angle_pipe__v32 
                = this->total_angle_pipe[0xfU];
            this->__Vdlyvset__total_angle_pipe__v32 = 1U;
            this->__Vdlyvval__x_pipe__v32 = (0x1ffffU 
                                             & (this->x_pipe
                                                [0xfU] 
                                                + VL_SHIFTRS_III(17,17,32, 
                                                                 this->y_pipe
                                                                 [0xfU], 0xfU)));
            this->__Vdlyvval__y_pipe__v32 = (0x1ffffU 
                                             & (this->y_pipe
                                                [0xfU] 
                                                - VL_SHIFTRS_III(17,17,32, 
                                                                 this->x_pipe
                                                                 [0xfU], 0xfU)));
        }
        this->__Vdlyvval__desired_angle_pipe__v16 = 
            this->desired_angle_pipe[0xfU];
        this->__Vdlyvset__desired_angle_pipe__v16 = 1U;
    }
    this->valid_pipe[0U] = this->__Vdlyvval__valid_pipe__v0;
    this->valid_pipe[1U] = this->__Vdlyvval__valid_pipe__v1;
    this->valid_pipe[2U] = this->__Vdlyvval__valid_pipe__v2;
    this->valid_pipe[3U] = this->__Vdlyvval__valid_pipe__v3;
    this->valid_pipe[4U] = this->__Vdlyvval__valid_pipe__v4;
    this->valid_pipe[5U] = this->__Vdlyvval__valid_pipe__v5;
    this->valid_pipe[6U] = this->__Vdlyvval__valid_pipe__v6;
    this->valid_pipe[7U] = this->__Vdlyvval__valid_pipe__v7;
    this->valid_pipe[8U] = this->__Vdlyvval__valid_pipe__v8;
    this->valid_pipe[9U] = this->__Vdlyvval__valid_pipe__v9;
    this->valid_pipe[0xaU] = this->__Vdlyvval__valid_pipe__v10;
    this->valid_pipe[0xbU] = this->__Vdlyvval__valid_pipe__v11;
    this->valid_pipe[0xcU] = this->__Vdlyvval__valid_pipe__v12;
    this->valid_pipe[0xdU] = this->__Vdlyvval__valid_pipe__v13;
    this->valid_pipe[0xeU] = this->__Vdlyvval__valid_pipe__v14;
    this->valid_pipe[0xfU] = this->__Vdlyvval__valid_pipe__v15;
    this->valid_pipe[0x10U] = this->__Vdlyvval__valid_pipe__v16;
    if (this->__Vdlyvset__x_flip_pipe__v0) {
        this->x_flip_pipe[0U] = this->__Vdlyvval__x_flip_pipe__v0;
    }
    if (this->__Vdlyvset__x_flip_pipe__v1) {
        this->x_flip_pipe[1U] = this->__Vdlyvval__x_flip_pipe__v1;
    }
    if (this->__Vdlyvset__x_flip_pipe__v2) {
        this->x_flip_pipe[2U] = this->__Vdlyvval__x_flip_pipe__v2;
    }
    if (this->__Vdlyvset__x_flip_pipe__v3) {
        this->x_flip_pipe[3U] = this->__Vdlyvval__x_flip_pipe__v3;
    }
    if (this->__Vdlyvset__x_flip_pipe__v4) {
        this->x_flip_pipe[4U] = this->__Vdlyvval__x_flip_pipe__v4;
    }
    if (this->__Vdlyvset__x_flip_pipe__v5) {
        this->x_flip_pipe[5U] = this->__Vdlyvval__x_flip_pipe__v5;
    }
    if (this->__Vdlyvset__x_flip_pipe__v6) {
        this->x_flip_pipe[6U] = this->__Vdlyvval__x_flip_pipe__v6;
    }
    if (this->__Vdlyvset__x_flip_pipe__v7) {
        this->x_flip_pipe[7U] = this->__Vdlyvval__x_flip_pipe__v7;
    }
    if (this->__Vdlyvset__x_flip_pipe__v8) {
        this->x_flip_pipe[8U] = this->__Vdlyvval__x_flip_pipe__v8;
    }
    if (this->__Vdlyvset__x_flip_pipe__v9) {
        this->x_flip_pipe[9U] = this->__Vdlyvval__x_flip_pipe__v9;
    }
    if (this->__Vdlyvset__x_flip_pipe__v10) {
        this->x_flip_pipe[0xaU] = this->__Vdlyvval__x_flip_pipe__v10;
    }
    if (this->__Vdlyvset__x_flip_pipe__v11) {
        this->x_flip_pipe[0xbU] = this->__Vdlyvval__x_flip_pipe__v11;
    }
    if (this->__Vdlyvset__x_flip_pipe__v12) {
        this->x_flip_pipe[0xcU] = this->__Vdlyvval__x_flip_pipe__v12;
    }
    if (this->__Vdlyvset__x_flip_pipe__v13) {
        this->x_flip_pipe[0xdU] = this->__Vdlyvval__x_flip_pipe__v13;
    }
    if (this->__Vdlyvset__x_flip_pipe__v14) {
        this->x_flip_pipe[0xeU] = this->__Vdlyvval__x_flip_pipe__v14;
    }
    if (this->__Vdlyvset__x_flip_pipe__v15) {
        this->x_flip_pipe[0xfU] = this->__Vdlyvval__x_flip_pipe__v15;
    }
    if (this->__Vdlyvset__x_flip_pipe__v16) {
        this->x_flip_pipe[0x10U] = this->__Vdlyvval__x_flip_pipe__v16;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v0) {
        this->desired_angle_pipe[0U] = this->__Vdlyvval__desired_angle_pipe__v0;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v1) {
        this->desired_angle_pipe[1U] = this->__Vdlyvval__desired_angle_pipe__v1;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v2) {
        this->desired_angle_pipe[2U] = this->__Vdlyvval__desired_angle_pipe__v2;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v3) {
        this->desired_angle_pipe[3U] = this->__Vdlyvval__desired_angle_pipe__v3;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v4) {
        this->desired_angle_pipe[4U] = this->__Vdlyvval__desired_angle_pipe__v4;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v5) {
        this->desired_angle_pipe[5U] = this->__Vdlyvval__desired_angle_pipe__v5;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v6) {
        this->desired_angle_pipe[6U] = this->__Vdlyvval__desired_angle_pipe__v6;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v7) {
        this->desired_angle_pipe[7U] = this->__Vdlyvval__desired_angle_pipe__v7;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v8) {
        this->desired_angle_pipe[8U] = this->__Vdlyvval__desired_angle_pipe__v8;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v9) {
        this->desired_angle_pipe[9U] = this->__Vdlyvval__desired_angle_pipe__v9;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v10) {
        this->desired_angle_pipe[0xaU] = this->__Vdlyvval__desired_angle_pipe__v10;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v11) {
        this->desired_angle_pipe[0xbU] = this->__Vdlyvval__desired_angle_pipe__v11;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v12) {
        this->desired_angle_pipe[0xcU] = this->__Vdlyvval__desired_angle_pipe__v12;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v13) {
        this->desired_angle_pipe[0xdU] = this->__Vdlyvval__desired_angle_pipe__v13;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v14) {
        this->desired_angle_pipe[0xeU] = this->__Vdlyvval__desired_angle_pipe__v14;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v15) {
        this->desired_angle_pipe[0xfU] = this->__Vdlyvval__desired_angle_pipe__v15;
    }
    if (this->__Vdlyvset__desired_angle_pipe__v16) {
        this->desired_angle_pipe[0x10U] = this->__Vdlyvval__desired_angle_pipe__v16;
    }
    if (this->__Vdlyvset__total_angle_pipe__v0) {
        this->total_angle_pipe[0U] = 0U;
    }
    if (this->__Vdlyvset__x_pipe__v1) {
        this->total_angle_pipe[1U] = this->__Vdlyvval__total_angle_pipe__v1;
    }
    if (this->__Vdlyvset__total_angle_pipe__v2) {
        this->total_angle_pipe[1U] = this->__Vdlyvval__total_angle_pipe__v2;
    }
    if (this->__Vdlyvset__x_pipe__v3) {
        this->total_angle_pipe[2U] = this->__Vdlyvval__total_angle_pipe__v3;
    }
    if (this->__Vdlyvset__total_angle_pipe__v4) {
        this->total_angle_pipe[2U] = this->__Vdlyvval__total_angle_pipe__v4;
    }
    if (this->__Vdlyvset__x_pipe__v5) {
        this->total_angle_pipe[3U] = this->__Vdlyvval__total_angle_pipe__v5;
    }
    if (this->__Vdlyvset__total_angle_pipe__v6) {
        this->total_angle_pipe[3U] = this->__Vdlyvval__total_angle_pipe__v6;
    }
    if (this->__Vdlyvset__x_pipe__v7) {
        this->total_angle_pipe[4U] = this->__Vdlyvval__total_angle_pipe__v7;
    }
    if (this->__Vdlyvset__total_angle_pipe__v8) {
        this->total_angle_pipe[4U] = this->__Vdlyvval__total_angle_pipe__v8;
    }
    if (this->__Vdlyvset__x_pipe__v9) {
        this->total_angle_pipe[5U] = this->__Vdlyvval__total_angle_pipe__v9;
    }
    if (this->__Vdlyvset__total_angle_pipe__v10) {
        this->total_angle_pipe[5U] = this->__Vdlyvval__total_angle_pipe__v10;
    }
    if (this->__Vdlyvset__x_pipe__v11) {
        this->total_angle_pipe[6U] = this->__Vdlyvval__total_angle_pipe__v11;
    }
    if (this->__Vdlyvset__total_angle_pipe__v12) {
        this->total_angle_pipe[6U] = this->__Vdlyvval__total_angle_pipe__v12;
    }
    if (this->__Vdlyvset__x_pipe__v13) {
        this->total_angle_pipe[7U] = this->__Vdlyvval__total_angle_pipe__v13;
    }
    if (this->__Vdlyvset__total_angle_pipe__v14) {
        this->total_angle_pipe[7U] = this->__Vdlyvval__total_angle_pipe__v14;
    }
    if (this->__Vdlyvset__x_pipe__v15) {
        this->total_angle_pipe[8U] = this->__Vdlyvval__total_angle_pipe__v15;
    }
    if (this->__Vdlyvset__total_angle_pipe__v16) {
        this->total_angle_pipe[8U] = this->__Vdlyvval__total_angle_pipe__v16;
    }
    if (this->__Vdlyvset__x_pipe__v17) {
        this->total_angle_pipe[9U] = this->__Vdlyvval__total_angle_pipe__v17;
    }
    if (this->__Vdlyvset__total_angle_pipe__v18) {
        this->total_angle_pipe[9U] = this->__Vdlyvval__total_angle_pipe__v18;
    }
    if (this->__Vdlyvset__x_pipe__v19) {
        this->total_angle_pipe[0xaU] = this->__Vdlyvval__total_angle_pipe__v19;
    }
    if (this->__Vdlyvset__total_angle_pipe__v20) {
        this->total_angle_pipe[0xaU] = this->__Vdlyvval__total_angle_pipe__v20;
    }
    if (this->__Vdlyvset__x_pipe__v21) {
        this->total_angle_pipe[0xbU] = this->__Vdlyvval__total_angle_pipe__v21;
    }
    if (this->__Vdlyvset__total_angle_pipe__v22) {
        this->total_angle_pipe[0xbU] = this->__Vdlyvval__total_angle_pipe__v22;
    }
    if (this->__Vdlyvset__x_pipe__v23) {
        this->total_angle_pipe[0xcU] = this->__Vdlyvval__total_angle_pipe__v23;
    }
    if (this->__Vdlyvset__total_angle_pipe__v24) {
        this->total_angle_pipe[0xcU] = this->__Vdlyvval__total_angle_pipe__v24;
    }
    if (this->__Vdlyvset__x_pipe__v25) {
        this->total_angle_pipe[0xdU] = this->__Vdlyvval__total_angle_pipe__v25;
    }
    if (this->__Vdlyvset__total_angle_pipe__v26) {
        this->total_angle_pipe[0xdU] = this->__Vdlyvval__total_angle_pipe__v26;
    }
    if (this->__Vdlyvset__x_pipe__v27) {
        this->total_angle_pipe[0xeU] = this->__Vdlyvval__total_angle_pipe__v27;
    }
    if (this->__Vdlyvset__total_angle_pipe__v28) {
        this->total_angle_pipe[0xeU] = this->__Vdlyvval__total_angle_pipe__v28;
    }
    if (this->__Vdlyvset__x_pipe__v29) {
        this->total_angle_pipe[0xfU] = this->__Vdlyvval__total_angle_pipe__v29;
    }
    if (this->__Vdlyvset__total_angle_pipe__v30) {
        this->total_angle_pipe[0xfU] = this->__Vdlyvval__total_angle_pipe__v30;
    }
    if (this->__Vdlyvset__x_pipe__v31) {
        this->total_angle_pipe[0x10U] = this->__Vdlyvval__total_angle_pipe__v31;
    }
    if (this->__Vdlyvset__total_angle_pipe__v32) {
        this->total_angle_pipe[0x10U] = this->__Vdlyvval__total_angle_pipe__v32;
    }
    if (this->__Vdlyvset__y_pipe__v0) {
        this->y_pipe[0U] = 0U;
    }
    if (this->__Vdlyvset__x_pipe__v1) {
        this->y_pipe[1U] = this->__Vdlyvval__y_pipe__v1;
    }
    if (this->__Vdlyvset__total_angle_pipe__v2) {
        this->y_pipe[1U] = this->__Vdlyvval__y_pipe__v2;
    }
    if (this->__Vdlyvset__x_pipe__v3) {
        this->y_pipe[2U] = this->__Vdlyvval__y_pipe__v3;
    }
    if (this->__Vdlyvset__total_angle_pipe__v4) {
        this->y_pipe[2U] = this->__Vdlyvval__y_pipe__v4;
    }
    if (this->__Vdlyvset__x_pipe__v5) {
        this->y_pipe[3U] = this->__Vdlyvval__y_pipe__v5;
    }
    if (this->__Vdlyvset__total_angle_pipe__v6) {
        this->y_pipe[3U] = this->__Vdlyvval__y_pipe__v6;
    }
    if (this->__Vdlyvset__x_pipe__v7) {
        this->y_pipe[4U] = this->__Vdlyvval__y_pipe__v7;
    }
    if (this->__Vdlyvset__total_angle_pipe__v8) {
        this->y_pipe[4U] = this->__Vdlyvval__y_pipe__v8;
    }
    if (this->__Vdlyvset__x_pipe__v9) {
        this->y_pipe[5U] = this->__Vdlyvval__y_pipe__v9;
    }
    if (this->__Vdlyvset__total_angle_pipe__v10) {
        this->y_pipe[5U] = this->__Vdlyvval__y_pipe__v10;
    }
    if (this->__Vdlyvset__x_pipe__v11) {
        this->y_pipe[6U] = this->__Vdlyvval__y_pipe__v11;
    }
    if (this->__Vdlyvset__total_angle_pipe__v12) {
        this->y_pipe[6U] = this->__Vdlyvval__y_pipe__v12;
    }
    if (this->__Vdlyvset__x_pipe__v13) {
        this->y_pipe[7U] = this->__Vdlyvval__y_pipe__v13;
    }
    if (this->__Vdlyvset__total_angle_pipe__v14) {
        this->y_pipe[7U] = this->__Vdlyvval__y_pipe__v14;
    }
    if (this->__Vdlyvset__x_pipe__v15) {
        this->y_pipe[8U] = this->__Vdlyvval__y_pipe__v15;
    }
    if (this->__Vdlyvset__total_angle_pipe__v16) {
        this->y_pipe[8U] = this->__Vdlyvval__y_pipe__v16;
    }
    if (this->__Vdlyvset__x_pipe__v17) {
        this->y_pipe[9U] = this->__Vdlyvval__y_pipe__v17;
    }
    if (this->__Vdlyvset__total_angle_pipe__v18) {
        this->y_pipe[9U] = this->__Vdlyvval__y_pipe__v18;
    }
    if (this->__Vdlyvset__x_pipe__v19) {
        this->y_pipe[0xaU] = this->__Vdlyvval__y_pipe__v19;
    }
    if (this->__Vdlyvset__total_angle_pipe__v20) {
        this->y_pipe[0xaU] = this->__Vdlyvval__y_pipe__v20;
    }
    if (this->__Vdlyvset__x_pipe__v21) {
        this->y_pipe[0xbU] = this->__Vdlyvval__y_pipe__v21;
    }
    if (this->__Vdlyvset__total_angle_pipe__v22) {
        this->y_pipe[0xbU] = this->__Vdlyvval__y_pipe__v22;
    }
    if (this->__Vdlyvset__x_pipe__v23) {
        this->y_pipe[0xcU] = this->__Vdlyvval__y_pipe__v23;
    }
    if (this->__Vdlyvset__total_angle_pipe__v24) {
        this->y_pipe[0xcU] = this->__Vdlyvval__y_pipe__v24;
    }
    if (this->__Vdlyvset__x_pipe__v25) {
        this->y_pipe[0xdU] = this->__Vdlyvval__y_pipe__v25;
    }
    if (this->__Vdlyvset__total_angle_pipe__v26) {
        this->y_pipe[0xdU] = this->__Vdlyvval__y_pipe__v26;
    }
    if (this->__Vdlyvset__x_pipe__v27) {
        this->y_pipe[0xeU] = this->__Vdlyvval__y_pipe__v27;
    }
    if (this->__Vdlyvset__total_angle_pipe__v28) {
        this->y_pipe[0xeU] = this->__Vdlyvval__y_pipe__v28;
    }
    if (this->__Vdlyvset__x_pipe__v29) {
        this->y_pipe[0xfU] = this->__Vdlyvval__y_pipe__v29;
    }
    if (this->__Vdlyvset__total_angle_pipe__v30) {
        this->y_pipe[0xfU] = this->__Vdlyvval__y_pipe__v30;
    }
    if (this->__Vdlyvset__x_pipe__v31) {
        this->y_pipe[0x10U] = this->__Vdlyvval__y_pipe__v31;
    }
    if (this->__Vdlyvset__total_angle_pipe__v32) {
        this->y_pipe[0x10U] = this->__Vdlyvval__y_pipe__v32;
    }
    if (this->__Vdlyvset__x_pipe__v0) {
        this->x_pipe[0U] = 0x4dbaU;
    }
    if (this->__Vdlyvset__x_pipe__v1) {
        this->x_pipe[1U] = this->__Vdlyvval__x_pipe__v1;
    }
    if (this->__Vdlyvset__total_angle_pipe__v2) {
        this->x_pipe[1U] = this->__Vdlyvval__x_pipe__v2;
    }
    if (this->__Vdlyvset__x_pipe__v3) {
        this->x_pipe[2U] = this->__Vdlyvval__x_pipe__v3;
    }
    if (this->__Vdlyvset__total_angle_pipe__v4) {
        this->x_pipe[2U] = this->__Vdlyvval__x_pipe__v4;
    }
    if (this->__Vdlyvset__x_pipe__v5) {
        this->x_pipe[3U] = this->__Vdlyvval__x_pipe__v5;
    }
    if (this->__Vdlyvset__total_angle_pipe__v6) {
        this->x_pipe[3U] = this->__Vdlyvval__x_pipe__v6;
    }
    if (this->__Vdlyvset__x_pipe__v7) {
        this->x_pipe[4U] = this->__Vdlyvval__x_pipe__v7;
    }
    if (this->__Vdlyvset__total_angle_pipe__v8) {
        this->x_pipe[4U] = this->__Vdlyvval__x_pipe__v8;
    }
    if (this->__Vdlyvset__x_pipe__v9) {
        this->x_pipe[5U] = this->__Vdlyvval__x_pipe__v9;
    }
    if (this->__Vdlyvset__total_angle_pipe__v10) {
        this->x_pipe[5U] = this->__Vdlyvval__x_pipe__v10;
    }
    if (this->__Vdlyvset__x_pipe__v11) {
        this->x_pipe[6U] = this->__Vdlyvval__x_pipe__v11;
    }
    if (this->__Vdlyvset__total_angle_pipe__v12) {
        this->x_pipe[6U] = this->__Vdlyvval__x_pipe__v12;
    }
    if (this->__Vdlyvset__x_pipe__v13) {
        this->x_pipe[7U] = this->__Vdlyvval__x_pipe__v13;
    }
    if (this->__Vdlyvset__total_angle_pipe__v14) {
        this->x_pipe[7U] = this->__Vdlyvval__x_pipe__v14;
    }
    if (this->__Vdlyvset__x_pipe__v15) {
        this->x_pipe[8U] = this->__Vdlyvval__x_pipe__v15;
    }
    if (this->__Vdlyvset__total_angle_pipe__v16) {
        this->x_pipe[8U] = this->__Vdlyvval__x_pipe__v16;
    }
    if (this->__Vdlyvset__x_pipe__v17) {
        this->x_pipe[9U] = this->__Vdlyvval__x_pipe__v17;
    }
    if (this->__Vdlyvset__total_angle_pipe__v18) {
        this->x_pipe[9U] = this->__Vdlyvval__x_pipe__v18;
    }
    if (this->__Vdlyvset__x_pipe__v19) {
        this->x_pipe[0xaU] = this->__Vdlyvval__x_pipe__v19;
    }
    if (this->__Vdlyvset__total_angle_pipe__v20) {
        this->x_pipe[0xaU] = this->__Vdlyvval__x_pipe__v20;
    }
    if (this->__Vdlyvset__x_pipe__v21) {
        this->x_pipe[0xbU] = this->__Vdlyvval__x_pipe__v21;
    }
    if (this->__Vdlyvset__total_angle_pipe__v22) {
        this->x_pipe[0xbU] = this->__Vdlyvval__x_pipe__v22;
    }
    if (this->__Vdlyvset__x_pipe__v23) {
        this->x_pipe[0xcU] = this->__Vdlyvval__x_pipe__v23;
    }
    if (this->__Vdlyvset__total_angle_pipe__v24) {
        this->x_pipe[0xcU] = this->__Vdlyvval__x_pipe__v24;
    }
    if (this->__Vdlyvset__x_pipe__v25) {
        this->x_pipe[0xdU] = this->__Vdlyvval__x_pipe__v25;
    }
    if (this->__Vdlyvset__total_angle_pipe__v26) {
        this->x_pipe[0xdU] = this->__Vdlyvval__x_pipe__v26;
    }
    if (this->__Vdlyvset__x_pipe__v27) {
        this->x_pipe[0xeU] = this->__Vdlyvval__x_pipe__v27;
    }
    if (this->__Vdlyvset__total_angle_pipe__v28) {
        this->x_pipe[0xeU] = this->__Vdlyvval__x_pipe__v28;
    }
    if (this->__Vdlyvset__x_pipe__v29) {
        this->x_pipe[0xfU] = this->__Vdlyvval__x_pipe__v29;
    }
    if (this->__Vdlyvset__total_angle_pipe__v30) {
        this->x_pipe[0xfU] = this->__Vdlyvval__x_pipe__v30;
    }
    if (this->__Vdlyvset__x_pipe__v31) {
        this->x_pipe[0x10U] = this->__Vdlyvval__x_pipe__v31;
    }
    if (this->__Vdlyvset__total_angle_pipe__v32) {
        this->x_pipe[0x10U] = this->__Vdlyvval__x_pipe__v32;
    }
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
