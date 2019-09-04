// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_ram_uart_sim.h for the primary calling header

#include "Vcpu_ram_uart_sim_nexi_uart_clocks.h" // For This
#include "Vcpu_ram_uart_sim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu_ram_uart_sim_nexi_uart_clocks) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu_ram_uart_sim_nexi_uart_clocks::__Vconfigure(Vcpu_ram_uart_sim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu_ram_uart_sim_nexi_uart_clocks::~Vcpu_ram_uart_sim_nexi_uart_clocks() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vcpu_ram_uart_sim_nexi_uart_clocks::_sequent__TOP__tb_m68k_ram_uart__uart1__uart_clk__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_nexi_uart_clocks::_sequent__TOP__tb_m68k_ram_uart__uart1__uart_clk__1\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__Vdly__acc 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__acc;
    // ALWAYS at nexi_uart_clocks.v:13
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__Vdly__acc 
	= (1U & ((IData)(1U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__acc)));
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__acc 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__Vdly__acc;
}

void Vcpu_ram_uart_sim_nexi_uart_clocks::_initial__TOP__tb_m68k_ram_uart__uart1__uart_clk__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_nexi_uart_clocks::_initial__TOP__tb_m68k_ram_uart__uart1__uart_clk__2\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at nexi_uart_clocks.v:9
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__acc = 0U;
}

void Vcpu_ram_uart_sim_nexi_uart_clocks::_settle__TOP__tb_m68k_ram_uart__uart1__uart_clk__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_nexi_uart_clocks::_settle__TOP__tb_m68k_ram_uart__uart1__uart_clk__3\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__clk_rx 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__acc;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_nexi_uart_clocks::_sequent__TOP__tb_m68k_ram_uart__uart1__uart_clk__4(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_nexi_uart_clocks::_sequent__TOP__tb_m68k_ram_uart__uart1__uart_clk__4\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__clk_rx 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__acc;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_nexi_uart_clocks::_sequent__TOP__tb_m68k_ram_uart__uart1__uart_clk__5(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_nexi_uart_clocks::_sequent__TOP__tb_m68k_ram_uart__uart1__uart_clk__5\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__Vdly__cnt 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__cnt;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__Vdly__clk_1_16 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__clk_1_16;
    // ALWAYS at nexi_uart_clocks.v:20
    if ((7U > (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__cnt))) {
	vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__Vdly__cnt 
	    = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__cnt)));
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__Vdly__cnt = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__Vdly__clk_1_16 
	    = (1U & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__clk_1_16)));
    }
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__cnt 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__Vdly__cnt;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__clk_1_16 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__Vdly__clk_1_16;
}

void Vcpu_ram_uart_sim_nexi_uart_clocks::_initial__TOP__tb_m68k_ram_uart__uart1__uart_clk__6(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_nexi_uart_clocks::_initial__TOP__tb_m68k_ram_uart__uart1__uart_clk__6\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at nexi_uart_clocks.v:10
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__cnt = 0U;
    // INITIAL at nexi_uart_clocks.v:11
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__clk_1_16 = 0U;
}

void Vcpu_ram_uart_sim_nexi_uart_clocks::_settle__TOP__tb_m68k_ram_uart__uart1__uart_clk__7(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_nexi_uart_clocks::_settle__TOP__tb_m68k_ram_uart__uart1__uart_clk__7\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__clk_tx 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__clk_1_16;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_nexi_uart_clocks::_sequent__TOP__tb_m68k_ram_uart__uart1__uart_clk__8(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_nexi_uart_clocks::_sequent__TOP__tb_m68k_ram_uart__uart1__uart_clk__8\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__clk_tx 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__clk_1_16;
}

void Vcpu_ram_uart_sim_nexi_uart_clocks::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_nexi_uart_clocks::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__clk_tx = VL_RAND_RESET_I(1);
    __PVT__clk_rx = VL_RAND_RESET_I(1);
    __PVT__acc = VL_RAND_RESET_I(1);
    __PVT__cnt = VL_RAND_RESET_I(4);
    __PVT__clk_1_16 = VL_RAND_RESET_I(1);
    __Vdly__acc = VL_RAND_RESET_I(1);
    __Vdly__cnt = VL_RAND_RESET_I(4);
    __Vdly__clk_1_16 = VL_RAND_RESET_I(1);
}

void Vcpu_ram_uart_sim_nexi_uart_clocks::_configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_nexi_uart_clocks::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
