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
                                                        (((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic__clk__0))) 
                                                           << 0x0000000aU) 
                                                          | ((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic__clk__0))) 
                                                              << 9U) 
                                                             | (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic__clk__0))) 
                                                                << 8U))) 
                                                         | (((((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic__clk__0))) 
                                                                << 3U) 
                                                               | (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic__clk__0))) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic__clk__0))))) 
                                                             << 4U) 
                                                            | (((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic__clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.modulator__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__modulator__DOT__clk__0)))))))));
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
void Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf);
void Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf);
void Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf);
void Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf);
void Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf);
void Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf);
void Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf);
void Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf);
void Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf);
void Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic__0(Vtop_cordic_cossin* vlSelf);
void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__1(Vtop_cordic_cossin* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
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
            if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__0((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic));
            }
            if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic__0((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic));
            }
            if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic__0((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic));
            }
            if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic__0((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic));
            }
            if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic__0((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic));
            }
            if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic__0((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic));
            }
            if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic__0((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic));
            }
            if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic__0((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic));
            }
            if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic__0((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic));
            }
            if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic__0((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic));
            }
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop___024root___nba_sequent__TOP__0(vlSelf);
                Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__1((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic));
                Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__1((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic));
                Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__1((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic));
                Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__1((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic));
                Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__1((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic));
                Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__1((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic));
                Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__1((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic));
                Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__1((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic));
                Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__1((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic));
                Vtop_cordic_cossin___nba_sequent__TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic__1((&vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic));
            }
            if ((0x00000000000007feULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop___024root___nba_comb__TOP__0(vlSelf);
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
    vlSelfRef.busy = vlSelfRef.modulator__DOT__busy;
    vlSelfRef.modulator__DOT__a_values[0U] = vlSelfRef.a_values[0U];
    vlSelfRef.modulator__DOT__a_values[1U] = vlSelfRef.a_values[1U];
    vlSelfRef.modulator__DOT__a_values[2U] = vlSelfRef.a_values[2U];
    vlSelfRef.modulator__DOT__a_values[3U] = vlSelfRef.a_values[3U];
    vlSelfRef.modulator__DOT__a_values[4U] = vlSelfRef.a_values[4U];
    vlSelfRef.modulator__DOT__b_values[0U] = vlSelfRef.b_values[0U];
    vlSelfRef.modulator__DOT__b_values[1U] = vlSelfRef.b_values[1U];
    vlSelfRef.modulator__DOT__b_values[2U] = vlSelfRef.b_values[2U];
    vlSelfRef.modulator__DOT__b_values[3U] = vlSelfRef.b_values[3U];
    vlSelfRef.modulator__DOT__b_values[4U] = vlSelfRef.b_values[4U];
    vlSelfRef.modulator_sum_out = vlSelfRef.modulator__DOT__modulator_sum_out;
    vlSelfRef.data_valid_out = vlSelfRef.modulator__DOT__data_valid_out;
    vlSelfRef.modulator__DOT__mac_next = (0x0000001fffffffffULL 
                                          & (vlSelfRef.modulator__DOT__mac_cur 
                                             + (VL_MULS_QQQ(37, 
                                                            (0x0000001fffffffffULL 
                                                             & VL_EXTENDS_QI(37,16, 
                                                                             ((0x9fU 
                                                                               >= 
                                                                               ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U))
                                                                               ? 
                                                                              (0x0000ffffU 
                                                                               & (((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (vlSelfRef.modulator__DOT__a_reg
                                                                                [
                                                                                (((IData)(0x0000000fU) 
                                                                                + 
                                                                                ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x00000020U) 
                                                                                - 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U))))) 
                                                                                | (vlSelfRef.modulator__DOT__a_reg
                                                                                [
                                                                                (0x07ffffffU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                >> 1U))] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)))))
                                                                               : 0U))), 
                                                            (0x0000001fffffffffULL 
                                                             & VL_EXTENDS_QI(37,16, 
                                                                             ((0x9fU 
                                                                               >= 
                                                                               ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U))
                                                                               ? 
                                                                              (0x0000ffffU 
                                                                               & (((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (vlSelfRef.modulator__DOT__cos_harmonics
                                                                                [
                                                                                (((IData)(0x0000000fU) 
                                                                                + 
                                                                                ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x00000020U) 
                                                                                - 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U))))) 
                                                                                | (vlSelfRef.modulator__DOT__cos_harmonics
                                                                                [
                                                                                (0x07ffffffU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                >> 1U))] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)))))
                                                                               : 0U)))) 
                                                + VL_MULS_QQQ(37, 
                                                              (0x0000001fffffffffULL 
                                                               & VL_EXTENDS_QI(37,16, 
                                                                               ((0x9fU 
                                                                                >= 
                                                                                ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U))
                                                                                 ? 
                                                                                (0x0000ffffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (vlSelfRef.modulator__DOT__b_reg
                                                                                [
                                                                                (((IData)(0x0000000fU) 
                                                                                + 
                                                                                ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x00000020U) 
                                                                                - 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U))))) 
                                                                                | (vlSelfRef.modulator__DOT__b_reg
                                                                                [
                                                                                (0x07ffffffU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                >> 1U))] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)))))
                                                                                 : 0U))), 
                                                              (0x0000001fffffffffULL 
                                                               & VL_EXTENDS_QI(37,16, 
                                                                               ((0x9fU 
                                                                                >= 
                                                                                ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U))
                                                                                 ? 
                                                                                (0x0000ffffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (vlSelfRef.modulator__DOT__sin_harmonics
                                                                                [
                                                                                (((IData)(0x0000000fU) 
                                                                                + 
                                                                                ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x00000020U) 
                                                                                - 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U))))) 
                                                                                | (vlSelfRef.modulator__DOT__sin_harmonics
                                                                                [
                                                                                (0x07ffffffU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                >> 1U))] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)))))
                                                                                 : 0U)))))));
    vlSelfRef.modulator__DOT__clk = vlSelfRef.clk;
    vlSelfRef.modulator__DOT__rst = vlSelfRef.rst;
    vlSelfRef.modulator__DOT__data_valid_in = vlSelfRef.data_valid_in;
    vlSelfRef.modulator__DOT__angle = vlSelfRef.angle;
    vlSelfRef.modulator__DOT__serial_hgen__DOT__clk 
        = vlSelfRef.modulator__DOT__clk;
    vlSelfRef.modulator__DOT__serial_hgen__DOT__rst 
        = vlSelfRef.modulator__DOT__rst;
    vlSelfRef.modulator__DOT__serial_hgen__DOT__data_valid_in 
        = ((~ (IData)(vlSelfRef.modulator__DOT__busy)) 
           & (IData)(vlSelfRef.modulator__DOT__data_valid_in));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__angle 
        = vlSelfRef.modulator__DOT__angle;
    vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__angle_n 
        = (0x0000ffffU & VL_EXTENDS_II(16,16, (IData)(vlSelfRef.modulator__DOT__serial_hgen__DOT__angle)));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__angle_n 
        = (0x0000ffffU & VL_MULS_III(32, (IData)(2U), 
                                     VL_EXTENDS_II(32,16, (IData)(vlSelfRef.modulator__DOT__serial_hgen__DOT__angle))));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__angle_n 
        = (0x0000ffffU & VL_MULS_III(32, (IData)(3U), 
                                     VL_EXTENDS_II(32,16, (IData)(vlSelfRef.modulator__DOT__serial_hgen__DOT__angle))));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__angle_n 
        = (0x0000ffffU & VL_MULS_III(32, (IData)(4U), 
                                     VL_EXTENDS_II(32,16, (IData)(vlSelfRef.modulator__DOT__serial_hgen__DOT__angle))));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__angle_n 
        = (0x0000ffffU & VL_MULS_III(32, (IData)(5U), 
                                     VL_EXTENDS_II(32,16, (IData)(vlSelfRef.modulator__DOT__serial_hgen__DOT__angle))));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__angle_n 
        = (0x0000ffffU & VL_MULS_III(32, (IData)(6U), 
                                     VL_EXTENDS_II(32,16, (IData)(vlSelfRef.modulator__DOT__serial_hgen__DOT__angle))));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__angle_n 
        = (0x0000ffffU & VL_MULS_III(32, (IData)(7U), 
                                     VL_EXTENDS_II(32,16, (IData)(vlSelfRef.modulator__DOT__serial_hgen__DOT__angle))));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__angle_n 
        = (0x0000ffffU & VL_MULS_III(32, (IData)(8U), 
                                     VL_EXTENDS_II(32,16, (IData)(vlSelfRef.modulator__DOT__serial_hgen__DOT__angle))));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__angle_n 
        = (0x0000ffffU & VL_MULS_III(32, (IData)(9U), 
                                     VL_EXTENDS_II(32,16, (IData)(vlSelfRef.modulator__DOT__serial_hgen__DOT__angle))));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__angle_n 
        = (0x0000ffffU & VL_MULS_III(32, (IData)(0x0000000aU), 
                                     VL_EXTENDS_II(32,16, (IData)(vlSelfRef.modulator__DOT__serial_hgen__DOT__angle))));
}

void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out[0U] 
        = (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.sin) 
            << 0x00000010U) | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.sin));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.sin) 
                                      << 0x00000010U) 
                                     | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.sin)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.sin) 
                                                        << 0x00000010U) 
                                                       | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.sin))))));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.sin) 
                                       << 0x00000010U) 
                                      | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.sin)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.sin) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.sin))))) 
                   >> 0x00000020U));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out[3U] 
        = (IData)((((QData)((IData)((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.sin) 
                                      << 0x00000010U) 
                                     | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.sin)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.sin) 
                                                        << 0x00000010U) 
                                                       | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.sin))))));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out[4U] 
        = (IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.sin) 
                                       << 0x00000010U) 
                                      | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.sin)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.sin) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.sin))))) 
                   >> 0x00000020U));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__valid_arr 
        = ((((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.data_cossin_valid_out) 
               << 4U) | (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.data_cossin_valid_out) 
                          << 3U) | ((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.data_cossin_valid_out) 
                                    << 2U))) | (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.data_cossin_valid_out) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.data_cossin_valid_out))) 
            << 5U) | ((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.data_cossin_valid_out) 
                        << 4U) | (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.data_cossin_valid_out) 
                                   << 3U) | ((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.data_cossin_valid_out) 
                                             << 2U))) 
                      | (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.data_cossin_valid_out) 
                          << 1U) | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.data_cossin_valid_out))));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out[0U] 
        = (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.cos) 
            << 0x00000010U) | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.cos));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.cos) 
                                      << 0x00000010U) 
                                     | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.cos)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.cos) 
                                                        << 0x00000010U) 
                                                       | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.cos))))));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.cos) 
                                       << 0x00000010U) 
                                      | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.cos)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.cos) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.cos))))) 
                   >> 0x00000020U));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out[3U] 
        = (IData)((((QData)((IData)((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.cos) 
                                      << 0x00000010U) 
                                     | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.cos)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.cos) 
                                                        << 0x00000010U) 
                                                       | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.cos))))));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out[4U] 
        = (IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.cos) 
                                       << 0x00000010U) 
                                      | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.cos)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.cos) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.cos))))) 
                   >> 0x00000020U));
    vlSelfRef.modulator__DOT__sin_unlatched[0U] = vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out[0U];
    vlSelfRef.modulator__DOT__sin_unlatched[1U] = vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out[1U];
    vlSelfRef.modulator__DOT__sin_unlatched[2U] = vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out[2U];
    vlSelfRef.modulator__DOT__sin_unlatched[3U] = vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out[3U];
    vlSelfRef.modulator__DOT__sin_unlatched[4U] = vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out[4U];
    vlSelfRef.modulator__DOT__serial_hgen__DOT__data_valid_out 
        = (0x000003ffU == (IData)(vlSelfRef.modulator__DOT__serial_hgen__DOT__valid_arr));
    vlSelfRef.modulator__DOT__cos_unlatched[0U] = vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out[0U];
    vlSelfRef.modulator__DOT__cos_unlatched[1U] = vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out[1U];
    vlSelfRef.modulator__DOT__cos_unlatched[2U] = vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out[2U];
    vlSelfRef.modulator__DOT__cos_unlatched[3U] = vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out[3U];
    vlSelfRef.modulator__DOT__cos_unlatched[4U] = vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out[4U];
    vlSelfRef.modulator__DOT__hgen_valid_out = vlSelfRef.modulator__DOT__serial_hgen__DOT__data_valid_out;
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
    CData/*0:0*/ __Vdly__modulator__DOT__mult_acc_active;
    __Vdly__modulator__DOT__mult_acc_active = 0;
    CData/*3:0*/ __Vdly__modulator__DOT__idx;
    __Vdly__modulator__DOT__idx = 0;
    CData/*0:0*/ __Vdly__modulator__DOT__busy;
    __Vdly__modulator__DOT__busy = 0;
    // Body
    __Vdly__modulator__DOT__mult_acc_active = vlSelfRef.modulator__DOT__mult_acc_active;
    __Vdly__modulator__DOT__idx = vlSelfRef.modulator__DOT__idx;
    __Vdly__modulator__DOT__busy = vlSelfRef.modulator__DOT__busy;
    if (vlSelfRef.modulator__DOT__rst) {
        vlSelfRef.modulator__DOT__modulator_sum_out = 0U;
        vlSelfRef.modulator__DOT__data_valid_out = 0U;
        vlSelfRef.modulator__DOT__mac_cur = 0ULL;
        __Vdly__modulator__DOT__mult_acc_active = 0U;
        __Vdly__modulator__DOT__idx = 0U;
        __Vdly__modulator__DOT__busy = 0U;
        vlSelfRef.modulator__DOT__a_reg[0U] = 0U;
        vlSelfRef.modulator__DOT__a_reg[1U] = 0U;
        vlSelfRef.modulator__DOT__a_reg[2U] = 0U;
        vlSelfRef.modulator__DOT__a_reg[3U] = 0U;
        vlSelfRef.modulator__DOT__a_reg[4U] = 0U;
        vlSelfRef.modulator__DOT__b_reg[0U] = 0U;
        vlSelfRef.modulator__DOT__b_reg[1U] = 0U;
        vlSelfRef.modulator__DOT__b_reg[2U] = 0U;
        vlSelfRef.modulator__DOT__b_reg[3U] = 0U;
        vlSelfRef.modulator__DOT__b_reg[4U] = 0U;
    } else {
        vlSelfRef.modulator__DOT__data_valid_out = 0U;
        if (((IData)(vlSelfRef.modulator__DOT__data_valid_in) 
             & (~ (IData)(vlSelfRef.modulator__DOT__busy)))) {
            vlSelfRef.modulator__DOT__a_reg[0U] = vlSelfRef.modulator__DOT__a_values[0U];
            vlSelfRef.modulator__DOT__a_reg[1U] = vlSelfRef.modulator__DOT__a_values[1U];
            vlSelfRef.modulator__DOT__a_reg[2U] = vlSelfRef.modulator__DOT__a_values[2U];
            vlSelfRef.modulator__DOT__a_reg[3U] = vlSelfRef.modulator__DOT__a_values[3U];
            vlSelfRef.modulator__DOT__a_reg[4U] = vlSelfRef.modulator__DOT__a_values[4U];
            vlSelfRef.modulator__DOT__b_reg[0U] = vlSelfRef.modulator__DOT__b_values[0U];
            vlSelfRef.modulator__DOT__b_reg[1U] = vlSelfRef.modulator__DOT__b_values[1U];
            vlSelfRef.modulator__DOT__b_reg[2U] = vlSelfRef.modulator__DOT__b_values[2U];
            vlSelfRef.modulator__DOT__b_reg[3U] = vlSelfRef.modulator__DOT__b_values[3U];
            vlSelfRef.modulator__DOT__b_reg[4U] = vlSelfRef.modulator__DOT__b_values[4U];
            __Vdly__modulator__DOT__busy = 1U;
        }
        if (vlSelfRef.modulator__DOT__mult_acc_active) {
            if ((9U == (IData)(vlSelfRef.modulator__DOT__idx))) {
                __Vdly__modulator__DOT__busy = 0U;
                vlSelfRef.modulator__DOT__modulator_sum_out 
                    = (0x0000ffffU & (IData)((0x0000001fffffffffULL 
                                              & VL_SHIFTRS_QQI(37,37,32, vlSelfRef.modulator__DOT__mac_next, 0x0000000fU))));
                vlSelfRef.modulator__DOT__data_valid_out = 1U;
                __Vdly__modulator__DOT__idx = 0U;
                __Vdly__modulator__DOT__mult_acc_active = 0U;
                vlSelfRef.modulator__DOT__mac_cur = 0ULL;
            } else {
                __Vdly__modulator__DOT__idx = (0x0000000fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.modulator__DOT__idx)));
                vlSelfRef.modulator__DOT__mac_cur = vlSelfRef.modulator__DOT__mac_next;
            }
        } else if (vlSelfRef.modulator__DOT__hgen_valid_out) {
            vlSelfRef.modulator__DOT__cos_harmonics[0U] 
                = vlSelfRef.modulator__DOT__cos_unlatched[0U];
            vlSelfRef.modulator__DOT__cos_harmonics[1U] 
                = vlSelfRef.modulator__DOT__cos_unlatched[1U];
            vlSelfRef.modulator__DOT__cos_harmonics[2U] 
                = vlSelfRef.modulator__DOT__cos_unlatched[2U];
            vlSelfRef.modulator__DOT__cos_harmonics[3U] 
                = vlSelfRef.modulator__DOT__cos_unlatched[3U];
            vlSelfRef.modulator__DOT__cos_harmonics[4U] 
                = vlSelfRef.modulator__DOT__cos_unlatched[4U];
            vlSelfRef.modulator__DOT__sin_harmonics[0U] 
                = vlSelfRef.modulator__DOT__sin_unlatched[0U];
            vlSelfRef.modulator__DOT__sin_harmonics[1U] 
                = vlSelfRef.modulator__DOT__sin_unlatched[1U];
            vlSelfRef.modulator__DOT__sin_harmonics[2U] 
                = vlSelfRef.modulator__DOT__sin_unlatched[2U];
            vlSelfRef.modulator__DOT__sin_harmonics[3U] 
                = vlSelfRef.modulator__DOT__sin_unlatched[3U];
            vlSelfRef.modulator__DOT__sin_harmonics[4U] 
                = vlSelfRef.modulator__DOT__sin_unlatched[4U];
            __Vdly__modulator__DOT__idx = 0U;
            vlSelfRef.modulator__DOT__mac_cur = 0ULL;
            __Vdly__modulator__DOT__mult_acc_active = 1U;
        }
    }
    vlSelfRef.modulator__DOT__mult_acc_active = __Vdly__modulator__DOT__mult_acc_active;
    vlSelfRef.modulator__DOT__idx = __Vdly__modulator__DOT__idx;
    vlSelfRef.modulator__DOT__busy = __Vdly__modulator__DOT__busy;
    vlSelfRef.modulator_sum_out = vlSelfRef.modulator__DOT__modulator_sum_out;
    vlSelfRef.data_valid_out = vlSelfRef.modulator__DOT__data_valid_out;
    vlSelfRef.modulator__DOT__mac_next = (0x0000001fffffffffULL 
                                          & (vlSelfRef.modulator__DOT__mac_cur 
                                             + (VL_MULS_QQQ(37, 
                                                            (0x0000001fffffffffULL 
                                                             & VL_EXTENDS_QI(37,16, 
                                                                             ((0x9fU 
                                                                               >= 
                                                                               ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U))
                                                                               ? 
                                                                              (0x0000ffffU 
                                                                               & (((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (vlSelfRef.modulator__DOT__a_reg
                                                                                [
                                                                                (((IData)(0x0000000fU) 
                                                                                + 
                                                                                ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x00000020U) 
                                                                                - 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U))))) 
                                                                                | (vlSelfRef.modulator__DOT__a_reg
                                                                                [
                                                                                (0x07ffffffU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                >> 1U))] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)))))
                                                                               : 0U))), 
                                                            (0x0000001fffffffffULL 
                                                             & VL_EXTENDS_QI(37,16, 
                                                                             ((0x9fU 
                                                                               >= 
                                                                               ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U))
                                                                               ? 
                                                                              (0x0000ffffU 
                                                                               & (((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (vlSelfRef.modulator__DOT__cos_harmonics
                                                                                [
                                                                                (((IData)(0x0000000fU) 
                                                                                + 
                                                                                ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x00000020U) 
                                                                                - 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U))))) 
                                                                                | (vlSelfRef.modulator__DOT__cos_harmonics
                                                                                [
                                                                                (0x07ffffffU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                >> 1U))] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)))))
                                                                               : 0U)))) 
                                                + VL_MULS_QQQ(37, 
                                                              (0x0000001fffffffffULL 
                                                               & VL_EXTENDS_QI(37,16, 
                                                                               ((0x9fU 
                                                                                >= 
                                                                                ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U))
                                                                                 ? 
                                                                                (0x0000ffffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (vlSelfRef.modulator__DOT__b_reg
                                                                                [
                                                                                (((IData)(0x0000000fU) 
                                                                                + 
                                                                                ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x00000020U) 
                                                                                - 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U))))) 
                                                                                | (vlSelfRef.modulator__DOT__b_reg
                                                                                [
                                                                                (0x07ffffffU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                >> 1U))] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)))))
                                                                                 : 0U))), 
                                                              (0x0000001fffffffffULL 
                                                               & VL_EXTENDS_QI(37,16, 
                                                                               ((0x9fU 
                                                                                >= 
                                                                                ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U))
                                                                                 ? 
                                                                                (0x0000ffffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (vlSelfRef.modulator__DOT__sin_harmonics
                                                                                [
                                                                                (((IData)(0x0000000fU) 
                                                                                + 
                                                                                ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x00000020U) 
                                                                                - 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U))))) 
                                                                                | (vlSelfRef.modulator__DOT__sin_harmonics
                                                                                [
                                                                                (0x07ffffffU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                >> 1U))] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.modulator__DOT__idx) 
                                                                                << 4U)))))
                                                                                 : 0U)))))));
    vlSelfRef.busy = vlSelfRef.modulator__DOT__busy;
    vlSelfRef.modulator__DOT__serial_hgen__DOT__data_valid_in 
        = ((~ (IData)(vlSelfRef.modulator__DOT__busy)) 
           & (IData)(vlSelfRef.modulator__DOT__data_valid_in));
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.modulator__DOT__serial_hgen__DOT__valid_arr 
        = ((((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.data_cossin_valid_out) 
               << 4U) | (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.data_cossin_valid_out) 
                          << 3U) | ((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.data_cossin_valid_out) 
                                    << 2U))) | (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.data_cossin_valid_out) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.data_cossin_valid_out))) 
            << 5U) | ((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.data_cossin_valid_out) 
                        << 4U) | (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.data_cossin_valid_out) 
                                   << 3U) | ((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.data_cossin_valid_out) 
                                             << 2U))) 
                      | (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.data_cossin_valid_out) 
                          << 1U) | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.data_cossin_valid_out))));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out[0U] 
        = (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.sin) 
            << 0x00000010U) | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.sin));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.sin) 
                                      << 0x00000010U) 
                                     | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.sin)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.sin) 
                                                        << 0x00000010U) 
                                                       | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.sin))))));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.sin) 
                                       << 0x00000010U) 
                                      | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.sin)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.sin) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.sin))))) 
                   >> 0x00000020U));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out[3U] 
        = (IData)((((QData)((IData)((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.sin) 
                                      << 0x00000010U) 
                                     | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.sin)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.sin) 
                                                        << 0x00000010U) 
                                                       | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.sin))))));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out[4U] 
        = (IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.sin) 
                                       << 0x00000010U) 
                                      | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.sin)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.sin) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.sin))))) 
                   >> 0x00000020U));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out[0U] 
        = (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.cos) 
            << 0x00000010U) | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.cos));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.cos) 
                                      << 0x00000010U) 
                                     | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.cos)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.cos) 
                                                        << 0x00000010U) 
                                                       | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.cos))))));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.cos) 
                                       << 0x00000010U) 
                                      | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.cos)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.cos) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.cos))))) 
                   >> 0x00000020U));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out[3U] 
        = (IData)((((QData)((IData)((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.cos) 
                                      << 0x00000010U) 
                                     | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.cos)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.cos) 
                                                        << 0x00000010U) 
                                                       | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.cos))))));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out[4U] 
        = (IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.cos) 
                                       << 0x00000010U) 
                                      | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.cos)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (((IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.cos) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.cos))))) 
                   >> 0x00000020U));
    vlSelfRef.modulator__DOT__serial_hgen__DOT__data_valid_out 
        = (0x000003ffU == (IData)(vlSelfRef.modulator__DOT__serial_hgen__DOT__valid_arr));
    vlSelfRef.modulator__DOT__sin_unlatched[0U] = vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out[0U];
    vlSelfRef.modulator__DOT__sin_unlatched[1U] = vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out[1U];
    vlSelfRef.modulator__DOT__sin_unlatched[2U] = vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out[2U];
    vlSelfRef.modulator__DOT__sin_unlatched[3U] = vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out[3U];
    vlSelfRef.modulator__DOT__sin_unlatched[4U] = vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out[4U];
    vlSelfRef.modulator__DOT__cos_unlatched[0U] = vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out[0U];
    vlSelfRef.modulator__DOT__cos_unlatched[1U] = vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out[1U];
    vlSelfRef.modulator__DOT__cos_unlatched[2U] = vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out[2U];
    vlSelfRef.modulator__DOT__cos_unlatched[3U] = vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out[3U];
    vlSelfRef.modulator__DOT__cos_unlatched[4U] = vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out[4U];
    vlSelfRef.modulator__DOT__hgen_valid_out = vlSelfRef.modulator__DOT__serial_hgen__DOT__data_valid_out;
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
}
#endif  // VL_DEBUG
