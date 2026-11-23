// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___eval_sample(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_sample\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

bool Vtop___024root___eval_ico(Vtop___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_body__ico
            if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((IData)(vlSelfRef.pid_controller__DOT__clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pid_controller__DOT__clk__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__pid_controller__DOT__clk__0 
            = vlSelfRef.pid_controller__DOT__clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

bool Vtop___024root___eval_inact(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_inact\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtop___024root___eval_obs(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_obs\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtop___024root___eval_react(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_react\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtop___024root___eval_postponed(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_postponed\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pid_controller__DOT__clk = vlSelfRef.clk;
    vlSelfRef.pid_controller__DOT__rst = vlSelfRef.rst;
    vlSelfRef.busy = vlSelfRef.pid_controller__DOT__busy;
    vlSelfRef.pid_controller__DOT__Kp = vlSelfRef.Kp;
    vlSelfRef.pid_controller__DOT__Ki = vlSelfRef.Ki;
    vlSelfRef.pid_controller__DOT__Kd = vlSelfRef.Kd;
    vlSelfRef.out_cmd = vlSelfRef.pid_controller__DOT__out_cmd;
    vlSelfRef.sat_hi = vlSelfRef.pid_controller__DOT__sat_hi;
    vlSelfRef.sat_lo = vlSelfRef.pid_controller__DOT__sat_lo;
    vlSelfRef.data_valid_out = vlSelfRef.pid_controller__DOT__data_valid_out;
    vlSelfRef.pid_controller__DOT__non_pos_i_prod = 
        (1U & (vlSelfRef.pid_controller__DOT__i_prod 
               >> 0x0000001cU));
    vlSelfRef.pid_controller__DOT__p_term = (0x1fffffffU 
                                             & VL_SHIFTRS_III(29,29,32, vlSelfRef.pid_controller__DOT__p_prod, 7U));
    vlSelfRef.pid_controller__DOT__d_term = (0x1fffffffU 
                                             & VL_SHIFTRS_III(29,29,32, vlSelfRef.pid_controller__DOT__d_prod, 7U));
    vlSelfRef.pid_controller__DOT__data_valid_in = vlSelfRef.data_valid_in;
    vlSelfRef.pid_controller__DOT__inp_state = vlSelfRef.inp_state;
    vlSelfRef.pid_controller__DOT__des_state = vlSelfRef.des_state;
    vlSelfRef.pid_controller__DOT__i_next = (0x3fffffffU 
                                             & (VL_EXTENDS_II(30,29, vlSelfRef.pid_controller__DOT__i_current) 
                                                + VL_EXTENDS_II(30,29, vlSelfRef.pid_controller__DOT__i_prod)));
    vlSelfRef.pid_controller__DOT__unbounded_pid_sum 
        = (VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,29, vlSelfRef.pid_controller__DOT__p_prod), 7U) 
           + (VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,29, vlSelfRef.pid_controller__DOT__i_current), 7U) 
              + VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,29, vlSelfRef.pid_controller__DOT__d_prod), 7U)));
    vlSelfRef.pid_controller__DOT__accept_data = ((~ (IData)(vlSelfRef.pid_controller__DOT__busy)) 
                                                  & (IData)(vlSelfRef.pid_controller__DOT__data_valid_in));
    vlSelfRef.pid_controller__DOT__vel = (0x00001fffU 
                                          & (VL_EXTENDS_II(13,12, (IData)(vlSelfRef.pid_controller__DOT__des_state)) 
                                             - VL_EXTENDS_II(13,12, (IData)(vlSelfRef.pid_controller__DOT__inp_state))));
    vlSelfRef.pid_controller__DOT__i_clamp = ((VL_LTS_III(32, 0x000007ffU, vlSelfRef.pid_controller__DOT__unbounded_pid_sum) 
                                               & VL_LTS_III(32, 0U, 
                                                            VL_EXTENDS_II(32,29, vlSelfRef.pid_controller__DOT__i_prod))) 
                                              | (VL_GTS_III(32, 0xfffff800U, vlSelfRef.pid_controller__DOT__unbounded_pid_sum) 
                                                 & VL_GTS_III(32, 0U, 
                                                              VL_EXTENDS_II(32,29, vlSelfRef.pid_controller__DOT__i_prod))));
    vlSelfRef.pid_controller__DOT__deriv_vel = (0x0007ffffU 
                                                & (VL_EXTENDS_II(19,13, (IData)(vlSelfRef.pid_controller__DOT__vel)) 
                                                   - 
                                                   VL_EXTENDS_II(19,13, (IData)(vlSelfRef.pid_controller__DOT__vel_d))));
    vlSelfRef.pid_controller__DOT__i_bounded = (0x1fffffffU 
                                                & ((IData)(vlSelfRef.pid_controller__DOT__i_clamp)
                                                    ? vlSelfRef.pid_controller__DOT__i_current
                                                    : 
                                                   (VL_LTS_III(30, 0x00006659U, vlSelfRef.pid_controller__DOT__i_next)
                                                     ? 0x00006659U
                                                     : 
                                                    (VL_GTS_III(30, 0x3fff99a7U, vlSelfRef.pid_controller__DOT__i_next)
                                                      ? 0x1fff99a7U
                                                      : vlSelfRef.pid_controller__DOT__i_next))));
    vlSelfRef.pid_controller__DOT__deriv_scaled = (0x000fffffU 
                                                   & (VL_EXTENDS_II(20,19, vlSelfRef.pid_controller__DOT__deriv_vel) 
                                                      << 5U));
    vlSelfRef.pid_controller__DOT__pid_sum = (VL_SHIFTRS_III(32,32,32, 
                                                             VL_EXTENDS_II(32,29, vlSelfRef.pid_controller__DOT__p_prod), 7U) 
                                              + (VL_SHIFTRS_III(32,32,32, 
                                                                VL_EXTENDS_II(32,29, vlSelfRef.pid_controller__DOT__d_prod), 7U) 
                                                 + 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                VL_EXTENDS_II(32,29, vlSelfRef.pid_controller__DOT__i_bounded), 7U)));
    vlSelfRef.pid_controller__DOT__sat_hi_current = 
        VL_LTS_III(32, 0x000007ffU, vlSelfRef.pid_controller__DOT__pid_sum);
    vlSelfRef.pid_controller__DOT__sat_lo_current = 
        VL_GTS_III(32, 0xfffff800U, vlSelfRef.pid_controller__DOT__pid_sum);
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*19:0*/ __Vdly__pid_controller__DOT__deriv_vel_filt;
    __Vdly__pid_controller__DOT__deriv_vel_filt = 0;
    // Body
    __Vdly__pid_controller__DOT__deriv_vel_filt = vlSelfRef.pid_controller__DOT__deriv_vel_filt;
    if (vlSelfRef.pid_controller__DOT__rst) {
        __Vdly__pid_controller__DOT__deriv_vel_filt = 0U;
        vlSelfRef.pid_controller__DOT__out_cmd = 0U;
        vlSelfRef.pid_controller__DOT__sat_hi = 0U;
        vlSelfRef.pid_controller__DOT__sat_lo = 0U;
        vlSelfRef.pid_controller__DOT__vel_d = 0U;
        vlSelfRef.pid_controller__DOT__d_prod = 0U;
        vlSelfRef.pid_controller__DOT__p_prod = 0U;
        vlSelfRef.pid_controller__DOT__i_prod = 0U;
        vlSelfRef.pid_controller__DOT__i_current = 0U;
    } else if (vlSelfRef.pid_controller__DOT__accept_data) {
        __Vdly__pid_controller__DOT__deriv_vel_filt 
            = (0x000fffffU & (vlSelfRef.pid_controller__DOT__deriv_vel_filt 
                              + VL_SHIFTRS_III(20,20,32, 
                                               (0x000fffffU 
                                                & (vlSelfRef.pid_controller__DOT__deriv_scaled 
                                                   - vlSelfRef.pid_controller__DOT__deriv_vel_filt)), 3U)));
        if (VL_LTS_III(32, 0x000007ffU, vlSelfRef.pid_controller__DOT__pid_sum)) {
            vlSelfRef.pid_controller__DOT__out_cmd = 0x000007ffU;
            vlSelfRef.pid_controller__DOT__sat_hi = 1U;
        } else {
            vlSelfRef.pid_controller__DOT__out_cmd 
                = (VL_GTS_III(32, 0xfffff800U, vlSelfRef.pid_controller__DOT__pid_sum)
                    ? 0x00000800U : (0x00000fffU & vlSelfRef.pid_controller__DOT__pid_sum));
            vlSelfRef.pid_controller__DOT__sat_hi = 0U;
        }
        vlSelfRef.pid_controller__DOT__sat_lo = (VL_GTES_III(32, 0x000007ffU, vlSelfRef.pid_controller__DOT__pid_sum) 
                                                 && VL_GTS_III(32, 0xfffff800U, vlSelfRef.pid_controller__DOT__pid_sum));
        vlSelfRef.pid_controller__DOT__vel_d = vlSelfRef.pid_controller__DOT__vel;
        vlSelfRef.pid_controller__DOT__d_prod = (0x1fffffffU 
                                                 & VL_MULS_III(32, 
                                                               VL_SHIFTRS_III(32,32,32, 
                                                                              ((IData)(0x00000010U) 
                                                                               + 
                                                                               VL_EXTENDS_II(32,20, vlSelfRef.pid_controller__DOT__deriv_vel_filt)), 5U), 
                                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.pid_controller__DOT__Kd))));
        vlSelfRef.pid_controller__DOT__p_prod = (0x1fffffffU 
                                                 & VL_MULS_III(29, 
                                                               (0x1fffffffU 
                                                                & VL_EXTENDS_II(29,13, (IData)(vlSelfRef.pid_controller__DOT__vel))), 
                                                               (0x1fffffffU 
                                                                & VL_EXTENDS_II(29,16, (IData)(vlSelfRef.pid_controller__DOT__Kp)))));
        vlSelfRef.pid_controller__DOT__i_prod = (0x1fffffffU 
                                                 & VL_MULS_III(29, 
                                                               (0x1fffffffU 
                                                                & VL_EXTENDS_II(29,13, (IData)(vlSelfRef.pid_controller__DOT__vel))), 
                                                               (0x1fffffffU 
                                                                & VL_EXTENDS_II(29,16, (IData)(vlSelfRef.pid_controller__DOT__Ki)))));
        vlSelfRef.pid_controller__DOT__i_current = vlSelfRef.pid_controller__DOT__i_bounded;
    }
    if ((1U & (~ (IData)(vlSelfRef.pid_controller__DOT__rst)))) {
        if (vlSelfRef.pid_controller__DOT__accept_data) {
            vlSelfRef.pid_controller__DOT__store_prods = 0U;
        }
    }
    vlSelfRef.pid_controller__DOT__data_valid_out = 
        ((1U & (~ (IData)(vlSelfRef.pid_controller__DOT__rst))) 
         && (IData)(vlSelfRef.pid_controller__DOT__accept_data));
    vlSelfRef.pid_controller__DOT__busy = ((1U & (~ (IData)(vlSelfRef.pid_controller__DOT__rst))) 
                                           && (IData)(vlSelfRef.pid_controller__DOT__accept_data));
    vlSelfRef.pid_controller__DOT__deriv_vel_filt = __Vdly__pid_controller__DOT__deriv_vel_filt;
    vlSelfRef.data_valid_out = vlSelfRef.pid_controller__DOT__data_valid_out;
    vlSelfRef.busy = vlSelfRef.pid_controller__DOT__busy;
    vlSelfRef.pid_controller__DOT__accept_data = ((~ (IData)(vlSelfRef.pid_controller__DOT__busy)) 
                                                  & (IData)(vlSelfRef.pid_controller__DOT__data_valid_in));
    vlSelfRef.out_cmd = vlSelfRef.pid_controller__DOT__out_cmd;
    vlSelfRef.sat_hi = vlSelfRef.pid_controller__DOT__sat_hi;
    vlSelfRef.sat_lo = vlSelfRef.pid_controller__DOT__sat_lo;
    vlSelfRef.pid_controller__DOT__deriv_vel = (0x0007ffffU 
                                                & (VL_EXTENDS_II(19,13, (IData)(vlSelfRef.pid_controller__DOT__vel)) 
                                                   - 
                                                   VL_EXTENDS_II(19,13, (IData)(vlSelfRef.pid_controller__DOT__vel_d))));
    vlSelfRef.pid_controller__DOT__d_term = (0x1fffffffU 
                                             & VL_SHIFTRS_III(29,29,32, vlSelfRef.pid_controller__DOT__d_prod, 7U));
    vlSelfRef.pid_controller__DOT__p_term = (0x1fffffffU 
                                             & VL_SHIFTRS_III(29,29,32, vlSelfRef.pid_controller__DOT__p_prod, 7U));
    vlSelfRef.pid_controller__DOT__non_pos_i_prod = 
        (1U & (vlSelfRef.pid_controller__DOT__i_prod 
               >> 0x0000001cU));
    vlSelfRef.pid_controller__DOT__i_next = (0x3fffffffU 
                                             & (VL_EXTENDS_II(30,29, vlSelfRef.pid_controller__DOT__i_current) 
                                                + VL_EXTENDS_II(30,29, vlSelfRef.pid_controller__DOT__i_prod)));
    vlSelfRef.pid_controller__DOT__unbounded_pid_sum 
        = (VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,29, vlSelfRef.pid_controller__DOT__p_prod), 7U) 
           + (VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,29, vlSelfRef.pid_controller__DOT__i_current), 7U) 
              + VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,29, vlSelfRef.pid_controller__DOT__d_prod), 7U)));
    vlSelfRef.pid_controller__DOT__deriv_scaled = (0x000fffffU 
                                                   & (VL_EXTENDS_II(20,19, vlSelfRef.pid_controller__DOT__deriv_vel) 
                                                      << 5U));
    vlSelfRef.pid_controller__DOT__i_clamp = ((VL_LTS_III(32, 0x000007ffU, vlSelfRef.pid_controller__DOT__unbounded_pid_sum) 
                                               & VL_LTS_III(32, 0U, 
                                                            VL_EXTENDS_II(32,29, vlSelfRef.pid_controller__DOT__i_prod))) 
                                              | (VL_GTS_III(32, 0xfffff800U, vlSelfRef.pid_controller__DOT__unbounded_pid_sum) 
                                                 & VL_GTS_III(32, 0U, 
                                                              VL_EXTENDS_II(32,29, vlSelfRef.pid_controller__DOT__i_prod))));
    vlSelfRef.pid_controller__DOT__i_bounded = (0x1fffffffU 
                                                & ((IData)(vlSelfRef.pid_controller__DOT__i_clamp)
                                                    ? vlSelfRef.pid_controller__DOT__i_current
                                                    : 
                                                   (VL_LTS_III(30, 0x00006659U, vlSelfRef.pid_controller__DOT__i_next)
                                                     ? 0x00006659U
                                                     : 
                                                    (VL_GTS_III(30, 0x3fff99a7U, vlSelfRef.pid_controller__DOT__i_next)
                                                      ? 0x1fff99a7U
                                                      : vlSelfRef.pid_controller__DOT__i_next))));
    vlSelfRef.pid_controller__DOT__pid_sum = (VL_SHIFTRS_III(32,32,32, 
                                                             VL_EXTENDS_II(32,29, vlSelfRef.pid_controller__DOT__p_prod), 7U) 
                                              + (VL_SHIFTRS_III(32,32,32, 
                                                                VL_EXTENDS_II(32,29, vlSelfRef.pid_controller__DOT__d_prod), 7U) 
                                                 + 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                VL_EXTENDS_II(32,29, vlSelfRef.pid_controller__DOT__i_bounded), 7U)));
    vlSelfRef.pid_controller__DOT__sat_hi_current = 
        VL_LTS_III(32, 0x000007ffU, vlSelfRef.pid_controller__DOT__pid_sum);
    vlSelfRef.pid_controller__DOT__sat_lo_current = 
        VL_GTS_III(32, 0xfffff800U, vlSelfRef.pid_controller__DOT__pid_sum);
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.data_valid_in & 0xfeU)))) {
        Verilated::overWidthError("data_valid_in");
    }
    if (VL_UNLIKELY(((vlSelfRef.inp_state & 0xf000U)))) {
        Verilated::overWidthError("inp_state");
    }
    if (VL_UNLIKELY(((vlSelfRef.des_state & 0xf000U)))) {
        Verilated::overWidthError("des_state");
    }
}
#endif  // VL_DEBUG
