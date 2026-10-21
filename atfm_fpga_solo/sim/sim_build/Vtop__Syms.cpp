// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop_cordic_cossin__W10_N10.h"



// FUNCTIONS
Vtop__Syms::Vtop__Syms(Vtop* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic(Verilated::catName(topp->name(), "harmonic_generator.genblk1[0].nth_cordic"))
    , TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic(Verilated::catName(topp->name(), "harmonic_generator.genblk1[1].nth_cordic"))
    , TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic(Verilated::catName(topp->name(), "harmonic_generator.genblk1[2].nth_cordic"))
    , TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic(Verilated::catName(topp->name(), "harmonic_generator.genblk1[3].nth_cordic"))
    , TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic(Verilated::catName(topp->name(), "harmonic_generator.genblk1[4].nth_cordic"))
    , TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic(Verilated::catName(topp->name(), "harmonic_generator.genblk1[5].nth_cordic"))
    , TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic(Verilated::catName(topp->name(), "harmonic_generator.genblk1[6].nth_cordic"))
    , TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic(Verilated::catName(topp->name(), "harmonic_generator.genblk1[7].nth_cordic"))
    , TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic(Verilated::catName(topp->name(), "harmonic_generator.genblk1[8].nth_cordic"))
    , TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic(Verilated::catName(topp->name(), "harmonic_generator.genblk1[9].nth_cordic"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic = &TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic;
    TOPp->__PVT__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic = &TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic;
    TOPp->__PVT__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic = &TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic;
    TOPp->__PVT__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic = &TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic;
    TOPp->__PVT__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic = &TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic;
    TOPp->__PVT__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic = &TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic;
    TOPp->__PVT__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic = &TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic;
    TOPp->__PVT__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic = &TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic;
    TOPp->__PVT__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic = &TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic;
    TOPp->__PVT__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic = &TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.__Vconfigure(this, true);
    TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.__Vconfigure(this, false);
    TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.__Vconfigure(this, false);
    TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.__Vconfigure(this, false);
    TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.__Vconfigure(this, false);
    TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.__Vconfigure(this, false);
    TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.__Vconfigure(this, false);
    TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.__Vconfigure(this, false);
    TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.__Vconfigure(this, false);
    TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.__Vconfigure(this, false);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_harmonic_generator.configure(this, name(), "harmonic_generator", "harmonic_generator", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_harmonic_generator__genblk1__BRA__0__KET__.configure(this, name(), "harmonic_generator.genblk1__BRA__0__KET__", "genblk1__BRA\000KET__", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_harmonic_generator__genblk1__BRA__0__KET____nth_cordic.configure(this, name(), "harmonic_generator.genblk1__BRA__0__KET__.nth_cordic", "nth_cordic", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_harmonic_generator__genblk1__BRA__1__KET__.configure(this, name(), "harmonic_generator.genblk1__BRA__1__KET__", "genblk1__BRA__1__KET__", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_harmonic_generator__genblk1__BRA__1__KET____nth_cordic.configure(this, name(), "harmonic_generator.genblk1__BRA__1__KET__.nth_cordic", "nth_cordic", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_harmonic_generator__genblk1__BRA__2__KET__.configure(this, name(), "harmonic_generator.genblk1__BRA__2__KET__", "genblk1__BRA__2__KET__", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_harmonic_generator__genblk1__BRA__2__KET____nth_cordic.configure(this, name(), "harmonic_generator.genblk1__BRA__2__KET__.nth_cordic", "nth_cordic", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_harmonic_generator__genblk1__BRA__3__KET__.configure(this, name(), "harmonic_generator.genblk1__BRA__3__KET__", "genblk1__BRA__3__KET__", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_harmonic_generator__genblk1__BRA__3__KET____nth_cordic.configure(this, name(), "harmonic_generator.genblk1__BRA__3__KET__.nth_cordic", "nth_cordic", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_harmonic_generator__genblk1__BRA__4__KET__.configure(this, name(), "harmonic_generator.genblk1__BRA__4__KET__", "genblk1__BRA__4__KET__", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_harmonic_generator__genblk1__BRA__4__KET____nth_cordic.configure(this, name(), "harmonic_generator.genblk1__BRA__4__KET__.nth_cordic", "nth_cordic", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_harmonic_generator__genblk1__BRA__5__KET__.configure(this, name(), "harmonic_generator.genblk1__BRA__5__KET__", "genblk1__BRA__5__KET__", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_harmonic_generator__genblk1__BRA__5__KET____nth_cordic.configure(this, name(), "harmonic_generator.genblk1__BRA__5__KET__.nth_cordic", "nth_cordic", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_harmonic_generator__genblk1__BRA__6__KET__.configure(this, name(), "harmonic_generator.genblk1__BRA__6__KET__", "genblk1__BRA__6__KET__", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_harmonic_generator__genblk1__BRA__6__KET____nth_cordic.configure(this, name(), "harmonic_generator.genblk1__BRA__6__KET__.nth_cordic", "nth_cordic", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_harmonic_generator__genblk1__BRA__7__KET__.configure(this, name(), "harmonic_generator.genblk1__BRA__7__KET__", "genblk1__BRA__7__KET__", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_harmonic_generator__genblk1__BRA__7__KET____nth_cordic.configure(this, name(), "harmonic_generator.genblk1__BRA__7__KET__.nth_cordic", "nth_cordic", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_harmonic_generator__genblk1__BRA__8__KET__.configure(this, name(), "harmonic_generator.genblk1__BRA__8__KET__", "genblk1__BRA__8__KET__", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_harmonic_generator__genblk1__BRA__8__KET____nth_cordic.configure(this, name(), "harmonic_generator.genblk1__BRA__8__KET__.nth_cordic", "nth_cordic", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_harmonic_generator__genblk1__BRA__9__KET__.configure(this, name(), "harmonic_generator.genblk1__BRA__9__KET__", "genblk1__BRA__9__KET__", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_harmonic_generator__genblk1__BRA__9__KET____nth_cordic.configure(this, name(), "harmonic_generator.genblk1__BRA__9__KET__.nth_cordic", "nth_cordic", -12, VerilatedScope::SCOPE_MODULE);
    
    // Setup scope hierarchy
    __Vhier.add(0, &__Vscope_harmonic_generator);
    __Vhier.add(&__Vscope_harmonic_generator, &__Vscope_harmonic_generator__genblk1__BRA__0__KET____nth_cordic);
    __Vhier.add(&__Vscope_harmonic_generator, &__Vscope_harmonic_generator__genblk1__BRA__1__KET____nth_cordic);
    __Vhier.add(&__Vscope_harmonic_generator, &__Vscope_harmonic_generator__genblk1__BRA__2__KET____nth_cordic);
    __Vhier.add(&__Vscope_harmonic_generator, &__Vscope_harmonic_generator__genblk1__BRA__3__KET____nth_cordic);
    __Vhier.add(&__Vscope_harmonic_generator, &__Vscope_harmonic_generator__genblk1__BRA__4__KET____nth_cordic);
    __Vhier.add(&__Vscope_harmonic_generator, &__Vscope_harmonic_generator__genblk1__BRA__5__KET____nth_cordic);
    __Vhier.add(&__Vscope_harmonic_generator, &__Vscope_harmonic_generator__genblk1__BRA__6__KET____nth_cordic);
    __Vhier.add(&__Vscope_harmonic_generator, &__Vscope_harmonic_generator__genblk1__BRA__7__KET____nth_cordic);
    __Vhier.add(&__Vscope_harmonic_generator, &__Vscope_harmonic_generator__genblk1__BRA__8__KET____nth_cordic);
    __Vhier.add(&__Vscope_harmonic_generator, &__Vscope_harmonic_generator__genblk1__BRA__9__KET____nth_cordic);
    
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_TOP.varInsert(__Vfinal,"angle", &(TOPp->angle), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOPp->clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        //UNSUP __Vscope_TOP.varInsert(__Vfinal,"cos_arr_out", &(TOPp->cos_arr_out), false, VLVT_WDATA,VLVD_OUT|VLVF_PUB_RW,2 ,15,0 ,9,0);
        __Vscope_TOP.varInsert(__Vfinal,"data_valid_in", &(TOPp->data_valid_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"data_valid_out", &(TOPp->data_valid_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst", &(TOPp->rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        //UNSUP __Vscope_TOP.varInsert(__Vfinal,"sin_arr_out", &(TOPp->sin_arr_out), false, VLVT_WDATA,VLVD_OUT|VLVF_PUB_RW,2 ,15,0 ,9,0);
        __Vscope_harmonic_generator.varInsert(__Vfinal,"angle", &(TOPp->harmonic_generator__DOT__angle), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator.varInsert(__Vfinal,"clk", &(TOPp->harmonic_generator__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        //UNSUP __Vscope_harmonic_generator.varInsert(__Vfinal,"cos_arr_out", &(TOPp->harmonic_generator__DOT__cos_arr_out), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,9,0);
        __Vscope_harmonic_generator.varInsert(__Vfinal,"data_valid_in", &(TOPp->harmonic_generator__DOT__data_valid_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator.varInsert(__Vfinal,"data_valid_out", &(TOPp->harmonic_generator__DOT__data_valid_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator.varInsert(__Vfinal,"rst", &(TOPp->harmonic_generator__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        //UNSUP __Vscope_harmonic_generator.varInsert(__Vfinal,"sin_arr_out", &(TOPp->harmonic_generator__DOT__sin_arr_out), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,9,0);
        __Vscope_harmonic_generator.varInsert(__Vfinal,"valid_arr", &(TOPp->harmonic_generator__DOT__valid_arr), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,9,0);
        __Vscope_harmonic_generator__genblk1__BRA__0__KET__.varInsert(__Vfinal,"angle_n", &(TOPp->harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__angle_n), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__0__KET____nth_cordic.varInsert(__Vfinal,"angle", &(TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.angle), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__0__KET____nth_cordic.varInsert(__Vfinal,"clk", &(TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__0__KET____nth_cordic.varInsert(__Vfinal,"cos", &(TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.cos), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__0__KET____nth_cordic.varInsert(__Vfinal,"data_angle_valid_in", &(TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.data_angle_valid_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__0__KET____nth_cordic.varInsert(__Vfinal,"data_cossin_valid_out", &(TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.data_cossin_valid_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__0__KET____nth_cordic.varInsert(__Vfinal,"desired_angle_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__0__KET____nth_cordic.varInsert(__Vfinal,"rst", &(TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__0__KET____nth_cordic.varInsert(__Vfinal,"sin", &(TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.sin), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__0__KET____nth_cordic.varInsert(__Vfinal,"total_angle_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.total_angle_pipe), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__0__KET____nth_cordic.varInsert(__Vfinal,"valid_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.valid_pipe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__0__KET____nth_cordic.varInsert(__Vfinal,"x_flip_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_flip_pipe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__0__KET____nth_cordic.varInsert(__Vfinal,"x_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_pipe), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,16,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__0__KET____nth_cordic.varInsert(__Vfinal,"y_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.y_pipe), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,16,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__1__KET__.varInsert(__Vfinal,"angle_n", &(TOPp->harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__angle_n), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__1__KET____nth_cordic.varInsert(__Vfinal,"angle", &(TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.angle), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__1__KET____nth_cordic.varInsert(__Vfinal,"clk", &(TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__1__KET____nth_cordic.varInsert(__Vfinal,"cos", &(TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.cos), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__1__KET____nth_cordic.varInsert(__Vfinal,"data_angle_valid_in", &(TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.data_angle_valid_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__1__KET____nth_cordic.varInsert(__Vfinal,"data_cossin_valid_out", &(TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.data_cossin_valid_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__1__KET____nth_cordic.varInsert(__Vfinal,"desired_angle_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__1__KET____nth_cordic.varInsert(__Vfinal,"rst", &(TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__1__KET____nth_cordic.varInsert(__Vfinal,"sin", &(TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.sin), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__1__KET____nth_cordic.varInsert(__Vfinal,"total_angle_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.total_angle_pipe), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__1__KET____nth_cordic.varInsert(__Vfinal,"valid_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.valid_pipe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__1__KET____nth_cordic.varInsert(__Vfinal,"x_flip_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_flip_pipe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__1__KET____nth_cordic.varInsert(__Vfinal,"x_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_pipe), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,16,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__1__KET____nth_cordic.varInsert(__Vfinal,"y_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.y_pipe), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,16,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__2__KET__.varInsert(__Vfinal,"angle_n", &(TOPp->harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__angle_n), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__2__KET____nth_cordic.varInsert(__Vfinal,"angle", &(TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.angle), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__2__KET____nth_cordic.varInsert(__Vfinal,"clk", &(TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__2__KET____nth_cordic.varInsert(__Vfinal,"cos", &(TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.cos), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__2__KET____nth_cordic.varInsert(__Vfinal,"data_angle_valid_in", &(TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.data_angle_valid_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__2__KET____nth_cordic.varInsert(__Vfinal,"data_cossin_valid_out", &(TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.data_cossin_valid_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__2__KET____nth_cordic.varInsert(__Vfinal,"desired_angle_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__2__KET____nth_cordic.varInsert(__Vfinal,"rst", &(TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__2__KET____nth_cordic.varInsert(__Vfinal,"sin", &(TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.sin), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__2__KET____nth_cordic.varInsert(__Vfinal,"total_angle_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.total_angle_pipe), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__2__KET____nth_cordic.varInsert(__Vfinal,"valid_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.valid_pipe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__2__KET____nth_cordic.varInsert(__Vfinal,"x_flip_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_flip_pipe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__2__KET____nth_cordic.varInsert(__Vfinal,"x_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_pipe), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,16,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__2__KET____nth_cordic.varInsert(__Vfinal,"y_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.y_pipe), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,16,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__3__KET__.varInsert(__Vfinal,"angle_n", &(TOPp->harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__angle_n), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__3__KET____nth_cordic.varInsert(__Vfinal,"angle", &(TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.angle), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__3__KET____nth_cordic.varInsert(__Vfinal,"clk", &(TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__3__KET____nth_cordic.varInsert(__Vfinal,"cos", &(TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.cos), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__3__KET____nth_cordic.varInsert(__Vfinal,"data_angle_valid_in", &(TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.data_angle_valid_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__3__KET____nth_cordic.varInsert(__Vfinal,"data_cossin_valid_out", &(TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.data_cossin_valid_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__3__KET____nth_cordic.varInsert(__Vfinal,"desired_angle_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__3__KET____nth_cordic.varInsert(__Vfinal,"rst", &(TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__3__KET____nth_cordic.varInsert(__Vfinal,"sin", &(TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.sin), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__3__KET____nth_cordic.varInsert(__Vfinal,"total_angle_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.total_angle_pipe), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__3__KET____nth_cordic.varInsert(__Vfinal,"valid_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.valid_pipe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__3__KET____nth_cordic.varInsert(__Vfinal,"x_flip_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_flip_pipe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__3__KET____nth_cordic.varInsert(__Vfinal,"x_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_pipe), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,16,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__3__KET____nth_cordic.varInsert(__Vfinal,"y_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.y_pipe), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,16,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__4__KET__.varInsert(__Vfinal,"angle_n", &(TOPp->harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__angle_n), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__4__KET____nth_cordic.varInsert(__Vfinal,"angle", &(TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.angle), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__4__KET____nth_cordic.varInsert(__Vfinal,"clk", &(TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__4__KET____nth_cordic.varInsert(__Vfinal,"cos", &(TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.cos), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__4__KET____nth_cordic.varInsert(__Vfinal,"data_angle_valid_in", &(TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.data_angle_valid_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__4__KET____nth_cordic.varInsert(__Vfinal,"data_cossin_valid_out", &(TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.data_cossin_valid_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__4__KET____nth_cordic.varInsert(__Vfinal,"desired_angle_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__4__KET____nth_cordic.varInsert(__Vfinal,"rst", &(TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__4__KET____nth_cordic.varInsert(__Vfinal,"sin", &(TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.sin), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__4__KET____nth_cordic.varInsert(__Vfinal,"total_angle_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.total_angle_pipe), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__4__KET____nth_cordic.varInsert(__Vfinal,"valid_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.valid_pipe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__4__KET____nth_cordic.varInsert(__Vfinal,"x_flip_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_flip_pipe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__4__KET____nth_cordic.varInsert(__Vfinal,"x_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_pipe), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,16,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__4__KET____nth_cordic.varInsert(__Vfinal,"y_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.y_pipe), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,16,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__5__KET__.varInsert(__Vfinal,"angle_n", &(TOPp->harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__angle_n), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__5__KET____nth_cordic.varInsert(__Vfinal,"angle", &(TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.angle), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__5__KET____nth_cordic.varInsert(__Vfinal,"clk", &(TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__5__KET____nth_cordic.varInsert(__Vfinal,"cos", &(TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.cos), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__5__KET____nth_cordic.varInsert(__Vfinal,"data_angle_valid_in", &(TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.data_angle_valid_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__5__KET____nth_cordic.varInsert(__Vfinal,"data_cossin_valid_out", &(TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.data_cossin_valid_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__5__KET____nth_cordic.varInsert(__Vfinal,"desired_angle_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__5__KET____nth_cordic.varInsert(__Vfinal,"rst", &(TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__5__KET____nth_cordic.varInsert(__Vfinal,"sin", &(TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.sin), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__5__KET____nth_cordic.varInsert(__Vfinal,"total_angle_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.total_angle_pipe), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__5__KET____nth_cordic.varInsert(__Vfinal,"valid_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.valid_pipe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__5__KET____nth_cordic.varInsert(__Vfinal,"x_flip_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_flip_pipe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__5__KET____nth_cordic.varInsert(__Vfinal,"x_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_pipe), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,16,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__5__KET____nth_cordic.varInsert(__Vfinal,"y_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.y_pipe), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,16,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__6__KET__.varInsert(__Vfinal,"angle_n", &(TOPp->harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__angle_n), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__6__KET____nth_cordic.varInsert(__Vfinal,"angle", &(TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.angle), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__6__KET____nth_cordic.varInsert(__Vfinal,"clk", &(TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__6__KET____nth_cordic.varInsert(__Vfinal,"cos", &(TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.cos), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__6__KET____nth_cordic.varInsert(__Vfinal,"data_angle_valid_in", &(TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.data_angle_valid_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__6__KET____nth_cordic.varInsert(__Vfinal,"data_cossin_valid_out", &(TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.data_cossin_valid_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__6__KET____nth_cordic.varInsert(__Vfinal,"desired_angle_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__6__KET____nth_cordic.varInsert(__Vfinal,"rst", &(TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__6__KET____nth_cordic.varInsert(__Vfinal,"sin", &(TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.sin), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__6__KET____nth_cordic.varInsert(__Vfinal,"total_angle_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.total_angle_pipe), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__6__KET____nth_cordic.varInsert(__Vfinal,"valid_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.valid_pipe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__6__KET____nth_cordic.varInsert(__Vfinal,"x_flip_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_flip_pipe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__6__KET____nth_cordic.varInsert(__Vfinal,"x_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_pipe), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,16,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__6__KET____nth_cordic.varInsert(__Vfinal,"y_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.y_pipe), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,16,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__7__KET__.varInsert(__Vfinal,"angle_n", &(TOPp->harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__angle_n), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__7__KET____nth_cordic.varInsert(__Vfinal,"angle", &(TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.angle), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__7__KET____nth_cordic.varInsert(__Vfinal,"clk", &(TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__7__KET____nth_cordic.varInsert(__Vfinal,"cos", &(TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.cos), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__7__KET____nth_cordic.varInsert(__Vfinal,"data_angle_valid_in", &(TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.data_angle_valid_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__7__KET____nth_cordic.varInsert(__Vfinal,"data_cossin_valid_out", &(TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.data_cossin_valid_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__7__KET____nth_cordic.varInsert(__Vfinal,"desired_angle_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__7__KET____nth_cordic.varInsert(__Vfinal,"rst", &(TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__7__KET____nth_cordic.varInsert(__Vfinal,"sin", &(TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.sin), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__7__KET____nth_cordic.varInsert(__Vfinal,"total_angle_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.total_angle_pipe), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__7__KET____nth_cordic.varInsert(__Vfinal,"valid_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.valid_pipe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__7__KET____nth_cordic.varInsert(__Vfinal,"x_flip_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_flip_pipe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__7__KET____nth_cordic.varInsert(__Vfinal,"x_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_pipe), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,16,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__7__KET____nth_cordic.varInsert(__Vfinal,"y_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.y_pipe), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,16,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__8__KET__.varInsert(__Vfinal,"angle_n", &(TOPp->harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__angle_n), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__8__KET____nth_cordic.varInsert(__Vfinal,"angle", &(TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.angle), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__8__KET____nth_cordic.varInsert(__Vfinal,"clk", &(TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__8__KET____nth_cordic.varInsert(__Vfinal,"cos", &(TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.cos), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__8__KET____nth_cordic.varInsert(__Vfinal,"data_angle_valid_in", &(TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.data_angle_valid_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__8__KET____nth_cordic.varInsert(__Vfinal,"data_cossin_valid_out", &(TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.data_cossin_valid_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__8__KET____nth_cordic.varInsert(__Vfinal,"desired_angle_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__8__KET____nth_cordic.varInsert(__Vfinal,"rst", &(TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__8__KET____nth_cordic.varInsert(__Vfinal,"sin", &(TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.sin), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__8__KET____nth_cordic.varInsert(__Vfinal,"total_angle_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.total_angle_pipe), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__8__KET____nth_cordic.varInsert(__Vfinal,"valid_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.valid_pipe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__8__KET____nth_cordic.varInsert(__Vfinal,"x_flip_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_flip_pipe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__8__KET____nth_cordic.varInsert(__Vfinal,"x_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_pipe), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,16,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__8__KET____nth_cordic.varInsert(__Vfinal,"y_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.y_pipe), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,16,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__9__KET__.varInsert(__Vfinal,"angle_n", &(TOPp->harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__angle_n), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__9__KET____nth_cordic.varInsert(__Vfinal,"angle", &(TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.angle), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__9__KET____nth_cordic.varInsert(__Vfinal,"clk", &(TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__9__KET____nth_cordic.varInsert(__Vfinal,"cos", &(TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.cos), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__9__KET____nth_cordic.varInsert(__Vfinal,"data_angle_valid_in", &(TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.data_angle_valid_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__9__KET____nth_cordic.varInsert(__Vfinal,"data_cossin_valid_out", &(TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.data_cossin_valid_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__9__KET____nth_cordic.varInsert(__Vfinal,"desired_angle_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__9__KET____nth_cordic.varInsert(__Vfinal,"rst", &(TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_harmonic_generator__genblk1__BRA__9__KET____nth_cordic.varInsert(__Vfinal,"sin", &(TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.sin), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_harmonic_generator__genblk1__BRA__9__KET____nth_cordic.varInsert(__Vfinal,"total_angle_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.total_angle_pipe), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__9__KET____nth_cordic.varInsert(__Vfinal,"valid_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.valid_pipe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__9__KET____nth_cordic.varInsert(__Vfinal,"x_flip_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_flip_pipe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__9__KET____nth_cordic.varInsert(__Vfinal,"x_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_pipe), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,16,0 ,16,0);
        __Vscope_harmonic_generator__genblk1__BRA__9__KET____nth_cordic.varInsert(__Vfinal,"y_pipe", &(TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.y_pipe), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,16,0 ,16,0);
    }
}
