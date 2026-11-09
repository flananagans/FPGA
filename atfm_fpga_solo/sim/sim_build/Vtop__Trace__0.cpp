// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst));
    bufp->chgBit(oldp+2,(vlSelfRef.data_valid_in));
    bufp->chgSData(oldp+3,(vlSelfRef.inp_sig),14);
    bufp->chgSData(oldp+4,(vlSelfRef.ref_sig),14);
    bufp->chgIData(oldp+5,(vlSelfRef.Kp),32);
    bufp->chgIData(oldp+6,(vlSelfRef.Ki),32);
    bufp->chgIData(oldp+7,(vlSelfRef.Kd),32);
    bufp->chgSData(oldp+8,(vlSelfRef.out_sig),14);
    bufp->chgBit(oldp+9,(vlSelfRef.sat_hi));
    bufp->chgBit(oldp+10,(vlSelfRef.sat_lo));
    bufp->chgBit(oldp+11,(vlSelfRef.data_valid_out));
    bufp->chgBit(oldp+12,(vlSelfRef.busy));
    bufp->chgBit(oldp+13,(vlSelfRef.pid_controller__DOT__clk));
    bufp->chgBit(oldp+14,(vlSelfRef.pid_controller__DOT__rst));
    bufp->chgBit(oldp+15,(vlSelfRef.pid_controller__DOT__data_valid_in));
    bufp->chgSData(oldp+16,(vlSelfRef.pid_controller__DOT__inp_sig),14);
    bufp->chgSData(oldp+17,(vlSelfRef.pid_controller__DOT__ref_sig),14);
    bufp->chgIData(oldp+18,(vlSelfRef.pid_controller__DOT__Kp),32);
    bufp->chgIData(oldp+19,(vlSelfRef.pid_controller__DOT__Ki),32);
    bufp->chgIData(oldp+20,(vlSelfRef.pid_controller__DOT__Kd),32);
    bufp->chgSData(oldp+21,(vlSelfRef.pid_controller__DOT__out_sig),14);
    bufp->chgBit(oldp+22,(vlSelfRef.pid_controller__DOT__sat_hi));
    bufp->chgBit(oldp+23,(vlSelfRef.pid_controller__DOT__sat_lo));
    bufp->chgBit(oldp+24,(vlSelfRef.pid_controller__DOT__data_valid_out));
    bufp->chgBit(oldp+25,(vlSelfRef.pid_controller__DOT__busy));
    bufp->chgBit(oldp+26,(vlSelfRef.pid_controller__DOT__accept_data));
    bufp->chgSData(oldp+27,(vlSelfRef.pid_controller__DOT__vel),15);
    bufp->chgSData(oldp+28,(vlSelfRef.pid_controller__DOT__vel_d),15);
    bufp->chgIData(oldp+29,(vlSelfRef.pid_controller__DOT__deriv_vel),21);
    bufp->chgIData(oldp+30,(vlSelfRef.pid_controller__DOT__deriv_scaled),21);
    bufp->chgIData(oldp+31,(vlSelfRef.pid_controller__DOT__deriv_vel_filt),21);
    bufp->chgQData(oldp+32,(vlSelfRef.pid_controller__DOT__p_prod),47);
    bufp->chgQData(oldp+34,(vlSelfRef.pid_controller__DOT__i_prod),47);
    bufp->chgQData(oldp+36,(vlSelfRef.pid_controller__DOT__d_prod),47);
    bufp->chgQData(oldp+38,(vlSelfRef.pid_controller__DOT__p_term),47);
    bufp->chgQData(oldp+40,(vlSelfRef.pid_controller__DOT__d_term),47);
    bufp->chgQData(oldp+42,(vlSelfRef.pid_controller__DOT__i_next),48);
    bufp->chgQData(oldp+44,(vlSelfRef.pid_controller__DOT__i_current),47);
    bufp->chgQData(oldp+46,(vlSelfRef.pid_controller__DOT__pid_sum),50);
    bufp->chgQData(oldp+48,(vlSelfRef.pid_controller__DOT__unbounded_pid_sum),50);
    bufp->chgBit(oldp+50,(vlSelfRef.pid_controller__DOT__non_pos_i_prod));
    bufp->chgBit(oldp+51,(vlSelfRef.pid_controller__DOT__i_clamp));
    bufp->chgBit(oldp+52,(vlSelfRef.pid_controller__DOT__sat_hi_current));
    bufp->chgBit(oldp+53,(vlSelfRef.pid_controller__DOT__sat_lo_current));
    bufp->chgQData(oldp+54,(vlSelfRef.pid_controller__DOT__i_bounded),47);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
