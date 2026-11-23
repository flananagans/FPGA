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
    bufp->chgSData(oldp+3,(vlSelfRef.inp_state),12);
    bufp->chgSData(oldp+4,(vlSelfRef.des_state),12);
    bufp->chgSData(oldp+5,(vlSelfRef.Kp),16);
    bufp->chgSData(oldp+6,(vlSelfRef.Ki),16);
    bufp->chgSData(oldp+7,(vlSelfRef.Kd),16);
    bufp->chgSData(oldp+8,(vlSelfRef.out_cmd),12);
    bufp->chgBit(oldp+9,(vlSelfRef.sat_hi));
    bufp->chgBit(oldp+10,(vlSelfRef.sat_lo));
    bufp->chgBit(oldp+11,(vlSelfRef.data_valid_out));
    bufp->chgBit(oldp+12,(vlSelfRef.busy));
    bufp->chgBit(oldp+13,(vlSelfRef.pid_controller__DOT__clk));
    bufp->chgBit(oldp+14,(vlSelfRef.pid_controller__DOT__rst));
    bufp->chgBit(oldp+15,(vlSelfRef.pid_controller__DOT__data_valid_in));
    bufp->chgSData(oldp+16,(vlSelfRef.pid_controller__DOT__inp_state),12);
    bufp->chgSData(oldp+17,(vlSelfRef.pid_controller__DOT__des_state),12);
    bufp->chgSData(oldp+18,(vlSelfRef.pid_controller__DOT__Kp),16);
    bufp->chgSData(oldp+19,(vlSelfRef.pid_controller__DOT__Ki),16);
    bufp->chgSData(oldp+20,(vlSelfRef.pid_controller__DOT__Kd),16);
    bufp->chgSData(oldp+21,(vlSelfRef.pid_controller__DOT__out_cmd),12);
    bufp->chgBit(oldp+22,(vlSelfRef.pid_controller__DOT__sat_hi));
    bufp->chgBit(oldp+23,(vlSelfRef.pid_controller__DOT__sat_lo));
    bufp->chgBit(oldp+24,(vlSelfRef.pid_controller__DOT__data_valid_out));
    bufp->chgBit(oldp+25,(vlSelfRef.pid_controller__DOT__busy));
    bufp->chgBit(oldp+26,(vlSelfRef.pid_controller__DOT__accept_data));
    bufp->chgBit(oldp+27,(vlSelfRef.pid_controller__DOT__store_prods));
    bufp->chgSData(oldp+28,(vlSelfRef.pid_controller__DOT__vel),13);
    bufp->chgSData(oldp+29,(vlSelfRef.pid_controller__DOT__vel_d),13);
    bufp->chgIData(oldp+30,(vlSelfRef.pid_controller__DOT__deriv_vel),19);
    bufp->chgIData(oldp+31,(vlSelfRef.pid_controller__DOT__deriv_scaled),20);
    bufp->chgIData(oldp+32,(vlSelfRef.pid_controller__DOT__deriv_vel_filt),20);
    bufp->chgIData(oldp+33,(vlSelfRef.pid_controller__DOT__p_prod),29);
    bufp->chgIData(oldp+34,(vlSelfRef.pid_controller__DOT__i_prod),29);
    bufp->chgIData(oldp+35,(vlSelfRef.pid_controller__DOT__d_prod),29);
    bufp->chgIData(oldp+36,(vlSelfRef.pid_controller__DOT__p_term),29);
    bufp->chgIData(oldp+37,(vlSelfRef.pid_controller__DOT__d_term),29);
    bufp->chgIData(oldp+38,(vlSelfRef.pid_controller__DOT__i_next),30);
    bufp->chgIData(oldp+39,(vlSelfRef.pid_controller__DOT__i_current),29);
    bufp->chgIData(oldp+40,(vlSelfRef.pid_controller__DOT__pid_sum),32);
    bufp->chgIData(oldp+41,(vlSelfRef.pid_controller__DOT__unbounded_pid_sum),32);
    bufp->chgBit(oldp+42,(vlSelfRef.pid_controller__DOT__non_pos_i_prod));
    bufp->chgBit(oldp+43,(vlSelfRef.pid_controller__DOT__i_clamp));
    bufp->chgBit(oldp+44,(vlSelfRef.pid_controller__DOT__sat_hi_current));
    bufp->chgBit(oldp+45,(vlSelfRef.pid_controller__DOT__sat_lo_current));
    bufp->chgIData(oldp+46,(vlSelfRef.pid_controller__DOT__i_bounded),29);
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
