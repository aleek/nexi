// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_ram_uart_sim.h for the primary calling header

#include "Vcpu_ram_uart_sim_tb_m68k_ram_uart.h" // For This
#include "Vcpu_ram_uart_sim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu_ram_uart_sim_tb_m68k_ram_uart) {
    VL_CELL (ao68000_m, Vcpu_ram_uart_sim_ao68000);
    VL_CELL (wb_ram_m, Vcpu_ram_uart_sim_wb_ram__A18_S4);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu_ram_uart_sim_tb_m68k_ram_uart::__Vconfigure(Vcpu_ram_uart_sim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu_ram_uart_sim_tb_m68k_ram_uart::~Vcpu_ram_uart_sim_tb_m68k_ram_uart() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vcpu_ram_uart_sim_tb_m68k_ram_uart::_sequent__TOP__tb_m68k_ram_uart__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vcpu_ram_uart_sim_tb_m68k_ram_uart::_sequent__TOP__tb_m68k_ram_uart__1\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__rxstate 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__rxstate;
    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__txstate 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__txstate;
    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart_ack 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_ack;
    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__ier 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__ier;
    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__thr 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__thr;
    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__data_to_transmit 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__data_to_transmit;
    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__isr 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__isr;
    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__uart_clk__DOT__acc 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__uart_clk__DOT__acc;
    // ALWAYS at nexi_uart_16550a_wb.v:214
    if ((1U & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart.rst_n)))) {
	vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__isr = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__ier = 0U;
    }
    // ALWAYS at nexi_uart_clocks.v:13
    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__uart_clk__DOT__acc 
	= (1U & ((IData)(1U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__uart_clk__DOT__acc)));
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__uart_clk__DOT__acc 
	= vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__uart_clk__DOT__acc;
}

void Vcpu_ram_uart_sim_tb_m68k_ram_uart::_initial__TOP__tb_m68k_ram_uart__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vcpu_ram_uart_sim_tb_m68k_ram_uart::_initial__TOP__tb_m68k_ram_uart__2\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at nexi_uart_clocks.v:9
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__uart_clk__DOT__acc = 0U;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_tb_m68k_ram_uart::_sequent__TOP__tb_m68k_ram_uart__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vcpu_ram_uart_sim_tb_m68k_ram_uart::_sequent__TOP__tb_m68k_ram_uart__3\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__rxdone 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rxdone;
    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__start 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__start;
    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__cnt 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__cnt;
    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__bcnt 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__bcnt;
    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__rxdata 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rxdata;
    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__uart_clk__DOT__cnt 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__uart_clk__DOT__cnt;
    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__uart_clk__DOT__clk_1_16 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__uart_clk__DOT__clk_1_16;
    // ALWAYS at nexi_uart_rx.v:49
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if (vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rxdone) {
	    if (vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rd_ack_sync2) {
		vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__rxdone = 0U;
	    }
	}
	if ((((IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rx_m) 
	      & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rx_sync2))) 
	     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__start)))) {
	    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__start = 1U;
	    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__cnt = 0xfU;
	    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__bcnt = 0U;
	}
	if (vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__start) {
	    if ((0xbU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__cnt))) {
		vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__r3 
		    = vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rx_sync2;
	    }
	    if ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__cnt))) {
		vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__r2 
		    = vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rx_sync2;
	    }
	    if ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__cnt))) {
		vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__r1 
		    = vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rx_sync2;
	    }
	    if ((0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__cnt))) {
		vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__cnt 
		    = (0xfU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__cnt) 
			       - (IData)(1U)));
	    } else {
		vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__rxdata 
		    = (((IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rxbit) 
			<< 7U) | (0x7fU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rxdata) 
					   >> 1U)));
		vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__cnt = 0xfU;
		if ((8U > (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__bcnt))) {
		    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__bcnt 
			= (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__bcnt)));
		} else {
		    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__start = 0U;
		    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__rxdone = 1U;
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__rxdata = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__start = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__rxdone = 0U;
    }
    // ALWAYS at nexi_uart_clocks.v:20
    if ((7U > (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__uart_clk__DOT__cnt))) {
	vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__uart_clk__DOT__cnt 
	    = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__uart_clk__DOT__cnt)));
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__uart_clk__DOT__clk_1_16 
	    = (1U & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__uart_clk__DOT__clk_1_16)));
	vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__uart_clk__DOT__cnt = 0U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__start 
	= vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__start;
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__cnt 
	= vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__cnt;
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__bcnt 
	= vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__bcnt;
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__uart_clk__DOT__cnt 
	= vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__uart_clk__DOT__cnt;
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__uart_clk__DOT__clk_1_16 
	= vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__uart_clk__DOT__clk_1_16;
    // ALWAYS at nexi_uart_rx.v:23
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rxbit 
	= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__r1)
	    ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__r2) 
	       | (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__r3))
	    : ((IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__r2) 
	       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__r3)));
    // ALWAYS at nexi_uart_rx.v:46
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rd_ack_sync2 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rd_ack_sync1;
    // ALWAYS at nexi_uart_rx.v:44
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rx_m 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rx_sync2;
    // ALWAYS at nexi_uart_rx.v:45
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rd_ack_sync1 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__rx_done_ack;
    // ALWAYS at nexi_uart_rx.v:43
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rx_sync2 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rx_sync1;
    // ALWAYS at nexi_uart_rx.v:42
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rx_sync1 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__tx_r;
}

void Vcpu_ram_uart_sim_tb_m68k_ram_uart::_initial__TOP__tb_m68k_ram_uart__4(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vcpu_ram_uart_sim_tb_m68k_ram_uart::_initial__TOP__tb_m68k_ram_uart__4\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at nexi_uart_clocks.v:10
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__uart_clk__DOT__cnt = 0U;
    // INITIAL at nexi_uart_clocks.v:11
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__uart_clk__DOT__clk_1_16 = 0U;
}

void Vcpu_ram_uart_sim_tb_m68k_ram_uart::_settle__TOP__tb_m68k_ram_uart__5(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vcpu_ram_uart_sim_tb_m68k_ram_uart::_settle__TOP__tb_m68k_ram_uart__5\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at nexi_uart_rx.v:23
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rxbit 
	= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__r1)
	    ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__r2) 
	       | (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__r3))
	    : ((IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__r2) 
	       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__r3)));
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_tb_m68k_ram_uart::_sequent__TOP__tb_m68k_ram_uart__6(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vcpu_ram_uart_sim_tb_m68k_ram_uart::_sequent__TOP__tb_m68k_ram_uart__6\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at nexi_uart_16550a_wb.v:82
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__CYC_O) 
	      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_stb)) 
	     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_ack)))) {
	    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__WE_O) {
		if ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SEL_O))) {
		    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__thr 
			= (0xffU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__DAT_O 
				    >> 0x10U));
		    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__data_to_transmit = 1U;
		} else {
		    if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SEL_O))) {
			vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__ier 
			    = (0xffU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__DAT_O 
					>> 8U));
		    }
		}
	    }
	    if ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SEL_O))) {
		vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out 
		    = ((IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__rbr) 
		       << 0x18U);
	    } else {
		if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SEL_O))) {
		    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out 
			= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__isr;
		    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__isr = 0U;
		}
	    }
	    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart_ack = 1U;
	}
	if ((((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__CYC_O)) 
	      & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_stb))) 
	     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_ack))) {
	    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart_ack = 0U;
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart_ack = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out = 0U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_ack 
	= vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart_ack;
    // ALWAYS at nexi_uart_16550a_wb.v:184
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__rxstate))) {
	    if (vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rxdone) {
		vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__isr 
		    = ((IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__isr) 
		       | (2U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__ier)));
		vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__rbr 
		    = vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rxdata;
		vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__rx_done_ack = 1U;
		vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__rxstate = 1U;
	    }
	} else {
	    if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__rxstate))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rxdone)))) {
		    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__rx_done_ack = 0U;
		    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__rxstate = 0U;
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__rx_done_ack = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__rxstate = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__rbr = 0U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__rxstate 
	= vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__rxstate;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_tb_m68k_ram_uart::_sequent__TOP__tb_m68k_ram_uart__7(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vcpu_ram_uart_sim_tb_m68k_ram_uart::_sequent__TOP__tb_m68k_ram_uart__7\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr = 
	(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ADR_O 
	 << 2U);
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_tb_m68k_ram_uart::_sequent__TOP__tb_m68k_ram_uart__8(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vcpu_ram_uart_sim_tb_m68k_ram_uart::_sequent__TOP__tb_m68k_ram_uart__8\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_tx_instance__DOT__done_r 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__done_r;
    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_tx_instance__DOT__tx_data 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__tx_data;
    // ALWAYS at nexi_uart_tx.v:28
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if (((IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__send_cmd) 
	     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__done_r))) {
	    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_tx_instance__DOT__done_r = 0U;
	    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__cnt = 0U;
	    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__tx_r = 0U;
	    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_tx_instance__DOT__tx_data 
		= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__thr;
	} else {
	    if ((1U & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__done_r)))) {
		vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__cnt 
		    = vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__ncnt;
		if ((9U > (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__ncnt))) {
		    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__tx_r 
			= (1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__tx_data));
		    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_tx_instance__DOT__tx_data 
			= ((0x80U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__tx_data) 
				     << 7U)) | (0x7fU 
						& ((IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__tx_data) 
						   >> 1U)));
		} else {
		    if ((9U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__ncnt))) {
			vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__tx_r = 1U;
		    } else {
			vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_tx_instance__DOT__done_r = 1U;
		    }
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_tx_instance__DOT__done_r = 1U;
	vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__tx_r = 1U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__tx_data 
	= vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_tx_instance__DOT__tx_data;
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__ncnt 
	= (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__cnt)));
    // ALWAYS at nexi_uart_tx.v:25
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__send_cmd 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__send_cmd_tmp;
    // ALWAYS at nexi_uart_tx.v:24
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__send_cmd_tmp 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__command_send;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_tb_m68k_ram_uart::_sequent__TOP__tb_m68k_ram_uart__9(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vcpu_ram_uart_sim_tb_m68k_ram_uart::_sequent__TOP__tb_m68k_ram_uart__9\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rxdone 
	= vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__rxdone;
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rxdata 
	= vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__rxdata;
}

void Vcpu_ram_uart_sim_tb_m68k_ram_uart::_initial__TOP__tb_m68k_ram_uart__10(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vcpu_ram_uart_sim_tb_m68k_ram_uart::_initial__TOP__tb_m68k_ram_uart__10\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp1,127,0,4);
    // Body
    // INITIAL at cpu_ram_uart_sim.v:165
    __Vtemp1[0U] = 0x766d656dU;
    __Vtemp1[1U] = 0x6e75782eU;
    __Vtemp1[2U] = 0x386b6c69U;
    __Vtemp1[3U] = 0x2e2f6d36U;
    VL_READMEM_W (true,32,4194304, 0,4, __Vtemp1, vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.mem
		  ,0,~0);
}

void Vcpu_ram_uart_sim_tb_m68k_ram_uart::_settle__TOP__tb_m68k_ram_uart__11(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vcpu_ram_uart_sim_tb_m68k_ram_uart::_settle__TOP__tb_m68k_ram_uart__11\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr = 
	(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ADR_O 
	 << 2U);
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__ncnt 
	= (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__cnt)));
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ram_addr 
	= ((0x80000000U & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ram_addr) 
	   | (0xffffffU & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr));
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_stb 
	= ((vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr 
	    >> 0x18U) & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__STB_O));
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_tb_m68k_ram_uart::_sequent__TOP__tb_m68k_ram_uart__12(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vcpu_ram_uart_sim_tb_m68k_ram_uart::_sequent__TOP__tb_m68k_ram_uart__12\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at nexi_uart_16550a_wb.v:127
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((8U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__txstate))) {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__txstate) 
			  >> 2U)))) {
		if ((1U & (~ ((IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__txstate) 
			      >> 1U)))) {
		    if ((1U & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__txstate)))) {
			if (vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__done_r) {
			    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__isr 
				= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__isr) 
				   | (1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__ier)));
			    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__thr = 0U;
			    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__data_to_transmit = 0U;
			    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__txstate = 1U;
			}
		    }
		}
	    }
	} else {
	    if ((4U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__txstate))) {
		if ((1U & (~ ((IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__txstate) 
			      >> 1U)))) {
		    if ((1U & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__txstate)))) {
			if (vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__done_r) {
			    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__txstate = 8U;
			}
		    }
		}
	    } else {
		if ((2U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__txstate))) {
		    if ((1U & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__txstate)))) {
			if ((1U & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__done_r)))) {
			    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__command_send = 0U;
			    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__txstate = 4U;
			}
		    }
		} else {
		    if ((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__txstate))) {
			if (VL_UNLIKELY(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__data_to_transmit)) {
			    VL_WRITEF("%c",8,vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__thr);
			    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__command_send = 1U;
			    vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__txstate = 2U;
			}
		    }
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__data_to_transmit = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__txstate = 1U;
	vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__thr = 0U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__txstate 
	= vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__txstate;
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__data_to_transmit 
	= vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__data_to_transmit;
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__ier 
	= vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__ier;
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__thr 
	= vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__thr;
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__isr 
	= vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__isr;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_tb_m68k_ram_uart::_sequent__TOP__tb_m68k_ram_uart__13(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vcpu_ram_uart_sim_tb_m68k_ram_uart::_sequent__TOP__tb_m68k_ram_uart__13\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ram_addr 
	= ((0x80000000U & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ram_addr) 
	   | (0xffffffU & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr));
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_stb 
	= ((vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr 
	    >> 0x18U) & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__STB_O));
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_tb_m68k_ram_uart::_sequent__TOP__tb_m68k_ram_uart__14(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vcpu_ram_uart_sim_tb_m68k_ram_uart::_sequent__TOP__tb_m68k_ram_uart__14\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__done_r 
	= vlSymsp->TOP__tb_m68k_ram_uart.__Vdly__uart1__DOT__nexi_uart_tx_instance__DOT__done_r;
}

void Vcpu_ram_uart_sim_tb_m68k_ram_uart::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("      Vcpu_ram_uart_sim_tb_m68k_ram_uart::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst_n = VL_RAND_RESET_I(1);
    __PVT__ao_addr = VL_RAND_RESET_I(32);
    __PVT__ram_addr = VL_RAND_RESET_I(32);
    __PVT__uart_data_out = VL_RAND_RESET_I(32);
    __PVT__uart_stb = VL_RAND_RESET_I(1);
    __PVT__uart_ack = VL_RAND_RESET_I(1);
    __PVT__uart1__DOT__rbr = VL_RAND_RESET_I(8);
    __PVT__uart1__DOT__thr = VL_RAND_RESET_I(8);
    __PVT__uart1__DOT__ier = VL_RAND_RESET_I(8);
    __PVT__uart1__DOT__isr = VL_RAND_RESET_I(8);
    __PVT__uart1__DOT__data_to_transmit = VL_RAND_RESET_I(1);
    __PVT__uart1__DOT__command_send = VL_RAND_RESET_I(1);
    __PVT__uart1__DOT__txstate = VL_RAND_RESET_I(4);
    __PVT__uart1__DOT__rxstate = VL_RAND_RESET_I(2);
    __PVT__uart1__DOT__rx_done_ack = VL_RAND_RESET_I(1);
    __PVT__uart1__DOT__uart_clk__DOT__acc = VL_RAND_RESET_I(1);
    __PVT__uart1__DOT__uart_clk__DOT__cnt = VL_RAND_RESET_I(4);
    __PVT__uart1__DOT__uart_clk__DOT__clk_1_16 = VL_RAND_RESET_I(1);
    __PVT__uart1__DOT__nexi_uart_tx_instance__DOT__tx_r = VL_RAND_RESET_I(1);
    __PVT__uart1__DOT__nexi_uart_tx_instance__DOT__done_r = VL_RAND_RESET_I(1);
    __PVT__uart1__DOT__nexi_uart_tx_instance__DOT__cnt = VL_RAND_RESET_I(4);
    __PVT__uart1__DOT__nexi_uart_tx_instance__DOT__ncnt = VL_RAND_RESET_I(4);
    __PVT__uart1__DOT__nexi_uart_tx_instance__DOT__tx_data = VL_RAND_RESET_I(8);
    __PVT__uart1__DOT__nexi_uart_tx_instance__DOT__send_cmd = VL_RAND_RESET_I(1);
    __PVT__uart1__DOT__nexi_uart_tx_instance__DOT__send_cmd_tmp = VL_RAND_RESET_I(1);
    __PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rxdata = VL_RAND_RESET_I(8);
    __PVT__uart1__DOT__nexi_uart_rx_instance__DOT__cnt = VL_RAND_RESET_I(4);
    __PVT__uart1__DOT__nexi_uart_rx_instance__DOT__r1 = VL_RAND_RESET_I(1);
    __PVT__uart1__DOT__nexi_uart_rx_instance__DOT__r2 = VL_RAND_RESET_I(1);
    __PVT__uart1__DOT__nexi_uart_rx_instance__DOT__r3 = VL_RAND_RESET_I(1);
    __PVT__uart1__DOT__nexi_uart_rx_instance__DOT__start = VL_RAND_RESET_I(1);
    __PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rxbit = VL_RAND_RESET_I(1);
    __PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rxdone = VL_RAND_RESET_I(1);
    __PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rx_sync1 = VL_RAND_RESET_I(1);
    __PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rx_sync2 = VL_RAND_RESET_I(1);
    __PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rx_m = VL_RAND_RESET_I(1);
    __PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rd_ack_sync1 = VL_RAND_RESET_I(1);
    __PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rd_ack_sync2 = VL_RAND_RESET_I(1);
    __PVT__uart1__DOT__nexi_uart_rx_instance__DOT__bcnt = VL_RAND_RESET_I(4);
    __PVT__arbiter__DOT__s0_err_i = VL_RAND_RESET_I(1);
    __PVT__arbiter__DOT__s0_rty_i = VL_RAND_RESET_I(1);
    __PVT__arbiter__DOT__s1_err_i = VL_RAND_RESET_I(1);
    __PVT__arbiter__DOT__s1_rty_i = VL_RAND_RESET_I(1);
    __Vdly__uart1__DOT__thr = VL_RAND_RESET_I(8);
    __Vdly__uart1__DOT__data_to_transmit = VL_RAND_RESET_I(1);
    __Vdly__uart1__DOT__ier = VL_RAND_RESET_I(8);
    __Vdly__uart1__DOT__isr = VL_RAND_RESET_I(8);
    __Vdly__uart_ack = VL_RAND_RESET_I(1);
    __Vdly__uart1__DOT__txstate = VL_RAND_RESET_I(4);
    __Vdly__uart1__DOT__rxstate = VL_RAND_RESET_I(2);
    __Vdly__uart1__DOT__uart_clk__DOT__acc = VL_RAND_RESET_I(1);
    __Vdly__uart1__DOT__uart_clk__DOT__cnt = VL_RAND_RESET_I(4);
    __Vdly__uart1__DOT__uart_clk__DOT__clk_1_16 = VL_RAND_RESET_I(1);
    __Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__rxdone = VL_RAND_RESET_I(1);
    __Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__start = VL_RAND_RESET_I(1);
    __Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__cnt = VL_RAND_RESET_I(4);
    __Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__bcnt = VL_RAND_RESET_I(4);
    __Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__rxdata = VL_RAND_RESET_I(8);
    __Vdly__uart1__DOT__nexi_uart_tx_instance__DOT__done_r = VL_RAND_RESET_I(1);
    __Vdly__uart1__DOT__nexi_uart_tx_instance__DOT__tx_data = VL_RAND_RESET_I(8);
}

void Vcpu_ram_uart_sim_tb_m68k_ram_uart::_configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("      Vcpu_ram_uart_sim_tb_m68k_ram_uart::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
