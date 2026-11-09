// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__pid_controller__DOT__clk__0 
        = vlSelfRef.pid_controller__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_stl(Vtop___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__obs(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__obs\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__react(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__react\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge pid_controller.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->data_valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13223545773184750206ull);
    vlSelf->inp_sig = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 2285752947889448090ull);
    vlSelf->ref_sig = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 1560659393915167952ull);
    vlSelf->Kp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10150755001895970474ull);
    vlSelf->Ki = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10980670539033904880ull);
    vlSelf->Kd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16127658886826835590ull);
    vlSelf->out_sig = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 12038421961227337159ull);
    vlSelf->sat_hi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1004562562341158143ull);
    vlSelf->sat_lo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10851980657492272700ull);
    vlSelf->data_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 883001566760746723ull);
    vlSelf->busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6386567572483775230ull);
    vlSelf->pid_controller__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15745079858991721803ull);
    vlSelf->pid_controller__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16376463988306944678ull);
    vlSelf->pid_controller__DOT__data_valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18240980497625801589ull);
    vlSelf->pid_controller__DOT__inp_sig = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 16696330576379062987ull);
    vlSelf->pid_controller__DOT__ref_sig = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 5115575149102820162ull);
    vlSelf->pid_controller__DOT__Kp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10948386990251759133ull);
    vlSelf->pid_controller__DOT__Ki = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3307574917536552061ull);
    vlSelf->pid_controller__DOT__Kd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12245392955611006491ull);
    vlSelf->pid_controller__DOT__out_sig = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 566075992855360416ull);
    vlSelf->pid_controller__DOT__sat_hi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14686041418033505201ull);
    vlSelf->pid_controller__DOT__sat_lo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16566466435030686070ull);
    vlSelf->pid_controller__DOT__data_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15877815346791424003ull);
    vlSelf->pid_controller__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5351520684092292343ull);
    vlSelf->pid_controller__DOT__accept_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5030084360731354753ull);
    vlSelf->pid_controller__DOT__vel = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 5461722233696454477ull);
    vlSelf->pid_controller__DOT__vel_d = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 3123603429618259690ull);
    vlSelf->pid_controller__DOT__deriv_vel = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 9988493061270826404ull);
    vlSelf->pid_controller__DOT__deriv_scaled = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 12328308189341166624ull);
    vlSelf->pid_controller__DOT__deriv_vel_filt = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 5925758069008878353ull);
    vlSelf->pid_controller__DOT__p_prod = VL_SCOPED_RAND_RESET_Q(47, __VscopeHash, 13396847033347935674ull);
    vlSelf->pid_controller__DOT__i_prod = VL_SCOPED_RAND_RESET_Q(47, __VscopeHash, 2441122785122635282ull);
    vlSelf->pid_controller__DOT__d_prod = VL_SCOPED_RAND_RESET_Q(47, __VscopeHash, 13080978598518346772ull);
    vlSelf->pid_controller__DOT__p_term = VL_SCOPED_RAND_RESET_Q(47, __VscopeHash, 634233526556323174ull);
    vlSelf->pid_controller__DOT__d_term = VL_SCOPED_RAND_RESET_Q(47, __VscopeHash, 2657709570379681906ull);
    vlSelf->pid_controller__DOT__i_next = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 12697882948016620482ull);
    vlSelf->pid_controller__DOT__i_current = VL_SCOPED_RAND_RESET_Q(47, __VscopeHash, 3197690365897862223ull);
    vlSelf->pid_controller__DOT__pid_sum = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 17335736677440751431ull);
    vlSelf->pid_controller__DOT__unbounded_pid_sum = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 16804409462100179375ull);
    vlSelf->pid_controller__DOT__non_pos_i_prod = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5792395379713902434ull);
    vlSelf->pid_controller__DOT__i_clamp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17206812278074022561ull);
    vlSelf->pid_controller__DOT__sat_hi_current = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15268844977542091675ull);
    vlSelf->pid_controller__DOT__sat_lo_current = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7925344894322608305ull);
    vlSelf->pid_controller__DOT__i_bounded = VL_SCOPED_RAND_RESET_Q(47, __VscopeHash, 6559667028060776223ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__pid_controller__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
