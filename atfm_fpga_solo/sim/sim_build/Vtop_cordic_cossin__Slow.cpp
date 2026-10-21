// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop_cordic_cossin
constexpr IData/*31:0*/ Vtop_cordic_cossin::WIDTH;
constexpr IData/*31:0*/ Vtop_cordic_cossin::NUM_ITERATIONS;
constexpr IData/*16:0*/ Vtop_cordic_cossin::X_INIT;
constexpr IData/*16:0*/ Vtop_cordic_cossin::Y_INIT;
constexpr double Vtop_cordic_cossin::PI;
constexpr double Vtop_cordic_cossin::SCALING_FACTOR_REAL;


void Vtop_cordic_cossin___ctor_var_reset(Vtop_cordic_cossin* vlSelf);

Vtop_cordic_cossin::Vtop_cordic_cossin() = default;
Vtop_cordic_cossin::~Vtop_cordic_cossin() = default;

void Vtop_cordic_cossin::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtop_cordic_cossin___ctor_var_reset(this);
}

void Vtop_cordic_cossin::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_cordic_cossin::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
