// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_ram_uart_sim.h for the primary calling header

#include "Vcpu_ram_uart_sim_nexi_uart_tx.h" // For This
#include "Vcpu_ram_uart_sim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu_ram_uart_sim_nexi_uart_tx) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu_ram_uart_sim_nexi_uart_tx::__Vconfigure(Vcpu_ram_uart_sim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu_ram_uart_sim_nexi_uart_tx::~Vcpu_ram_uart_sim_nexi_uart_tx() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vcpu_ram_uart_sim_nexi_uart_tx::_sequent__TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_nexi_uart_tx::_sequent__TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance__1\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__send_cmd_tmp 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__send_cmd_tmp;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__tx_data 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__tx_data;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__cnt 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__cnt;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__done_r 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__done_r;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__tx_r 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__tx_r;
    // ALWAYS at nexi_uart_tx.v:28
    if (vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__rst_n) {
	if (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__send_cmd) 
	     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__done_r))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__done_r = 0U;
	    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__cnt = 0U;
	    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__tx_r = 0U;
	    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__tx_data 
		= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__data;
	} else {
	    if ((1U & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__done_r)))) {
		vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__cnt 
		    = vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__ncnt;
		if ((9U > (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__ncnt))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__tx_r 
			= (1U & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__tx_data), 0U));
		    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__tx_data 
			= VL_CONCAT_III(8,1,7, (1U 
						& VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__tx_data), 0U)), 
					(0x7fU & VL_SEL_IIII(7,8,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__tx_data), 1U, 7U)));
		} else {
		    if ((9U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__ncnt))) {
			vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__tx_r = 1U;
		    } else {
			vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__done_r = 1U;
		    }
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__done_r = 1U;
	vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__tx_r = 1U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__tx_data 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__tx_data;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__cnt 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__cnt;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__done_r 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__done_r;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__send_cmd 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__send_cmd;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__tx_r 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__tx_r;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__ncnt 
	= (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__cnt)));
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__done_ack 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__done_r;
    // ALWAYS at nexi_uart_tx.v:22
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__send_cmd_tmp 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__command_send;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__send_cmd 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__send_cmd_tmp;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__tx_pin 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__tx_r;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__send_cmd_tmp 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__send_cmd_tmp;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__send_cmd 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__Vdly__send_cmd;
}

void Vcpu_ram_uart_sim_nexi_uart_tx::_settle__TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_nexi_uart_tx::_settle__TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance__2\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__ncnt 
	= (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__cnt)));
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__done_ack 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__done_r;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__tx_pin 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__tx_r;
}

void Vcpu_ram_uart_sim_nexi_uart_tx::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_nexi_uart_tx::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_1x_bps = VL_RAND_RESET_I(1);
    __PVT__rst_n = VL_RAND_RESET_I(1);
    __PVT__command_send = VL_RAND_RESET_I(1);
    __PVT__tx_pin = VL_RAND_RESET_I(1);
    __PVT__done_ack = VL_RAND_RESET_I(1);
    __PVT__data = VL_RAND_RESET_I(8);
    __PVT__tx_r = VL_RAND_RESET_I(1);
    __PVT__done_r = VL_RAND_RESET_I(1);
    __PVT__cnt = VL_RAND_RESET_I(4);
    __PVT__ncnt = VL_RAND_RESET_I(4);
    __PVT__tx_data = VL_RAND_RESET_I(8);
    __PVT__send_cmd = VL_RAND_RESET_I(1);
    __PVT__send_cmd_tmp = VL_RAND_RESET_I(1);
    __Vdly__send_cmd_tmp = VL_RAND_RESET_I(1);
    __Vdly__send_cmd = VL_RAND_RESET_I(1);
    __Vdly__done_r = VL_RAND_RESET_I(1);
    __Vdly__cnt = VL_RAND_RESET_I(4);
    __Vdly__tx_r = VL_RAND_RESET_I(1);
    __Vdly__tx_data = VL_RAND_RESET_I(8);
}

void Vcpu_ram_uart_sim_nexi_uart_tx::_configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_nexi_uart_tx::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
