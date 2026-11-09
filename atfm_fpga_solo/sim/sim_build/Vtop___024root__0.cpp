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
    vlSelfRef.out_sig = vlSelfRef.pid_controller__DOT__out_sig;
    vlSelfRef.sat_hi = vlSelfRef.pid_controller__DOT__sat_hi;
    vlSelfRef.sat_lo = vlSelfRef.pid_controller__DOT__sat_lo;
    vlSelfRef.data_valid_out = vlSelfRef.pid_controller__DOT__data_valid_out;
    vlSelfRef.pid_controller__DOT__non_pos_i_prod = 
        (1U & (IData)((vlSelfRef.pid_controller__DOT__i_prod 
                       >> 0x0000002eU)));
    vlSelfRef.pid_controller__DOT__data_valid_in = vlSelfRef.data_valid_in;
    vlSelfRef.pid_controller__DOT__inp_sig = vlSelfRef.inp_sig;
    vlSelfRef.pid_controller__DOT__ref_sig = vlSelfRef.ref_sig;
    vlSelfRef.pid_controller__DOT__i_next = (0x0000ffffffffffffULL 
                                             & (VL_EXTENDS_QQ(48,47, vlSelfRef.pid_controller__DOT__i_current) 
                                                + VL_EXTENDS_QQ(48,47, vlSelfRef.pid_controller__DOT__i_prod)));
    vlSelfRef.pid_controller__DOT__unbounded_pid_sum 
        = (0x0003ffffffffffffULL & (VL_SHIFTRS_QQI(50,50,32, 
                                                   (0x0003ffffffffffffULL 
                                                    & VL_EXTENDS_QQ(50,47, vlSelfRef.pid_controller__DOT__p_prod)), 0x00000010U) 
                                    + (VL_SHIFTRS_QQI(50,50,32, 
                                                      (0x0003ffffffffffffULL 
                                                       & VL_EXTENDS_QQ(50,47, vlSelfRef.pid_controller__DOT__i_current)), 0x00000010U) 
                                       + VL_SHIFTRS_QQI(50,50,32, 
                                                        (0x0003ffffffffffffULL 
                                                         & VL_EXTENDS_QQ(50,47, vlSelfRef.pid_controller__DOT__d_prod)), 0x00000010U))));
    vlSelfRef.pid_controller__DOT__accept_data = ((~ (IData)(vlSelfRef.pid_controller__DOT__busy)) 
                                                  & (IData)(vlSelfRef.pid_controller__DOT__data_valid_in));
    vlSelfRef.pid_controller__DOT__vel = (0x00007fffU 
                                          & (VL_EXTENDS_II(15,14, (IData)(vlSelfRef.pid_controller__DOT__ref_sig)) 
                                             - VL_EXTENDS_II(15,14, (IData)(vlSelfRef.pid_controller__DOT__inp_sig))));
    vlSelfRef.pid_controller__DOT__i_clamp = ((VL_LTS_IQQ(50, 0x0000000000001fffULL, vlSelfRef.pid_controller__DOT__unbounded_pid_sum) 
                                               & VL_LTS_IQQ(47, 0ULL, vlSelfRef.pid_controller__DOT__i_prod)) 
                                              | (VL_GTS_IQQ(50, 0x0003ffffffffe000ULL, vlSelfRef.pid_controller__DOT__unbounded_pid_sum) 
                                                 & VL_GTS_IQQ(47, 0ULL, vlSelfRef.pid_controller__DOT__i_prod)));
    vlSelfRef.pid_controller__DOT__deriv_vel = (0x001fffffU 
                                                & (VL_EXTENDS_II(21,15, (IData)(vlSelfRef.pid_controller__DOT__vel)) 
                                                   - 
                                                   VL_EXTENDS_II(21,15, (IData)(vlSelfRef.pid_controller__DOT__vel_d))));
    vlSelfRef.pid_controller__DOT__i_bounded = (0x00007fffffffffffULL 
                                                & ((IData)(vlSelfRef.pid_controller__DOT__i_clamp)
                                                    ? vlSelfRef.pid_controller__DOT__i_current
                                                    : 
                                                   (VL_LTS_IQQ(48, 0x0000000003331999ULL, vlSelfRef.pid_controller__DOT__i_next)
                                                     ? 0x0000000003331999ULL
                                                     : 
                                                    (VL_GTS_IQQ(48, 0x0000fffffccce667ULL, vlSelfRef.pid_controller__DOT__i_next)
                                                      ? 0x00007ffffccce667ULL
                                                      : vlSelfRef.pid_controller__DOT__i_next))));
    vlSelfRef.pid_controller__DOT__deriv_scaled = (0x001fffffU 
                                                   & (vlSelfRef.pid_controller__DOT__deriv_vel 
                                                      << 5U));
    vlSelfRef.pid_controller__DOT__pid_sum = (0x0003ffffffffffffULL 
                                              & (VL_SHIFTRS_QQI(50,50,32, 
                                                                (0x0003ffffffffffffULL 
                                                                 & VL_EXTENDS_QQ(50,47, vlSelfRef.pid_controller__DOT__p_prod)), 0x00000010U) 
                                                 + 
                                                 (VL_SHIFTRS_QQI(50,50,32, 
                                                                 (0x0003ffffffffffffULL 
                                                                  & VL_EXTENDS_QQ(50,47, vlSelfRef.pid_controller__DOT__d_prod)), 0x00000010U) 
                                                  + 
                                                  VL_SHIFTRS_QQI(50,50,32, 
                                                                 (0x0003ffffffffffffULL 
                                                                  & VL_EXTENDS_QQ(50,47, vlSelfRef.pid_controller__DOT__i_bounded)), 0x00000010U))));
    vlSelfRef.pid_controller__DOT__sat_hi_current = 
        VL_LTS_IQQ(50, 0x0000000000001fffULL, vlSelfRef.pid_controller__DOT__pid_sum);
    vlSelfRef.pid_controller__DOT__sat_lo_current = 
        VL_GTS_IQQ(50, 0x0003ffffffffe000ULL, vlSelfRef.pid_controller__DOT__pid_sum);
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
    IData/*20:0*/ __Vdly__pid_controller__DOT__deriv_vel_filt;
    __Vdly__pid_controller__DOT__deriv_vel_filt = 0;
    // Body
    __Vdly__pid_controller__DOT__deriv_vel_filt = vlSelfRef.pid_controller__DOT__deriv_vel_filt;
    if (vlSelfRef.pid_controller__DOT__rst) {
        __Vdly__pid_controller__DOT__deriv_vel_filt = 0U;
        vlSelfRef.pid_controller__DOT__sat_hi = 0U;
        vlSelfRef.pid_controller__DOT__out_sig = 0U;
        vlSelfRef.pid_controller__DOT__sat_lo = 0U;
        vlSelfRef.pid_controller__DOT__vel_d = 0U;
        vlSelfRef.pid_controller__DOT__i_prod = 0ULL;
        vlSelfRef.pid_controller__DOT__i_current = 0ULL;
        vlSelfRef.pid_controller__DOT__d_term = 0ULL;
        vlSelfRef.pid_controller__DOT__p_term = 0ULL;
        vlSelfRef.pid_controller__DOT__d_prod = 0ULL;
        vlSelfRef.pid_controller__DOT__p_prod = 0ULL;
    } else if (vlSelfRef.pid_controller__DOT__accept_data) {
        __Vdly__pid_controller__DOT__deriv_vel_filt 
            = (0x001fffffU & (vlSelfRef.pid_controller__DOT__deriv_vel_filt 
                              + VL_SHIFTRS_III(21,21,32, 
                                               (0x001fffffU 
                                                & (vlSelfRef.pid_controller__DOT__deriv_scaled 
                                                   - vlSelfRef.pid_controller__DOT__deriv_vel_filt)), 3U)));
        if (VL_LTS_IQQ(50, 0x0000000000001fffULL, vlSelfRef.pid_controller__DOT__pid_sum)) {
            vlSelfRef.pid_controller__DOT__sat_hi = 1U;
            vlSelfRef.pid_controller__DOT__out_sig = 0x00001fffU;
        } else {
            vlSelfRef.pid_controller__DOT__sat_hi = 0U;
            vlSelfRef.pid_controller__DOT__out_sig 
                = (VL_GTS_IQQ(50, 0x0003ffffffffe000ULL, vlSelfRef.pid_controller__DOT__pid_sum)
                    ? 0x00002000U : (0x00003fffU & (IData)(vlSelfRef.pid_controller__DOT__pid_sum)));
        }
        vlSelfRef.pid_controller__DOT__sat_lo = (VL_GTES_IQQ(50, 0x0000000000001fffULL, vlSelfRef.pid_controller__DOT__pid_sum) 
                                                 && VL_GTS_IQQ(50, 0x0003ffffffffe000ULL, vlSelfRef.pid_controller__DOT__pid_sum));
        vlSelfRef.pid_controller__DOT__vel_d = vlSelfRef.pid_controller__DOT__vel;
        vlSelfRef.pid_controller__DOT__i_prod = (0x00007fffffffffffULL 
                                                 & VL_MULS_QQQ(47, 
                                                               (0x00007fffffffffffULL 
                                                                & VL_EXTENDS_QI(47,15, (IData)(vlSelfRef.pid_controller__DOT__vel))), 
                                                               (0x00007fffffffffffULL 
                                                                & VL_EXTENDS_QI(47,32, vlSelfRef.pid_controller__DOT__Ki))));
        vlSelfRef.pid_controller__DOT__i_current = vlSelfRef.pid_controller__DOT__i_bounded;
        vlSelfRef.pid_controller__DOT__d_term = (0x00007fffffffffffULL 
                                                 & VL_SHIFTRS_QQI(47,47,32, vlSelfRef.pid_controller__DOT__d_prod, 0x00000010U));
        vlSelfRef.pid_controller__DOT__p_term = (0x00007fffffffffffULL 
                                                 & VL_SHIFTRS_QQI(47,47,32, vlSelfRef.pid_controller__DOT__p_prod, 0x00000010U));
        vlSelfRef.pid_controller__DOT__d_prod = (0x00007fffffffffffULL 
                                                 & VL_MULS_QQQ(47, 
                                                               (0x00007fffffffffffULL 
                                                                & VL_SHIFTRS_QQI(47,47,32, 
                                                                                (0x00007fffffffffffULL 
                                                                                & (0x0000000000000010ULL 
                                                                                + 
                                                                                VL_EXTENDS_QI(47,21, vlSelfRef.pid_controller__DOT__deriv_vel_filt))), 5U)), 
                                                               (0x00007fffffffffffULL 
                                                                & VL_EXTENDS_QI(47,32, vlSelfRef.pid_controller__DOT__Kd))));
        vlSelfRef.pid_controller__DOT__p_prod = (0x00007fffffffffffULL 
                                                 & VL_MULS_QQQ(47, 
                                                               (0x00007fffffffffffULL 
                                                                & VL_EXTENDS_QI(47,15, (IData)(vlSelfRef.pid_controller__DOT__vel))), 
                                                               (0x00007fffffffffffULL 
                                                                & VL_EXTENDS_QI(47,32, vlSelfRef.pid_controller__DOT__Kp))));
    }
    vlSelfRef.pid_controller__DOT__data_valid_out = 
        ((1U & (~ (IData)(vlSelfRef.pid_controller__DOT__rst))) 
         && (IData)(vlSelfRef.pid_controller__DOT__accept_data));
    vlSelfRef.pid_controller__DOT__busy = ((1U & (~ (IData)(vlSelfRef.pid_controller__DOT__rst))) 
                                           && (IData)(vlSelfRef.pid_controller__DOT__accept_data));
    vlSelfRef.data_valid_out = vlSelfRef.pid_controller__DOT__data_valid_out;
    vlSelfRef.busy = vlSelfRef.pid_controller__DOT__busy;
    vlSelfRef.sat_hi = vlSelfRef.pid_controller__DOT__sat_hi;
    vlSelfRef.out_sig = vlSelfRef.pid_controller__DOT__out_sig;
    vlSelfRef.sat_lo = vlSelfRef.pid_controller__DOT__sat_lo;
    vlSelfRef.pid_controller__DOT__deriv_vel = (0x001fffffU 
                                                & (VL_EXTENDS_II(21,15, (IData)(vlSelfRef.pid_controller__DOT__vel)) 
                                                   - 
                                                   VL_EXTENDS_II(21,15, (IData)(vlSelfRef.pid_controller__DOT__vel_d))));
    vlSelfRef.pid_controller__DOT__non_pos_i_prod = 
        (1U & (IData)((vlSelfRef.pid_controller__DOT__i_prod 
                       >> 0x0000002eU)));
    vlSelfRef.pid_controller__DOT__i_next = (0x0000ffffffffffffULL 
                                             & (VL_EXTENDS_QQ(48,47, vlSelfRef.pid_controller__DOT__i_current) 
                                                + VL_EXTENDS_QQ(48,47, vlSelfRef.pid_controller__DOT__i_prod)));
    vlSelfRef.pid_controller__DOT__deriv_scaled = (0x001fffffU 
                                                   & (vlSelfRef.pid_controller__DOT__deriv_vel 
                                                      << 5U));
    vlSelfRef.pid_controller__DOT__deriv_vel_filt = __Vdly__pid_controller__DOT__deriv_vel_filt;
    vlSelfRef.pid_controller__DOT__accept_data = ((~ (IData)(vlSelfRef.pid_controller__DOT__busy)) 
                                                  & (IData)(vlSelfRef.pid_controller__DOT__data_valid_in));
    vlSelfRef.pid_controller__DOT__unbounded_pid_sum 
        = (0x0003ffffffffffffULL & (VL_SHIFTRS_QQI(50,50,32, 
                                                   (0x0003ffffffffffffULL 
                                                    & VL_EXTENDS_QQ(50,47, vlSelfRef.pid_controller__DOT__p_prod)), 0x00000010U) 
                                    + (VL_SHIFTRS_QQI(50,50,32, 
                                                      (0x0003ffffffffffffULL 
                                                       & VL_EXTENDS_QQ(50,47, vlSelfRef.pid_controller__DOT__i_current)), 0x00000010U) 
                                       + VL_SHIFTRS_QQI(50,50,32, 
                                                        (0x0003ffffffffffffULL 
                                                         & VL_EXTENDS_QQ(50,47, vlSelfRef.pid_controller__DOT__d_prod)), 0x00000010U))));
    vlSelfRef.pid_controller__DOT__i_clamp = ((VL_LTS_IQQ(50, 0x0000000000001fffULL, vlSelfRef.pid_controller__DOT__unbounded_pid_sum) 
                                               & VL_LTS_IQQ(47, 0ULL, vlSelfRef.pid_controller__DOT__i_prod)) 
                                              | (VL_GTS_IQQ(50, 0x0003ffffffffe000ULL, vlSelfRef.pid_controller__DOT__unbounded_pid_sum) 
                                                 & VL_GTS_IQQ(47, 0ULL, vlSelfRef.pid_controller__DOT__i_prod)));
    vlSelfRef.pid_controller__DOT__i_bounded = (0x00007fffffffffffULL 
                                                & ((IData)(vlSelfRef.pid_controller__DOT__i_clamp)
                                                    ? vlSelfRef.pid_controller__DOT__i_current
                                                    : 
                                                   (VL_LTS_IQQ(48, 0x0000000003331999ULL, vlSelfRef.pid_controller__DOT__i_next)
                                                     ? 0x0000000003331999ULL
                                                     : 
                                                    (VL_GTS_IQQ(48, 0x0000fffffccce667ULL, vlSelfRef.pid_controller__DOT__i_next)
                                                      ? 0x00007ffffccce667ULL
                                                      : vlSelfRef.pid_controller__DOT__i_next))));
    vlSelfRef.pid_controller__DOT__pid_sum = (0x0003ffffffffffffULL 
                                              & (VL_SHIFTRS_QQI(50,50,32, 
                                                                (0x0003ffffffffffffULL 
                                                                 & VL_EXTENDS_QQ(50,47, vlSelfRef.pid_controller__DOT__p_prod)), 0x00000010U) 
                                                 + 
                                                 (VL_SHIFTRS_QQI(50,50,32, 
                                                                 (0x0003ffffffffffffULL 
                                                                  & VL_EXTENDS_QQ(50,47, vlSelfRef.pid_controller__DOT__d_prod)), 0x00000010U) 
                                                  + 
                                                  VL_SHIFTRS_QQI(50,50,32, 
                                                                 (0x0003ffffffffffffULL 
                                                                  & VL_EXTENDS_QQ(50,47, vlSelfRef.pid_controller__DOT__i_bounded)), 0x00000010U))));
    vlSelfRef.pid_controller__DOT__sat_hi_current = 
        VL_LTS_IQQ(50, 0x0000000000001fffULL, vlSelfRef.pid_controller__DOT__pid_sum);
    vlSelfRef.pid_controller__DOT__sat_lo_current = 
        VL_GTS_IQQ(50, 0x0003ffffffffe000ULL, vlSelfRef.pid_controller__DOT__pid_sum);
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
    if (VL_UNLIKELY(((vlSelfRef.inp_sig & 0xc000U)))) {
        Verilated::overWidthError("inp_sig");
    }
    if (VL_UNLIKELY(((vlSelfRef.ref_sig & 0xc000U)))) {
        Verilated::overWidthError("ref_sig");
    }
}
#endif  // VL_DEBUG
