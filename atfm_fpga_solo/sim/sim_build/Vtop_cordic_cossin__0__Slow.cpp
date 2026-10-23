// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop_cordic_cossin___ctor_var_reset(Vtop_cordic_cossin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_cordic_cossin___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->data_angle_valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2932225189765993384ull);
    vlSelf->angle = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10962942430735206434ull);
    vlSelf->cos = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1515110702408921923ull);
    vlSelf->sin = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10166670623385213170ull);
    vlSelf->data_cossin_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14667493262484236318ull);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->x_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2140231324972498098ull);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->y_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7136179519156744115ull);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->x_flip_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10084334735851589563ull);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->total_angle_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10821265151932438258ull);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->desired_angle_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15022846095092987293ull);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->valid_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8581557336889542214ull);
    }
}
