// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_ram_uart_sim.h for the primary calling header

#include "Vcpu_ram_uart_sim_nexi_uart_rx.h" // For This
#include "Vcpu_ram_uart_sim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu_ram_uart_sim_nexi_uart_rx) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu_ram_uart_sim_nexi_uart_rx::__Vconfigure(Vcpu_ram_uart_sim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu_ram_uart_sim_nexi_uart_rx::~Vcpu_ram_uart_sim_nexi_uart_rx() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vcpu_ram_uart_sim_nexi_uart_rx::_sequent__TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_nexi_uart_rx::_sequent__TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance__1\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rx_sync1 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rx_sync1;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rx_sync2 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rx_sync2;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rd_ack_sync1 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rd_ack_sync1;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__start 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__start;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__cnt 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__cnt;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__bcnt 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__bcnt;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__r3 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__r2 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__r1 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rxdone 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rxdone;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rxdata 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rxdata;
    // ALWAYS at nexi_uart_rx.v:49
    if (vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rst_n) {
	if (vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rxdone) {
	    if (vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rd_ack_sync2) {
		vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rxdone = 0U;
	    }
	}
	if ((((IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rx_m) 
	      & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rx_sync2))) 
	     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__start)))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__start = 1U;
	    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__cnt = 0xfU;
	    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__bcnt = 0U;
	}
	if (vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__start) {
	    if ((0xbU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__cnt))) {
		vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__r3 
		    = vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rx_sync2;
	    }
	    if ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__cnt))) {
		vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__r2 
		    = vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rx_sync2;
	    }
	    if ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__cnt))) {
		vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__r1 
		    = vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rx_sync2;
	    }
	    if ((0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__cnt))) {
		vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__cnt 
		    = (0xfU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__cnt) 
			       - (IData)(1U)));
	    } else {
		vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__cnt = 0xfU;
		vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rxdata 
		    = VL_CONCAT_III(8,1,7, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rxbit), 
				    (0x7fU & VL_SEL_IIII(7,8,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rxdata), 1U, 7U)));
		if ((8U > (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__bcnt))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__bcnt 
			= (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__bcnt)));
		} else {
		    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__start = 0U;
		    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rxdone = 1U;
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__start = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rxdone = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rxdata = 0U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__start 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__start;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__cnt 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__cnt;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__bcnt 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__bcnt;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__r3;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__r2;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__r1;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rxdone 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rxdone;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rxdata 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rxdata;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rd_ack_sync2 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rd_ack_sync2;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rx_m 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rx_m;
    // ALWAYS at nexi_uart_rx.v:23
    if (((((((((0U == VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
				    VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3)))) 
	       | (1U == VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
				      VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3))))) 
	      | (2U == VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
				     VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3))))) 
	     | (3U == VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
				    VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3))))) 
	    | (4U == VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
				   VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3))))) 
	   | (5U == VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
				  VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3))))) 
	  | (6U == VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
				 VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3))))) 
	 | (7U == VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
				VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3)))))) {
	vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rxbit 
	    = ((0U != VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
				    VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3)))) 
	       & ((1U != VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
				       VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3)))) 
		  & ((2U != VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
					  VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3)))) 
		     & ((3U == VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
					     VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3)))) 
			| (4U != VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
					       VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3))))))));
    }
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__data_ready 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rxdone;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__data 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rxdata;
    // ALWAYS at nexi_uart_rx.v:40
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rx_sync1 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rx_pin;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rx_sync2 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rx_sync1;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rx_m 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rx_sync2;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rd_ack_sync1 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__read_ack;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rd_ack_sync2 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rd_ack_sync1;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rx_sync1 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rx_sync1;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rd_ack_sync1 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rd_ack_sync1;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rx_sync2 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rx_sync2;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rx_m 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rx_m;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rd_ack_sync2 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__Vdly__rd_ack_sync2;
}

void Vcpu_ram_uart_sim_nexi_uart_rx::_settle__TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_nexi_uart_rx::_settle__TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance__2\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at nexi_uart_rx.v:23
    if (((((((((0U == VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
				    VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3)))) 
	       | (1U == VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
				      VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3))))) 
	      | (2U == VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
				     VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3))))) 
	     | (3U == VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
				    VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3))))) 
	    | (4U == VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
				   VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3))))) 
	   | (5U == VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
				  VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3))))) 
	  | (6U == VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
				 VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3))))) 
	 | (7U == VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
				VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3)))))) {
	vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rxbit 
	    = ((0U != VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
				    VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3)))) 
	       & ((1U != VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
				       VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3)))) 
		  & ((2U != VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
					  VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3)))) 
		     & ((3U == VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
					     VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3)))) 
			| (4U != VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r1), 
					       VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r2), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__r3))))))));
    }
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__data_ready 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rxdone;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__data 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rxdata;
}

void Vcpu_ram_uart_sim_nexi_uart_rx::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_nexi_uart_rx::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_16x_bps = VL_RAND_RESET_I(1);
    __PVT__rst_n = VL_RAND_RESET_I(1);
    __PVT__rx_pin = VL_RAND_RESET_I(1);
    __PVT__read_ack = VL_RAND_RESET_I(1);
    __PVT__data = VL_RAND_RESET_I(8);
    __PVT__data_ready = VL_RAND_RESET_I(1);
    __PVT__rxdata = VL_RAND_RESET_I(8);
    __PVT__cnt = VL_RAND_RESET_I(4);
    __PVT__r1 = VL_RAND_RESET_I(1);
    __PVT__r2 = VL_RAND_RESET_I(1);
    __PVT__r3 = VL_RAND_RESET_I(1);
    __PVT__start = VL_RAND_RESET_I(1);
    __PVT__rxbit = VL_RAND_RESET_I(1);
    __PVT__rxdone = VL_RAND_RESET_I(1);
    __PVT__rx_sync1 = VL_RAND_RESET_I(1);
    __PVT__rx_sync2 = VL_RAND_RESET_I(1);
    __PVT__rx_m = VL_RAND_RESET_I(1);
    __PVT__rd_ack_sync1 = VL_RAND_RESET_I(1);
    __PVT__rd_ack_sync2 = VL_RAND_RESET_I(1);
    __PVT__bcnt = VL_RAND_RESET_I(4);
    __Vdly__rx_sync1 = VL_RAND_RESET_I(1);
    __Vdly__rx_sync2 = VL_RAND_RESET_I(1);
    __Vdly__rx_m = VL_RAND_RESET_I(1);
    __Vdly__rd_ack_sync1 = VL_RAND_RESET_I(1);
    __Vdly__rd_ack_sync2 = VL_RAND_RESET_I(1);
    __Vdly__rxdone = VL_RAND_RESET_I(1);
    __Vdly__start = VL_RAND_RESET_I(1);
    __Vdly__cnt = VL_RAND_RESET_I(4);
    __Vdly__bcnt = VL_RAND_RESET_I(4);
    __Vdly__r3 = VL_RAND_RESET_I(1);
    __Vdly__r2 = VL_RAND_RESET_I(1);
    __Vdly__r1 = VL_RAND_RESET_I(1);
    __Vdly__rxdata = VL_RAND_RESET_I(8);
}

void Vcpu_ram_uart_sim_nexi_uart_rx::_configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_nexi_uart_rx::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
