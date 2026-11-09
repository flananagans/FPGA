// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
constexpr SData/*13:0*/ Vtop___024root::pid_controller__DOT__OUT_MAX;
constexpr SData/*13:0*/ Vtop___024root::pid_controller__DOT__OUT_MIN;
constexpr IData/*31:0*/ Vtop___024root::pid_controller__DOT__GAIN_DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::pid_controller__DOT__SIG_DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::pid_controller__DOT__FRAC_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::pid_controller__DOT__ALPHA_DIV_FACTOR;
constexpr IData/*31:0*/ Vtop___024root::pid_controller__DOT__DERIV_FRAC_BITS;
constexpr IData/*31:0*/ Vtop___024root::pid_controller__DOT__PROD_WIDTH;
constexpr QData/*46:0*/ Vtop___024root::pid_controller__DOT__I_MAX;
constexpr QData/*46:0*/ Vtop___024root::pid_controller__DOT__I_MIN;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
