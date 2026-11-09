// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$rootio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"data_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"inp_sig",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"ref_sig",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"Kp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"Ki",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"Kd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"out_sig",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"sat_hi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+10,0,"sat_lo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"data_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "pid_controller", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"GAIN_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"SIG_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"FRAC_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+15,0,"data_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"inp_sig",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"ref_sig",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"Kp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"Ki",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"Kd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"out_sig",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"sat_hi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+23,0,"sat_lo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+24,0,"data_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+25,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"accept_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"vel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 14,0);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"vel_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 14,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"ALPHA_DIV_FACTOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+60,0,"DERIV_FRAC_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"deriv_vel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 20,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"deriv_scaled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 20,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"deriv_vel_filt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 20,0);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"PROD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+32,0,"p_prod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 46,0);
    VL_TRACE_DECL_QUAD(tracep,c+34,0,"i_prod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 46,0);
    VL_TRACE_DECL_QUAD(tracep,c+36,0,"d_prod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 46,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"OUT_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"OUT_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 13,0);
    VL_TRACE_DECL_QUAD(tracep,c+64,0,"I_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 46,0);
    VL_TRACE_DECL_QUAD(tracep,c+66,0,"I_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 46,0);
    VL_TRACE_DECL_QUAD(tracep,c+38,0,"p_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 46,0);
    VL_TRACE_DECL_QUAD(tracep,c+40,0,"d_term",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 46,0);
    VL_TRACE_DECL_QUAD(tracep,c+42,0,"i_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_DECL_QUAD(tracep,c+44,0,"i_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 46,0);
    VL_TRACE_DECL_QUAD(tracep,c+46,0,"pid_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 49,0);
    VL_TRACE_DECL_QUAD(tracep,c+48,0,"unbounded_pid_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 49,0);
    VL_TRACE_DECL_BIT(tracep,c+50,0,"non_pos_i_prod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"i_clamp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+52,0,"sat_hi_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"sat_lo_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+54,0,"i_bounded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 46,0);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+56,(0x00000020U),32);
    bufp->fullIData(oldp+57,(0x0000000eU),32);
    bufp->fullIData(oldp+58,(0x00000010U),32);
    bufp->fullIData(oldp+59,(3U),32);
    bufp->fullIData(oldp+60,(5U),32);
    bufp->fullIData(oldp+61,(0x0000002fU),32);
    bufp->fullSData(oldp+62,(0x1fffU),14);
    bufp->fullSData(oldp+63,(0x2000U),14);
    bufp->fullQData(oldp+64,(0x0000000003331999ULL),47);
    bufp->fullQData(oldp+66,(0x00007ffffccce667ULL),47);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.clk));
    bufp->fullBit(oldp+1,(vlSelfRef.rst));
    bufp->fullBit(oldp+2,(vlSelfRef.data_valid_in));
    bufp->fullSData(oldp+3,(vlSelfRef.inp_sig),14);
    bufp->fullSData(oldp+4,(vlSelfRef.ref_sig),14);
    bufp->fullIData(oldp+5,(vlSelfRef.Kp),32);
    bufp->fullIData(oldp+6,(vlSelfRef.Ki),32);
    bufp->fullIData(oldp+7,(vlSelfRef.Kd),32);
    bufp->fullSData(oldp+8,(vlSelfRef.out_sig),14);
    bufp->fullBit(oldp+9,(vlSelfRef.sat_hi));
    bufp->fullBit(oldp+10,(vlSelfRef.sat_lo));
    bufp->fullBit(oldp+11,(vlSelfRef.data_valid_out));
    bufp->fullBit(oldp+12,(vlSelfRef.busy));
    bufp->fullBit(oldp+13,(vlSelfRef.pid_controller__DOT__clk));
    bufp->fullBit(oldp+14,(vlSelfRef.pid_controller__DOT__rst));
    bufp->fullBit(oldp+15,(vlSelfRef.pid_controller__DOT__data_valid_in));
    bufp->fullSData(oldp+16,(vlSelfRef.pid_controller__DOT__inp_sig),14);
    bufp->fullSData(oldp+17,(vlSelfRef.pid_controller__DOT__ref_sig),14);
    bufp->fullIData(oldp+18,(vlSelfRef.pid_controller__DOT__Kp),32);
    bufp->fullIData(oldp+19,(vlSelfRef.pid_controller__DOT__Ki),32);
    bufp->fullIData(oldp+20,(vlSelfRef.pid_controller__DOT__Kd),32);
    bufp->fullSData(oldp+21,(vlSelfRef.pid_controller__DOT__out_sig),14);
    bufp->fullBit(oldp+22,(vlSelfRef.pid_controller__DOT__sat_hi));
    bufp->fullBit(oldp+23,(vlSelfRef.pid_controller__DOT__sat_lo));
    bufp->fullBit(oldp+24,(vlSelfRef.pid_controller__DOT__data_valid_out));
    bufp->fullBit(oldp+25,(vlSelfRef.pid_controller__DOT__busy));
    bufp->fullBit(oldp+26,(vlSelfRef.pid_controller__DOT__accept_data));
    bufp->fullSData(oldp+27,(vlSelfRef.pid_controller__DOT__vel),15);
    bufp->fullSData(oldp+28,(vlSelfRef.pid_controller__DOT__vel_d),15);
    bufp->fullIData(oldp+29,(vlSelfRef.pid_controller__DOT__deriv_vel),21);
    bufp->fullIData(oldp+30,(vlSelfRef.pid_controller__DOT__deriv_scaled),21);
    bufp->fullIData(oldp+31,(vlSelfRef.pid_controller__DOT__deriv_vel_filt),21);
    bufp->fullQData(oldp+32,(vlSelfRef.pid_controller__DOT__p_prod),47);
    bufp->fullQData(oldp+34,(vlSelfRef.pid_controller__DOT__i_prod),47);
    bufp->fullQData(oldp+36,(vlSelfRef.pid_controller__DOT__d_prod),47);
    bufp->fullQData(oldp+38,(vlSelfRef.pid_controller__DOT__p_term),47);
    bufp->fullQData(oldp+40,(vlSelfRef.pid_controller__DOT__d_term),47);
    bufp->fullQData(oldp+42,(vlSelfRef.pid_controller__DOT__i_next),48);
    bufp->fullQData(oldp+44,(vlSelfRef.pid_controller__DOT__i_current),47);
    bufp->fullQData(oldp+46,(vlSelfRef.pid_controller__DOT__pid_sum),50);
    bufp->fullQData(oldp+48,(vlSelfRef.pid_controller__DOT__unbounded_pid_sum),50);
    bufp->fullBit(oldp+50,(vlSelfRef.pid_controller__DOT__non_pos_i_prod));
    bufp->fullBit(oldp+51,(vlSelfRef.pid_controller__DOT__i_clamp));
    bufp->fullBit(oldp+52,(vlSelfRef.pid_controller__DOT__sat_hi_current));
    bufp->fullBit(oldp+53,(vlSelfRef.pid_controller__DOT__sat_lo_current));
    bufp->fullQData(oldp+54,(vlSelfRef.pid_controller__DOT__i_bounded),47);
}
