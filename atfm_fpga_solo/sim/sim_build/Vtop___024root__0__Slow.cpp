// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__clk__0 
        = vlSelfRef.modulator__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__clk__0 
        = vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic__clk__0 
        = vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic__clk__0 
        = vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic__clk__0 
        = vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic__clk__0 
        = vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic__clk__0 
        = vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic__clk__0 
        = vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic__clk__0 
        = vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic__clk__0 
        = vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic__clk__0 
        = vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.clk;
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
void Vtop_cordic_cossin___ico_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf);
void Vtop_cordic_cossin___ico_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf);
void Vtop_cordic_cossin___ico_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf);
void Vtop_cordic_cossin___ico_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf);
void Vtop_cordic_cossin___ico_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf);
void Vtop_cordic_cossin___ico_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf);
void Vtop_cordic_cossin___ico_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf);
void Vtop_cordic_cossin___ico_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf);
void Vtop_cordic_cossin___ico_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf);
void Vtop_cordic_cossin___ico_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf);
void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf);

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
                Vtop_cordic_cossin___ico_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__0((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic));
                Vtop_cordic_cossin___ico_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic__0((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic));
                Vtop_cordic_cossin___ico_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic__0((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic));
                Vtop_cordic_cossin___ico_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic__0((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic));
                Vtop_cordic_cossin___ico_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic__0((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic));
                Vtop_cordic_cossin___ico_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic__0((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic));
                Vtop_cordic_cossin___ico_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic__0((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic));
                Vtop_cordic_cossin___ico_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic__0((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic));
                Vtop_cordic_cossin___ico_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic__0((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic));
                Vtop_cordic_cossin___ico_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic__0((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic));
                Vtop___024root___ico_sequent__TOP__1(vlSelf);
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge modulator.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge modulator.serial_hgen.gen_harmonics[0].nth_cordic.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge modulator.serial_hgen.gen_harmonics[1].nth_cordic.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge modulator.serial_hgen.gen_harmonics[2].nth_cordic.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge modulator.serial_hgen.gen_harmonics[3].nth_cordic.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge modulator.serial_hgen.gen_harmonics[4].nth_cordic.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge modulator.serial_hgen.gen_harmonics[5].nth_cordic.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge modulator.serial_hgen.gen_harmonics[6].nth_cordic.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(posedge modulator.serial_hgen.gen_harmonics[7].nth_cordic.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @(posedge modulator.serial_hgen.gen_harmonics[8].nth_cordic.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @(posedge modulator.serial_hgen.gen_harmonics[9].nth_cordic.clk)\n");
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
    vlSelf->angle = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10962942430735206434ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->a_values, __VscopeHash, 7469277622419261778ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->b_values, __VscopeHash, 17567726783840441254ull);
    vlSelf->modulator_sum_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3320341660322539821ull);
    vlSelf->data_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 883001566760746723ull);
    vlSelf->busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6386567572483775230ull);
    vlSelf->modulator__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7342137891961622134ull);
    vlSelf->modulator__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16127640825012946379ull);
    vlSelf->modulator__DOT__data_valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14770749862920173105ull);
    vlSelf->modulator__DOT__angle = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4144508207659076569ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->modulator__DOT__a_values, __VscopeHash, 13850895787802974943ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->modulator__DOT__b_values, __VscopeHash, 13868964913823363008ull);
    vlSelf->modulator__DOT__modulator_sum_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8221855327503208346ull);
    vlSelf->modulator__DOT__data_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10246916283518808770ull);
    vlSelf->modulator__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 414005708572651755ull);
    vlSelf->modulator__DOT__angle_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 286327389965550944ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->modulator__DOT__a_reg, __VscopeHash, 2148831544895622072ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->modulator__DOT__b_reg, __VscopeHash, 4898377298596070950ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->modulator__DOT__cos_unlatched, __VscopeHash, 12328774813201650204ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->modulator__DOT__cos_harmonics, __VscopeHash, 6231640570262010055ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->modulator__DOT__sin_unlatched, __VscopeHash, 7733225011521453107ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->modulator__DOT__sin_harmonics, __VscopeHash, 4470418143287273386ull);
    vlSelf->modulator__DOT__hgen_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18019762206834237931ull);
    vlSelf->modulator__DOT__hgen_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2140087414285849256ull);
    vlSelf->modulator__DOT__mult_acc_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15395519131868184552ull);
    vlSelf->modulator__DOT__idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18406463518824155510ull);
    vlSelf->modulator__DOT__mac_cur = VL_SCOPED_RAND_RESET_Q(37, __VscopeHash, 12763810436054000612ull);
    vlSelf->modulator__DOT__mac_next = VL_SCOPED_RAND_RESET_Q(37, __VscopeHash, 4011835252960630649ull);
    vlSelf->modulator__DOT__serial_hgen__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6658523731743609671ull);
    vlSelf->modulator__DOT__serial_hgen__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1310131832534538431ull);
    vlSelf->modulator__DOT__serial_hgen__DOT__data_valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5623502498693048554ull);
    vlSelf->modulator__DOT__serial_hgen__DOT__angle = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16238831295683993783ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->modulator__DOT__serial_hgen__DOT__cos_arr_out, __VscopeHash, 3841200813790011554ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->modulator__DOT__serial_hgen__DOT__sin_arr_out, __VscopeHash, 13624408816138307700ull);
    vlSelf->modulator__DOT__serial_hgen__DOT__data_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2097531000091219140ull);
    vlSelf->modulator__DOT__serial_hgen__DOT__valid_arr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7661053546574362849ull);
    vlSelf->modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__angle_n = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4701033169487567317ull);
    vlSelf->modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__angle_n = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14180811808731301717ull);
    vlSelf->modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__angle_n = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2200455719212772831ull);
    vlSelf->modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__angle_n = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17348437497456496874ull);
    vlSelf->modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__angle_n = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4635859568154025058ull);
    vlSelf->modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__angle_n = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11331383986105260737ull);
    vlSelf->modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__angle_n = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3329411280144256233ull);
    vlSelf->modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__angle_n = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5484355012432103067ull);
    vlSelf->modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__angle_n = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9094461429043863893ull);
    vlSelf->modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__angle_n = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3963612193292496848ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__modulator__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
