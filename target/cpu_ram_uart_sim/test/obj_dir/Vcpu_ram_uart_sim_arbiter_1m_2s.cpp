// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_ram_uart_sim.h for the primary calling header

#include "Vcpu_ram_uart_sim_arbiter_1m_2s.h" // For This
#include "Vcpu_ram_uart_sim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu_ram_uart_sim_arbiter_1m_2s) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu_ram_uart_sim_arbiter_1m_2s::__Vconfigure(Vcpu_ram_uart_sim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu_ram_uart_sim_arbiter_1m_2s::~Vcpu_ram_uart_sim_arbiter_1m_2s() {
}

//--------------------
// Internal Methods

void Vcpu_ram_uart_sim_arbiter_1m_2s::_settle__TOP__tb_m68k_ram_uart__arbiter__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_arbiter_1m_2s::_settle__TOP__tb_m68k_ram_uart__arbiter__1\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s0_we_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_we_i;
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s1_we_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_we_i;
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s0_cyc_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_cyc_i;
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s1_cyc_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_cyc_i;
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s0_sel_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_sel_i;
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s1_sel_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_sel_i;
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s0_data_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_data_i;
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s1_data_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_data_i;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_arbiter_1m_2s::_combo__TOP__tb_m68k_ram_uart__arbiter__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_arbiter_1m_2s::_combo__TOP__tb_m68k_ram_uart__arbiter__2\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s0_we_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_we_i;
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s1_we_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_we_i;
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s0_cyc_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_cyc_i;
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s1_cyc_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_cyc_i;
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s0_sel_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_sel_i;
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s1_sel_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_sel_i;
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s0_data_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_data_i;
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s1_data_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_data_i;
}

void Vcpu_ram_uart_sim_arbiter_1m_2s::_settle__TOP__tb_m68k_ram_uart__arbiter__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_arbiter_1m_2s::_settle__TOP__tb_m68k_ram_uart__arbiter__3\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s1_addr_o 
	= VL_EXTEND_II(31,24, (0xffffffU & VL_SEL_IIII(24,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_addr_i, 0U, 0x18U)));
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s0_addr_o 
	= VL_EXTEND_II(31,24, (0xffffffU & VL_SEL_IIII(24,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_addr_i, 0U, 0x18U)));
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__cs 
	= (1U & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_addr_i, 0x18U));
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_arbiter_1m_2s::_combo__TOP__tb_m68k_ram_uart__arbiter__4(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_arbiter_1m_2s::_combo__TOP__tb_m68k_ram_uart__arbiter__4\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s1_addr_o 
	= VL_EXTEND_II(31,24, (0xffffffU & VL_SEL_IIII(24,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_addr_i, 0U, 0x18U)));
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s0_addr_o 
	= VL_EXTEND_II(31,24, (0xffffffU & VL_SEL_IIII(24,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_addr_i, 0U, 0x18U)));
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__cs 
	= (1U & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_addr_i, 0x18U));
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s0_stb_o 
	= ((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__cs)) 
	   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_stb_i));
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s1_stb_o 
	= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__cs) 
	   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_stb_i));
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_data_o 
	= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__cs)
	    ? vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s1_data_i
	    : vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s0_data_i);
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_ack_o 
	= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__cs)
	    ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s1_ack_i)
	    : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s0_ack_i));
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_err_o 
	= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__cs)
	    ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s1_err_i)
	    : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s0_err_i));
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_rty_o 
	= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__cs)
	    ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s1_rty_i)
	    : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s0_rty_i));
}

void Vcpu_ram_uart_sim_arbiter_1m_2s::_settle__TOP__tb_m68k_ram_uart__arbiter__5(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_arbiter_1m_2s::_settle__TOP__tb_m68k_ram_uart__arbiter__5\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s0_stb_o 
	= ((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__cs)) 
	   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_stb_i));
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s1_stb_o 
	= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__cs) 
	   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_stb_i));
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_data_o 
	= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__cs)
	    ? vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s1_data_i
	    : vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s0_data_i);
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_ack_o 
	= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__cs)
	    ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s1_ack_i)
	    : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s0_ack_i));
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_err_o 
	= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__cs)
	    ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s1_err_i)
	    : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s0_err_i));
    vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__m_rty_o 
	= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__cs)
	    ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s1_rty_i)
	    : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__arbiter.__PVT__s0_rty_i));
}

void Vcpu_ram_uart_sim_arbiter_1m_2s::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_arbiter_1m_2s::_ctor_var_reset\n"); );
    // Body
    __PVT__m_addr_i = VL_RAND_RESET_I(32);
    __PVT__m_data_i = VL_RAND_RESET_I(32);
    __PVT__m_data_o = VL_RAND_RESET_I(32);
    __PVT__m_cyc_i = VL_RAND_RESET_I(1);
    __PVT__m_sel_i = VL_RAND_RESET_I(4);
    __PVT__m_stb_i = VL_RAND_RESET_I(1);
    __PVT__m_we_i = VL_RAND_RESET_I(1);
    __PVT__m_ack_o = VL_RAND_RESET_I(1);
    __PVT__m_err_o = VL_RAND_RESET_I(1);
    __PVT__m_rty_o = VL_RAND_RESET_I(1);
    __PVT__s0_addr_o = VL_RAND_RESET_I(31);
    __PVT__s0_data_o = VL_RAND_RESET_I(32);
    __PVT__s0_data_i = VL_RAND_RESET_I(32);
    __PVT__s0_cyc_o = VL_RAND_RESET_I(1);
    __PVT__s0_sel_o = VL_RAND_RESET_I(4);
    __PVT__s0_stb_o = VL_RAND_RESET_I(1);
    __PVT__s0_we_o = VL_RAND_RESET_I(1);
    __PVT__s0_ack_i = VL_RAND_RESET_I(1);
    __PVT__s0_err_i = VL_RAND_RESET_I(1);
    __PVT__s0_rty_i = VL_RAND_RESET_I(1);
    __PVT__s1_addr_o = VL_RAND_RESET_I(31);
    __PVT__s1_data_o = VL_RAND_RESET_I(32);
    __PVT__s1_data_i = VL_RAND_RESET_I(32);
    __PVT__s1_cyc_o = VL_RAND_RESET_I(1);
    __PVT__s1_sel_o = VL_RAND_RESET_I(4);
    __PVT__s1_stb_o = VL_RAND_RESET_I(1);
    __PVT__s1_we_o = VL_RAND_RESET_I(1);
    __PVT__s1_ack_i = VL_RAND_RESET_I(1);
    __PVT__s1_err_i = VL_RAND_RESET_I(1);
    __PVT__s1_rty_i = VL_RAND_RESET_I(1);
    __PVT__cs = VL_RAND_RESET_I(1);
}

void Vcpu_ram_uart_sim_arbiter_1m_2s::_configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_arbiter_1m_2s::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
