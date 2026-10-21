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
    bufp->chgWData(oldp+4,(vlSelfRef.cos_arr_out),160);
    bufp->chgWData(oldp+9,(vlSelfRef.sin_arr_out),160);
    bufp->chgBit(oldp+14,(vlSelfRef.data_valid_out));
    bufp->chgBit(oldp+15,(vlSelfRef.harmonic_generator__DOT__clk));
    bufp->chgBit(oldp+16,(vlSelfRef.harmonic_generator__DOT__rst));
    bufp->chgBit(oldp+17,(vlSelfRef.harmonic_generator__DOT__data_valid_in));
    bufp->chgSData(oldp+18,(vlSelfRef.harmonic_generator__DOT__angle),16);
    bufp->chgWData(oldp+19,(vlSelfRef.harmonic_generator__DOT__cos_arr_out),160);
    bufp->chgWData(oldp+24,(vlSelfRef.harmonic_generator__DOT__sin_arr_out),160);
    bufp->chgBit(oldp+29,(vlSelfRef.harmonic_generator__DOT__data_valid_out));
    bufp->chgSData(oldp+30,(vlSelfRef.harmonic_generator__DOT__valid_arr),10);
    bufp->chgSData(oldp+31,(vlSelfRef.harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__angle_n),16);
    bufp->chgSData(oldp+32,(vlSelfRef.harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__angle_n),16);
    bufp->chgSData(oldp+33,(vlSelfRef.harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__angle_n),16);
    bufp->chgSData(oldp+34,(vlSelfRef.harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__angle_n),16);
    bufp->chgSData(oldp+35,(vlSelfRef.harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__angle_n),16);
    bufp->chgSData(oldp+36,(vlSelfRef.harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__angle_n),16);
    bufp->chgSData(oldp+37,(vlSelfRef.harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__angle_n),16);
    bufp->chgSData(oldp+38,(vlSelfRef.harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__angle_n),16);
    bufp->chgSData(oldp+39,(vlSelfRef.harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__angle_n),16);
    bufp->chgSData(oldp+40,(vlSelfRef.harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__angle_n),16);
    bufp->chgBit(oldp+41,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.clk));
    bufp->chgBit(oldp+42,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.rst));
    bufp->chgBit(oldp+43,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->chgSData(oldp+44,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.angle),16);
    bufp->chgSData(oldp+45,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.cos),16);
    bufp->chgSData(oldp+46,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.sin),16);
    bufp->chgBit(oldp+47,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 48, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 65, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 82, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 99, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 116, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 133, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__0__KET____DOT__nth_cordic.valid_pipe);
    bufp->chgBit(oldp+150,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.clk));
    bufp->chgBit(oldp+151,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.rst));
    bufp->chgBit(oldp+152,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->chgSData(oldp+153,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.angle),16);
    bufp->chgSData(oldp+154,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.cos),16);
    bufp->chgSData(oldp+155,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.sin),16);
    bufp->chgBit(oldp+156,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 157, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 174, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 191, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 208, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 225, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 242, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__1__KET____DOT__nth_cordic.valid_pipe);
    bufp->chgBit(oldp+259,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.clk));
    bufp->chgBit(oldp+260,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.rst));
    bufp->chgBit(oldp+261,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->chgSData(oldp+262,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.angle),16);
    bufp->chgSData(oldp+263,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.cos),16);
    bufp->chgSData(oldp+264,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.sin),16);
    bufp->chgBit(oldp+265,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 266, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 283, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 300, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 317, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 334, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 351, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__2__KET____DOT__nth_cordic.valid_pipe);
    bufp->chgBit(oldp+368,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.clk));
    bufp->chgBit(oldp+369,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.rst));
    bufp->chgBit(oldp+370,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->chgSData(oldp+371,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.angle),16);
    bufp->chgSData(oldp+372,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.cos),16);
    bufp->chgSData(oldp+373,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.sin),16);
    bufp->chgBit(oldp+374,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 375, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 392, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 409, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 426, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 443, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 460, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__3__KET____DOT__nth_cordic.valid_pipe);
    bufp->chgBit(oldp+477,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.clk));
    bufp->chgBit(oldp+478,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.rst));
    bufp->chgBit(oldp+479,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->chgSData(oldp+480,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.angle),16);
    bufp->chgSData(oldp+481,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.cos),16);
    bufp->chgSData(oldp+482,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.sin),16);
    bufp->chgBit(oldp+483,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 484, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 501, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 518, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 535, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 552, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 569, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__4__KET____DOT__nth_cordic.valid_pipe);
    bufp->chgBit(oldp+586,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.clk));
    bufp->chgBit(oldp+587,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.rst));
    bufp->chgBit(oldp+588,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->chgSData(oldp+589,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.angle),16);
    bufp->chgSData(oldp+590,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.cos),16);
    bufp->chgSData(oldp+591,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.sin),16);
    bufp->chgBit(oldp+592,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 593, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 610, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 627, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 644, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 661, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 678, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__5__KET____DOT__nth_cordic.valid_pipe);
    bufp->chgBit(oldp+695,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.clk));
    bufp->chgBit(oldp+696,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.rst));
    bufp->chgBit(oldp+697,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->chgSData(oldp+698,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.angle),16);
    bufp->chgSData(oldp+699,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.cos),16);
    bufp->chgSData(oldp+700,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.sin),16);
    bufp->chgBit(oldp+701,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 702, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 719, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 736, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 753, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 770, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 787, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__6__KET____DOT__nth_cordic.valid_pipe);
    bufp->chgBit(oldp+804,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.clk));
    bufp->chgBit(oldp+805,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.rst));
    bufp->chgBit(oldp+806,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->chgSData(oldp+807,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.angle),16);
    bufp->chgSData(oldp+808,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.cos),16);
    bufp->chgSData(oldp+809,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.sin),16);
    bufp->chgBit(oldp+810,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 811, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 828, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 845, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 862, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 879, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 896, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__7__KET____DOT__nth_cordic.valid_pipe);
    bufp->chgBit(oldp+913,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.clk));
    bufp->chgBit(oldp+914,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.rst));
    bufp->chgBit(oldp+915,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->chgSData(oldp+916,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.angle),16);
    bufp->chgSData(oldp+917,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.cos),16);
    bufp->chgSData(oldp+918,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.sin),16);
    bufp->chgBit(oldp+919,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 920, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 937, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 954, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 971, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 988, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 1005, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__8__KET____DOT__nth_cordic.valid_pipe);
    bufp->chgBit(oldp+1022,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.clk));
    bufp->chgBit(oldp+1023,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.rst));
    bufp->chgBit(oldp+1024,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.data_angle_valid_in));
    bufp->chgSData(oldp+1025,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.angle),16);
    bufp->chgSData(oldp+1026,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.cos),16);
    bufp->chgSData(oldp+1027,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.sin),16);
    bufp->chgBit(oldp+1028,(vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.data_cossin_valid_out));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 1029, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_pipe);
    Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 1046, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.y_pipe);
    Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 1063, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.x_flip_pipe);
    Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 1080, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.total_angle_pipe);
    Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 1097, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.desired_angle_pipe);
    Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 1114, vlSymsp->TOP__harmonic_generator__DOT__genblk1__BRA__9__KET____DOT__nth_cordic.valid_pipe);
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
