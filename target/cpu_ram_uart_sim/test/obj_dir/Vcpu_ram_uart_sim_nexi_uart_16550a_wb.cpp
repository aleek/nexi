// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_ram_uart_sim.h for the primary calling header

#include "Vcpu_ram_uart_sim_nexi_uart_16550a_wb.h" // For This
#include "Vcpu_ram_uart_sim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu_ram_uart_sim_nexi_uart_16550a_wb) {
    VL_CELL (__PVT__uart_clk, Vcpu_ram_uart_sim_nexi_uart_clocks);
    VL_CELL (__PVT__nexi_uart_tx_instance, Vcpu_ram_uart_sim_nexi_uart_tx);
    VL_CELL (__PVT__nexi_uart_rx_instance, Vcpu_ram_uart_sim_nexi_uart_rx);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::__Vconfigure(Vcpu_ram_uart_sim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu_ram_uart_sim_nexi_uart_16550a_wb::~Vcpu_ram_uart_sim_nexi_uart_16550a_wb() {
}

//--------------------
// Internal Methods

void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_settle__TOP__tb_m68k_ram_uart__uart1__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_settle__TOP__tb_m68k_ram_uart__uart1__1\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__clk 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__clk_i;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_combo__TOP__tb_m68k_ram_uart__uart1__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_combo__TOP__tb_m68k_ram_uart__uart1__2\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__clk 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__clk_i;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_sequent__TOP__tb_m68k_ram_uart__uart1__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_sequent__TOP__tb_m68k_ram_uart__uart1__3\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__irq_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__irq_o;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__rxstate 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rxstate;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__rx_done_ack 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rx_done_ack;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__txstate 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__txstate;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__command_send 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__command_send;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__ier 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__ier;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__data_to_transmit 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__data_to_transmit;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__thr 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__thr;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__isr 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__isr;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__ack_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__ack_o;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__data_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__data_o;
    // ALWAYS at nexi_uart_16550a_wb.v:214
    if (vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rst_ni) {
	vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__irq_o 
	    = (0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__isr));
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__isr = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__ier = 0U;
    }
    // ALWAYS at nexi_uart_16550a_wb.v:127
    if (vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rst_ni) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__txstate))) {
	    if (VL_UNLIKELY(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__data_to_transmit)) {
		VL_WRITEF("%c",8,vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__thr);
		vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__command_send = 1U;
		vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__txstate = 2U;
	    }
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__txstate))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__tx_done_ack)))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__command_send = 0U;
		    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__txstate = 4U;
		}
	    } else {
		if ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__txstate))) {
		    if (vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__tx_done_ack) {
			vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__txstate = 8U;
		    }
		} else {
		    if ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__txstate))) {
			if (vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__tx_done_ack) {
			    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__thr = 0U;
			    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__isr 
				= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__isr) 
				   | (1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__ier)));
			    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__data_to_transmit = 0U;
			    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__txstate = 1U;
			}
		    }
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__data_to_transmit = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__txstate = 1U;
	vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__thr = 0U;
    }
    // ALWAYS at nexi_uart_16550a_wb.v:82
    if (vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rst_ni) {
	if ((((IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__cyc_i) 
	      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__stb_i)) 
	     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__ack_o)))) {
	    if (vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__we_i) {
		if ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__sel_i))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__thr 
			= (0xffU & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__data_i, 0x10U, 8U));
		    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__data_to_transmit = 1U;
		} else {
		    if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__sel_i))) {
			vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__ier 
			    = (0xffU & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__data_i, 8U, 8U));
		    }
		}
	    }
	    if ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__sel_i))) {
		vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__data_o 
		    = VL_CONCAT_III(32,8,24, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rbr), 0U);
	    } else {
		if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__sel_i))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__data_o 
			= VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__isr));
		    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__isr = 0U;
		}
	    }
	    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__ack_o = 1U;
	}
	if ((((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__cyc_i)) 
	      & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__stb_i))) 
	     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__ack_o))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__ack_o = 0U;
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__ack_o = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__data_o = 0U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__irq_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__irq_o;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__txstate 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__txstate;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__command_send 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__command_send;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__data_to_transmit 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__data_to_transmit;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__thr 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__thr;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__rbr 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rbr;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__ack_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__ack_o;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__data_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__data_o;
    // ALWAYS at nexi_uart_16550a_wb.v:184
    if (vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rst_ni) {
	if ((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rxstate))) {
	    if (vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rx_data_ready) {
		vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__rbr 
		    = vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rx_data_buf;
		vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__rx_done_ack = 1U;
		vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__rxstate = 1U;
		vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__isr 
		    = ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__isr) 
		       | (2U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__ier)));
	    }
	} else {
	    if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rxstate))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rx_data_ready)))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__rx_done_ack = 0U;
		    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__rxstate = 0U;
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__rx_done_ack = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__rxstate = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__rbr = 0U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rxstate 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__rxstate;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rbr 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__rbr;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__ier 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__ier;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__isr 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__isr;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rx_done_ack 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__Vdly__rx_done_ack;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_sequent__TOP__tb_m68k_ram_uart__uart1__4(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_sequent__TOP__tb_m68k_ram_uart__uart1__4\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__clk_rx 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__clk_rx;
}

void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_settle__TOP__tb_m68k_ram_uart__uart1__5(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_settle__TOP__tb_m68k_ram_uart__uart1__5\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__clk_rx 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__clk_rx;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__clk_16x_bps 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__clk_rx;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_sequent__TOP__tb_m68k_ram_uart__uart1__6(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_sequent__TOP__tb_m68k_ram_uart__uart1__6\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__clk_16x_bps 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__clk_rx;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_sequent__TOP__tb_m68k_ram_uart__uart1__7(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_sequent__TOP__tb_m68k_ram_uart__uart1__7\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__clk_tx 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__clk_tx;
}

void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_settle__TOP__tb_m68k_ram_uart__uart1__8(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_settle__TOP__tb_m68k_ram_uart__uart1__8\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rst_n 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rst_ni;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__read_ack 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rx_done_ack;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__clk_tx 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__uart_clk.__PVT__clk_tx;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__clk_1x_bps 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__clk_tx;
}

void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_settle__TOP__tb_m68k_ram_uart__uart1__9(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_settle__TOP__tb_m68k_ram_uart__uart1__9\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rx_data_ready 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__data_ready;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rx_data_buf 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__data;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_combo__TOP__tb_m68k_ram_uart__uart1__10(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_combo__TOP__tb_m68k_ram_uart__uart1__10\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rst_n 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rst_ni;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_sequent__TOP__tb_m68k_ram_uart__uart1__11(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_sequent__TOP__tb_m68k_ram_uart__uart1__11\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__read_ack 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rx_done_ack;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_sequent__TOP__tb_m68k_ram_uart__uart1__12(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_sequent__TOP__tb_m68k_ram_uart__uart1__12\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__clk_1x_bps 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__clk_tx;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_sequent__TOP__tb_m68k_ram_uart__uart1__13(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_sequent__TOP__tb_m68k_ram_uart__uart1__13\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rx_data_ready 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__data_ready;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rx_data_buf 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__data;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_combo__TOP__tb_m68k_ram_uart__uart1__14(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_combo__TOP__tb_m68k_ram_uart__uart1__14\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__rst_n 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rst_ni;
}

void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_settle__TOP__tb_m68k_ram_uart__uart1__15(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_settle__TOP__tb_m68k_ram_uart__uart1__15\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__rst_n 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rst_ni;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__data 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__thr;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__command_send 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__command_send;
}

void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_settle__TOP__tb_m68k_ram_uart__uart1__16(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_settle__TOP__tb_m68k_ram_uart__uart1__16\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__tx_done_ack 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__done_ack;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__tx_pin 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__tx_pin;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_sequent__TOP__tb_m68k_ram_uart__uart1__17(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_sequent__TOP__tb_m68k_ram_uart__uart1__17\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__data 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__thr;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__command_send 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__command_send;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_sequent__TOP__tb_m68k_ram_uart__uart1__18(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_sequent__TOP__tb_m68k_ram_uart__uart1__18\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__tx_done_ack 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__done_ack;
    vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__tx_pin 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance.__PVT__tx_pin;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_combo__TOP__tb_m68k_ram_uart__uart1__19(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_combo__TOP__tb_m68k_ram_uart__uart1__19\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rx_pin 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rx_pin;
}

void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_settle__TOP__tb_m68k_ram_uart__uart1__20(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_settle__TOP__tb_m68k_ram_uart__uart1__20\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance.__PVT__rx_pin 
	= vlSymsp->TOP__tb_m68k_ram_uart__uart1.__PVT__rx_pin;
}

void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_ni = VL_RAND_RESET_I(1);
    __PVT__we_i = VL_RAND_RESET_I(1);
    __PVT__stb_i = VL_RAND_RESET_I(1);
    __PVT__cyc_i = VL_RAND_RESET_I(1);
    __PVT__addr_i = VL_RAND_RESET_I(3);
    __PVT__data_i = VL_RAND_RESET_I(32);
    __PVT__sel_i = VL_RAND_RESET_I(4);
    __PVT__ack_o = VL_RAND_RESET_I(1);
    __PVT__data_o = VL_RAND_RESET_I(32);
    __PVT__irq_o = VL_RAND_RESET_I(1);
    __PVT__rx_pin = VL_RAND_RESET_I(1);
    __PVT__tx_pin = VL_RAND_RESET_I(1);
    __PVT__clk_rx = VL_RAND_RESET_I(1);
    __PVT__clk_tx = VL_RAND_RESET_I(1);
    __PVT__rbr = VL_RAND_RESET_I(8);
    __PVT__thr = VL_RAND_RESET_I(8);
    __PVT__ier = VL_RAND_RESET_I(8);
    __PVT__isr = VL_RAND_RESET_I(8);
    __PVT__data_to_transmit = VL_RAND_RESET_I(1);
    __PVT__command_send = VL_RAND_RESET_I(1);
    __PVT__tx_done_ack = VL_RAND_RESET_I(1);
    __PVT__txstate = VL_RAND_RESET_I(4);
    __PVT__rxstate = VL_RAND_RESET_I(2);
    __PVT__rx_data_ready = VL_RAND_RESET_I(1);
    __PVT__rx_done_ack = VL_RAND_RESET_I(1);
    __PVT__rx_data_buf = VL_RAND_RESET_I(8);
    __Vdly__thr = VL_RAND_RESET_I(8);
    __Vdly__data_to_transmit = VL_RAND_RESET_I(1);
    __Vdly__ier = VL_RAND_RESET_I(8);
    __Vdly__data_o = VL_RAND_RESET_I(32);
    __Vdly__isr = VL_RAND_RESET_I(8);
    __Vdly__ack_o = VL_RAND_RESET_I(1);
    __Vdly__command_send = VL_RAND_RESET_I(1);
    __Vdly__txstate = VL_RAND_RESET_I(4);
    __Vdly__rbr = VL_RAND_RESET_I(8);
    __Vdly__rx_done_ack = VL_RAND_RESET_I(1);
    __Vdly__rxstate = VL_RAND_RESET_I(2);
    __Vdly__irq_o = VL_RAND_RESET_I(1);
}

void Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_nexi_uart_16550a_wb::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
