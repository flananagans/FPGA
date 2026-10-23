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

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*16:0*/, 17>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____1(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*16:0*/, 17>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____2(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 17>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____3(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 17>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____4(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 17>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____5(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 17>& __VdtypeVar);

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst));
    bufp->chgBit(oldp+2,(vlSelfRef.data_valid_in));
    bufp->chgSData(oldp+3,(vlSelfRef.angle),16);
    bufp->chgWData(oldp+4,(vlSelfRef.a_values),160);
    bufp->chgWData(oldp+9,(vlSelfRef.b_values),160);
    bufp->chgSData(oldp+14,(vlSelfRef.modulator_sum_out),16);
    bufp->chgBit(oldp+15,(vlSelfRef.data_valid_out));
    bufp->chgBit(oldp+16,(vlSelfRef.busy));
    bufp->chgBit(oldp+17,(vlSelfRef.modulator__DOT__clk));
    bufp->chgBit(oldp+18,(vlSelfRef.modulator__DOT__rst));
    bufp->chgBit(oldp+19,(vlSelfRef.modulator__DOT__data_valid_in));
    bufp->chgSData(oldp+20,(vlSelfRef.modulator__DOT__angle),16);
    bufp->chgWData(oldp+21,(vlSelfRef.modulator__DOT__a_values),160);
    bufp->chgWData(oldp+26,(vlSelfRef.modulator__DOT__b_values),160);
    bufp->chgSData(oldp+31,(vlSelfRef.modulator__DOT__modulator_sum_out),16);
    bufp->chgBit(oldp+32,(vlSelfRef.modulator__DOT__data_valid_out));
    bufp->chgBit(oldp+33,(vlSelfRef.modulator__DOT__busy));
    bufp->chgSData(oldp+34,(vlSelfRef.modulator__DOT__angle_reg),16);
    bufp->chgWData(oldp+35,(vlSelfRef.modulator__DOT__a_reg),160);
    bufp->chgWData(oldp+40,(vlSelfRef.modulator__DOT__b_reg),160);
    bufp->chgWData(oldp+45,(vlSelfRef.modulator__DOT__cos_unlatched),160);
    bufp->chgWData(oldp+50,(vlSelfRef.modulator__DOT__cos_harmonics),160);
    bufp->chgWData(oldp+55,(vlSelfRef.modulator__DOT__sin_unlatched),160);
    bufp->chgWData(oldp+60,(vlSelfRef.modulator__DOT__sin_harmonics),160);
    bufp->chgBit(oldp+65,(vlSelfRef.modulator__DOT__hgen_valid_out));
    bufp->chgBit(oldp+66,(vlSelfRef.modulator__DOT__hgen_busy));
    bufp->chgBit(oldp+67,(vlSelfRef.modulator__DOT__mult_acc_active));
    bufp->chgCData(oldp+68,(vlSelfRef.modulator__DOT__idx),4);
    bufp->chgQData(oldp+69,(vlSelfRef.modulator__DOT__mac_cur),37);
    bufp->chgQData(oldp+71,(vlSelfRef.modulator__DOT__mac_next),37);
    bufp->chgBit(oldp+73,(vlSelfRef.modulator__DOT__serial_hgen__DOT__clk));
    bufp->chgBit(oldp+74,(vlSelfRef.modulator__DOT__serial_hgen__DOT__rst));
    bufp->chgBit(oldp+75,(vlSelfRef.modulator__DOT__serial_hgen__DOT__data_valid_in));
    bufp->chgSData(oldp+76,(vlSelfRef.modulator__DOT__serial_hgen__DOT__angle),16);
    bufp->chgWData(oldp+77,(vlSelfRef.modulator__DOT__serial_hgen__DOT__cos_arr_out),160);
    bufp->chgWData(oldp+82,(vlSelfRef.modulator__DOT__serial_hgen__DOT__sin_arr_out),160);
    bufp->chgBit(oldp+87,(vlSelfRef.modulator__DOT__serial_hgen__DOT__data_valid_out));
    bufp->chgSData(oldp+88,(vlSelfRef.modulator__DOT__serial_hgen__DOT__valid_arr),10);
    bufp->chgSData(oldp+89,(vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__angle_n),16);
    bufp->chgSData(oldp+90,(vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__angle_n),16);
    bufp->chgSData(oldp+91,(vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__angle_n),16);
    bufp->chgSData(oldp+92,(vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__angle_n),16);
    bufp->chgSData(oldp+93,(vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__angle_n),16);
    bufp->chgSData(oldp+94,(vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__angle_n),16);
    bufp->chgSData(oldp+95,(vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__angle_n),16);
    bufp->chgSData(oldp+96,(vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__angle_n),16);
    bufp->chgSData(oldp+97,(vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__angle_n),16);
    bufp->chgSData(oldp+98,(vlSelfRef.modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__angle_n),16);
    bufp->chgBit(oldp+99,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.clk));
    bufp->chgBit(oldp+100,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.rst));
    bufp->chgBit(oldp+101,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->chgSData(oldp+102,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.angle),16);
    bufp->chgSData(oldp+103,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.cos),16);
    bufp->chgSData(oldp+104,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.sin),16);
    bufp->chgBit(oldp+105,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 106, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 123, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 140, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 157, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 174, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 191, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__0__KET____DOT__nth_cordic.valid_pipe);
    bufp->chgBit(oldp+208,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.clk));
    bufp->chgBit(oldp+209,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.rst));
    bufp->chgBit(oldp+210,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->chgSData(oldp+211,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.angle),16);
    bufp->chgSData(oldp+212,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.cos),16);
    bufp->chgSData(oldp+213,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.sin),16);
    bufp->chgBit(oldp+214,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 215, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 232, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 249, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 266, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 283, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 300, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__1__KET____DOT__nth_cordic.valid_pipe);
    bufp->chgBit(oldp+317,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.clk));
    bufp->chgBit(oldp+318,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.rst));
    bufp->chgBit(oldp+319,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->chgSData(oldp+320,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.angle),16);
    bufp->chgSData(oldp+321,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.cos),16);
    bufp->chgSData(oldp+322,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.sin),16);
    bufp->chgBit(oldp+323,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 324, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 341, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 358, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 375, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 392, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 409, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__2__KET____DOT__nth_cordic.valid_pipe);
    bufp->chgBit(oldp+426,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.clk));
    bufp->chgBit(oldp+427,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.rst));
    bufp->chgBit(oldp+428,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->chgSData(oldp+429,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.angle),16);
    bufp->chgSData(oldp+430,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.cos),16);
    bufp->chgSData(oldp+431,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.sin),16);
    bufp->chgBit(oldp+432,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 433, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 450, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 467, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 484, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 501, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 518, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__3__KET____DOT__nth_cordic.valid_pipe);
    bufp->chgBit(oldp+535,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.clk));
    bufp->chgBit(oldp+536,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.rst));
    bufp->chgBit(oldp+537,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->chgSData(oldp+538,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.angle),16);
    bufp->chgSData(oldp+539,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.cos),16);
    bufp->chgSData(oldp+540,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.sin),16);
    bufp->chgBit(oldp+541,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 542, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 559, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 576, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 593, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 610, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 627, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__4__KET____DOT__nth_cordic.valid_pipe);
    bufp->chgBit(oldp+644,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.clk));
    bufp->chgBit(oldp+645,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.rst));
    bufp->chgBit(oldp+646,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->chgSData(oldp+647,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.angle),16);
    bufp->chgSData(oldp+648,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.cos),16);
    bufp->chgSData(oldp+649,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.sin),16);
    bufp->chgBit(oldp+650,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 651, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 668, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 685, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 702, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 719, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 736, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__5__KET____DOT__nth_cordic.valid_pipe);
    bufp->chgBit(oldp+753,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.clk));
    bufp->chgBit(oldp+754,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.rst));
    bufp->chgBit(oldp+755,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->chgSData(oldp+756,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.angle),16);
    bufp->chgSData(oldp+757,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.cos),16);
    bufp->chgSData(oldp+758,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.sin),16);
    bufp->chgBit(oldp+759,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 760, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 777, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 794, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 811, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 828, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 845, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__6__KET____DOT__nth_cordic.valid_pipe);
    bufp->chgBit(oldp+862,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.clk));
    bufp->chgBit(oldp+863,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.rst));
    bufp->chgBit(oldp+864,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->chgSData(oldp+865,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.angle),16);
    bufp->chgSData(oldp+866,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.cos),16);
    bufp->chgSData(oldp+867,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.sin),16);
    bufp->chgBit(oldp+868,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 869, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 886, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 903, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 920, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 937, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 954, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__7__KET____DOT__nth_cordic.valid_pipe);
    bufp->chgBit(oldp+971,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.clk));
    bufp->chgBit(oldp+972,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.rst));
    bufp->chgBit(oldp+973,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->chgSData(oldp+974,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.angle),16);
    bufp->chgSData(oldp+975,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.cos),16);
    bufp->chgSData(oldp+976,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.sin),16);
    bufp->chgBit(oldp+977,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 978, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 995, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 1012, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 1029, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 1046, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 1063, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__8__KET____DOT__nth_cordic.valid_pipe);
    bufp->chgBit(oldp+1080,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.clk));
    bufp->chgBit(oldp+1081,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.rst));
    bufp->chgBit(oldp+1082,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->chgSData(oldp+1083,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.angle),16);
    bufp->chgSData(oldp+1084,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.cos),16);
    bufp->chgSData(oldp+1085,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.sin),16);
    bufp->chgBit(oldp+1086,(vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 1087, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 1104, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 1121, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 1138, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 1155, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 1172, vlSymsp->TOP__modulator__DOT__serial_hgen__DOT__gen_harmonics__BRA__9__KET____DOT__nth_cordic.valid_pipe);
}

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*16:0*/, 17>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),17);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),17);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),17);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),17);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),17);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),17);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),17);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),17);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),17);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),17);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),17);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),17);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),17);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),17);
    bufp->chgIData(oldp+14,(__VdtypeVar[14]),17);
    bufp->chgIData(oldp+15,(__VdtypeVar[15]),17);
    bufp->chgIData(oldp+16,(__VdtypeVar[16]),17);
}

void Vtop___024root__trace_chg_dtype____1(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*16:0*/, 17>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),17);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),17);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),17);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),17);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),17);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),17);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),17);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),17);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),17);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),17);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),17);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),17);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),17);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),17);
    bufp->chgIData(oldp+14,(__VdtypeVar[14]),17);
    bufp->chgIData(oldp+15,(__VdtypeVar[15]),17);
    bufp->chgIData(oldp+16,(__VdtypeVar[16]),17);
}

void Vtop___024root__trace_chg_dtype____2(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 17>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
    bufp->chgBit(oldp+3,(__VdtypeVar[3]));
    bufp->chgBit(oldp+4,(__VdtypeVar[4]));
    bufp->chgBit(oldp+5,(__VdtypeVar[5]));
    bufp->chgBit(oldp+6,(__VdtypeVar[6]));
    bufp->chgBit(oldp+7,(__VdtypeVar[7]));
    bufp->chgBit(oldp+8,(__VdtypeVar[8]));
    bufp->chgBit(oldp+9,(__VdtypeVar[9]));
    bufp->chgBit(oldp+10,(__VdtypeVar[10]));
    bufp->chgBit(oldp+11,(__VdtypeVar[11]));
    bufp->chgBit(oldp+12,(__VdtypeVar[12]));
    bufp->chgBit(oldp+13,(__VdtypeVar[13]));
    bufp->chgBit(oldp+14,(__VdtypeVar[14]));
    bufp->chgBit(oldp+15,(__VdtypeVar[15]));
    bufp->chgBit(oldp+16,(__VdtypeVar[16]));
}

void Vtop___024root__trace_chg_dtype____3(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 17>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),16);
    bufp->chgSData(oldp+1,(__VdtypeVar[1]),16);
    bufp->chgSData(oldp+2,(__VdtypeVar[2]),16);
    bufp->chgSData(oldp+3,(__VdtypeVar[3]),16);
    bufp->chgSData(oldp+4,(__VdtypeVar[4]),16);
    bufp->chgSData(oldp+5,(__VdtypeVar[5]),16);
    bufp->chgSData(oldp+6,(__VdtypeVar[6]),16);
    bufp->chgSData(oldp+7,(__VdtypeVar[7]),16);
    bufp->chgSData(oldp+8,(__VdtypeVar[8]),16);
    bufp->chgSData(oldp+9,(__VdtypeVar[9]),16);
    bufp->chgSData(oldp+10,(__VdtypeVar[10]),16);
    bufp->chgSData(oldp+11,(__VdtypeVar[11]),16);
    bufp->chgSData(oldp+12,(__VdtypeVar[12]),16);
    bufp->chgSData(oldp+13,(__VdtypeVar[13]),16);
    bufp->chgSData(oldp+14,(__VdtypeVar[14]),16);
    bufp->chgSData(oldp+15,(__VdtypeVar[15]),16);
    bufp->chgSData(oldp+16,(__VdtypeVar[16]),16);
}

void Vtop___024root__trace_chg_dtype____4(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 17>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),16);
    bufp->chgSData(oldp+1,(__VdtypeVar[1]),16);
    bufp->chgSData(oldp+2,(__VdtypeVar[2]),16);
    bufp->chgSData(oldp+3,(__VdtypeVar[3]),16);
    bufp->chgSData(oldp+4,(__VdtypeVar[4]),16);
    bufp->chgSData(oldp+5,(__VdtypeVar[5]),16);
    bufp->chgSData(oldp+6,(__VdtypeVar[6]),16);
    bufp->chgSData(oldp+7,(__VdtypeVar[7]),16);
    bufp->chgSData(oldp+8,(__VdtypeVar[8]),16);
    bufp->chgSData(oldp+9,(__VdtypeVar[9]),16);
    bufp->chgSData(oldp+10,(__VdtypeVar[10]),16);
    bufp->chgSData(oldp+11,(__VdtypeVar[11]),16);
    bufp->chgSData(oldp+12,(__VdtypeVar[12]),16);
    bufp->chgSData(oldp+13,(__VdtypeVar[13]),16);
    bufp->chgSData(oldp+14,(__VdtypeVar[14]),16);
    bufp->chgSData(oldp+15,(__VdtypeVar[15]),16);
    bufp->chgSData(oldp+16,(__VdtypeVar[16]),16);
}

void Vtop___024root__trace_chg_dtype____5(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 17>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
    bufp->chgBit(oldp+3,(__VdtypeVar[3]));
    bufp->chgBit(oldp+4,(__VdtypeVar[4]));
    bufp->chgBit(oldp+5,(__VdtypeVar[5]));
    bufp->chgBit(oldp+6,(__VdtypeVar[6]));
    bufp->chgBit(oldp+7,(__VdtypeVar[7]));
    bufp->chgBit(oldp+8,(__VdtypeVar[8]));
    bufp->chgBit(oldp+9,(__VdtypeVar[9]));
    bufp->chgBit(oldp+10,(__VdtypeVar[10]));
    bufp->chgBit(oldp+11,(__VdtypeVar[11]));
    bufp->chgBit(oldp+12,(__VdtypeVar[12]));
    bufp->chgBit(oldp+13,(__VdtypeVar[13]));
    bufp->chgBit(oldp+14,(__VdtypeVar[14]));
    bufp->chgBit(oldp+15,(__VdtypeVar[15]));
    bufp->chgBit(oldp+16,(__VdtypeVar[16]));
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
