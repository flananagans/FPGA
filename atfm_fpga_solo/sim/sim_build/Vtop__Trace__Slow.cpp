// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtop::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtop::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtop::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBit(c+3,"data_valid_in", false,-1);
        tracep->declBus(c+4,"angle", false,-1, 15,0);
        tracep->declArray(c+5,"cos_arr_out", false,-1, 159,0);
        tracep->declArray(c+10,"sin_arr_out", false,-1, 159,0);
        tracep->declBit(c+15,"data_valid_out", false,-1);
        tracep->declBit(c+16,"harmonic_generator clk", false,-1);
        tracep->declBit(c+17,"harmonic_generator rst", false,-1);
        tracep->declBit(c+18,"harmonic_generator data_valid_in", false,-1);
        tracep->declBus(c+19,"harmonic_generator angle", false,-1, 15,0);
        tracep->declArray(c+20,"harmonic_generator cos_arr_out", false,-1, 159,0);
        tracep->declArray(c+25,"harmonic_generator sin_arr_out", false,-1, 159,0);
        tracep->declBit(c+30,"harmonic_generator data_valid_out", false,-1);
        tracep->declBus(c+31,"harmonic_generator valid_arr", false,-1, 9,0);
        tracep->declBus(c+32,"harmonic_generator genblk1[0] angle_n", false,-1, 15,0);
        tracep->declBus(c+33,"harmonic_generator genblk1[1] angle_n", false,-1, 15,0);
        tracep->declBus(c+34,"harmonic_generator genblk1[2] angle_n", false,-1, 15,0);
        tracep->declBus(c+35,"harmonic_generator genblk1[3] angle_n", false,-1, 15,0);
        tracep->declBus(c+36,"harmonic_generator genblk1[4] angle_n", false,-1, 15,0);
        tracep->declBus(c+37,"harmonic_generator genblk1[5] angle_n", false,-1, 15,0);
        tracep->declBus(c+38,"harmonic_generator genblk1[6] angle_n", false,-1, 15,0);
        tracep->declBus(c+39,"harmonic_generator genblk1[7] angle_n", false,-1, 15,0);
        tracep->declBus(c+40,"harmonic_generator genblk1[8] angle_n", false,-1, 15,0);
        tracep->declBus(c+41,"harmonic_generator genblk1[9] angle_n", false,-1, 15,0);
        tracep->declBus(c+1132,"harmonic_generator genblk1[0] nth_cordic WIDTH", false,-1, 31,0);
        tracep->declBus(c+1132,"harmonic_generator genblk1[0] nth_cordic NUM_ITERATIONS", false,-1, 31,0);
        tracep->declBit(c+42,"harmonic_generator genblk1[0] nth_cordic clk", false,-1);
        tracep->declBit(c+43,"harmonic_generator genblk1[0] nth_cordic rst", false,-1);
        tracep->declBit(c+44,"harmonic_generator genblk1[0] nth_cordic data_angle_valid_in", false,-1);
        tracep->declBus(c+45,"harmonic_generator genblk1[0] nth_cordic angle", false,-1, 15,0);
        tracep->declBus(c+46,"harmonic_generator genblk1[0] nth_cordic cos", false,-1, 15,0);
        tracep->declBus(c+47,"harmonic_generator genblk1[0] nth_cordic sin", false,-1, 15,0);
        tracep->declBit(c+48,"harmonic_generator genblk1[0] nth_cordic data_cossin_valid_out", false,-1);
        tracep->declDouble(c+1133,"harmonic_generator genblk1[0] nth_cordic PI", false,-1);
        tracep->declDouble(c+1135,"harmonic_generator genblk1[0] nth_cordic SCALING_FACTOR_REAL", false,-1);
        tracep->declBus(c+1137,"harmonic_generator genblk1[0] nth_cordic X_INIT", false,-1, 16,0);
        tracep->declBus(c+1138,"harmonic_generator genblk1[0] nth_cordic Y_INIT", false,-1, 16,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+49+i*1,"harmonic_generator genblk1[0] nth_cordic x_pipe", true,(i+0), 16,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+66+i*1,"harmonic_generator genblk1[0] nth_cordic y_pipe", true,(i+0), 16,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBit(c+83+i*1,"harmonic_generator genblk1[0] nth_cordic x_flip_pipe", true,(i+0));}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+100+i*1,"harmonic_generator genblk1[0] nth_cordic total_angle_pipe", true,(i+0), 15,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+117+i*1,"harmonic_generator genblk1[0] nth_cordic desired_angle_pipe", true,(i+0), 15,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBit(c+134+i*1,"harmonic_generator genblk1[0] nth_cordic valid_pipe", true,(i+0));}}
        tracep->declBus(c+1132,"harmonic_generator genblk1[1] nth_cordic WIDTH", false,-1, 31,0);
        tracep->declBus(c+1132,"harmonic_generator genblk1[1] nth_cordic NUM_ITERATIONS", false,-1, 31,0);
        tracep->declBit(c+151,"harmonic_generator genblk1[1] nth_cordic clk", false,-1);
        tracep->declBit(c+152,"harmonic_generator genblk1[1] nth_cordic rst", false,-1);
        tracep->declBit(c+153,"harmonic_generator genblk1[1] nth_cordic data_angle_valid_in", false,-1);
        tracep->declBus(c+154,"harmonic_generator genblk1[1] nth_cordic angle", false,-1, 15,0);
        tracep->declBus(c+155,"harmonic_generator genblk1[1] nth_cordic cos", false,-1, 15,0);
        tracep->declBus(c+156,"harmonic_generator genblk1[1] nth_cordic sin", false,-1, 15,0);
        tracep->declBit(c+157,"harmonic_generator genblk1[1] nth_cordic data_cossin_valid_out", false,-1);
        tracep->declDouble(c+1133,"harmonic_generator genblk1[1] nth_cordic PI", false,-1);
        tracep->declDouble(c+1135,"harmonic_generator genblk1[1] nth_cordic SCALING_FACTOR_REAL", false,-1);
        tracep->declBus(c+1137,"harmonic_generator genblk1[1] nth_cordic X_INIT", false,-1, 16,0);
        tracep->declBus(c+1138,"harmonic_generator genblk1[1] nth_cordic Y_INIT", false,-1, 16,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+158+i*1,"harmonic_generator genblk1[1] nth_cordic x_pipe", true,(i+0), 16,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+175+i*1,"harmonic_generator genblk1[1] nth_cordic y_pipe", true,(i+0), 16,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBit(c+192+i*1,"harmonic_generator genblk1[1] nth_cordic x_flip_pipe", true,(i+0));}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+209+i*1,"harmonic_generator genblk1[1] nth_cordic total_angle_pipe", true,(i+0), 15,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+226+i*1,"harmonic_generator genblk1[1] nth_cordic desired_angle_pipe", true,(i+0), 15,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBit(c+243+i*1,"harmonic_generator genblk1[1] nth_cordic valid_pipe", true,(i+0));}}
        tracep->declBus(c+1132,"harmonic_generator genblk1[2] nth_cordic WIDTH", false,-1, 31,0);
        tracep->declBus(c+1132,"harmonic_generator genblk1[2] nth_cordic NUM_ITERATIONS", false,-1, 31,0);
        tracep->declBit(c+260,"harmonic_generator genblk1[2] nth_cordic clk", false,-1);
        tracep->declBit(c+261,"harmonic_generator genblk1[2] nth_cordic rst", false,-1);
        tracep->declBit(c+262,"harmonic_generator genblk1[2] nth_cordic data_angle_valid_in", false,-1);
        tracep->declBus(c+263,"harmonic_generator genblk1[2] nth_cordic angle", false,-1, 15,0);
        tracep->declBus(c+264,"harmonic_generator genblk1[2] nth_cordic cos", false,-1, 15,0);
        tracep->declBus(c+265,"harmonic_generator genblk1[2] nth_cordic sin", false,-1, 15,0);
        tracep->declBit(c+266,"harmonic_generator genblk1[2] nth_cordic data_cossin_valid_out", false,-1);
        tracep->declDouble(c+1133,"harmonic_generator genblk1[2] nth_cordic PI", false,-1);
        tracep->declDouble(c+1135,"harmonic_generator genblk1[2] nth_cordic SCALING_FACTOR_REAL", false,-1);
        tracep->declBus(c+1137,"harmonic_generator genblk1[2] nth_cordic X_INIT", false,-1, 16,0);
        tracep->declBus(c+1138,"harmonic_generator genblk1[2] nth_cordic Y_INIT", false,-1, 16,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+267+i*1,"harmonic_generator genblk1[2] nth_cordic x_pipe", true,(i+0), 16,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+284+i*1,"harmonic_generator genblk1[2] nth_cordic y_pipe", true,(i+0), 16,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBit(c+301+i*1,"harmonic_generator genblk1[2] nth_cordic x_flip_pipe", true,(i+0));}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+318+i*1,"harmonic_generator genblk1[2] nth_cordic total_angle_pipe", true,(i+0), 15,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+335+i*1,"harmonic_generator genblk1[2] nth_cordic desired_angle_pipe", true,(i+0), 15,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBit(c+352+i*1,"harmonic_generator genblk1[2] nth_cordic valid_pipe", true,(i+0));}}
        tracep->declBus(c+1132,"harmonic_generator genblk1[3] nth_cordic WIDTH", false,-1, 31,0);
        tracep->declBus(c+1132,"harmonic_generator genblk1[3] nth_cordic NUM_ITERATIONS", false,-1, 31,0);
        tracep->declBit(c+369,"harmonic_generator genblk1[3] nth_cordic clk", false,-1);
        tracep->declBit(c+370,"harmonic_generator genblk1[3] nth_cordic rst", false,-1);
        tracep->declBit(c+371,"harmonic_generator genblk1[3] nth_cordic data_angle_valid_in", false,-1);
        tracep->declBus(c+372,"harmonic_generator genblk1[3] nth_cordic angle", false,-1, 15,0);
        tracep->declBus(c+373,"harmonic_generator genblk1[3] nth_cordic cos", false,-1, 15,0);
        tracep->declBus(c+374,"harmonic_generator genblk1[3] nth_cordic sin", false,-1, 15,0);
        tracep->declBit(c+375,"harmonic_generator genblk1[3] nth_cordic data_cossin_valid_out", false,-1);
        tracep->declDouble(c+1133,"harmonic_generator genblk1[3] nth_cordic PI", false,-1);
        tracep->declDouble(c+1135,"harmonic_generator genblk1[3] nth_cordic SCALING_FACTOR_REAL", false,-1);
        tracep->declBus(c+1137,"harmonic_generator genblk1[3] nth_cordic X_INIT", false,-1, 16,0);
        tracep->declBus(c+1138,"harmonic_generator genblk1[3] nth_cordic Y_INIT", false,-1, 16,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+376+i*1,"harmonic_generator genblk1[3] nth_cordic x_pipe", true,(i+0), 16,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+393+i*1,"harmonic_generator genblk1[3] nth_cordic y_pipe", true,(i+0), 16,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBit(c+410+i*1,"harmonic_generator genblk1[3] nth_cordic x_flip_pipe", true,(i+0));}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+427+i*1,"harmonic_generator genblk1[3] nth_cordic total_angle_pipe", true,(i+0), 15,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+444+i*1,"harmonic_generator genblk1[3] nth_cordic desired_angle_pipe", true,(i+0), 15,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBit(c+461+i*1,"harmonic_generator genblk1[3] nth_cordic valid_pipe", true,(i+0));}}
        tracep->declBus(c+1132,"harmonic_generator genblk1[4] nth_cordic WIDTH", false,-1, 31,0);
        tracep->declBus(c+1132,"harmonic_generator genblk1[4] nth_cordic NUM_ITERATIONS", false,-1, 31,0);
        tracep->declBit(c+478,"harmonic_generator genblk1[4] nth_cordic clk", false,-1);
        tracep->declBit(c+479,"harmonic_generator genblk1[4] nth_cordic rst", false,-1);
        tracep->declBit(c+480,"harmonic_generator genblk1[4] nth_cordic data_angle_valid_in", false,-1);
        tracep->declBus(c+481,"harmonic_generator genblk1[4] nth_cordic angle", false,-1, 15,0);
        tracep->declBus(c+482,"harmonic_generator genblk1[4] nth_cordic cos", false,-1, 15,0);
        tracep->declBus(c+483,"harmonic_generator genblk1[4] nth_cordic sin", false,-1, 15,0);
        tracep->declBit(c+484,"harmonic_generator genblk1[4] nth_cordic data_cossin_valid_out", false,-1);
        tracep->declDouble(c+1133,"harmonic_generator genblk1[4] nth_cordic PI", false,-1);
        tracep->declDouble(c+1135,"harmonic_generator genblk1[4] nth_cordic SCALING_FACTOR_REAL", false,-1);
        tracep->declBus(c+1137,"harmonic_generator genblk1[4] nth_cordic X_INIT", false,-1, 16,0);
        tracep->declBus(c+1138,"harmonic_generator genblk1[4] nth_cordic Y_INIT", false,-1, 16,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+485+i*1,"harmonic_generator genblk1[4] nth_cordic x_pipe", true,(i+0), 16,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+502+i*1,"harmonic_generator genblk1[4] nth_cordic y_pipe", true,(i+0), 16,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBit(c+519+i*1,"harmonic_generator genblk1[4] nth_cordic x_flip_pipe", true,(i+0));}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+536+i*1,"harmonic_generator genblk1[4] nth_cordic total_angle_pipe", true,(i+0), 15,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+553+i*1,"harmonic_generator genblk1[4] nth_cordic desired_angle_pipe", true,(i+0), 15,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBit(c+570+i*1,"harmonic_generator genblk1[4] nth_cordic valid_pipe", true,(i+0));}}
        tracep->declBus(c+1132,"harmonic_generator genblk1[5] nth_cordic WIDTH", false,-1, 31,0);
        tracep->declBus(c+1132,"harmonic_generator genblk1[5] nth_cordic NUM_ITERATIONS", false,-1, 31,0);
        tracep->declBit(c+587,"harmonic_generator genblk1[5] nth_cordic clk", false,-1);
        tracep->declBit(c+588,"harmonic_generator genblk1[5] nth_cordic rst", false,-1);
        tracep->declBit(c+589,"harmonic_generator genblk1[5] nth_cordic data_angle_valid_in", false,-1);
        tracep->declBus(c+590,"harmonic_generator genblk1[5] nth_cordic angle", false,-1, 15,0);
        tracep->declBus(c+591,"harmonic_generator genblk1[5] nth_cordic cos", false,-1, 15,0);
        tracep->declBus(c+592,"harmonic_generator genblk1[5] nth_cordic sin", false,-1, 15,0);
        tracep->declBit(c+593,"harmonic_generator genblk1[5] nth_cordic data_cossin_valid_out", false,-1);
        tracep->declDouble(c+1133,"harmonic_generator genblk1[5] nth_cordic PI", false,-1);
        tracep->declDouble(c+1135,"harmonic_generator genblk1[5] nth_cordic SCALING_FACTOR_REAL", false,-1);
        tracep->declBus(c+1137,"harmonic_generator genblk1[5] nth_cordic X_INIT", false,-1, 16,0);
        tracep->declBus(c+1138,"harmonic_generator genblk1[5] nth_cordic Y_INIT", false,-1, 16,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+594+i*1,"harmonic_generator genblk1[5] nth_cordic x_pipe", true,(i+0), 16,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+611+i*1,"harmonic_generator genblk1[5] nth_cordic y_pipe", true,(i+0), 16,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBit(c+628+i*1,"harmonic_generator genblk1[5] nth_cordic x_flip_pipe", true,(i+0));}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+645+i*1,"harmonic_generator genblk1[5] nth_cordic total_angle_pipe", true,(i+0), 15,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+662+i*1,"harmonic_generator genblk1[5] nth_cordic desired_angle_pipe", true,(i+0), 15,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBit(c+679+i*1,"harmonic_generator genblk1[5] nth_cordic valid_pipe", true,(i+0));}}
        tracep->declBus(c+1132,"harmonic_generator genblk1[6] nth_cordic WIDTH", false,-1, 31,0);
        tracep->declBus(c+1132,"harmonic_generator genblk1[6] nth_cordic NUM_ITERATIONS", false,-1, 31,0);
        tracep->declBit(c+696,"harmonic_generator genblk1[6] nth_cordic clk", false,-1);
        tracep->declBit(c+697,"harmonic_generator genblk1[6] nth_cordic rst", false,-1);
        tracep->declBit(c+698,"harmonic_generator genblk1[6] nth_cordic data_angle_valid_in", false,-1);
        tracep->declBus(c+699,"harmonic_generator genblk1[6] nth_cordic angle", false,-1, 15,0);
        tracep->declBus(c+700,"harmonic_generator genblk1[6] nth_cordic cos", false,-1, 15,0);
        tracep->declBus(c+701,"harmonic_generator genblk1[6] nth_cordic sin", false,-1, 15,0);
        tracep->declBit(c+702,"harmonic_generator genblk1[6] nth_cordic data_cossin_valid_out", false,-1);
        tracep->declDouble(c+1133,"harmonic_generator genblk1[6] nth_cordic PI", false,-1);
        tracep->declDouble(c+1135,"harmonic_generator genblk1[6] nth_cordic SCALING_FACTOR_REAL", false,-1);
        tracep->declBus(c+1137,"harmonic_generator genblk1[6] nth_cordic X_INIT", false,-1, 16,0);
        tracep->declBus(c+1138,"harmonic_generator genblk1[6] nth_cordic Y_INIT", false,-1, 16,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+703+i*1,"harmonic_generator genblk1[6] nth_cordic x_pipe", true,(i+0), 16,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+720+i*1,"harmonic_generator genblk1[6] nth_cordic y_pipe", true,(i+0), 16,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBit(c+737+i*1,"harmonic_generator genblk1[6] nth_cordic x_flip_pipe", true,(i+0));}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+754+i*1,"harmonic_generator genblk1[6] nth_cordic total_angle_pipe", true,(i+0), 15,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+771+i*1,"harmonic_generator genblk1[6] nth_cordic desired_angle_pipe", true,(i+0), 15,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBit(c+788+i*1,"harmonic_generator genblk1[6] nth_cordic valid_pipe", true,(i+0));}}
        tracep->declBus(c+1132,"harmonic_generator genblk1[7] nth_cordic WIDTH", false,-1, 31,0);
        tracep->declBus(c+1132,"harmonic_generator genblk1[7] nth_cordic NUM_ITERATIONS", false,-1, 31,0);
        tracep->declBit(c+805,"harmonic_generator genblk1[7] nth_cordic clk", false,-1);
        tracep->declBit(c+806,"harmonic_generator genblk1[7] nth_cordic rst", false,-1);
        tracep->declBit(c+807,"harmonic_generator genblk1[7] nth_cordic data_angle_valid_in", false,-1);
        tracep->declBus(c+808,"harmonic_generator genblk1[7] nth_cordic angle", false,-1, 15,0);
        tracep->declBus(c+809,"harmonic_generator genblk1[7] nth_cordic cos", false,-1, 15,0);
        tracep->declBus(c+810,"harmonic_generator genblk1[7] nth_cordic sin", false,-1, 15,0);
        tracep->declBit(c+811,"harmonic_generator genblk1[7] nth_cordic data_cossin_valid_out", false,-1);
        tracep->declDouble(c+1133,"harmonic_generator genblk1[7] nth_cordic PI", false,-1);
        tracep->declDouble(c+1135,"harmonic_generator genblk1[7] nth_cordic SCALING_FACTOR_REAL", false,-1);
        tracep->declBus(c+1137,"harmonic_generator genblk1[7] nth_cordic X_INIT", false,-1, 16,0);
        tracep->declBus(c+1138,"harmonic_generator genblk1[7] nth_cordic Y_INIT", false,-1, 16,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+812+i*1,"harmonic_generator genblk1[7] nth_cordic x_pipe", true,(i+0), 16,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+829+i*1,"harmonic_generator genblk1[7] nth_cordic y_pipe", true,(i+0), 16,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBit(c+846+i*1,"harmonic_generator genblk1[7] nth_cordic x_flip_pipe", true,(i+0));}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+863+i*1,"harmonic_generator genblk1[7] nth_cordic total_angle_pipe", true,(i+0), 15,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+880+i*1,"harmonic_generator genblk1[7] nth_cordic desired_angle_pipe", true,(i+0), 15,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBit(c+897+i*1,"harmonic_generator genblk1[7] nth_cordic valid_pipe", true,(i+0));}}
        tracep->declBus(c+1132,"harmonic_generator genblk1[8] nth_cordic WIDTH", false,-1, 31,0);
        tracep->declBus(c+1132,"harmonic_generator genblk1[8] nth_cordic NUM_ITERATIONS", false,-1, 31,0);
        tracep->declBit(c+914,"harmonic_generator genblk1[8] nth_cordic clk", false,-1);
        tracep->declBit(c+915,"harmonic_generator genblk1[8] nth_cordic rst", false,-1);
        tracep->declBit(c+916,"harmonic_generator genblk1[8] nth_cordic data_angle_valid_in", false,-1);
        tracep->declBus(c+917,"harmonic_generator genblk1[8] nth_cordic angle", false,-1, 15,0);
        tracep->declBus(c+918,"harmonic_generator genblk1[8] nth_cordic cos", false,-1, 15,0);
        tracep->declBus(c+919,"harmonic_generator genblk1[8] nth_cordic sin", false,-1, 15,0);
        tracep->declBit(c+920,"harmonic_generator genblk1[8] nth_cordic data_cossin_valid_out", false,-1);
        tracep->declDouble(c+1133,"harmonic_generator genblk1[8] nth_cordic PI", false,-1);
        tracep->declDouble(c+1135,"harmonic_generator genblk1[8] nth_cordic SCALING_FACTOR_REAL", false,-1);
        tracep->declBus(c+1137,"harmonic_generator genblk1[8] nth_cordic X_INIT", false,-1, 16,0);
        tracep->declBus(c+1138,"harmonic_generator genblk1[8] nth_cordic Y_INIT", false,-1, 16,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+921+i*1,"harmonic_generator genblk1[8] nth_cordic x_pipe", true,(i+0), 16,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+938+i*1,"harmonic_generator genblk1[8] nth_cordic y_pipe", true,(i+0), 16,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBit(c+955+i*1,"harmonic_generator genblk1[8] nth_cordic x_flip_pipe", true,(i+0));}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+972+i*1,"harmonic_generator genblk1[8] nth_cordic total_angle_pipe", true,(i+0), 15,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+989+i*1,"harmonic_generator genblk1[8] nth_cordic desired_angle_pipe", true,(i+0), 15,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBit(c+1006+i*1,"harmonic_generator genblk1[8] nth_cordic valid_pipe", true,(i+0));}}
        tracep->declBus(c+1132,"harmonic_generator genblk1[9] nth_cordic WIDTH", false,-1, 31,0);
        tracep->declBus(c+1132,"harmonic_generator genblk1[9] nth_cordic NUM_ITERATIONS", false,-1, 31,0);
        tracep->declBit(c+1023,"harmonic_generator genblk1[9] nth_cordic clk", false,-1);
        tracep->declBit(c+1024,"harmonic_generator genblk1[9] nth_cordic rst", false,-1);
        tracep->declBit(c+1025,"harmonic_generator genblk1[9] nth_cordic data_angle_valid_in", false,-1);
        tracep->declBus(c+1026,"harmonic_generator genblk1[9] nth_cordic angle", false,-1, 15,0);
        tracep->declBus(c+1027,"harmonic_generator genblk1[9] nth_cordic cos", false,-1, 15,0);
        tracep->declBus(c+1028,"harmonic_generator genblk1[9] nth_cordic sin", false,-1, 15,0);
        tracep->declBit(c+1029,"harmonic_generator genblk1[9] nth_cordic data_cossin_valid_out", false,-1);
        tracep->declDouble(c+1133,"harmonic_generator genblk1[9] nth_cordic PI", false,-1);
        tracep->declDouble(c+1135,"harmonic_generator genblk1[9] nth_cordic SCALING_FACTOR_REAL", false,-1);
        tracep->declBus(c+1137,"harmonic_generator genblk1[9] nth_cordic X_INIT", false,-1, 16,0);
        tracep->declBus(c+1138,"harmonic_generator genblk1[9] nth_cordic Y_INIT", false,-1, 16,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+1030+i*1,"harmonic_generator genblk1[9] nth_cordic x_pipe", true,(i+0), 16,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+1047+i*1,"harmonic_generator genblk1[9] nth_cordic y_pipe", true,(i+0), 16,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBit(c+1064+i*1,"harmonic_generator genblk1[9] nth_cordic x_flip_pipe", true,(i+0));}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+1081+i*1,"harmonic_generator genblk1[9] nth_cordic total_angle_pipe", true,(i+0), 15,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+1098+i*1,"harmonic_generator genblk1[9] nth_cordic desired_angle_pipe", true,(i+0), 15,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBit(c+1115+i*1,"harmonic_generator genblk1[9] nth_cordic valid_pipe", true,(i+0));}}
    }
}

void Vtop::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtop::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtop::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->rst));
        tracep->fullBit(oldp+3,(vlTOPp->data_valid_in));
        tracep->fullSData(oldp+4,(vlTOPp->angle),16);
        tracep->fullWData(oldp+5,(vlTOPp->cos_arr_out),160);
        tracep->fullWData(oldp+10,(vlTOPp->sin_arr_out),160);
        tracep->fullBit(oldp+15,(vlTOPp->data_valid_out));
        tracep->fullBit(oldp+16,(vlTOPp->harmonic_generator__DOT__clk));
        tracep->fullBit(oldp+17,(vlTOPp->harmonic_generator__DOT__rst));
        tracep->fullBit(oldp+18,(vlTOPp->harmonic_generator__DOT__data_valid_in));
        tracep->fullSData(oldp+19,(vlTOPp->harmonic_generator__DOT__angle),16);
        tracep->fullWData(oldp+20,(vlTOPp->harmonic_generator__DOT__cos_arr_out),160);
        tracep->fullWData(oldp+25,(vlTOPp->harmonic_generator__DOT__sin_arr_out),160);
        tracep->fullBit(oldp+30,(vlTOPp->harmonic_generator__DOT__data_valid_out));
        tracep->fullSData(oldp+31,(vlTOPp->harmonic_generator__DOT__valid_arr),10);
        tracep->fullSData(oldp+32,(vlTOPp->harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__angle_n),16);
        tracep->fullSData(oldp+33,(vlTOPp->harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__angle_n),16);
        tracep->fullSData(oldp+34,(vlTOPp->harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__angle_n),16);
        tracep->fullSData(oldp+35,(vlTOPp->harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__angle_n),16);
        tracep->fullSData(oldp+36,(vlTOPp->harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__angle_n),16);
        tracep->fullSData(oldp+37,(vlTOPp->harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__angle_n),16);
        tracep->fullSData(oldp+38,(vlTOPp->harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__angle_n),16);
        tracep->fullSData(oldp+39,(vlTOPp->harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__angle_n),16);
        tracep->fullSData(oldp+40,(vlTOPp->harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__angle_n),16);
        tracep->fullSData(oldp+41,(vlTOPp->harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__angle_n),16);
        tracep->fullBit(oldp+42,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.clk));
        tracep->fullBit(oldp+43,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.rst));
        tracep->fullBit(oldp+44,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.data_angle_valid_in));
        tracep->fullSData(oldp+45,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.angle),16);
        tracep->fullSData(oldp+46,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.cos),16);
        tracep->fullSData(oldp+47,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.sin),16);
        tracep->fullBit(oldp+48,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.data_cossin_valid_out));
        tracep->fullIData(oldp+49,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_pipe[0]),17);
        tracep->fullIData(oldp+50,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_pipe[1]),17);
        tracep->fullIData(oldp+51,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_pipe[2]),17);
        tracep->fullIData(oldp+52,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_pipe[3]),17);
        tracep->fullIData(oldp+53,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_pipe[4]),17);
        tracep->fullIData(oldp+54,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_pipe[5]),17);
        tracep->fullIData(oldp+55,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_pipe[6]),17);
        tracep->fullIData(oldp+56,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_pipe[7]),17);
        tracep->fullIData(oldp+57,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_pipe[8]),17);
        tracep->fullIData(oldp+58,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_pipe[9]),17);
        tracep->fullIData(oldp+59,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_pipe[10]),17);
        tracep->fullIData(oldp+60,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_pipe[11]),17);
        tracep->fullIData(oldp+61,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_pipe[12]),17);
        tracep->fullIData(oldp+62,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_pipe[13]),17);
        tracep->fullIData(oldp+63,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_pipe[14]),17);
        tracep->fullIData(oldp+64,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_pipe[15]),17);
        tracep->fullIData(oldp+65,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_pipe[16]),17);
        tracep->fullIData(oldp+66,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.y_pipe[0]),17);
        tracep->fullIData(oldp+67,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.y_pipe[1]),17);
        tracep->fullIData(oldp+68,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.y_pipe[2]),17);
        tracep->fullIData(oldp+69,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.y_pipe[3]),17);
        tracep->fullIData(oldp+70,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.y_pipe[4]),17);
        tracep->fullIData(oldp+71,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.y_pipe[5]),17);
        tracep->fullIData(oldp+72,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.y_pipe[6]),17);
        tracep->fullIData(oldp+73,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.y_pipe[7]),17);
        tracep->fullIData(oldp+74,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.y_pipe[8]),17);
        tracep->fullIData(oldp+75,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.y_pipe[9]),17);
        tracep->fullIData(oldp+76,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.y_pipe[10]),17);
        tracep->fullIData(oldp+77,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.y_pipe[11]),17);
        tracep->fullIData(oldp+78,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.y_pipe[12]),17);
        tracep->fullIData(oldp+79,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.y_pipe[13]),17);
        tracep->fullIData(oldp+80,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.y_pipe[14]),17);
        tracep->fullIData(oldp+81,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.y_pipe[15]),17);
        tracep->fullIData(oldp+82,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.y_pipe[16]),17);
        tracep->fullBit(oldp+83,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_flip_pipe[0]));
        tracep->fullBit(oldp+84,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_flip_pipe[1]));
        tracep->fullBit(oldp+85,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_flip_pipe[2]));
        tracep->fullBit(oldp+86,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_flip_pipe[3]));
        tracep->fullBit(oldp+87,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_flip_pipe[4]));
        tracep->fullBit(oldp+88,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_flip_pipe[5]));
        tracep->fullBit(oldp+89,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_flip_pipe[6]));
        tracep->fullBit(oldp+90,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_flip_pipe[7]));
        tracep->fullBit(oldp+91,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_flip_pipe[8]));
        tracep->fullBit(oldp+92,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_flip_pipe[9]));
        tracep->fullBit(oldp+93,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_flip_pipe[10]));
        tracep->fullBit(oldp+94,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_flip_pipe[11]));
        tracep->fullBit(oldp+95,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_flip_pipe[12]));
        tracep->fullBit(oldp+96,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_flip_pipe[13]));
        tracep->fullBit(oldp+97,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_flip_pipe[14]));
        tracep->fullBit(oldp+98,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_flip_pipe[15]));
        tracep->fullBit(oldp+99,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_flip_pipe[16]));
        tracep->fullSData(oldp+100,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.total_angle_pipe[0]),16);
        tracep->fullSData(oldp+101,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.total_angle_pipe[1]),16);
        tracep->fullSData(oldp+102,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.total_angle_pipe[2]),16);
        tracep->fullSData(oldp+103,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.total_angle_pipe[3]),16);
        tracep->fullSData(oldp+104,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.total_angle_pipe[4]),16);
        tracep->fullSData(oldp+105,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.total_angle_pipe[5]),16);
        tracep->fullSData(oldp+106,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.total_angle_pipe[6]),16);
        tracep->fullSData(oldp+107,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.total_angle_pipe[7]),16);
        tracep->fullSData(oldp+108,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.total_angle_pipe[8]),16);
        tracep->fullSData(oldp+109,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.total_angle_pipe[9]),16);
        tracep->fullSData(oldp+110,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.total_angle_pipe[10]),16);
        tracep->fullSData(oldp+111,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.total_angle_pipe[11]),16);
        tracep->fullSData(oldp+112,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.total_angle_pipe[12]),16);
        tracep->fullSData(oldp+113,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.total_angle_pipe[13]),16);
        tracep->fullSData(oldp+114,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.total_angle_pipe[14]),16);
        tracep->fullSData(oldp+115,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.total_angle_pipe[15]),16);
        tracep->fullSData(oldp+116,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.total_angle_pipe[16]),16);
        tracep->fullSData(oldp+117,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe[0]),16);
        tracep->fullSData(oldp+118,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe[1]),16);
        tracep->fullSData(oldp+119,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe[2]),16);
        tracep->fullSData(oldp+120,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe[3]),16);
        tracep->fullSData(oldp+121,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe[4]),16);
        tracep->fullSData(oldp+122,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe[5]),16);
        tracep->fullSData(oldp+123,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe[6]),16);
        tracep->fullSData(oldp+124,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe[7]),16);
        tracep->fullSData(oldp+125,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe[8]),16);
        tracep->fullSData(oldp+126,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe[9]),16);
        tracep->fullSData(oldp+127,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe[10]),16);
        tracep->fullSData(oldp+128,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe[11]),16);
        tracep->fullSData(oldp+129,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe[12]),16);
        tracep->fullSData(oldp+130,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe[13]),16);
        tracep->fullSData(oldp+131,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe[14]),16);
        tracep->fullSData(oldp+132,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe[15]),16);
        tracep->fullSData(oldp+133,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe[16]),16);
        tracep->fullBit(oldp+134,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.valid_pipe[0]));
        tracep->fullBit(oldp+135,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.valid_pipe[1]));
        tracep->fullBit(oldp+136,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.valid_pipe[2]));
        tracep->fullBit(oldp+137,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.valid_pipe[3]));
        tracep->fullBit(oldp+138,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.valid_pipe[4]));
        tracep->fullBit(oldp+139,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.valid_pipe[5]));
        tracep->fullBit(oldp+140,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.valid_pipe[6]));
        tracep->fullBit(oldp+141,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.valid_pipe[7]));
        tracep->fullBit(oldp+142,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.valid_pipe[8]));
        tracep->fullBit(oldp+143,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.valid_pipe[9]));
        tracep->fullBit(oldp+144,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.valid_pipe[10]));
        tracep->fullBit(oldp+145,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.valid_pipe[11]));
        tracep->fullBit(oldp+146,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.valid_pipe[12]));
        tracep->fullBit(oldp+147,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.valid_pipe[13]));
        tracep->fullBit(oldp+148,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.valid_pipe[14]));
        tracep->fullBit(oldp+149,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.valid_pipe[15]));
        tracep->fullBit(oldp+150,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.valid_pipe[16]));
        tracep->fullBit(oldp+151,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.clk));
        tracep->fullBit(oldp+152,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.rst));
        tracep->fullBit(oldp+153,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.data_angle_valid_in));
        tracep->fullSData(oldp+154,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.angle),16);
        tracep->fullSData(oldp+155,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.cos),16);
        tracep->fullSData(oldp+156,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.sin),16);
        tracep->fullBit(oldp+157,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.data_cossin_valid_out));
        tracep->fullIData(oldp+158,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_pipe[0]),17);
        tracep->fullIData(oldp+159,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_pipe[1]),17);
        tracep->fullIData(oldp+160,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_pipe[2]),17);
        tracep->fullIData(oldp+161,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_pipe[3]),17);
        tracep->fullIData(oldp+162,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_pipe[4]),17);
        tracep->fullIData(oldp+163,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_pipe[5]),17);
        tracep->fullIData(oldp+164,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_pipe[6]),17);
        tracep->fullIData(oldp+165,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_pipe[7]),17);
        tracep->fullIData(oldp+166,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_pipe[8]),17);
        tracep->fullIData(oldp+167,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_pipe[9]),17);
        tracep->fullIData(oldp+168,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_pipe[10]),17);
        tracep->fullIData(oldp+169,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_pipe[11]),17);
        tracep->fullIData(oldp+170,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_pipe[12]),17);
        tracep->fullIData(oldp+171,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_pipe[13]),17);
        tracep->fullIData(oldp+172,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_pipe[14]),17);
        tracep->fullIData(oldp+173,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_pipe[15]),17);
        tracep->fullIData(oldp+174,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_pipe[16]),17);
        tracep->fullIData(oldp+175,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.y_pipe[0]),17);
        tracep->fullIData(oldp+176,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.y_pipe[1]),17);
        tracep->fullIData(oldp+177,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.y_pipe[2]),17);
        tracep->fullIData(oldp+178,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.y_pipe[3]),17);
        tracep->fullIData(oldp+179,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.y_pipe[4]),17);
        tracep->fullIData(oldp+180,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.y_pipe[5]),17);
        tracep->fullIData(oldp+181,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.y_pipe[6]),17);
        tracep->fullIData(oldp+182,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.y_pipe[7]),17);
        tracep->fullIData(oldp+183,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.y_pipe[8]),17);
        tracep->fullIData(oldp+184,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.y_pipe[9]),17);
        tracep->fullIData(oldp+185,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.y_pipe[10]),17);
        tracep->fullIData(oldp+186,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.y_pipe[11]),17);
        tracep->fullIData(oldp+187,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.y_pipe[12]),17);
        tracep->fullIData(oldp+188,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.y_pipe[13]),17);
        tracep->fullIData(oldp+189,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.y_pipe[14]),17);
        tracep->fullIData(oldp+190,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.y_pipe[15]),17);
        tracep->fullIData(oldp+191,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.y_pipe[16]),17);
        tracep->fullBit(oldp+192,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_flip_pipe[0]));
        tracep->fullBit(oldp+193,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_flip_pipe[1]));
        tracep->fullBit(oldp+194,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_flip_pipe[2]));
        tracep->fullBit(oldp+195,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_flip_pipe[3]));
        tracep->fullBit(oldp+196,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_flip_pipe[4]));
        tracep->fullBit(oldp+197,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_flip_pipe[5]));
        tracep->fullBit(oldp+198,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_flip_pipe[6]));
        tracep->fullBit(oldp+199,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_flip_pipe[7]));
        tracep->fullBit(oldp+200,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_flip_pipe[8]));
        tracep->fullBit(oldp+201,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_flip_pipe[9]));
        tracep->fullBit(oldp+202,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_flip_pipe[10]));
        tracep->fullBit(oldp+203,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_flip_pipe[11]));
        tracep->fullBit(oldp+204,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_flip_pipe[12]));
        tracep->fullBit(oldp+205,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_flip_pipe[13]));
        tracep->fullBit(oldp+206,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_flip_pipe[14]));
        tracep->fullBit(oldp+207,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_flip_pipe[15]));
        tracep->fullBit(oldp+208,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_flip_pipe[16]));
        tracep->fullSData(oldp+209,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.total_angle_pipe[0]),16);
        tracep->fullSData(oldp+210,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.total_angle_pipe[1]),16);
        tracep->fullSData(oldp+211,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.total_angle_pipe[2]),16);
        tracep->fullSData(oldp+212,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.total_angle_pipe[3]),16);
        tracep->fullSData(oldp+213,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.total_angle_pipe[4]),16);
        tracep->fullSData(oldp+214,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.total_angle_pipe[5]),16);
        tracep->fullSData(oldp+215,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.total_angle_pipe[6]),16);
        tracep->fullSData(oldp+216,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.total_angle_pipe[7]),16);
        tracep->fullSData(oldp+217,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.total_angle_pipe[8]),16);
        tracep->fullSData(oldp+218,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.total_angle_pipe[9]),16);
        tracep->fullSData(oldp+219,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.total_angle_pipe[10]),16);
        tracep->fullSData(oldp+220,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.total_angle_pipe[11]),16);
        tracep->fullSData(oldp+221,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.total_angle_pipe[12]),16);
        tracep->fullSData(oldp+222,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.total_angle_pipe[13]),16);
        tracep->fullSData(oldp+223,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.total_angle_pipe[14]),16);
        tracep->fullSData(oldp+224,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.total_angle_pipe[15]),16);
        tracep->fullSData(oldp+225,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.total_angle_pipe[16]),16);
        tracep->fullSData(oldp+226,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe[0]),16);
        tracep->fullSData(oldp+227,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe[1]),16);
        tracep->fullSData(oldp+228,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe[2]),16);
        tracep->fullSData(oldp+229,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe[3]),16);
        tracep->fullSData(oldp+230,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe[4]),16);
        tracep->fullSData(oldp+231,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe[5]),16);
        tracep->fullSData(oldp+232,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe[6]),16);
        tracep->fullSData(oldp+233,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe[7]),16);
        tracep->fullSData(oldp+234,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe[8]),16);
        tracep->fullSData(oldp+235,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe[9]),16);
        tracep->fullSData(oldp+236,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe[10]),16);
        tracep->fullSData(oldp+237,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe[11]),16);
        tracep->fullSData(oldp+238,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe[12]),16);
        tracep->fullSData(oldp+239,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe[13]),16);
        tracep->fullSData(oldp+240,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe[14]),16);
        tracep->fullSData(oldp+241,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe[15]),16);
        tracep->fullSData(oldp+242,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe[16]),16);
        tracep->fullBit(oldp+243,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.valid_pipe[0]));
        tracep->fullBit(oldp+244,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.valid_pipe[1]));
        tracep->fullBit(oldp+245,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.valid_pipe[2]));
        tracep->fullBit(oldp+246,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.valid_pipe[3]));
        tracep->fullBit(oldp+247,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.valid_pipe[4]));
        tracep->fullBit(oldp+248,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.valid_pipe[5]));
        tracep->fullBit(oldp+249,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.valid_pipe[6]));
        tracep->fullBit(oldp+250,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.valid_pipe[7]));
        tracep->fullBit(oldp+251,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.valid_pipe[8]));
        tracep->fullBit(oldp+252,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.valid_pipe[9]));
        tracep->fullBit(oldp+253,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.valid_pipe[10]));
        tracep->fullBit(oldp+254,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.valid_pipe[11]));
        tracep->fullBit(oldp+255,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.valid_pipe[12]));
        tracep->fullBit(oldp+256,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.valid_pipe[13]));
        tracep->fullBit(oldp+257,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.valid_pipe[14]));
        tracep->fullBit(oldp+258,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.valid_pipe[15]));
        tracep->fullBit(oldp+259,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.valid_pipe[16]));
        tracep->fullBit(oldp+260,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.clk));
        tracep->fullBit(oldp+261,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.rst));
        tracep->fullBit(oldp+262,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.data_angle_valid_in));
        tracep->fullSData(oldp+263,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.angle),16);
        tracep->fullSData(oldp+264,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.cos),16);
        tracep->fullSData(oldp+265,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.sin),16);
        tracep->fullBit(oldp+266,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.data_cossin_valid_out));
        tracep->fullIData(oldp+267,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_pipe[0]),17);
        tracep->fullIData(oldp+268,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_pipe[1]),17);
        tracep->fullIData(oldp+269,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_pipe[2]),17);
        tracep->fullIData(oldp+270,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_pipe[3]),17);
        tracep->fullIData(oldp+271,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_pipe[4]),17);
        tracep->fullIData(oldp+272,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_pipe[5]),17);
        tracep->fullIData(oldp+273,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_pipe[6]),17);
        tracep->fullIData(oldp+274,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_pipe[7]),17);
        tracep->fullIData(oldp+275,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_pipe[8]),17);
        tracep->fullIData(oldp+276,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_pipe[9]),17);
        tracep->fullIData(oldp+277,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_pipe[10]),17);
        tracep->fullIData(oldp+278,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_pipe[11]),17);
        tracep->fullIData(oldp+279,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_pipe[12]),17);
        tracep->fullIData(oldp+280,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_pipe[13]),17);
        tracep->fullIData(oldp+281,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_pipe[14]),17);
        tracep->fullIData(oldp+282,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_pipe[15]),17);
        tracep->fullIData(oldp+283,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_pipe[16]),17);
        tracep->fullIData(oldp+284,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.y_pipe[0]),17);
        tracep->fullIData(oldp+285,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.y_pipe[1]),17);
        tracep->fullIData(oldp+286,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.y_pipe[2]),17);
        tracep->fullIData(oldp+287,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.y_pipe[3]),17);
        tracep->fullIData(oldp+288,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.y_pipe[4]),17);
        tracep->fullIData(oldp+289,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.y_pipe[5]),17);
        tracep->fullIData(oldp+290,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.y_pipe[6]),17);
        tracep->fullIData(oldp+291,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.y_pipe[7]),17);
        tracep->fullIData(oldp+292,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.y_pipe[8]),17);
        tracep->fullIData(oldp+293,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.y_pipe[9]),17);
        tracep->fullIData(oldp+294,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.y_pipe[10]),17);
        tracep->fullIData(oldp+295,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.y_pipe[11]),17);
        tracep->fullIData(oldp+296,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.y_pipe[12]),17);
        tracep->fullIData(oldp+297,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.y_pipe[13]),17);
        tracep->fullIData(oldp+298,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.y_pipe[14]),17);
        tracep->fullIData(oldp+299,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.y_pipe[15]),17);
        tracep->fullIData(oldp+300,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.y_pipe[16]),17);
        tracep->fullBit(oldp+301,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_flip_pipe[0]));
        tracep->fullBit(oldp+302,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_flip_pipe[1]));
        tracep->fullBit(oldp+303,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_flip_pipe[2]));
        tracep->fullBit(oldp+304,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_flip_pipe[3]));
        tracep->fullBit(oldp+305,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_flip_pipe[4]));
        tracep->fullBit(oldp+306,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_flip_pipe[5]));
        tracep->fullBit(oldp+307,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_flip_pipe[6]));
        tracep->fullBit(oldp+308,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_flip_pipe[7]));
        tracep->fullBit(oldp+309,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_flip_pipe[8]));
        tracep->fullBit(oldp+310,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_flip_pipe[9]));
        tracep->fullBit(oldp+311,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_flip_pipe[10]));
        tracep->fullBit(oldp+312,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_flip_pipe[11]));
        tracep->fullBit(oldp+313,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_flip_pipe[12]));
        tracep->fullBit(oldp+314,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_flip_pipe[13]));
        tracep->fullBit(oldp+315,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_flip_pipe[14]));
        tracep->fullBit(oldp+316,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_flip_pipe[15]));
        tracep->fullBit(oldp+317,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_flip_pipe[16]));
        tracep->fullSData(oldp+318,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.total_angle_pipe[0]),16);
        tracep->fullSData(oldp+319,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.total_angle_pipe[1]),16);
        tracep->fullSData(oldp+320,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.total_angle_pipe[2]),16);
        tracep->fullSData(oldp+321,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.total_angle_pipe[3]),16);
        tracep->fullSData(oldp+322,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.total_angle_pipe[4]),16);
        tracep->fullSData(oldp+323,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.total_angle_pipe[5]),16);
        tracep->fullSData(oldp+324,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.total_angle_pipe[6]),16);
        tracep->fullSData(oldp+325,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.total_angle_pipe[7]),16);
        tracep->fullSData(oldp+326,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.total_angle_pipe[8]),16);
        tracep->fullSData(oldp+327,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.total_angle_pipe[9]),16);
        tracep->fullSData(oldp+328,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.total_angle_pipe[10]),16);
        tracep->fullSData(oldp+329,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.total_angle_pipe[11]),16);
        tracep->fullSData(oldp+330,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.total_angle_pipe[12]),16);
        tracep->fullSData(oldp+331,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.total_angle_pipe[13]),16);
        tracep->fullSData(oldp+332,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.total_angle_pipe[14]),16);
        tracep->fullSData(oldp+333,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.total_angle_pipe[15]),16);
        tracep->fullSData(oldp+334,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.total_angle_pipe[16]),16);
        tracep->fullSData(oldp+335,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe[0]),16);
        tracep->fullSData(oldp+336,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe[1]),16);
        tracep->fullSData(oldp+337,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe[2]),16);
        tracep->fullSData(oldp+338,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe[3]),16);
        tracep->fullSData(oldp+339,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe[4]),16);
        tracep->fullSData(oldp+340,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe[5]),16);
        tracep->fullSData(oldp+341,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe[6]),16);
        tracep->fullSData(oldp+342,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe[7]),16);
        tracep->fullSData(oldp+343,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe[8]),16);
        tracep->fullSData(oldp+344,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe[9]),16);
        tracep->fullSData(oldp+345,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe[10]),16);
        tracep->fullSData(oldp+346,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe[11]),16);
        tracep->fullSData(oldp+347,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe[12]),16);
        tracep->fullSData(oldp+348,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe[13]),16);
        tracep->fullSData(oldp+349,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe[14]),16);
        tracep->fullSData(oldp+350,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe[15]),16);
        tracep->fullSData(oldp+351,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe[16]),16);
        tracep->fullBit(oldp+352,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.valid_pipe[0]));
        tracep->fullBit(oldp+353,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.valid_pipe[1]));
        tracep->fullBit(oldp+354,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.valid_pipe[2]));
        tracep->fullBit(oldp+355,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.valid_pipe[3]));
        tracep->fullBit(oldp+356,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.valid_pipe[4]));
        tracep->fullBit(oldp+357,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.valid_pipe[5]));
        tracep->fullBit(oldp+358,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.valid_pipe[6]));
        tracep->fullBit(oldp+359,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.valid_pipe[7]));
        tracep->fullBit(oldp+360,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.valid_pipe[8]));
        tracep->fullBit(oldp+361,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.valid_pipe[9]));
        tracep->fullBit(oldp+362,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.valid_pipe[10]));
        tracep->fullBit(oldp+363,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.valid_pipe[11]));
        tracep->fullBit(oldp+364,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.valid_pipe[12]));
        tracep->fullBit(oldp+365,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.valid_pipe[13]));
        tracep->fullBit(oldp+366,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.valid_pipe[14]));
        tracep->fullBit(oldp+367,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.valid_pipe[15]));
        tracep->fullBit(oldp+368,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.valid_pipe[16]));
        tracep->fullBit(oldp+369,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.clk));
        tracep->fullBit(oldp+370,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.rst));
        tracep->fullBit(oldp+371,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.data_angle_valid_in));
        tracep->fullSData(oldp+372,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.angle),16);
        tracep->fullSData(oldp+373,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.cos),16);
        tracep->fullSData(oldp+374,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.sin),16);
        tracep->fullBit(oldp+375,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.data_cossin_valid_out));
        tracep->fullIData(oldp+376,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_pipe[0]),17);
        tracep->fullIData(oldp+377,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_pipe[1]),17);
        tracep->fullIData(oldp+378,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_pipe[2]),17);
        tracep->fullIData(oldp+379,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_pipe[3]),17);
        tracep->fullIData(oldp+380,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_pipe[4]),17);
        tracep->fullIData(oldp+381,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_pipe[5]),17);
        tracep->fullIData(oldp+382,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_pipe[6]),17);
        tracep->fullIData(oldp+383,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_pipe[7]),17);
        tracep->fullIData(oldp+384,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_pipe[8]),17);
        tracep->fullIData(oldp+385,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_pipe[9]),17);
        tracep->fullIData(oldp+386,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_pipe[10]),17);
        tracep->fullIData(oldp+387,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_pipe[11]),17);
        tracep->fullIData(oldp+388,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_pipe[12]),17);
        tracep->fullIData(oldp+389,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_pipe[13]),17);
        tracep->fullIData(oldp+390,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_pipe[14]),17);
        tracep->fullIData(oldp+391,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_pipe[15]),17);
        tracep->fullIData(oldp+392,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_pipe[16]),17);
        tracep->fullIData(oldp+393,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.y_pipe[0]),17);
        tracep->fullIData(oldp+394,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.y_pipe[1]),17);
        tracep->fullIData(oldp+395,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.y_pipe[2]),17);
        tracep->fullIData(oldp+396,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.y_pipe[3]),17);
        tracep->fullIData(oldp+397,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.y_pipe[4]),17);
        tracep->fullIData(oldp+398,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.y_pipe[5]),17);
        tracep->fullIData(oldp+399,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.y_pipe[6]),17);
        tracep->fullIData(oldp+400,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.y_pipe[7]),17);
        tracep->fullIData(oldp+401,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.y_pipe[8]),17);
        tracep->fullIData(oldp+402,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.y_pipe[9]),17);
        tracep->fullIData(oldp+403,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.y_pipe[10]),17);
        tracep->fullIData(oldp+404,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.y_pipe[11]),17);
        tracep->fullIData(oldp+405,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.y_pipe[12]),17);
        tracep->fullIData(oldp+406,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.y_pipe[13]),17);
        tracep->fullIData(oldp+407,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.y_pipe[14]),17);
        tracep->fullIData(oldp+408,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.y_pipe[15]),17);
        tracep->fullIData(oldp+409,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.y_pipe[16]),17);
        tracep->fullBit(oldp+410,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_flip_pipe[0]));
        tracep->fullBit(oldp+411,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_flip_pipe[1]));
        tracep->fullBit(oldp+412,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_flip_pipe[2]));
        tracep->fullBit(oldp+413,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_flip_pipe[3]));
        tracep->fullBit(oldp+414,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_flip_pipe[4]));
        tracep->fullBit(oldp+415,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_flip_pipe[5]));
        tracep->fullBit(oldp+416,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_flip_pipe[6]));
        tracep->fullBit(oldp+417,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_flip_pipe[7]));
        tracep->fullBit(oldp+418,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_flip_pipe[8]));
        tracep->fullBit(oldp+419,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_flip_pipe[9]));
        tracep->fullBit(oldp+420,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_flip_pipe[10]));
        tracep->fullBit(oldp+421,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_flip_pipe[11]));
        tracep->fullBit(oldp+422,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_flip_pipe[12]));
        tracep->fullBit(oldp+423,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_flip_pipe[13]));
        tracep->fullBit(oldp+424,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_flip_pipe[14]));
        tracep->fullBit(oldp+425,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_flip_pipe[15]));
        tracep->fullBit(oldp+426,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_flip_pipe[16]));
        tracep->fullSData(oldp+427,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.total_angle_pipe[0]),16);
        tracep->fullSData(oldp+428,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.total_angle_pipe[1]),16);
        tracep->fullSData(oldp+429,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.total_angle_pipe[2]),16);
        tracep->fullSData(oldp+430,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.total_angle_pipe[3]),16);
        tracep->fullSData(oldp+431,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.total_angle_pipe[4]),16);
        tracep->fullSData(oldp+432,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.total_angle_pipe[5]),16);
        tracep->fullSData(oldp+433,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.total_angle_pipe[6]),16);
        tracep->fullSData(oldp+434,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.total_angle_pipe[7]),16);
        tracep->fullSData(oldp+435,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.total_angle_pipe[8]),16);
        tracep->fullSData(oldp+436,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.total_angle_pipe[9]),16);
        tracep->fullSData(oldp+437,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.total_angle_pipe[10]),16);
        tracep->fullSData(oldp+438,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.total_angle_pipe[11]),16);
        tracep->fullSData(oldp+439,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.total_angle_pipe[12]),16);
        tracep->fullSData(oldp+440,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.total_angle_pipe[13]),16);
        tracep->fullSData(oldp+441,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.total_angle_pipe[14]),16);
        tracep->fullSData(oldp+442,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.total_angle_pipe[15]),16);
        tracep->fullSData(oldp+443,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.total_angle_pipe[16]),16);
        tracep->fullSData(oldp+444,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe[0]),16);
        tracep->fullSData(oldp+445,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe[1]),16);
        tracep->fullSData(oldp+446,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe[2]),16);
        tracep->fullSData(oldp+447,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe[3]),16);
        tracep->fullSData(oldp+448,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe[4]),16);
        tracep->fullSData(oldp+449,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe[5]),16);
        tracep->fullSData(oldp+450,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe[6]),16);
        tracep->fullSData(oldp+451,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe[7]),16);
        tracep->fullSData(oldp+452,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe[8]),16);
        tracep->fullSData(oldp+453,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe[9]),16);
        tracep->fullSData(oldp+454,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe[10]),16);
        tracep->fullSData(oldp+455,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe[11]),16);
        tracep->fullSData(oldp+456,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe[12]),16);
        tracep->fullSData(oldp+457,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe[13]),16);
        tracep->fullSData(oldp+458,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe[14]),16);
        tracep->fullSData(oldp+459,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe[15]),16);
        tracep->fullSData(oldp+460,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe[16]),16);
        tracep->fullBit(oldp+461,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.valid_pipe[0]));
        tracep->fullBit(oldp+462,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.valid_pipe[1]));
        tracep->fullBit(oldp+463,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.valid_pipe[2]));
        tracep->fullBit(oldp+464,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.valid_pipe[3]));
        tracep->fullBit(oldp+465,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.valid_pipe[4]));
        tracep->fullBit(oldp+466,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.valid_pipe[5]));
        tracep->fullBit(oldp+467,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.valid_pipe[6]));
        tracep->fullBit(oldp+468,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.valid_pipe[7]));
        tracep->fullBit(oldp+469,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.valid_pipe[8]));
        tracep->fullBit(oldp+470,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.valid_pipe[9]));
        tracep->fullBit(oldp+471,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.valid_pipe[10]));
        tracep->fullBit(oldp+472,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.valid_pipe[11]));
        tracep->fullBit(oldp+473,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.valid_pipe[12]));
        tracep->fullBit(oldp+474,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.valid_pipe[13]));
        tracep->fullBit(oldp+475,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.valid_pipe[14]));
        tracep->fullBit(oldp+476,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.valid_pipe[15]));
        tracep->fullBit(oldp+477,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.valid_pipe[16]));
        tracep->fullBit(oldp+478,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.clk));
        tracep->fullBit(oldp+479,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.rst));
        tracep->fullBit(oldp+480,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.data_angle_valid_in));
        tracep->fullSData(oldp+481,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.angle),16);
        tracep->fullSData(oldp+482,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.cos),16);
        tracep->fullSData(oldp+483,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.sin),16);
        tracep->fullBit(oldp+484,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.data_cossin_valid_out));
        tracep->fullIData(oldp+485,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_pipe[0]),17);
        tracep->fullIData(oldp+486,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_pipe[1]),17);
        tracep->fullIData(oldp+487,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_pipe[2]),17);
        tracep->fullIData(oldp+488,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_pipe[3]),17);
        tracep->fullIData(oldp+489,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_pipe[4]),17);
        tracep->fullIData(oldp+490,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_pipe[5]),17);
        tracep->fullIData(oldp+491,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_pipe[6]),17);
        tracep->fullIData(oldp+492,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_pipe[7]),17);
        tracep->fullIData(oldp+493,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_pipe[8]),17);
        tracep->fullIData(oldp+494,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_pipe[9]),17);
        tracep->fullIData(oldp+495,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_pipe[10]),17);
        tracep->fullIData(oldp+496,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_pipe[11]),17);
        tracep->fullIData(oldp+497,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_pipe[12]),17);
        tracep->fullIData(oldp+498,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_pipe[13]),17);
        tracep->fullIData(oldp+499,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_pipe[14]),17);
        tracep->fullIData(oldp+500,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_pipe[15]),17);
        tracep->fullIData(oldp+501,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_pipe[16]),17);
        tracep->fullIData(oldp+502,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.y_pipe[0]),17);
        tracep->fullIData(oldp+503,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.y_pipe[1]),17);
        tracep->fullIData(oldp+504,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.y_pipe[2]),17);
        tracep->fullIData(oldp+505,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.y_pipe[3]),17);
        tracep->fullIData(oldp+506,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.y_pipe[4]),17);
        tracep->fullIData(oldp+507,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.y_pipe[5]),17);
        tracep->fullIData(oldp+508,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.y_pipe[6]),17);
        tracep->fullIData(oldp+509,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.y_pipe[7]),17);
        tracep->fullIData(oldp+510,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.y_pipe[8]),17);
        tracep->fullIData(oldp+511,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.y_pipe[9]),17);
        tracep->fullIData(oldp+512,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.y_pipe[10]),17);
        tracep->fullIData(oldp+513,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.y_pipe[11]),17);
        tracep->fullIData(oldp+514,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.y_pipe[12]),17);
        tracep->fullIData(oldp+515,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.y_pipe[13]),17);
        tracep->fullIData(oldp+516,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.y_pipe[14]),17);
        tracep->fullIData(oldp+517,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.y_pipe[15]),17);
        tracep->fullIData(oldp+518,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.y_pipe[16]),17);
        tracep->fullBit(oldp+519,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_flip_pipe[0]));
        tracep->fullBit(oldp+520,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_flip_pipe[1]));
        tracep->fullBit(oldp+521,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_flip_pipe[2]));
        tracep->fullBit(oldp+522,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_flip_pipe[3]));
        tracep->fullBit(oldp+523,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_flip_pipe[4]));
        tracep->fullBit(oldp+524,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_flip_pipe[5]));
        tracep->fullBit(oldp+525,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_flip_pipe[6]));
        tracep->fullBit(oldp+526,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_flip_pipe[7]));
        tracep->fullBit(oldp+527,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_flip_pipe[8]));
        tracep->fullBit(oldp+528,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_flip_pipe[9]));
        tracep->fullBit(oldp+529,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_flip_pipe[10]));
        tracep->fullBit(oldp+530,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_flip_pipe[11]));
        tracep->fullBit(oldp+531,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_flip_pipe[12]));
        tracep->fullBit(oldp+532,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_flip_pipe[13]));
        tracep->fullBit(oldp+533,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_flip_pipe[14]));
        tracep->fullBit(oldp+534,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_flip_pipe[15]));
        tracep->fullBit(oldp+535,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_flip_pipe[16]));
        tracep->fullSData(oldp+536,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.total_angle_pipe[0]),16);
        tracep->fullSData(oldp+537,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.total_angle_pipe[1]),16);
        tracep->fullSData(oldp+538,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.total_angle_pipe[2]),16);
        tracep->fullSData(oldp+539,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.total_angle_pipe[3]),16);
        tracep->fullSData(oldp+540,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.total_angle_pipe[4]),16);
        tracep->fullSData(oldp+541,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.total_angle_pipe[5]),16);
        tracep->fullSData(oldp+542,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.total_angle_pipe[6]),16);
        tracep->fullSData(oldp+543,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.total_angle_pipe[7]),16);
        tracep->fullSData(oldp+544,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.total_angle_pipe[8]),16);
        tracep->fullSData(oldp+545,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.total_angle_pipe[9]),16);
        tracep->fullSData(oldp+546,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.total_angle_pipe[10]),16);
        tracep->fullSData(oldp+547,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.total_angle_pipe[11]),16);
        tracep->fullSData(oldp+548,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.total_angle_pipe[12]),16);
        tracep->fullSData(oldp+549,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.total_angle_pipe[13]),16);
        tracep->fullSData(oldp+550,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.total_angle_pipe[14]),16);
        tracep->fullSData(oldp+551,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.total_angle_pipe[15]),16);
        tracep->fullSData(oldp+552,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.total_angle_pipe[16]),16);
        tracep->fullSData(oldp+553,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe[0]),16);
        tracep->fullSData(oldp+554,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe[1]),16);
        tracep->fullSData(oldp+555,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe[2]),16);
        tracep->fullSData(oldp+556,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe[3]),16);
        tracep->fullSData(oldp+557,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe[4]),16);
        tracep->fullSData(oldp+558,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe[5]),16);
        tracep->fullSData(oldp+559,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe[6]),16);
        tracep->fullSData(oldp+560,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe[7]),16);
        tracep->fullSData(oldp+561,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe[8]),16);
        tracep->fullSData(oldp+562,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe[9]),16);
        tracep->fullSData(oldp+563,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe[10]),16);
        tracep->fullSData(oldp+564,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe[11]),16);
        tracep->fullSData(oldp+565,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe[12]),16);
        tracep->fullSData(oldp+566,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe[13]),16);
        tracep->fullSData(oldp+567,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe[14]),16);
        tracep->fullSData(oldp+568,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe[15]),16);
        tracep->fullSData(oldp+569,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe[16]),16);
        tracep->fullBit(oldp+570,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.valid_pipe[0]));
        tracep->fullBit(oldp+571,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.valid_pipe[1]));
        tracep->fullBit(oldp+572,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.valid_pipe[2]));
        tracep->fullBit(oldp+573,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.valid_pipe[3]));
        tracep->fullBit(oldp+574,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.valid_pipe[4]));
        tracep->fullBit(oldp+575,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.valid_pipe[5]));
        tracep->fullBit(oldp+576,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.valid_pipe[6]));
        tracep->fullBit(oldp+577,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.valid_pipe[7]));
        tracep->fullBit(oldp+578,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.valid_pipe[8]));
        tracep->fullBit(oldp+579,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.valid_pipe[9]));
        tracep->fullBit(oldp+580,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.valid_pipe[10]));
        tracep->fullBit(oldp+581,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.valid_pipe[11]));
        tracep->fullBit(oldp+582,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.valid_pipe[12]));
        tracep->fullBit(oldp+583,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.valid_pipe[13]));
        tracep->fullBit(oldp+584,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.valid_pipe[14]));
        tracep->fullBit(oldp+585,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.valid_pipe[15]));
        tracep->fullBit(oldp+586,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.valid_pipe[16]));
        tracep->fullBit(oldp+587,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.clk));
        tracep->fullBit(oldp+588,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.rst));
        tracep->fullBit(oldp+589,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.data_angle_valid_in));
        tracep->fullSData(oldp+590,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.angle),16);
        tracep->fullSData(oldp+591,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.cos),16);
        tracep->fullSData(oldp+592,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.sin),16);
        tracep->fullBit(oldp+593,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.data_cossin_valid_out));
        tracep->fullIData(oldp+594,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_pipe[0]),17);
        tracep->fullIData(oldp+595,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_pipe[1]),17);
        tracep->fullIData(oldp+596,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_pipe[2]),17);
        tracep->fullIData(oldp+597,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_pipe[3]),17);
        tracep->fullIData(oldp+598,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_pipe[4]),17);
        tracep->fullIData(oldp+599,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_pipe[5]),17);
        tracep->fullIData(oldp+600,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_pipe[6]),17);
        tracep->fullIData(oldp+601,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_pipe[7]),17);
        tracep->fullIData(oldp+602,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_pipe[8]),17);
        tracep->fullIData(oldp+603,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_pipe[9]),17);
        tracep->fullIData(oldp+604,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_pipe[10]),17);
        tracep->fullIData(oldp+605,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_pipe[11]),17);
        tracep->fullIData(oldp+606,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_pipe[12]),17);
        tracep->fullIData(oldp+607,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_pipe[13]),17);
        tracep->fullIData(oldp+608,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_pipe[14]),17);
        tracep->fullIData(oldp+609,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_pipe[15]),17);
        tracep->fullIData(oldp+610,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_pipe[16]),17);
        tracep->fullIData(oldp+611,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.y_pipe[0]),17);
        tracep->fullIData(oldp+612,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.y_pipe[1]),17);
        tracep->fullIData(oldp+613,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.y_pipe[2]),17);
        tracep->fullIData(oldp+614,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.y_pipe[3]),17);
        tracep->fullIData(oldp+615,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.y_pipe[4]),17);
        tracep->fullIData(oldp+616,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.y_pipe[5]),17);
        tracep->fullIData(oldp+617,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.y_pipe[6]),17);
        tracep->fullIData(oldp+618,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.y_pipe[7]),17);
        tracep->fullIData(oldp+619,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.y_pipe[8]),17);
        tracep->fullIData(oldp+620,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.y_pipe[9]),17);
        tracep->fullIData(oldp+621,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.y_pipe[10]),17);
        tracep->fullIData(oldp+622,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.y_pipe[11]),17);
        tracep->fullIData(oldp+623,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.y_pipe[12]),17);
        tracep->fullIData(oldp+624,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.y_pipe[13]),17);
        tracep->fullIData(oldp+625,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.y_pipe[14]),17);
        tracep->fullIData(oldp+626,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.y_pipe[15]),17);
        tracep->fullIData(oldp+627,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.y_pipe[16]),17);
        tracep->fullBit(oldp+628,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_flip_pipe[0]));
        tracep->fullBit(oldp+629,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_flip_pipe[1]));
        tracep->fullBit(oldp+630,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_flip_pipe[2]));
        tracep->fullBit(oldp+631,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_flip_pipe[3]));
        tracep->fullBit(oldp+632,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_flip_pipe[4]));
        tracep->fullBit(oldp+633,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_flip_pipe[5]));
        tracep->fullBit(oldp+634,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_flip_pipe[6]));
        tracep->fullBit(oldp+635,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_flip_pipe[7]));
        tracep->fullBit(oldp+636,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_flip_pipe[8]));
        tracep->fullBit(oldp+637,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_flip_pipe[9]));
        tracep->fullBit(oldp+638,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_flip_pipe[10]));
        tracep->fullBit(oldp+639,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_flip_pipe[11]));
        tracep->fullBit(oldp+640,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_flip_pipe[12]));
        tracep->fullBit(oldp+641,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_flip_pipe[13]));
        tracep->fullBit(oldp+642,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_flip_pipe[14]));
        tracep->fullBit(oldp+643,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_flip_pipe[15]));
        tracep->fullBit(oldp+644,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_flip_pipe[16]));
        tracep->fullSData(oldp+645,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.total_angle_pipe[0]),16);
        tracep->fullSData(oldp+646,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.total_angle_pipe[1]),16);
        tracep->fullSData(oldp+647,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.total_angle_pipe[2]),16);
        tracep->fullSData(oldp+648,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.total_angle_pipe[3]),16);
        tracep->fullSData(oldp+649,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.total_angle_pipe[4]),16);
        tracep->fullSData(oldp+650,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.total_angle_pipe[5]),16);
        tracep->fullSData(oldp+651,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.total_angle_pipe[6]),16);
        tracep->fullSData(oldp+652,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.total_angle_pipe[7]),16);
        tracep->fullSData(oldp+653,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.total_angle_pipe[8]),16);
        tracep->fullSData(oldp+654,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.total_angle_pipe[9]),16);
        tracep->fullSData(oldp+655,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.total_angle_pipe[10]),16);
        tracep->fullSData(oldp+656,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.total_angle_pipe[11]),16);
        tracep->fullSData(oldp+657,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.total_angle_pipe[12]),16);
        tracep->fullSData(oldp+658,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.total_angle_pipe[13]),16);
        tracep->fullSData(oldp+659,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.total_angle_pipe[14]),16);
        tracep->fullSData(oldp+660,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.total_angle_pipe[15]),16);
        tracep->fullSData(oldp+661,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.total_angle_pipe[16]),16);
        tracep->fullSData(oldp+662,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe[0]),16);
        tracep->fullSData(oldp+663,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe[1]),16);
        tracep->fullSData(oldp+664,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe[2]),16);
        tracep->fullSData(oldp+665,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe[3]),16);
        tracep->fullSData(oldp+666,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe[4]),16);
        tracep->fullSData(oldp+667,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe[5]),16);
        tracep->fullSData(oldp+668,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe[6]),16);
        tracep->fullSData(oldp+669,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe[7]),16);
        tracep->fullSData(oldp+670,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe[8]),16);
        tracep->fullSData(oldp+671,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe[9]),16);
        tracep->fullSData(oldp+672,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe[10]),16);
        tracep->fullSData(oldp+673,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe[11]),16);
        tracep->fullSData(oldp+674,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe[12]),16);
        tracep->fullSData(oldp+675,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe[13]),16);
        tracep->fullSData(oldp+676,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe[14]),16);
        tracep->fullSData(oldp+677,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe[15]),16);
        tracep->fullSData(oldp+678,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe[16]),16);
        tracep->fullBit(oldp+679,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.valid_pipe[0]));
        tracep->fullBit(oldp+680,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.valid_pipe[1]));
        tracep->fullBit(oldp+681,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.valid_pipe[2]));
        tracep->fullBit(oldp+682,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.valid_pipe[3]));
        tracep->fullBit(oldp+683,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.valid_pipe[4]));
        tracep->fullBit(oldp+684,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.valid_pipe[5]));
        tracep->fullBit(oldp+685,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.valid_pipe[6]));
        tracep->fullBit(oldp+686,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.valid_pipe[7]));
        tracep->fullBit(oldp+687,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.valid_pipe[8]));
        tracep->fullBit(oldp+688,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.valid_pipe[9]));
        tracep->fullBit(oldp+689,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.valid_pipe[10]));
        tracep->fullBit(oldp+690,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.valid_pipe[11]));
        tracep->fullBit(oldp+691,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.valid_pipe[12]));
        tracep->fullBit(oldp+692,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.valid_pipe[13]));
        tracep->fullBit(oldp+693,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.valid_pipe[14]));
        tracep->fullBit(oldp+694,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.valid_pipe[15]));
        tracep->fullBit(oldp+695,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.valid_pipe[16]));
        tracep->fullBit(oldp+696,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.clk));
        tracep->fullBit(oldp+697,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.rst));
        tracep->fullBit(oldp+698,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.data_angle_valid_in));
        tracep->fullSData(oldp+699,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.angle),16);
        tracep->fullSData(oldp+700,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.cos),16);
        tracep->fullSData(oldp+701,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.sin),16);
        tracep->fullBit(oldp+702,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.data_cossin_valid_out));
        tracep->fullIData(oldp+703,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_pipe[0]),17);
        tracep->fullIData(oldp+704,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_pipe[1]),17);
        tracep->fullIData(oldp+705,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_pipe[2]),17);
        tracep->fullIData(oldp+706,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_pipe[3]),17);
        tracep->fullIData(oldp+707,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_pipe[4]),17);
        tracep->fullIData(oldp+708,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_pipe[5]),17);
        tracep->fullIData(oldp+709,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_pipe[6]),17);
        tracep->fullIData(oldp+710,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_pipe[7]),17);
        tracep->fullIData(oldp+711,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_pipe[8]),17);
        tracep->fullIData(oldp+712,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_pipe[9]),17);
        tracep->fullIData(oldp+713,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_pipe[10]),17);
        tracep->fullIData(oldp+714,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_pipe[11]),17);
        tracep->fullIData(oldp+715,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_pipe[12]),17);
        tracep->fullIData(oldp+716,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_pipe[13]),17);
        tracep->fullIData(oldp+717,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_pipe[14]),17);
        tracep->fullIData(oldp+718,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_pipe[15]),17);
        tracep->fullIData(oldp+719,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_pipe[16]),17);
        tracep->fullIData(oldp+720,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.y_pipe[0]),17);
        tracep->fullIData(oldp+721,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.y_pipe[1]),17);
        tracep->fullIData(oldp+722,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.y_pipe[2]),17);
        tracep->fullIData(oldp+723,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.y_pipe[3]),17);
        tracep->fullIData(oldp+724,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.y_pipe[4]),17);
        tracep->fullIData(oldp+725,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.y_pipe[5]),17);
        tracep->fullIData(oldp+726,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.y_pipe[6]),17);
        tracep->fullIData(oldp+727,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.y_pipe[7]),17);
        tracep->fullIData(oldp+728,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.y_pipe[8]),17);
        tracep->fullIData(oldp+729,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.y_pipe[9]),17);
        tracep->fullIData(oldp+730,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.y_pipe[10]),17);
        tracep->fullIData(oldp+731,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.y_pipe[11]),17);
        tracep->fullIData(oldp+732,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.y_pipe[12]),17);
        tracep->fullIData(oldp+733,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.y_pipe[13]),17);
        tracep->fullIData(oldp+734,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.y_pipe[14]),17);
        tracep->fullIData(oldp+735,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.y_pipe[15]),17);
        tracep->fullIData(oldp+736,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.y_pipe[16]),17);
        tracep->fullBit(oldp+737,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_flip_pipe[0]));
        tracep->fullBit(oldp+738,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_flip_pipe[1]));
        tracep->fullBit(oldp+739,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_flip_pipe[2]));
        tracep->fullBit(oldp+740,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_flip_pipe[3]));
        tracep->fullBit(oldp+741,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_flip_pipe[4]));
        tracep->fullBit(oldp+742,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_flip_pipe[5]));
        tracep->fullBit(oldp+743,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_flip_pipe[6]));
        tracep->fullBit(oldp+744,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_flip_pipe[7]));
        tracep->fullBit(oldp+745,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_flip_pipe[8]));
        tracep->fullBit(oldp+746,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_flip_pipe[9]));
        tracep->fullBit(oldp+747,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_flip_pipe[10]));
        tracep->fullBit(oldp+748,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_flip_pipe[11]));
        tracep->fullBit(oldp+749,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_flip_pipe[12]));
        tracep->fullBit(oldp+750,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_flip_pipe[13]));
        tracep->fullBit(oldp+751,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_flip_pipe[14]));
        tracep->fullBit(oldp+752,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_flip_pipe[15]));
        tracep->fullBit(oldp+753,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_flip_pipe[16]));
        tracep->fullSData(oldp+754,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.total_angle_pipe[0]),16);
        tracep->fullSData(oldp+755,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.total_angle_pipe[1]),16);
        tracep->fullSData(oldp+756,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.total_angle_pipe[2]),16);
        tracep->fullSData(oldp+757,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.total_angle_pipe[3]),16);
        tracep->fullSData(oldp+758,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.total_angle_pipe[4]),16);
        tracep->fullSData(oldp+759,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.total_angle_pipe[5]),16);
        tracep->fullSData(oldp+760,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.total_angle_pipe[6]),16);
        tracep->fullSData(oldp+761,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.total_angle_pipe[7]),16);
        tracep->fullSData(oldp+762,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.total_angle_pipe[8]),16);
        tracep->fullSData(oldp+763,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.total_angle_pipe[9]),16);
        tracep->fullSData(oldp+764,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.total_angle_pipe[10]),16);
        tracep->fullSData(oldp+765,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.total_angle_pipe[11]),16);
        tracep->fullSData(oldp+766,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.total_angle_pipe[12]),16);
        tracep->fullSData(oldp+767,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.total_angle_pipe[13]),16);
        tracep->fullSData(oldp+768,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.total_angle_pipe[14]),16);
        tracep->fullSData(oldp+769,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.total_angle_pipe[15]),16);
        tracep->fullSData(oldp+770,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.total_angle_pipe[16]),16);
        tracep->fullSData(oldp+771,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe[0]),16);
        tracep->fullSData(oldp+772,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe[1]),16);
        tracep->fullSData(oldp+773,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe[2]),16);
        tracep->fullSData(oldp+774,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe[3]),16);
        tracep->fullSData(oldp+775,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe[4]),16);
        tracep->fullSData(oldp+776,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe[5]),16);
        tracep->fullSData(oldp+777,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe[6]),16);
        tracep->fullSData(oldp+778,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe[7]),16);
        tracep->fullSData(oldp+779,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe[8]),16);
        tracep->fullSData(oldp+780,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe[9]),16);
        tracep->fullSData(oldp+781,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe[10]),16);
        tracep->fullSData(oldp+782,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe[11]),16);
        tracep->fullSData(oldp+783,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe[12]),16);
        tracep->fullSData(oldp+784,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe[13]),16);
        tracep->fullSData(oldp+785,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe[14]),16);
        tracep->fullSData(oldp+786,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe[15]),16);
        tracep->fullSData(oldp+787,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe[16]),16);
        tracep->fullBit(oldp+788,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.valid_pipe[0]));
        tracep->fullBit(oldp+789,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.valid_pipe[1]));
        tracep->fullBit(oldp+790,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.valid_pipe[2]));
        tracep->fullBit(oldp+791,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.valid_pipe[3]));
        tracep->fullBit(oldp+792,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.valid_pipe[4]));
        tracep->fullBit(oldp+793,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.valid_pipe[5]));
        tracep->fullBit(oldp+794,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.valid_pipe[6]));
        tracep->fullBit(oldp+795,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.valid_pipe[7]));
        tracep->fullBit(oldp+796,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.valid_pipe[8]));
        tracep->fullBit(oldp+797,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.valid_pipe[9]));
        tracep->fullBit(oldp+798,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.valid_pipe[10]));
        tracep->fullBit(oldp+799,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.valid_pipe[11]));
        tracep->fullBit(oldp+800,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.valid_pipe[12]));
        tracep->fullBit(oldp+801,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.valid_pipe[13]));
        tracep->fullBit(oldp+802,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.valid_pipe[14]));
        tracep->fullBit(oldp+803,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.valid_pipe[15]));
        tracep->fullBit(oldp+804,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.valid_pipe[16]));
        tracep->fullBit(oldp+805,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.clk));
        tracep->fullBit(oldp+806,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.rst));
        tracep->fullBit(oldp+807,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.data_angle_valid_in));
        tracep->fullSData(oldp+808,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.angle),16);
        tracep->fullSData(oldp+809,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.cos),16);
        tracep->fullSData(oldp+810,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.sin),16);
        tracep->fullBit(oldp+811,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.data_cossin_valid_out));
        tracep->fullIData(oldp+812,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_pipe[0]),17);
        tracep->fullIData(oldp+813,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_pipe[1]),17);
        tracep->fullIData(oldp+814,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_pipe[2]),17);
        tracep->fullIData(oldp+815,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_pipe[3]),17);
        tracep->fullIData(oldp+816,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_pipe[4]),17);
        tracep->fullIData(oldp+817,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_pipe[5]),17);
        tracep->fullIData(oldp+818,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_pipe[6]),17);
        tracep->fullIData(oldp+819,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_pipe[7]),17);
        tracep->fullIData(oldp+820,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_pipe[8]),17);
        tracep->fullIData(oldp+821,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_pipe[9]),17);
        tracep->fullIData(oldp+822,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_pipe[10]),17);
        tracep->fullIData(oldp+823,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_pipe[11]),17);
        tracep->fullIData(oldp+824,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_pipe[12]),17);
        tracep->fullIData(oldp+825,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_pipe[13]),17);
        tracep->fullIData(oldp+826,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_pipe[14]),17);
        tracep->fullIData(oldp+827,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_pipe[15]),17);
        tracep->fullIData(oldp+828,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_pipe[16]),17);
        tracep->fullIData(oldp+829,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.y_pipe[0]),17);
        tracep->fullIData(oldp+830,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.y_pipe[1]),17);
        tracep->fullIData(oldp+831,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.y_pipe[2]),17);
        tracep->fullIData(oldp+832,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.y_pipe[3]),17);
        tracep->fullIData(oldp+833,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.y_pipe[4]),17);
        tracep->fullIData(oldp+834,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.y_pipe[5]),17);
        tracep->fullIData(oldp+835,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.y_pipe[6]),17);
        tracep->fullIData(oldp+836,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.y_pipe[7]),17);
        tracep->fullIData(oldp+837,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.y_pipe[8]),17);
        tracep->fullIData(oldp+838,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.y_pipe[9]),17);
        tracep->fullIData(oldp+839,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.y_pipe[10]),17);
        tracep->fullIData(oldp+840,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.y_pipe[11]),17);
        tracep->fullIData(oldp+841,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.y_pipe[12]),17);
        tracep->fullIData(oldp+842,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.y_pipe[13]),17);
        tracep->fullIData(oldp+843,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.y_pipe[14]),17);
        tracep->fullIData(oldp+844,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.y_pipe[15]),17);
        tracep->fullIData(oldp+845,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.y_pipe[16]),17);
        tracep->fullBit(oldp+846,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_flip_pipe[0]));
        tracep->fullBit(oldp+847,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_flip_pipe[1]));
        tracep->fullBit(oldp+848,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_flip_pipe[2]));
        tracep->fullBit(oldp+849,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_flip_pipe[3]));
        tracep->fullBit(oldp+850,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_flip_pipe[4]));
        tracep->fullBit(oldp+851,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_flip_pipe[5]));
        tracep->fullBit(oldp+852,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_flip_pipe[6]));
        tracep->fullBit(oldp+853,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_flip_pipe[7]));
        tracep->fullBit(oldp+854,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_flip_pipe[8]));
        tracep->fullBit(oldp+855,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_flip_pipe[9]));
        tracep->fullBit(oldp+856,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_flip_pipe[10]));
        tracep->fullBit(oldp+857,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_flip_pipe[11]));
        tracep->fullBit(oldp+858,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_flip_pipe[12]));
        tracep->fullBit(oldp+859,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_flip_pipe[13]));
        tracep->fullBit(oldp+860,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_flip_pipe[14]));
        tracep->fullBit(oldp+861,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_flip_pipe[15]));
        tracep->fullBit(oldp+862,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_flip_pipe[16]));
        tracep->fullSData(oldp+863,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.total_angle_pipe[0]),16);
        tracep->fullSData(oldp+864,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.total_angle_pipe[1]),16);
        tracep->fullSData(oldp+865,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.total_angle_pipe[2]),16);
        tracep->fullSData(oldp+866,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.total_angle_pipe[3]),16);
        tracep->fullSData(oldp+867,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.total_angle_pipe[4]),16);
        tracep->fullSData(oldp+868,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.total_angle_pipe[5]),16);
        tracep->fullSData(oldp+869,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.total_angle_pipe[6]),16);
        tracep->fullSData(oldp+870,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.total_angle_pipe[7]),16);
        tracep->fullSData(oldp+871,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.total_angle_pipe[8]),16);
        tracep->fullSData(oldp+872,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.total_angle_pipe[9]),16);
        tracep->fullSData(oldp+873,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.total_angle_pipe[10]),16);
        tracep->fullSData(oldp+874,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.total_angle_pipe[11]),16);
        tracep->fullSData(oldp+875,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.total_angle_pipe[12]),16);
        tracep->fullSData(oldp+876,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.total_angle_pipe[13]),16);
        tracep->fullSData(oldp+877,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.total_angle_pipe[14]),16);
        tracep->fullSData(oldp+878,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.total_angle_pipe[15]),16);
        tracep->fullSData(oldp+879,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.total_angle_pipe[16]),16);
        tracep->fullSData(oldp+880,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe[0]),16);
        tracep->fullSData(oldp+881,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe[1]),16);
        tracep->fullSData(oldp+882,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe[2]),16);
        tracep->fullSData(oldp+883,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe[3]),16);
        tracep->fullSData(oldp+884,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe[4]),16);
        tracep->fullSData(oldp+885,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe[5]),16);
        tracep->fullSData(oldp+886,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe[6]),16);
        tracep->fullSData(oldp+887,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe[7]),16);
        tracep->fullSData(oldp+888,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe[8]),16);
        tracep->fullSData(oldp+889,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe[9]),16);
        tracep->fullSData(oldp+890,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe[10]),16);
        tracep->fullSData(oldp+891,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe[11]),16);
        tracep->fullSData(oldp+892,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe[12]),16);
        tracep->fullSData(oldp+893,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe[13]),16);
        tracep->fullSData(oldp+894,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe[14]),16);
        tracep->fullSData(oldp+895,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe[15]),16);
        tracep->fullSData(oldp+896,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe[16]),16);
        tracep->fullBit(oldp+897,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.valid_pipe[0]));
        tracep->fullBit(oldp+898,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.valid_pipe[1]));
        tracep->fullBit(oldp+899,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.valid_pipe[2]));
        tracep->fullBit(oldp+900,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.valid_pipe[3]));
        tracep->fullBit(oldp+901,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.valid_pipe[4]));
        tracep->fullBit(oldp+902,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.valid_pipe[5]));
        tracep->fullBit(oldp+903,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.valid_pipe[6]));
        tracep->fullBit(oldp+904,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.valid_pipe[7]));
        tracep->fullBit(oldp+905,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.valid_pipe[8]));
        tracep->fullBit(oldp+906,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.valid_pipe[9]));
        tracep->fullBit(oldp+907,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.valid_pipe[10]));
        tracep->fullBit(oldp+908,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.valid_pipe[11]));
        tracep->fullBit(oldp+909,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.valid_pipe[12]));
        tracep->fullBit(oldp+910,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.valid_pipe[13]));
        tracep->fullBit(oldp+911,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.valid_pipe[14]));
        tracep->fullBit(oldp+912,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.valid_pipe[15]));
        tracep->fullBit(oldp+913,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.valid_pipe[16]));
        tracep->fullBit(oldp+914,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.clk));
        tracep->fullBit(oldp+915,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.rst));
        tracep->fullBit(oldp+916,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.data_angle_valid_in));
        tracep->fullSData(oldp+917,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.angle),16);
        tracep->fullSData(oldp+918,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.cos),16);
        tracep->fullSData(oldp+919,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.sin),16);
        tracep->fullBit(oldp+920,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.data_cossin_valid_out));
        tracep->fullIData(oldp+921,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_pipe[0]),17);
        tracep->fullIData(oldp+922,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_pipe[1]),17);
        tracep->fullIData(oldp+923,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_pipe[2]),17);
        tracep->fullIData(oldp+924,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_pipe[3]),17);
        tracep->fullIData(oldp+925,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_pipe[4]),17);
        tracep->fullIData(oldp+926,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_pipe[5]),17);
        tracep->fullIData(oldp+927,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_pipe[6]),17);
        tracep->fullIData(oldp+928,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_pipe[7]),17);
        tracep->fullIData(oldp+929,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_pipe[8]),17);
        tracep->fullIData(oldp+930,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_pipe[9]),17);
        tracep->fullIData(oldp+931,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_pipe[10]),17);
        tracep->fullIData(oldp+932,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_pipe[11]),17);
        tracep->fullIData(oldp+933,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_pipe[12]),17);
        tracep->fullIData(oldp+934,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_pipe[13]),17);
        tracep->fullIData(oldp+935,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_pipe[14]),17);
        tracep->fullIData(oldp+936,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_pipe[15]),17);
        tracep->fullIData(oldp+937,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_pipe[16]),17);
        tracep->fullIData(oldp+938,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.y_pipe[0]),17);
        tracep->fullIData(oldp+939,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.y_pipe[1]),17);
        tracep->fullIData(oldp+940,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.y_pipe[2]),17);
        tracep->fullIData(oldp+941,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.y_pipe[3]),17);
        tracep->fullIData(oldp+942,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.y_pipe[4]),17);
        tracep->fullIData(oldp+943,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.y_pipe[5]),17);
        tracep->fullIData(oldp+944,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.y_pipe[6]),17);
        tracep->fullIData(oldp+945,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.y_pipe[7]),17);
        tracep->fullIData(oldp+946,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.y_pipe[8]),17);
        tracep->fullIData(oldp+947,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.y_pipe[9]),17);
        tracep->fullIData(oldp+948,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.y_pipe[10]),17);
        tracep->fullIData(oldp+949,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.y_pipe[11]),17);
        tracep->fullIData(oldp+950,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.y_pipe[12]),17);
        tracep->fullIData(oldp+951,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.y_pipe[13]),17);
        tracep->fullIData(oldp+952,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.y_pipe[14]),17);
        tracep->fullIData(oldp+953,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.y_pipe[15]),17);
        tracep->fullIData(oldp+954,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.y_pipe[16]),17);
        tracep->fullBit(oldp+955,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_flip_pipe[0]));
        tracep->fullBit(oldp+956,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_flip_pipe[1]));
        tracep->fullBit(oldp+957,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_flip_pipe[2]));
        tracep->fullBit(oldp+958,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_flip_pipe[3]));
        tracep->fullBit(oldp+959,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_flip_pipe[4]));
        tracep->fullBit(oldp+960,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_flip_pipe[5]));
        tracep->fullBit(oldp+961,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_flip_pipe[6]));
        tracep->fullBit(oldp+962,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_flip_pipe[7]));
        tracep->fullBit(oldp+963,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_flip_pipe[8]));
        tracep->fullBit(oldp+964,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_flip_pipe[9]));
        tracep->fullBit(oldp+965,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_flip_pipe[10]));
        tracep->fullBit(oldp+966,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_flip_pipe[11]));
        tracep->fullBit(oldp+967,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_flip_pipe[12]));
        tracep->fullBit(oldp+968,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_flip_pipe[13]));
        tracep->fullBit(oldp+969,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_flip_pipe[14]));
        tracep->fullBit(oldp+970,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_flip_pipe[15]));
        tracep->fullBit(oldp+971,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_flip_pipe[16]));
        tracep->fullSData(oldp+972,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.total_angle_pipe[0]),16);
        tracep->fullSData(oldp+973,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.total_angle_pipe[1]),16);
        tracep->fullSData(oldp+974,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.total_angle_pipe[2]),16);
        tracep->fullSData(oldp+975,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.total_angle_pipe[3]),16);
        tracep->fullSData(oldp+976,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.total_angle_pipe[4]),16);
        tracep->fullSData(oldp+977,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.total_angle_pipe[5]),16);
        tracep->fullSData(oldp+978,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.total_angle_pipe[6]),16);
        tracep->fullSData(oldp+979,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.total_angle_pipe[7]),16);
        tracep->fullSData(oldp+980,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.total_angle_pipe[8]),16);
        tracep->fullSData(oldp+981,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.total_angle_pipe[9]),16);
        tracep->fullSData(oldp+982,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.total_angle_pipe[10]),16);
        tracep->fullSData(oldp+983,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.total_angle_pipe[11]),16);
        tracep->fullSData(oldp+984,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.total_angle_pipe[12]),16);
        tracep->fullSData(oldp+985,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.total_angle_pipe[13]),16);
        tracep->fullSData(oldp+986,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.total_angle_pipe[14]),16);
        tracep->fullSData(oldp+987,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.total_angle_pipe[15]),16);
        tracep->fullSData(oldp+988,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.total_angle_pipe[16]),16);
        tracep->fullSData(oldp+989,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe[0]),16);
        tracep->fullSData(oldp+990,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe[1]),16);
        tracep->fullSData(oldp+991,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe[2]),16);
        tracep->fullSData(oldp+992,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe[3]),16);
        tracep->fullSData(oldp+993,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe[4]),16);
        tracep->fullSData(oldp+994,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe[5]),16);
        tracep->fullSData(oldp+995,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe[6]),16);
        tracep->fullSData(oldp+996,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe[7]),16);
        tracep->fullSData(oldp+997,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe[8]),16);
        tracep->fullSData(oldp+998,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe[9]),16);
        tracep->fullSData(oldp+999,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe[10]),16);
        tracep->fullSData(oldp+1000,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe[11]),16);
        tracep->fullSData(oldp+1001,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe[12]),16);
        tracep->fullSData(oldp+1002,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe[13]),16);
        tracep->fullSData(oldp+1003,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe[14]),16);
        tracep->fullSData(oldp+1004,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe[15]),16);
        tracep->fullSData(oldp+1005,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe[16]),16);
        tracep->fullBit(oldp+1006,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.valid_pipe[0]));
        tracep->fullBit(oldp+1007,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.valid_pipe[1]));
        tracep->fullBit(oldp+1008,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.valid_pipe[2]));
        tracep->fullBit(oldp+1009,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.valid_pipe[3]));
        tracep->fullBit(oldp+1010,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.valid_pipe[4]));
        tracep->fullBit(oldp+1011,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.valid_pipe[5]));
        tracep->fullBit(oldp+1012,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.valid_pipe[6]));
        tracep->fullBit(oldp+1013,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.valid_pipe[7]));
        tracep->fullBit(oldp+1014,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.valid_pipe[8]));
        tracep->fullBit(oldp+1015,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.valid_pipe[9]));
        tracep->fullBit(oldp+1016,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.valid_pipe[10]));
        tracep->fullBit(oldp+1017,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.valid_pipe[11]));
        tracep->fullBit(oldp+1018,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.valid_pipe[12]));
        tracep->fullBit(oldp+1019,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.valid_pipe[13]));
        tracep->fullBit(oldp+1020,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.valid_pipe[14]));
        tracep->fullBit(oldp+1021,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.valid_pipe[15]));
        tracep->fullBit(oldp+1022,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.valid_pipe[16]));
        tracep->fullBit(oldp+1023,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.clk));
        tracep->fullBit(oldp+1024,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.rst));
        tracep->fullBit(oldp+1025,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.data_angle_valid_in));
        tracep->fullSData(oldp+1026,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.angle),16);
        tracep->fullSData(oldp+1027,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.cos),16);
        tracep->fullSData(oldp+1028,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.sin),16);
        tracep->fullBit(oldp+1029,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.data_cossin_valid_out));
        tracep->fullIData(oldp+1030,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_pipe[0]),17);
        tracep->fullIData(oldp+1031,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_pipe[1]),17);
        tracep->fullIData(oldp+1032,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_pipe[2]),17);
        tracep->fullIData(oldp+1033,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_pipe[3]),17);
        tracep->fullIData(oldp+1034,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_pipe[4]),17);
        tracep->fullIData(oldp+1035,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_pipe[5]),17);
        tracep->fullIData(oldp+1036,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_pipe[6]),17);
        tracep->fullIData(oldp+1037,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_pipe[7]),17);
        tracep->fullIData(oldp+1038,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_pipe[8]),17);
        tracep->fullIData(oldp+1039,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_pipe[9]),17);
        tracep->fullIData(oldp+1040,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_pipe[10]),17);
        tracep->fullIData(oldp+1041,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_pipe[11]),17);
        tracep->fullIData(oldp+1042,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_pipe[12]),17);
        tracep->fullIData(oldp+1043,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_pipe[13]),17);
        tracep->fullIData(oldp+1044,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_pipe[14]),17);
        tracep->fullIData(oldp+1045,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_pipe[15]),17);
        tracep->fullIData(oldp+1046,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_pipe[16]),17);
        tracep->fullIData(oldp+1047,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.y_pipe[0]),17);
        tracep->fullIData(oldp+1048,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.y_pipe[1]),17);
        tracep->fullIData(oldp+1049,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.y_pipe[2]),17);
        tracep->fullIData(oldp+1050,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.y_pipe[3]),17);
        tracep->fullIData(oldp+1051,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.y_pipe[4]),17);
        tracep->fullIData(oldp+1052,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.y_pipe[5]),17);
        tracep->fullIData(oldp+1053,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.y_pipe[6]),17);
        tracep->fullIData(oldp+1054,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.y_pipe[7]),17);
        tracep->fullIData(oldp+1055,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.y_pipe[8]),17);
        tracep->fullIData(oldp+1056,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.y_pipe[9]),17);
        tracep->fullIData(oldp+1057,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.y_pipe[10]),17);
        tracep->fullIData(oldp+1058,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.y_pipe[11]),17);
        tracep->fullIData(oldp+1059,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.y_pipe[12]),17);
        tracep->fullIData(oldp+1060,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.y_pipe[13]),17);
        tracep->fullIData(oldp+1061,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.y_pipe[14]),17);
        tracep->fullIData(oldp+1062,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.y_pipe[15]),17);
        tracep->fullIData(oldp+1063,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.y_pipe[16]),17);
        tracep->fullBit(oldp+1064,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_flip_pipe[0]));
        tracep->fullBit(oldp+1065,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_flip_pipe[1]));
        tracep->fullBit(oldp+1066,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_flip_pipe[2]));
        tracep->fullBit(oldp+1067,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_flip_pipe[3]));
        tracep->fullBit(oldp+1068,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_flip_pipe[4]));
        tracep->fullBit(oldp+1069,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_flip_pipe[5]));
        tracep->fullBit(oldp+1070,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_flip_pipe[6]));
        tracep->fullBit(oldp+1071,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_flip_pipe[7]));
        tracep->fullBit(oldp+1072,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_flip_pipe[8]));
        tracep->fullBit(oldp+1073,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_flip_pipe[9]));
        tracep->fullBit(oldp+1074,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_flip_pipe[10]));
        tracep->fullBit(oldp+1075,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_flip_pipe[11]));
        tracep->fullBit(oldp+1076,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_flip_pipe[12]));
        tracep->fullBit(oldp+1077,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_flip_pipe[13]));
        tracep->fullBit(oldp+1078,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_flip_pipe[14]));
        tracep->fullBit(oldp+1079,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_flip_pipe[15]));
        tracep->fullBit(oldp+1080,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_flip_pipe[16]));
        tracep->fullSData(oldp+1081,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.total_angle_pipe[0]),16);
        tracep->fullSData(oldp+1082,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.total_angle_pipe[1]),16);
        tracep->fullSData(oldp+1083,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.total_angle_pipe[2]),16);
        tracep->fullSData(oldp+1084,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.total_angle_pipe[3]),16);
        tracep->fullSData(oldp+1085,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.total_angle_pipe[4]),16);
        tracep->fullSData(oldp+1086,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.total_angle_pipe[5]),16);
        tracep->fullSData(oldp+1087,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.total_angle_pipe[6]),16);
        tracep->fullSData(oldp+1088,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.total_angle_pipe[7]),16);
        tracep->fullSData(oldp+1089,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.total_angle_pipe[8]),16);
        tracep->fullSData(oldp+1090,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.total_angle_pipe[9]),16);
        tracep->fullSData(oldp+1091,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.total_angle_pipe[10]),16);
        tracep->fullSData(oldp+1092,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.total_angle_pipe[11]),16);
        tracep->fullSData(oldp+1093,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.total_angle_pipe[12]),16);
        tracep->fullSData(oldp+1094,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.total_angle_pipe[13]),16);
        tracep->fullSData(oldp+1095,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.total_angle_pipe[14]),16);
        tracep->fullSData(oldp+1096,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.total_angle_pipe[15]),16);
        tracep->fullSData(oldp+1097,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.total_angle_pipe[16]),16);
        tracep->fullSData(oldp+1098,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe[0]),16);
        tracep->fullSData(oldp+1099,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe[1]),16);
        tracep->fullSData(oldp+1100,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe[2]),16);
        tracep->fullSData(oldp+1101,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe[3]),16);
        tracep->fullSData(oldp+1102,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe[4]),16);
        tracep->fullSData(oldp+1103,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe[5]),16);
        tracep->fullSData(oldp+1104,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe[6]),16);
        tracep->fullSData(oldp+1105,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe[7]),16);
        tracep->fullSData(oldp+1106,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe[8]),16);
        tracep->fullSData(oldp+1107,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe[9]),16);
        tracep->fullSData(oldp+1108,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe[10]),16);
        tracep->fullSData(oldp+1109,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe[11]),16);
        tracep->fullSData(oldp+1110,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe[12]),16);
        tracep->fullSData(oldp+1111,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe[13]),16);
        tracep->fullSData(oldp+1112,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe[14]),16);
        tracep->fullSData(oldp+1113,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe[15]),16);
        tracep->fullSData(oldp+1114,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe[16]),16);
        tracep->fullBit(oldp+1115,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.valid_pipe[0]));
        tracep->fullBit(oldp+1116,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.valid_pipe[1]));
        tracep->fullBit(oldp+1117,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.valid_pipe[2]));
        tracep->fullBit(oldp+1118,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.valid_pipe[3]));
        tracep->fullBit(oldp+1119,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.valid_pipe[4]));
        tracep->fullBit(oldp+1120,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.valid_pipe[5]));
        tracep->fullBit(oldp+1121,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.valid_pipe[6]));
        tracep->fullBit(oldp+1122,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.valid_pipe[7]));
        tracep->fullBit(oldp+1123,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.valid_pipe[8]));
        tracep->fullBit(oldp+1124,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.valid_pipe[9]));
        tracep->fullBit(oldp+1125,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.valid_pipe[10]));
        tracep->fullBit(oldp+1126,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.valid_pipe[11]));
        tracep->fullBit(oldp+1127,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.valid_pipe[12]));
        tracep->fullBit(oldp+1128,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.valid_pipe[13]));
        tracep->fullBit(oldp+1129,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.valid_pipe[14]));
        tracep->fullBit(oldp+1130,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.valid_pipe[15]));
        tracep->fullBit(oldp+1131,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.valid_pipe[16]));
        tracep->fullIData(oldp+1132,(0x10U),32);
        tracep->fullDouble(oldp+1133,(3.14159265358979312e+00));
        tracep->fullDouble(oldp+1135,(6.07252935008881445e-01));
        tracep->fullIData(oldp+1137,(0x4dbaU),17);
        tracep->fullIData(oldp+1138,(0U),17);
    }
}
