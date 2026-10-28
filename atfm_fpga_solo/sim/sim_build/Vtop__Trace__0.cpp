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
    bufp->chgWData(oldp+3,(vlSelfRef.a_values),160);
    bufp->chgWData(oldp+8,(vlSelfRef.b_values),160);
    bufp->chgWData(oldp+13,(vlSelfRef.cos_harmonics),160);
    bufp->chgWData(oldp+18,(vlSelfRef.sin_harmonics),160);
    bufp->chgSData(oldp+23,(vlSelfRef.modulator_sum_out),16);
    bufp->chgBit(oldp+24,(vlSelfRef.data_valid_out));
    bufp->chgBit(oldp+25,(vlSelfRef.busy));
    bufp->chgBit(oldp+26,(vlSelfRef.modulator__DOT__clk));
    bufp->chgBit(oldp+27,(vlSelfRef.modulator__DOT__rst));
    bufp->chgBit(oldp+28,(vlSelfRef.modulator__DOT__data_valid_in));
    bufp->chgWData(oldp+29,(vlSelfRef.modulator__DOT__a_values),160);
    bufp->chgWData(oldp+34,(vlSelfRef.modulator__DOT__b_values),160);
    bufp->chgWData(oldp+39,(vlSelfRef.modulator__DOT__cos_harmonics),160);
    bufp->chgWData(oldp+44,(vlSelfRef.modulator__DOT__sin_harmonics),160);
    bufp->chgSData(oldp+49,(vlSelfRef.modulator__DOT__modulator_sum_out),16);
    bufp->chgBit(oldp+50,(vlSelfRef.modulator__DOT__data_valid_out));
    bufp->chgBit(oldp+51,(vlSelfRef.modulator__DOT__busy));
    bufp->chgWData(oldp+52,(vlSelfRef.modulator__DOT__a_reg),160);
    bufp->chgWData(oldp+57,(vlSelfRef.modulator__DOT__b_reg),160);
    bufp->chgWData(oldp+62,(vlSelfRef.modulator__DOT__cos_reg),160);
    bufp->chgWData(oldp+67,(vlSelfRef.modulator__DOT__sin_reg),160);
    bufp->chgCData(oldp+72,(vlSelfRef.modulator__DOT__idx),4);
    bufp->chgQData(oldp+73,(vlSelfRef.modulator__DOT__mac_cur),37);
    bufp->chgQData(oldp+75,(vlSelfRef.modulator__DOT__mac_next),37);
    bufp->chgCData(oldp+77,(vlSelfRef.modulator__DOT__mac_state),2);
    bufp->chgSData(oldp+78,(vlSelfRef.modulator__DOT__a_temp),16);
    bufp->chgSData(oldp+79,(vlSelfRef.modulator__DOT__b_temp),16);
    bufp->chgSData(oldp+80,(vlSelfRef.modulator__DOT__cos_temp),16);
    bufp->chgSData(oldp+81,(vlSelfRef.modulator__DOT__sin_temp),16);
    bufp->chgIData(oldp+82,(vlSelfRef.modulator__DOT__prod_a_temp),32);
    bufp->chgIData(oldp+83,(vlSelfRef.modulator__DOT__prod_b_temp),32);
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
