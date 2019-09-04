// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_ram_uart_sim.h for the primary calling header

#include "Vcpu_ram_uart_sim_decoder.h" // For This
#include "Vcpu_ram_uart_sim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu_ram_uart_sim_decoder) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu_ram_uart_sim_decoder::__Vconfigure(Vcpu_ram_uart_sim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu_ram_uart_sim_decoder::~Vcpu_ram_uart_sim_decoder() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vcpu_ram_uart_sim_decoder::_combo__TOP__tb_m68k_ram_uart__ao68000_m__decoder_m__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_decoder::_combo__TOP__tb_m68k_ram_uart__ao68000_m__decoder_m__1\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__perform_ea_write 
	= (((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
	    & ((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
		 | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
		| (6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
	       | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
	    ? 0x5bU : (((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
			& ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
			   | (6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
		        ? 0x5cU : 0x5dU));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__save_ea 
	= (((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
	    & (((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
		  | (2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
		 | (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
		| (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
	       | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
	    ? 0x5fU : (((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
			& (((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
			      | (3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
			     | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
			    | (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
			   | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
		        ? 0x61U : 0U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__load_ea 
	= ((((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
	       & (((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
		   | (1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod))) 
		  | ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
		     & (4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_reg))))) 
	      | ((5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
		 & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)))) 
	     | ((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
		& ((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
		   | (1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod))))) 
	    | ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
	       & ((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
		  | ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
		     & (4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_reg))))))
	    ? 0U : (((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
		     & (((((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
			     | (2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
			    | (3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
			   | (4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
			  | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
			 | (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
			| (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
		     ? 0x3eU : (((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
				 & (((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
				       | (2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
				      | (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
				     | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
				    | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
				 ? 0x3eU : (((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
					     & (((((1U 
						    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
						   | (3U 
						      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						  | (5U 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						 | (7U 
						    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						| (8U 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
					     ? 0x3fU
					     : (((5U 
						  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
						 & (((((((1U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
							 | (2U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							| (3U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						       | (4U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						      | (5U 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						     | (7U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						    | (8U 
						       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
						 ? 0x41U
						 : 
						(((6U 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
						  & (((((((1U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
							  | (2U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							 | (3U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							| (4U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						       | (5U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						      | (7U 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						     | (8U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
						  ? 0x44U
						  : 
						 ((((7U 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
						    & (0U 
						       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_reg))) 
						   & (((((((1U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
							   | (2U 
							      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							  | (3U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							 | (4U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							| (5U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						       | (7U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						      | (8U 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
						   ? 0x48U
						   : 
						  ((((7U 
						      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
						     & (1U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_reg))) 
						    & (((((((1U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
							    | (2U 
							       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							   | (3U 
							      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							  | (4U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							 | (5U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							| (7U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						       | (8U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
						    ? 0x4aU
						    : 
						   ((((7U 
						       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
						      & (2U 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_reg))) 
						     & ((((1U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
							  | (2U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							 | (4U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							| (8U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
						     ? 0x4cU
						     : 
						    ((((7U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
						       & (3U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_reg))) 
						      & ((((1U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
							   | (2U 
							      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							  | (4U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							 | (8U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
						      ? 0x4fU
						      : 0x53U))))))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__perform_ea_read 
	= (((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
	    & ((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
		 | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
		| (6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
	       | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
	    ? 0x55U : (((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
			& ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
			   | (6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
		        ? 0x56U : ((((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
				     & (4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_reg))) 
				    & ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
				       | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
				    ? 0x57U : 0x59U)));
}

void Vcpu_ram_uart_sim_decoder::_settle__TOP__tb_m68k_ram_uart__ao68000_m__decoder_m__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_decoder::_settle__TOP__tb_m68k_ram_uart__ao68000_m__decoder_m__2\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__perform_ea_write 
	= (((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
	    & ((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
		 | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
		| (6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
	       | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
	    ? 0x5bU : (((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
			& ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
			   | (6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
		        ? 0x5cU : 0x5dU));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__save_ea 
	= (((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
	    & (((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
		  | (2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
		 | (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
		| (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
	       | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
	    ? 0x5fU : (((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
			& (((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
			      | (3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
			     | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
			    | (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
			   | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
		        ? 0x61U : 0U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__load_ea 
	= ((((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
	       & (((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
		   | (1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod))) 
		  | ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
		     & (4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_reg))))) 
	      | ((5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
		 & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)))) 
	     | ((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
		& ((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
		   | (1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod))))) 
	    | ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
	       & ((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
		  | ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
		     & (4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_reg))))))
	    ? 0U : (((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
		     & (((((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
			     | (2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
			    | (3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
			   | (4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
			  | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
			 | (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
			| (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
		     ? 0x3eU : (((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
				 & (((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
				       | (2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
				      | (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
				     | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
				    | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
				 ? 0x3eU : (((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
					     & (((((1U 
						    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
						   | (3U 
						      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						  | (5U 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						 | (7U 
						    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						| (8U 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
					     ? 0x3fU
					     : (((5U 
						  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
						 & (((((((1U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
							 | (2U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							| (3U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						       | (4U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						      | (5U 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						     | (7U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						    | (8U 
						       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
						 ? 0x41U
						 : 
						(((6U 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
						  & (((((((1U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
							  | (2U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							 | (3U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							| (4U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						       | (5U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						      | (7U 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						     | (8U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
						  ? 0x44U
						  : 
						 ((((7U 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
						    & (0U 
						       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_reg))) 
						   & (((((((1U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
							   | (2U 
							      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							  | (3U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							 | (4U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							| (5U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						       | (7U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						      | (8U 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
						   ? 0x48U
						   : 
						  ((((7U 
						      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
						     & (1U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_reg))) 
						    & (((((((1U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
							    | (2U 
							       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							   | (3U 
							      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							  | (4U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							 | (5U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							| (7U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
						       | (8U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
						    ? 0x4aU
						    : 
						   ((((7U 
						       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
						      & (2U 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_reg))) 
						     & ((((1U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
							  | (2U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							 | (4U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							| (8U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
						     ? 0x4cU
						     : 
						    ((((7U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
						       & (3U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_reg))) 
						      & ((((1U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
							   | (2U 
							      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							  | (4U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
							 | (8U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
						      ? 0x4fU
						      : 0x53U))))))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__perform_ea_read 
	= (((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
	    & ((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
		 | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
		| (6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))) 
	       | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
	    ? 0x55U : (((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
			& ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
			   | (6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
		        ? 0x56U : ((((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_mod)) 
				     & (4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_reg))) 
				    & ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type)) 
				       | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ea_type))))
				    ? 0x57U : 0x59U)));
    VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    (((0U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
		      & (0U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
		     | (8U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))));
    VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    (((0U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
		      & (1U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
		     | (0xcU == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))));
    VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    (((0U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
		      & (5U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
		     | (((0xbU == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
			 & ((2U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 2U))) 
			    | (6U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
			& (1U != (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))));
    VL_ASSIGNBIT_II(1,3U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((0U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
		       & (3U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
		      | (0xdU == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
		     | ((5U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
			& (~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)))));
    VL_ASSIGNBIT_II(1,4U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((0U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
		       & (2U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
		      | (9U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
		     | ((5U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
			& VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U))));
    VL_ASSIGNBIT_II(1,5U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((0U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
		       & (6U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
		      | (((0xbU == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
			  & ((2U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 2U))) 
			     | (6U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
			 & (1U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
		     | ((0xbU == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
			& ((0U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 2U))) 
			   | (2U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))))));
    VL_ASSIGNBIT_II(1,6U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((0xdU == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
		     | ((5U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
			& (~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)))));
    VL_ASSIGNBIT_II(1,7U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    (((9U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
		      | (0xbU == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
		     | ((5U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
			& VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U))));
    VL_ASSIGNBIT_II(1,8U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
		       & (0U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 2U)))) 
		      | ((3U != (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
			 & (0U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 2U))))) 
		     & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)));
    VL_ASSIGNBIT_II(1,9U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
		       & (1U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 2U)))) 
		      | ((3U != (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
			 & (1U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 2U))))) 
		     & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)));
    VL_ASSIGNBIT_II(1,0xaU, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
		       & (3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 2U)))) 
		      | ((3U != (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
			 & (3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 2U))))) 
		     & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)));
    VL_ASSIGNBIT_II(1,0xbU, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
		       & (2U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 2U)))) 
		      | ((3U != (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
			 & (2U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 2U))))) 
		     & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)));
    VL_ASSIGNBIT_II(1,0xcU, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
		       & (0U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 2U)))) 
		      | ((3U != (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
			 & (0U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 2U))))) 
		     & (~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U))));
    VL_ASSIGNBIT_II(1,0xdU, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
		       & (1U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 2U)))) 
		      | ((3U != (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
			 & (1U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 2U))))) 
		     & (~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U))));
    VL_ASSIGNBIT_II(1,0xeU, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
		       & (3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 2U)))) 
		      | ((3U != (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
			 & (3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 2U))))) 
		     & (~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U))));
    VL_ASSIGNBIT_II(1,0xfU, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
		       & (2U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 2U)))) 
		      | ((3U != (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
			 & (2U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 2U))))) 
		     & (~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U))));
    VL_ASSIGNBIT_II(1,0x10U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((((0x46U == (0xffU & VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 8U))) 
			 | (0x4e73U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
			| (0x4e72U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
		       | (0x7cU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
		      | (0x27cU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
		     | (0xa7cU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))));
    VL_ASSIGNBIT_II(1,0x11U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    (((((0x44U == (0xffU & VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 8U))) 
			| (0x4e77U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
		       | (0x3cU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
		      | (0x23cU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
		     | (0xa3cU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_micropc 
	= (0x1ffU & VL_SEL_IIII(9,17,32,32, ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__reset_n)
					      ? (((
						   ((((((((0x27cU 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)) 
							  | (0xa7cU 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							 | (0x7cU 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							| (0x4e70U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						       | (0x4e72U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						      | (0x4e73U 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						     | (((((0x11bU 
							    == 
							    (0x3ffU 
							     & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
							   & (1U 
							      != 
							      (7U 
							       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							  & (0x3dU 
							     != 
							     (0x3fU 
							      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
							 & (0x3eU 
							    != 
							    (0x3fU 
							     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
							& (0x3fU 
							   != 
							   (0x3fU 
							    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))) 
						    | (0x9ccU 
						       == 
						       (0x1fffU 
							& VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))) 
						   | (0x9cdU 
						      == 
						      (0x1fffU 
						       & VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))) 
						  & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__supervisor)))
						  ? 0x1000U
						  : 
						 ((0x4afcU 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
						   ? 0x800U
						   : 
						  ((0xaU 
						    == 
						    (0xfU 
						     & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))
						    ? 0x1400U
						    : 
						   ((0xfU 
						     == 
						     (0xfU 
						      & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))
						     ? 0x1600U
						     : 
						    (((((((((((((((0U 
								   == 
								   (0xfU 
								    & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								  & (4U 
								     != 
								     (7U 
								      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
								 & (6U 
								    != 
								    (7U 
								     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
								& (7U 
								   != 
								   (7U 
								    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
							       & (~ 
								  VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U))) 
							      & (((0U 
								   == 
								   (3U 
								    & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
								  | (1U 
								     == 
								     (3U 
								      & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
								 | (2U 
								    == 
								    (3U 
								     & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))))) 
							     & (1U 
								!= 
								(7U 
								 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							    & ((7U 
								!= 
								(7U 
								 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
							       | ((0x38U 
								   == 
								   (0x3fU 
								    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								  | (0x39U 
								     == 
								     (0x3fU 
								      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))))) 
							   & (0x3cU 
							      != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							  & (0x7cU 
							     != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							 & (0x23cU 
							    != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							& (0x27cU 
							   != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						       & (0xa3cU 
							  != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						      & (0xa7cU 
							 != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)))
						      ? 0xaeU
						      : 
						     (((((((0x3cU 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)) 
							   | (0x7cU 
							      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							  | (0x23cU 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							 | (0x27cU 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							| (0xa3cU 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						       | (0xa7cU 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)))
						       ? 0xb2U
						       : 
						      (((((0U 
							   == 
							   (0xfU 
							    & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							  & (4U 
							     == 
							     (7U 
							      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
							 & (1U 
							    != 
							    (7U 
							     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							& ((7U 
							    != 
							    (7U 
							     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
							   | (((((0x38U 
								  == 
								  (0x3fU 
								   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								 | (0x39U 
								    == 
								    (0x3fU 
								     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								| (0x3aU 
								   == 
								   (0x3fU 
								    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
							       | (0x3bU 
								  == 
								  (0x3fU 
								   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
							      | (0x3cU 
								 == 
								 (0x3fU 
								  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
						        ? 0x147U
						        : 
						       (((((0U 
							    == 
							    (0xfU 
							     & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							   & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)) 
							  & (1U 
							     == 
							     (7U 
							      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							 & ((0U 
							     == 
							     (3U 
							      & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
							    | (1U 
							       == 
							       (3U 
								& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))))
							 ? 0x62U
							 : 
							(((((0U 
							     == 
							     (0xfU 
							      & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							    & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)) 
							   & (1U 
							      == 
							      (7U 
							       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							  & ((2U 
							      == 
							      (3U 
							       & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
							     | (3U 
								== 
								(3U 
								 & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))))
							  ? 0x6aU
							  : 
							 ((((((0U 
							       == 
							       (0xfU 
								& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							      & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)) 
							     & (1U 
								!= 
								(7U 
								 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							    & (4U 
							       != 
							       (7U 
								& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
							   & ((7U 
							       != 
							       (7U 
								& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
							      | ((0x38U 
								  == 
								  (0x3fU 
								   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								 | (0x39U 
								    == 
								    (0x3fU 
								     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							   ? 0x142U
							   : 
							  ((((((0U 
								== 
								(0xfU 
								 & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							       & (8U 
								  == 
								  (0xfU 
								   & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U)))) 
							      & (0U 
								 == 
								 (3U 
								  & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
							     & (1U 
								!= 
								(7U 
								 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							    & ((7U 
								!= 
								(7U 
								 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
							       | ((((0x38U 
								     == 
								     (0x3fU 
								      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								    | (0x39U 
								       == 
								       (0x3fU 
									& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								   | (0x3aU 
								      == 
								      (0x3fU 
								       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								  | (0x3bU 
								     == 
								     (0x3fU 
								      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							    ? 0x13cU
							    : 
							   ((((((0U 
								 == 
								 (0xfU 
								  & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								& (8U 
								   == 
								   (0xfU 
								    & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U)))) 
							       & (0U 
								  != 
								  (3U 
								   & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
							      & (1U 
								 != 
								 (7U 
								  & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							     & ((7U 
								 != 
								 (7U 
								  & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								| ((0x38U 
								    == 
								    (0x3fU 
								     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								   | (0x39U 
								      == 
								      (0x3fU 
								       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							     ? 0x137U
							     : 
							    (((((((0U 
								   == 
								   (0xfU 
								    & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								  & (~ 
								     VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U))) 
								 & (6U 
								    == 
								    (7U 
								     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
								& (3U 
								   != 
								   (3U 
								    & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
							       & (1U 
								  != 
								  (7U 
								   & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							      & ((7U 
								  != 
								  (7U 
								   & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								 | ((0x38U 
								     == 
								     (0x3fU 
								      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								    | (0x39U 
								       == 
								       (0x3fU 
									& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							      ? 0xb8U
							      : 
							     (((((((0U 
								    == 
								    (3U 
								     & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xeU, 2U))) 
								   & (0U 
								      != 
								      (3U 
								       & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 2U)))) 
								  & (1U 
								     != 
								     (7U 
								      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
								 & ((7U 
								     != 
								     (7U 
								      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
								    | ((7U 
									== 
									(0x3fU 
									 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 6U))) 
								       | (0xfU 
									  == 
									  (0x3fU 
									   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 6U)))))) 
								& ((1U 
								    != 
								    (3U 
								     & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 2U))) 
								   | (1U 
								      != 
								      (7U 
								       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
							       & ((7U 
								   != 
								   (7U 
								    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								  | (((((0x38U 
									 == 
									 (0x3fU 
									  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									| (0x39U 
									   == 
									   (0x3fU 
									    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								       | (0x3aU 
									  == 
									  (0x3fU 
									   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								      | (0x3bU 
									 == 
									 (0x3fU 
									  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								     | (0x3cU 
									== 
									(0x3fU 
									 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							       ? 0xe8U
							       : 
							      (((((0U 
								   == 
								   (3U 
								    & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xeU, 2U))) 
								  & ((3U 
								      == 
								      (3U 
								       & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 2U))) 
								     | (2U 
									== 
									(3U 
									 & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 2U))))) 
								 & (1U 
								    == 
								    (7U 
								     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
								& ((7U 
								    != 
								    (7U 
								     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								   | (((((0x38U 
									  == 
									  (0x3fU 
									   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									 | (0x39U 
									    == 
									    (0x3fU 
									     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									| (0x3aU 
									   == 
									   (0x3fU 
									    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								       | (0x3bU 
									  == 
									  (0x3fU 
									   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								      | (0x3cU 
									 == 
									 (0x3fU 
									  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							        ? 0xf0U
							        : 
							       (((((4U 
								    == 
								    (0xfU 
								     & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								   & (1U 
								      != 
								      (7U 
								       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
								  & (((7U 
								       != 
								       (7U 
									& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								      | (0x38U 
									 == 
									 (0x3fU 
									  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								     | (0x39U 
									== 
									(0x3fU 
									 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))) 
								 & ((((((0U 
									 == 
									 (0xfU 
									  & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))) 
									& (3U 
									   != 
									   (3U 
									    & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
								       | ((2U 
									   == 
									   (0xfU 
									    & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))) 
									  & (3U 
									     != 
									     (3U 
									      & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))))) 
								      | ((4U 
									  == 
									  (0xfU 
									   & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))) 
									 & (3U 
									    != 
									    (3U 
									     & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))))) 
								     | ((6U 
									 == 
									 (0xfU 
									  & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))) 
									& (3U 
									   != 
									   (3U 
									    & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))))) 
								    | (0x20U 
								       == 
								       (0x3fU 
									& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 6U)))))
								 ? 0x152U
								 : 
								((((0x103U 
								    == 
								    (0x3ffU 
								     & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
								   & (1U 
								      != 
								      (7U 
								       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
								  & (((7U 
								       != 
								       (7U 
									& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								      | (0x38U 
									 == 
									 (0x3fU 
									  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								     | (0x39U 
									== 
									(0x3fU 
									 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))))
								  ? 0x185U
								  : 
								 (((((4U 
								      == 
								      (0xfU 
								       & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								     & (6U 
									== 
									(7U 
									 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
								    & (1U 
								       != 
								       (7U 
									& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
								   & ((7U 
								       != 
								       (7U 
									& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								      | (((((0x38U 
									     == 
									     (0x3fU 
									      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									    | (0x39U 
									       == 
									       (0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									   | (0x3aU 
									      == 
									      (0x3fU 
									       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									  | (0x3bU 
									     == 
									     (0x3fU 
									      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									 | (0x3cU 
									    == 
									    (0x3fU 
									     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
								   ? 0x11aU
								   : 
								  (((((4U 
								       == 
								       (0xfU 
									& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								      & (7U 
									 == 
									 (7U 
									  & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
								     & ((((2U 
									   == 
									   (7U 
									    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									  | (5U 
									     == 
									     (7U 
									      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									 | (6U 
									    == 
									    (7U 
									     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									| (7U 
									   == 
									   (7U 
									    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
								    & ((7U 
									!= 
									(7U 
									 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								       | ((((0x38U 
									     == 
									     (0x3fU 
									      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									    | (0x39U 
									       == 
									       (0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									   | (0x3aU 
									      == 
									      (0x3fU 
									       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									  | (0x3bU 
									     == 
									     (0x3fU 
									      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
								    ? 0xa2U
								    : 
								   (((((0x113U 
									== 
									(0x3ffU 
									 & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
								       | (0x11bU 
									  == 
									  (0x3ffU 
									   & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU)))) 
								      & (1U 
									 != 
									 (7U 
									  & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
								     & ((7U 
									 != 
									 (7U 
									  & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									| (((((0x38U 
									       == 
									       (0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									      | (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									     | (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									    | (0x3bU 
									       == 
									       (0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									   | (0x3cU 
									      == 
									      (0x3fU 
									       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
								     ? 0x188U
								     : 
								    (((4U 
								       == 
								       (0xfU 
									& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								      & ((0x108U 
									  == 
									  (0x1ffU 
									   & VL_SEL_IIII(9,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 9U))) 
									 | ((0x11U 
									     == 
									     (0x1fU 
									      & VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 5U))) 
									    & (0U 
									       == 
									       (7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))))
								      ? 0x155U
								      : 
								     (((((0x121U 
									  == 
									  (0x3ffU 
									   & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
									 & (0U 
									    != 
									    (7U 
									     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									& ((((2U 
									      == 
									      (7U 
									       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									     | (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									    | (6U 
									       == 
									       (7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									   | (7U 
									      == 
									      (7U 
									       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
								       & ((7U 
									   != 
									   (7U 
									    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									  | ((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									       | (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									      | (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									     | (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
								       ? 0xa8U
								       : 
								      (((0x91U 
									 == 
									 (0x1ffU 
									  & VL_SEL_IIII(9,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 9U))) 
									& (4U 
									   == 
									   (7U 
									    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))
								        ? 0x83U
								        : 
								       ((((0x91U 
									   == 
									   (0x1ffU 
									    & VL_SEL_IIII(9,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 9U))) 
									  & ((((2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									       | (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									      | (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									     | (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
									 & (((7U 
									      != 
									      (7U 
									       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									     | (0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									    | (0x39U 
									       == 
									       (0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))))
									 ? 0x93U
									 : 
									(((((0x4aU 
									     == 
									     (0xffU 
									      & VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 8U))) 
									    & (3U 
									       != 
									       (3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
									   & (1U 
									      != 
									      (7U 
									       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									  & ((7U 
									      != 
									      (7U 
									       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									     | ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
									  ? 0x159U
									  : 
									 ((((0x12bU 
									     == 
									     (0x3ffU 
									      & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
									    & (1U 
									       != 
									       (7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									   & ((7U 
									       != 
									       (7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									      | ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
									   ? 0x14dU
									   : 
									  ((((0x99U 
									      == 
									      (0x1ffU 
									       & VL_SEL_IIII(9,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 9U))) 
									     & (((((2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (3U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
									    & ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									       | ((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
									    ? 0x74U
									    : 
									   ((0x4e4U 
									     == 
									     (0xfffU 
									      & VL_SEL_IIII(12,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 0xcU)))
									     ? 0x1e1U
									     : 
									    ((0x9caU 
									      == 
									      (0x1fffU 
									       & VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))
									      ? 0x194U
									      : 
									     ((0x9cbU 
									       == 
									       (0x1fffU 
										& VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))
									       ? 0x1a4U
									       : 
									      ((0x9ccU 
										== 
										(0x1fffU 
										& VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))
									        ? 0x18cU
									        : 
									       ((0x9cdU 
										== 
										(0x1fffU 
										& VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))
										 ? 0x191U
										 : 
										((0x4e70U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
										 ? 0x1e6U
										 : 
										((0x4e71U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
										 ? 0x1e0U
										 : 
										((0x4e72U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
										 ? 0x1e9U
										 : 
										(((0x4e73U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)) 
										| (0x4e77U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)))
										 ? 0x1ccU
										 : 
										((0x4e75U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
										 ? 0x1d8U
										 : 
										((0x4e76U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
										 ? 0x1e3U
										 : 
										((((0x13aU 
										== 
										(0x3ffU 
										& VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
										& ((((2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x1c3U
										 : 
										((((0x13bU 
										== 
										(0x3ffU 
										& VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
										& ((((2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x1bbU
										 : 
										(((((5U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (3U 
										!= 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x15dU
										 : 
										(((((5U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (3U 
										!= 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (0U 
										!= 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (1U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))
										 ? 0x160U
										 : 
										(((((5U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (3U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x164U
										 : 
										((((5U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (3U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (1U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))
										 ? 0x177U
										 : 
										(((6U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (1U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))))
										 ? 0x1afU
										 : 
										(((6U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (1U 
										!= 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))))
										 ? 0x16bU
										 : 
										(((7U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (~ 
										VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)))
										 ? 0x134U
										 : 
										(((((0xbU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (((0U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (1U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
										| (2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& ((0U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3cU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x107U
										 : 
										((((0xbU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& ((3U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3cU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x114U
										 : 
										((((0xbU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (((4U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
										| (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& (1U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))
										 ? 0xceU
										 : 
										(((((0xbU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (((4U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
										| (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0xf6U
										 : 
										(((((((0xdU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (9U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										| (0xcU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										| (8U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& (((((((((0x11U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U))) 
										| (0x12U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x13U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x15U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x16U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x17U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x19U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x1aU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x1bU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0xfbU
										 : 
										(((((((((0xdU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (9U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										| (0xcU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										| (8U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& (((0U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (1U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
										| (2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& (((~ 
										VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU)) 
										| (0U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
										| (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
										& (VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU) 
										| (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3cU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x100U
										 : 
										(((((0xdU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (9U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& ((3U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3cU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x10dU
										 : 
										(((((0xcU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (8U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& (0x10U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (((0xdU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (9U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& (((0x10U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U))) 
										| (0x14U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x18U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U))))))
										 ? 0xbdU
										 : 
										(((0xcU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (((0x28U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 6U))) 
										| (0x29U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 6U)))) 
										| (0x31U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 6U)))))
										 ? 0xc6U
										 : 
										((((((0xcU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (8U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& (3U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3cU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x123U
										 : 
										(((((((0xeU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (~ 
										VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xbU))) 
										& (3U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (0U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0xe2U
										 : 
										(((0xeU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (((0U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
										| (1U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										| (2U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))))
										 ? 0xd5U
										 : 0x800U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
					      : 0U), 0U, 9U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_trap 
	= (0xffU & VL_SEL_IIII(8,17,32,32, ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__reset_n)
					     ? ((((
						   (((((((0x27cU 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)) 
							 | (0xa7cU 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							| (0x7cU 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						       | (0x4e70U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						      | (0x4e72U 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						     | (0x4e73U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						    | (((((0x11bU 
							   == 
							   (0x3ffU 
							    & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
							  & (1U 
							     != 
							     (7U 
							      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							 & (0x3dU 
							    != 
							    (0x3fU 
							     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
							& (0x3eU 
							   != 
							   (0x3fU 
							    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
						       & (0x3fU 
							  != 
							  (0x3fU 
							   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))) 
						   | (0x9ccU 
						      == 
						      (0x1fffU 
						       & VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))) 
						  | (0x9cdU 
						     == 
						     (0x1fffU 
						      & VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))) 
						 & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__supervisor)))
						 ? 0x1000U
						 : 
						((0x4afcU 
						  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
						  ? 0x800U
						  : 
						 ((0xaU 
						   == 
						   (0xfU 
						    & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))
						   ? 0x1400U
						   : 
						  ((0xfU 
						    == 
						    (0xfU 
						     & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))
						    ? 0x1600U
						    : 
						   (((((((((((((((0U 
								  == 
								  (0xfU 
								   & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								 & (4U 
								    != 
								    (7U 
								     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
								& (6U 
								   != 
								   (7U 
								    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
							       & (7U 
								  != 
								  (7U 
								   & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
							      & (~ 
								 VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U))) 
							     & (((0U 
								  == 
								  (3U 
								   & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
								 | (1U 
								    == 
								    (3U 
								     & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
								| (2U 
								   == 
								   (3U 
								    & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))))) 
							    & (1U 
							       != 
							       (7U 
								& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							   & ((7U 
							       != 
							       (7U 
								& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
							      | ((0x38U 
								  == 
								  (0x3fU 
								   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								 | (0x39U 
								    == 
								    (0x3fU 
								     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))))) 
							  & (0x3cU 
							     != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							 & (0x7cU 
							    != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							& (0x23cU 
							   != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						       & (0x27cU 
							  != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						      & (0xa3cU 
							 != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						     & (0xa7cU 
							!= (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)))
						     ? 0xaeU
						     : 
						    (((((((0x3cU 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)) 
							  | (0x7cU 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							 | (0x23cU 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							| (0x27cU 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						       | (0xa3cU 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						      | (0xa7cU 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)))
						      ? 0xb2U
						      : 
						     (((((0U 
							  == 
							  (0xfU 
							   & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							 & (4U 
							    == 
							    (7U 
							     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
							& (1U 
							   != 
							   (7U 
							    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
						       & ((7U 
							   != 
							   (7U 
							    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
							  | (((((0x38U 
								 == 
								 (0x3fU 
								  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								| (0x39U 
								   == 
								   (0x3fU 
								    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
							       | (0x3aU 
								  == 
								  (0x3fU 
								   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
							      | (0x3bU 
								 == 
								 (0x3fU 
								  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
							     | (0x3cU 
								== 
								(0x3fU 
								 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
						       ? 0x147U
						       : 
						      (((((0U 
							   == 
							   (0xfU 
							    & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							  & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)) 
							 & (1U 
							    == 
							    (7U 
							     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							& ((0U 
							    == 
							    (3U 
							     & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
							   | (1U 
							      == 
							      (3U 
							       & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))))
						        ? 0x62U
						        : 
						       (((((0U 
							    == 
							    (0xfU 
							     & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							   & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)) 
							  & (1U 
							     == 
							     (7U 
							      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							 & ((2U 
							     == 
							     (3U 
							      & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
							    | (3U 
							       == 
							       (3U 
								& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))))
							 ? 0x6aU
							 : 
							((((((0U 
							      == 
							      (0xfU 
							       & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							     & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)) 
							    & (1U 
							       != 
							       (7U 
								& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							   & (4U 
							      != 
							      (7U 
							       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
							  & ((7U 
							      != 
							      (7U 
							       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
							     | ((0x38U 
								 == 
								 (0x3fU 
								  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								| (0x39U 
								   == 
								   (0x3fU 
								    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							  ? 0x142U
							  : 
							 ((((((0U 
							       == 
							       (0xfU 
								& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							      & (8U 
								 == 
								 (0xfU 
								  & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U)))) 
							     & (0U 
								== 
								(3U 
								 & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
							    & (1U 
							       != 
							       (7U 
								& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							   & ((7U 
							       != 
							       (7U 
								& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
							      | ((((0x38U 
								    == 
								    (0x3fU 
								     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								   | (0x39U 
								      == 
								      (0x3fU 
								       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								  | (0x3aU 
								     == 
								     (0x3fU 
								      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								 | (0x3bU 
								    == 
								    (0x3fU 
								     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							   ? 0x13cU
							   : 
							  ((((((0U 
								== 
								(0xfU 
								 & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							       & (8U 
								  == 
								  (0xfU 
								   & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U)))) 
							      & (0U 
								 != 
								 (3U 
								  & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
							     & (1U 
								!= 
								(7U 
								 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							    & ((7U 
								!= 
								(7U 
								 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
							       | ((0x38U 
								   == 
								   (0x3fU 
								    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								  | (0x39U 
								     == 
								     (0x3fU 
								      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							    ? 0x137U
							    : 
							   (((((((0U 
								  == 
								  (0xfU 
								   & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								 & (~ 
								    VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U))) 
								& (6U 
								   == 
								   (7U 
								    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
							       & (3U 
								  != 
								  (3U 
								   & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
							      & (1U 
								 != 
								 (7U 
								  & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							     & ((7U 
								 != 
								 (7U 
								  & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								| ((0x38U 
								    == 
								    (0x3fU 
								     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								   | (0x39U 
								      == 
								      (0x3fU 
								       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							     ? 0xb8U
							     : 
							    (((((((0U 
								   == 
								   (3U 
								    & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xeU, 2U))) 
								  & (0U 
								     != 
								     (3U 
								      & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 2U)))) 
								 & (1U 
								    != 
								    (7U 
								     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
								& ((7U 
								    != 
								    (7U 
								     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
								   | ((7U 
								       == 
								       (0x3fU 
									& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 6U))) 
								      | (0xfU 
									 == 
									 (0x3fU 
									  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 6U)))))) 
							       & ((1U 
								   != 
								   (3U 
								    & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 2U))) 
								  | (1U 
								     != 
								     (7U 
								      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
							      & ((7U 
								  != 
								  (7U 
								   & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								 | (((((0x38U 
									== 
									(0x3fU 
									 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								       | (0x39U 
									  == 
									  (0x3fU 
									   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								      | (0x3aU 
									 == 
									 (0x3fU 
									  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								     | (0x3bU 
									== 
									(0x3fU 
									 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								    | (0x3cU 
								       == 
								       (0x3fU 
									& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							      ? 0xe8U
							      : 
							     (((((0U 
								  == 
								  (3U 
								   & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xeU, 2U))) 
								 & ((3U 
								     == 
								     (3U 
								      & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 2U))) 
								    | (2U 
								       == 
								       (3U 
									& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 2U))))) 
								& (1U 
								   == 
								   (7U 
								    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
							       & ((7U 
								   != 
								   (7U 
								    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								  | (((((0x38U 
									 == 
									 (0x3fU 
									  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									| (0x39U 
									   == 
									   (0x3fU 
									    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								       | (0x3aU 
									  == 
									  (0x3fU 
									   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								      | (0x3bU 
									 == 
									 (0x3fU 
									  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								     | (0x3cU 
									== 
									(0x3fU 
									 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							       ? 0xf0U
							       : 
							      (((((4U 
								   == 
								   (0xfU 
								    & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								  & (1U 
								     != 
								     (7U 
								      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
								 & (((7U 
								      != 
								      (7U 
								       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								     | (0x38U 
									== 
									(0x3fU 
									 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								    | (0x39U 
								       == 
								       (0x3fU 
									& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))) 
								& ((((((0U 
									== 
									(0xfU 
									 & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))) 
								       & (3U 
									  != 
									  (3U 
									   & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
								      | ((2U 
									  == 
									  (0xfU 
									   & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))) 
									 & (3U 
									    != 
									    (3U 
									     & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))))) 
								     | ((4U 
									 == 
									 (0xfU 
									  & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))) 
									& (3U 
									   != 
									   (3U 
									    & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))))) 
								    | ((6U 
									== 
									(0xfU 
									 & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))) 
								       & (3U 
									  != 
									  (3U 
									   & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))))) 
								   | (0x20U 
								      == 
								      (0x3fU 
								       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 6U)))))
							        ? 0x152U
							        : 
							       ((((0x103U 
								   == 
								   (0x3ffU 
								    & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
								  & (1U 
								     != 
								     (7U 
								      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
								 & (((7U 
								      != 
								      (7U 
								       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								     | (0x38U 
									== 
									(0x3fU 
									 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								    | (0x39U 
								       == 
								       (0x3fU 
									& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))))
								 ? 0x185U
								 : 
								(((((4U 
								     == 
								     (0xfU 
								      & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								    & (6U 
								       == 
								       (7U 
									& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
								   & (1U 
								      != 
								      (7U 
								       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
								  & ((7U 
								      != 
								      (7U 
								       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								     | (((((0x38U 
									    == 
									    (0x3fU 
									     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									   | (0x39U 
									      == 
									      (0x3fU 
									       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									  | (0x3aU 
									     == 
									     (0x3fU 
									      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									 | (0x3bU 
									    == 
									    (0x3fU 
									     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									| (0x3cU 
									   == 
									   (0x3fU 
									    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
								  ? 0x11aU
								  : 
								 (((((4U 
								      == 
								      (0xfU 
								       & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								     & (7U 
									== 
									(7U 
									 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
								    & ((((2U 
									  == 
									  (7U 
									   & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									 | (5U 
									    == 
									    (7U 
									     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									| (6U 
									   == 
									   (7U 
									    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
								       | (7U 
									  == 
									  (7U 
									   & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
								   & ((7U 
								       != 
								       (7U 
									& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								      | ((((0x38U 
									    == 
									    (0x3fU 
									     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									   | (0x39U 
									      == 
									      (0x3fU 
									       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									  | (0x3aU 
									     == 
									     (0x3fU 
									      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									 | (0x3bU 
									    == 
									    (0x3fU 
									     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
								   ? 0xa2U
								   : 
								  (((((0x113U 
								       == 
								       (0x3ffU 
									& VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
								      | (0x11bU 
									 == 
									 (0x3ffU 
									  & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU)))) 
								     & (1U 
									!= 
									(7U 
									 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
								    & ((7U 
									!= 
									(7U 
									 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								       | (((((0x38U 
									      == 
									      (0x3fU 
									       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									     | (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									    | (0x3aU 
									       == 
									       (0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									   | (0x3bU 
									      == 
									      (0x3fU 
									       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									  | (0x3cU 
									     == 
									     (0x3fU 
									      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
								    ? 0x188U
								    : 
								   (((4U 
								      == 
								      (0xfU 
								       & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								     & ((0x108U 
									 == 
									 (0x1ffU 
									  & VL_SEL_IIII(9,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 9U))) 
									| ((0x11U 
									    == 
									    (0x1fU 
									     & VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 5U))) 
									   & (0U 
									      == 
									      (7U 
									       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))))
								     ? 0x155U
								     : 
								    (((((0x121U 
									 == 
									 (0x3ffU 
									  & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
									& (0U 
									   != 
									   (7U 
									    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
								       & ((((2U 
									     == 
									     (7U 
									      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									    | (5U 
									       == 
									       (7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									   | (6U 
									      == 
									      (7U 
									       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									  | (7U 
									     == 
									     (7U 
									      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
								      & ((7U 
									  != 
									  (7U 
									   & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									 | ((((0x38U 
									       == 
									       (0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									      | (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									     | (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									    | (0x3bU 
									       == 
									       (0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
								      ? 0xa8U
								      : 
								     (((0x91U 
									== 
									(0x1ffU 
									 & VL_SEL_IIII(9,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 9U))) 
								       & (4U 
									  == 
									  (7U 
									   & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))
								       ? 0x83U
								       : 
								      ((((0x91U 
									  == 
									  (0x1ffU 
									   & VL_SEL_IIII(9,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 9U))) 
									 & ((((2U 
									       == 
									       (7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									      | (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									     | (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									    | (7U 
									       == 
									       (7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
									& (((7U 
									     != 
									     (7U 
									      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									    | (0x38U 
									       == 
									       (0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									   | (0x39U 
									      == 
									      (0x3fU 
									       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))))
								        ? 0x93U
								        : 
								       (((((0x4aU 
									    == 
									    (0xffU 
									     & VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 8U))) 
									   & (3U 
									      != 
									      (3U 
									       & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
									  & (1U 
									     != 
									     (7U 
									      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									 & ((7U 
									     != 
									     (7U 
									      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									    | ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									       | (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
									 ? 0x159U
									 : 
									((((0x12bU 
									    == 
									    (0x3ffU 
									     & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
									   & (1U 
									      != 
									      (7U 
									       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									  & ((7U 
									      != 
									      (7U 
									       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									     | ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
									  ? 0x14dU
									  : 
									 ((((0x99U 
									     == 
									     (0x1ffU 
									      & VL_SEL_IIII(9,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 9U))) 
									    & (((((2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (3U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									       | (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
									   & ((7U 
									       != 
									       (7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									      | ((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
									   ? 0x74U
									   : 
									  ((0x4e4U 
									    == 
									    (0xfffU 
									     & VL_SEL_IIII(12,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 0xcU)))
									    ? 0x1e1U
									    : 
									   ((0x9caU 
									     == 
									     (0x1fffU 
									      & VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))
									     ? 0x194U
									     : 
									    ((0x9cbU 
									      == 
									      (0x1fffU 
									       & VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))
									      ? 0x1a4U
									      : 
									     ((0x9ccU 
									       == 
									       (0x1fffU 
										& VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))
									       ? 0x18cU
									       : 
									      ((0x9cdU 
										== 
										(0x1fffU 
										& VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))
									        ? 0x191U
									        : 
									       ((0x4e70U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
										 ? 0x1e6U
										 : 
										((0x4e71U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
										 ? 0x1e0U
										 : 
										((0x4e72U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
										 ? 0x1e9U
										 : 
										(((0x4e73U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)) 
										| (0x4e77U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)))
										 ? 0x1ccU
										 : 
										((0x4e75U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
										 ? 0x1d8U
										 : 
										((0x4e76U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
										 ? 0x1e3U
										 : 
										((((0x13aU 
										== 
										(0x3ffU 
										& VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
										& ((((2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x1c3U
										 : 
										((((0x13bU 
										== 
										(0x3ffU 
										& VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
										& ((((2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x1bbU
										 : 
										(((((5U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (3U 
										!= 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x15dU
										 : 
										(((((5U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (3U 
										!= 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (0U 
										!= 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (1U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))
										 ? 0x160U
										 : 
										(((((5U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (3U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x164U
										 : 
										((((5U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (3U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (1U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))
										 ? 0x177U
										 : 
										(((6U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (1U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))))
										 ? 0x1afU
										 : 
										(((6U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (1U 
										!= 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))))
										 ? 0x16bU
										 : 
										(((7U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (~ 
										VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)))
										 ? 0x134U
										 : 
										(((((0xbU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (((0U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (1U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
										| (2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& ((0U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3cU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x107U
										 : 
										((((0xbU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& ((3U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3cU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x114U
										 : 
										((((0xbU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (((4U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
										| (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& (1U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))
										 ? 0xceU
										 : 
										(((((0xbU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (((4U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
										| (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0xf6U
										 : 
										(((((((0xdU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (9U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										| (0xcU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										| (8U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& (((((((((0x11U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U))) 
										| (0x12U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x13U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x15U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x16U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x17U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x19U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x1aU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x1bU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0xfbU
										 : 
										(((((((((0xdU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (9U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										| (0xcU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										| (8U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& (((0U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (1U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
										| (2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& (((~ 
										VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU)) 
										| (0U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
										| (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
										& (VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU) 
										| (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3cU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x100U
										 : 
										(((((0xdU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (9U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& ((3U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3cU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x10dU
										 : 
										(((((0xcU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (8U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& (0x10U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (((0xdU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (9U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& (((0x10U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U))) 
										| (0x14U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x18U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U))))))
										 ? 0xbdU
										 : 
										(((0xcU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (((0x28U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 6U))) 
										| (0x29U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 6U)))) 
										| (0x31U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 6U)))))
										 ? 0xc6U
										 : 
										((((((0xcU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (8U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& (3U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3cU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x123U
										 : 
										(((((((0xeU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (~ 
										VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xbU))) 
										& (3U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (0U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0xe2U
										 : 
										(((0xeU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (((0U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
										| (1U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										| (2U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))))
										 ? 0xd5U
										 : 0x800U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
					     : 0U), 9U, 8U));
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_decoder::_combo__TOP__tb_m68k_ram_uart__ao68000_m__decoder_m__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_decoder::_combo__TOP__tb_m68k_ram_uart__ao68000_m__decoder_m__3\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    (((0U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
		      & (0U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
		     | (8U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))));
    VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    (((0U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
		      & (1U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
		     | (0xcU == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))));
    VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    (((0U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
		      & (5U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
		     | (((0xbU == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
			 & ((2U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 2U))) 
			    | (6U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
			& (1U != (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))));
    VL_ASSIGNBIT_II(1,3U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((0U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
		       & (3U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
		      | (0xdU == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
		     | ((5U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
			& (~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)))));
    VL_ASSIGNBIT_II(1,4U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((0U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
		       & (2U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
		      | (9U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
		     | ((5U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
			& VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U))));
    VL_ASSIGNBIT_II(1,5U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((0U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
		       & (6U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
		      | (((0xbU == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
			  & ((2U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 2U))) 
			     | (6U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
			 & (1U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
		     | ((0xbU == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
			& ((0U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 2U))) 
			   | (2U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))))));
    VL_ASSIGNBIT_II(1,6U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((0xdU == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
		     | ((5U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
			& (~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)))));
    VL_ASSIGNBIT_II(1,7U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    (((9U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
		      | (0xbU == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
		     | ((5U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
			& VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U))));
    VL_ASSIGNBIT_II(1,8U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
		       & (0U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 2U)))) 
		      | ((3U != (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
			 & (0U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 2U))))) 
		     & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)));
    VL_ASSIGNBIT_II(1,9U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
		       & (1U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 2U)))) 
		      | ((3U != (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
			 & (1U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 2U))))) 
		     & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)));
    VL_ASSIGNBIT_II(1,0xaU, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
		       & (3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 2U)))) 
		      | ((3U != (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
			 & (3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 2U))))) 
		     & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)));
    VL_ASSIGNBIT_II(1,0xbU, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
		       & (2U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 2U)))) 
		      | ((3U != (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
			 & (2U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 2U))))) 
		     & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)));
    VL_ASSIGNBIT_II(1,0xcU, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
		       & (0U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 2U)))) 
		      | ((3U != (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
			 & (0U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 2U))))) 
		     & (~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U))));
    VL_ASSIGNBIT_II(1,0xdU, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
		       & (1U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 2U)))) 
		      | ((3U != (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
			 & (1U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 2U))))) 
		     & (~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U))));
    VL_ASSIGNBIT_II(1,0xeU, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
		       & (3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 2U)))) 
		      | ((3U != (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
			 & (3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 2U))))) 
		     & (~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U))));
    VL_ASSIGNBIT_II(1,0xfU, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
		       & (2U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 2U)))) 
		      | ((3U != (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
			 & (2U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 2U))))) 
		     & (~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U))));
    VL_ASSIGNBIT_II(1,0x10U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    ((((((0x46U == (0xffU & VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 8U))) 
			 | (0x4e73U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
			| (0x4e72U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
		       | (0x7cU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
		      | (0x27cU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
		     | (0xa7cU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))));
    VL_ASSIGNBIT_II(1,0x11U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_alu, 
		    (((((0x44U == (0xffU & VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 8U))) 
			| (0x4e77U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
		       | (0x3cU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
		      | (0x23cU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
		     | (0xa3cU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_micropc 
	= (0x1ffU & VL_SEL_IIII(9,17,32,32, ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__reset_n)
					      ? (((
						   ((((((((0x27cU 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)) 
							  | (0xa7cU 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							 | (0x7cU 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							| (0x4e70U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						       | (0x4e72U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						      | (0x4e73U 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						     | (((((0x11bU 
							    == 
							    (0x3ffU 
							     & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
							   & (1U 
							      != 
							      (7U 
							       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							  & (0x3dU 
							     != 
							     (0x3fU 
							      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
							 & (0x3eU 
							    != 
							    (0x3fU 
							     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
							& (0x3fU 
							   != 
							   (0x3fU 
							    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))) 
						    | (0x9ccU 
						       == 
						       (0x1fffU 
							& VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))) 
						   | (0x9cdU 
						      == 
						      (0x1fffU 
						       & VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))) 
						  & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__supervisor)))
						  ? 0x1000U
						  : 
						 ((0x4afcU 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
						   ? 0x800U
						   : 
						  ((0xaU 
						    == 
						    (0xfU 
						     & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))
						    ? 0x1400U
						    : 
						   ((0xfU 
						     == 
						     (0xfU 
						      & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))
						     ? 0x1600U
						     : 
						    (((((((((((((((0U 
								   == 
								   (0xfU 
								    & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								  & (4U 
								     != 
								     (7U 
								      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
								 & (6U 
								    != 
								    (7U 
								     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
								& (7U 
								   != 
								   (7U 
								    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
							       & (~ 
								  VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U))) 
							      & (((0U 
								   == 
								   (3U 
								    & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
								  | (1U 
								     == 
								     (3U 
								      & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
								 | (2U 
								    == 
								    (3U 
								     & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))))) 
							     & (1U 
								!= 
								(7U 
								 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							    & ((7U 
								!= 
								(7U 
								 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
							       | ((0x38U 
								   == 
								   (0x3fU 
								    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								  | (0x39U 
								     == 
								     (0x3fU 
								      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))))) 
							   & (0x3cU 
							      != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							  & (0x7cU 
							     != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							 & (0x23cU 
							    != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							& (0x27cU 
							   != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						       & (0xa3cU 
							  != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						      & (0xa7cU 
							 != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)))
						      ? 0xaeU
						      : 
						     (((((((0x3cU 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)) 
							   | (0x7cU 
							      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							  | (0x23cU 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							 | (0x27cU 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							| (0xa3cU 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						       | (0xa7cU 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)))
						       ? 0xb2U
						       : 
						      (((((0U 
							   == 
							   (0xfU 
							    & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							  & (4U 
							     == 
							     (7U 
							      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
							 & (1U 
							    != 
							    (7U 
							     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							& ((7U 
							    != 
							    (7U 
							     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
							   | (((((0x38U 
								  == 
								  (0x3fU 
								   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								 | (0x39U 
								    == 
								    (0x3fU 
								     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								| (0x3aU 
								   == 
								   (0x3fU 
								    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
							       | (0x3bU 
								  == 
								  (0x3fU 
								   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
							      | (0x3cU 
								 == 
								 (0x3fU 
								  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
						        ? 0x147U
						        : 
						       (((((0U 
							    == 
							    (0xfU 
							     & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							   & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)) 
							  & (1U 
							     == 
							     (7U 
							      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							 & ((0U 
							     == 
							     (3U 
							      & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
							    | (1U 
							       == 
							       (3U 
								& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))))
							 ? 0x62U
							 : 
							(((((0U 
							     == 
							     (0xfU 
							      & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							    & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)) 
							   & (1U 
							      == 
							      (7U 
							       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							  & ((2U 
							      == 
							      (3U 
							       & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
							     | (3U 
								== 
								(3U 
								 & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))))
							  ? 0x6aU
							  : 
							 ((((((0U 
							       == 
							       (0xfU 
								& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							      & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)) 
							     & (1U 
								!= 
								(7U 
								 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							    & (4U 
							       != 
							       (7U 
								& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
							   & ((7U 
							       != 
							       (7U 
								& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
							      | ((0x38U 
								  == 
								  (0x3fU 
								   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								 | (0x39U 
								    == 
								    (0x3fU 
								     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							   ? 0x142U
							   : 
							  ((((((0U 
								== 
								(0xfU 
								 & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							       & (8U 
								  == 
								  (0xfU 
								   & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U)))) 
							      & (0U 
								 == 
								 (3U 
								  & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
							     & (1U 
								!= 
								(7U 
								 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							    & ((7U 
								!= 
								(7U 
								 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
							       | ((((0x38U 
								     == 
								     (0x3fU 
								      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								    | (0x39U 
								       == 
								       (0x3fU 
									& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								   | (0x3aU 
								      == 
								      (0x3fU 
								       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								  | (0x3bU 
								     == 
								     (0x3fU 
								      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							    ? 0x13cU
							    : 
							   ((((((0U 
								 == 
								 (0xfU 
								  & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								& (8U 
								   == 
								   (0xfU 
								    & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U)))) 
							       & (0U 
								  != 
								  (3U 
								   & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
							      & (1U 
								 != 
								 (7U 
								  & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							     & ((7U 
								 != 
								 (7U 
								  & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								| ((0x38U 
								    == 
								    (0x3fU 
								     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								   | (0x39U 
								      == 
								      (0x3fU 
								       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							     ? 0x137U
							     : 
							    (((((((0U 
								   == 
								   (0xfU 
								    & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								  & (~ 
								     VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U))) 
								 & (6U 
								    == 
								    (7U 
								     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
								& (3U 
								   != 
								   (3U 
								    & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
							       & (1U 
								  != 
								  (7U 
								   & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							      & ((7U 
								  != 
								  (7U 
								   & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								 | ((0x38U 
								     == 
								     (0x3fU 
								      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								    | (0x39U 
								       == 
								       (0x3fU 
									& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							      ? 0xb8U
							      : 
							     (((((((0U 
								    == 
								    (3U 
								     & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xeU, 2U))) 
								   & (0U 
								      != 
								      (3U 
								       & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 2U)))) 
								  & (1U 
								     != 
								     (7U 
								      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
								 & ((7U 
								     != 
								     (7U 
								      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
								    | ((7U 
									== 
									(0x3fU 
									 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 6U))) 
								       | (0xfU 
									  == 
									  (0x3fU 
									   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 6U)))))) 
								& ((1U 
								    != 
								    (3U 
								     & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 2U))) 
								   | (1U 
								      != 
								      (7U 
								       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
							       & ((7U 
								   != 
								   (7U 
								    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								  | (((((0x38U 
									 == 
									 (0x3fU 
									  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									| (0x39U 
									   == 
									   (0x3fU 
									    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								       | (0x3aU 
									  == 
									  (0x3fU 
									   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								      | (0x3bU 
									 == 
									 (0x3fU 
									  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								     | (0x3cU 
									== 
									(0x3fU 
									 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							       ? 0xe8U
							       : 
							      (((((0U 
								   == 
								   (3U 
								    & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xeU, 2U))) 
								  & ((3U 
								      == 
								      (3U 
								       & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 2U))) 
								     | (2U 
									== 
									(3U 
									 & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 2U))))) 
								 & (1U 
								    == 
								    (7U 
								     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
								& ((7U 
								    != 
								    (7U 
								     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								   | (((((0x38U 
									  == 
									  (0x3fU 
									   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									 | (0x39U 
									    == 
									    (0x3fU 
									     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									| (0x3aU 
									   == 
									   (0x3fU 
									    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								       | (0x3bU 
									  == 
									  (0x3fU 
									   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								      | (0x3cU 
									 == 
									 (0x3fU 
									  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							        ? 0xf0U
							        : 
							       (((((4U 
								    == 
								    (0xfU 
								     & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								   & (1U 
								      != 
								      (7U 
								       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
								  & (((7U 
								       != 
								       (7U 
									& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								      | (0x38U 
									 == 
									 (0x3fU 
									  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								     | (0x39U 
									== 
									(0x3fU 
									 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))) 
								 & ((((((0U 
									 == 
									 (0xfU 
									  & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))) 
									& (3U 
									   != 
									   (3U 
									    & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
								       | ((2U 
									   == 
									   (0xfU 
									    & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))) 
									  & (3U 
									     != 
									     (3U 
									      & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))))) 
								      | ((4U 
									  == 
									  (0xfU 
									   & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))) 
									 & (3U 
									    != 
									    (3U 
									     & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))))) 
								     | ((6U 
									 == 
									 (0xfU 
									  & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))) 
									& (3U 
									   != 
									   (3U 
									    & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))))) 
								    | (0x20U 
								       == 
								       (0x3fU 
									& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 6U)))))
								 ? 0x152U
								 : 
								((((0x103U 
								    == 
								    (0x3ffU 
								     & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
								   & (1U 
								      != 
								      (7U 
								       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
								  & (((7U 
								       != 
								       (7U 
									& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								      | (0x38U 
									 == 
									 (0x3fU 
									  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								     | (0x39U 
									== 
									(0x3fU 
									 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))))
								  ? 0x185U
								  : 
								 (((((4U 
								      == 
								      (0xfU 
								       & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								     & (6U 
									== 
									(7U 
									 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
								    & (1U 
								       != 
								       (7U 
									& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
								   & ((7U 
								       != 
								       (7U 
									& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								      | (((((0x38U 
									     == 
									     (0x3fU 
									      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									    | (0x39U 
									       == 
									       (0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									   | (0x3aU 
									      == 
									      (0x3fU 
									       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									  | (0x3bU 
									     == 
									     (0x3fU 
									      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									 | (0x3cU 
									    == 
									    (0x3fU 
									     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
								   ? 0x11aU
								   : 
								  (((((4U 
								       == 
								       (0xfU 
									& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								      & (7U 
									 == 
									 (7U 
									  & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
								     & ((((2U 
									   == 
									   (7U 
									    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									  | (5U 
									     == 
									     (7U 
									      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									 | (6U 
									    == 
									    (7U 
									     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									| (7U 
									   == 
									   (7U 
									    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
								    & ((7U 
									!= 
									(7U 
									 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								       | ((((0x38U 
									     == 
									     (0x3fU 
									      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									    | (0x39U 
									       == 
									       (0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									   | (0x3aU 
									      == 
									      (0x3fU 
									       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									  | (0x3bU 
									     == 
									     (0x3fU 
									      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
								    ? 0xa2U
								    : 
								   (((((0x113U 
									== 
									(0x3ffU 
									 & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
								       | (0x11bU 
									  == 
									  (0x3ffU 
									   & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU)))) 
								      & (1U 
									 != 
									 (7U 
									  & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
								     & ((7U 
									 != 
									 (7U 
									  & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									| (((((0x38U 
									       == 
									       (0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									      | (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									     | (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									    | (0x3bU 
									       == 
									       (0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									   | (0x3cU 
									      == 
									      (0x3fU 
									       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
								     ? 0x188U
								     : 
								    (((4U 
								       == 
								       (0xfU 
									& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								      & ((0x108U 
									  == 
									  (0x1ffU 
									   & VL_SEL_IIII(9,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 9U))) 
									 | ((0x11U 
									     == 
									     (0x1fU 
									      & VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 5U))) 
									    & (0U 
									       == 
									       (7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))))
								      ? 0x155U
								      : 
								     (((((0x121U 
									  == 
									  (0x3ffU 
									   & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
									 & (0U 
									    != 
									    (7U 
									     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									& ((((2U 
									      == 
									      (7U 
									       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									     | (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									    | (6U 
									       == 
									       (7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									   | (7U 
									      == 
									      (7U 
									       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
								       & ((7U 
									   != 
									   (7U 
									    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									  | ((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									       | (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									      | (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									     | (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
								       ? 0xa8U
								       : 
								      (((0x91U 
									 == 
									 (0x1ffU 
									  & VL_SEL_IIII(9,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 9U))) 
									& (4U 
									   == 
									   (7U 
									    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))
								        ? 0x83U
								        : 
								       ((((0x91U 
									   == 
									   (0x1ffU 
									    & VL_SEL_IIII(9,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 9U))) 
									  & ((((2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									       | (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									      | (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									     | (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
									 & (((7U 
									      != 
									      (7U 
									       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									     | (0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									    | (0x39U 
									       == 
									       (0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))))
									 ? 0x93U
									 : 
									(((((0x4aU 
									     == 
									     (0xffU 
									      & VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 8U))) 
									    & (3U 
									       != 
									       (3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
									   & (1U 
									      != 
									      (7U 
									       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									  & ((7U 
									      != 
									      (7U 
									       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									     | ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
									  ? 0x159U
									  : 
									 ((((0x12bU 
									     == 
									     (0x3ffU 
									      & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
									    & (1U 
									       != 
									       (7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									   & ((7U 
									       != 
									       (7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									      | ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
									   ? 0x14dU
									   : 
									  ((((0x99U 
									      == 
									      (0x1ffU 
									       & VL_SEL_IIII(9,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 9U))) 
									     & (((((2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (3U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
									    & ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									       | ((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
									    ? 0x74U
									    : 
									   ((0x4e4U 
									     == 
									     (0xfffU 
									      & VL_SEL_IIII(12,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 0xcU)))
									     ? 0x1e1U
									     : 
									    ((0x9caU 
									      == 
									      (0x1fffU 
									       & VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))
									      ? 0x194U
									      : 
									     ((0x9cbU 
									       == 
									       (0x1fffU 
										& VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))
									       ? 0x1a4U
									       : 
									      ((0x9ccU 
										== 
										(0x1fffU 
										& VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))
									        ? 0x18cU
									        : 
									       ((0x9cdU 
										== 
										(0x1fffU 
										& VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))
										 ? 0x191U
										 : 
										((0x4e70U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
										 ? 0x1e6U
										 : 
										((0x4e71U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
										 ? 0x1e0U
										 : 
										((0x4e72U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
										 ? 0x1e9U
										 : 
										(((0x4e73U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)) 
										| (0x4e77U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)))
										 ? 0x1ccU
										 : 
										((0x4e75U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
										 ? 0x1d8U
										 : 
										((0x4e76U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
										 ? 0x1e3U
										 : 
										((((0x13aU 
										== 
										(0x3ffU 
										& VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
										& ((((2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x1c3U
										 : 
										((((0x13bU 
										== 
										(0x3ffU 
										& VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
										& ((((2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x1bbU
										 : 
										(((((5U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (3U 
										!= 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x15dU
										 : 
										(((((5U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (3U 
										!= 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (0U 
										!= 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (1U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))
										 ? 0x160U
										 : 
										(((((5U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (3U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x164U
										 : 
										((((5U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (3U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (1U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))
										 ? 0x177U
										 : 
										(((6U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (1U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))))
										 ? 0x1afU
										 : 
										(((6U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (1U 
										!= 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))))
										 ? 0x16bU
										 : 
										(((7U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (~ 
										VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)))
										 ? 0x134U
										 : 
										(((((0xbU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (((0U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (1U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
										| (2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& ((0U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3cU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x107U
										 : 
										((((0xbU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& ((3U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3cU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x114U
										 : 
										((((0xbU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (((4U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
										| (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& (1U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))
										 ? 0xceU
										 : 
										(((((0xbU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (((4U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
										| (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0xf6U
										 : 
										(((((((0xdU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (9U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										| (0xcU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										| (8U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& (((((((((0x11U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U))) 
										| (0x12U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x13U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x15U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x16U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x17U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x19U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x1aU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x1bU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0xfbU
										 : 
										(((((((((0xdU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (9U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										| (0xcU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										| (8U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& (((0U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (1U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
										| (2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& (((~ 
										VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU)) 
										| (0U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
										| (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
										& (VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU) 
										| (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3cU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x100U
										 : 
										(((((0xdU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (9U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& ((3U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3cU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x10dU
										 : 
										(((((0xcU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (8U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& (0x10U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (((0xdU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (9U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& (((0x10U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U))) 
										| (0x14U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x18U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U))))))
										 ? 0xbdU
										 : 
										(((0xcU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (((0x28U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 6U))) 
										| (0x29U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 6U)))) 
										| (0x31U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 6U)))))
										 ? 0xc6U
										 : 
										((((((0xcU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (8U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& (3U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3cU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x123U
										 : 
										(((((((0xeU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (~ 
										VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xbU))) 
										& (3U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (0U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0xe2U
										 : 
										(((0xeU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (((0U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
										| (1U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										| (2U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))))
										 ? 0xd5U
										 : 0x800U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
					      : 0U), 0U, 9U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__decoder_trap 
	= (0xffU & VL_SEL_IIII(8,17,32,32, ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__reset_n)
					     ? ((((
						   (((((((0x27cU 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)) 
							 | (0xa7cU 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							| (0x7cU 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						       | (0x4e70U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						      | (0x4e72U 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						     | (0x4e73U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						    | (((((0x11bU 
							   == 
							   (0x3ffU 
							    & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
							  & (1U 
							     != 
							     (7U 
							      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							 & (0x3dU 
							    != 
							    (0x3fU 
							     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
							& (0x3eU 
							   != 
							   (0x3fU 
							    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
						       & (0x3fU 
							  != 
							  (0x3fU 
							   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))) 
						   | (0x9ccU 
						      == 
						      (0x1fffU 
						       & VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))) 
						  | (0x9cdU 
						     == 
						     (0x1fffU 
						      & VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))) 
						 & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__supervisor)))
						 ? 0x1000U
						 : 
						((0x4afcU 
						  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
						  ? 0x800U
						  : 
						 ((0xaU 
						   == 
						   (0xfU 
						    & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))
						   ? 0x1400U
						   : 
						  ((0xfU 
						    == 
						    (0xfU 
						     & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))
						    ? 0x1600U
						    : 
						   (((((((((((((((0U 
								  == 
								  (0xfU 
								   & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								 & (4U 
								    != 
								    (7U 
								     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
								& (6U 
								   != 
								   (7U 
								    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
							       & (7U 
								  != 
								  (7U 
								   & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
							      & (~ 
								 VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U))) 
							     & (((0U 
								  == 
								  (3U 
								   & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
								 | (1U 
								    == 
								    (3U 
								     & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
								| (2U 
								   == 
								   (3U 
								    & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))))) 
							    & (1U 
							       != 
							       (7U 
								& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							   & ((7U 
							       != 
							       (7U 
								& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
							      | ((0x38U 
								  == 
								  (0x3fU 
								   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								 | (0x39U 
								    == 
								    (0x3fU 
								     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))))) 
							  & (0x3cU 
							     != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							 & (0x7cU 
							    != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							& (0x23cU 
							   != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						       & (0x27cU 
							  != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						      & (0xa3cU 
							 != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						     & (0xa7cU 
							!= (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)))
						     ? 0xaeU
						     : 
						    (((((((0x3cU 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)) 
							  | (0x7cU 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							 | (0x23cU 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
							| (0x27cU 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						       | (0xa3cU 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))) 
						      | (0xa7cU 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)))
						      ? 0xb2U
						      : 
						     (((((0U 
							  == 
							  (0xfU 
							   & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							 & (4U 
							    == 
							    (7U 
							     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
							& (1U 
							   != 
							   (7U 
							    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
						       & ((7U 
							   != 
							   (7U 
							    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
							  | (((((0x38U 
								 == 
								 (0x3fU 
								  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								| (0x39U 
								   == 
								   (0x3fU 
								    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
							       | (0x3aU 
								  == 
								  (0x3fU 
								   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
							      | (0x3bU 
								 == 
								 (0x3fU 
								  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
							     | (0x3cU 
								== 
								(0x3fU 
								 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
						       ? 0x147U
						       : 
						      (((((0U 
							   == 
							   (0xfU 
							    & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							  & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)) 
							 & (1U 
							    == 
							    (7U 
							     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							& ((0U 
							    == 
							    (3U 
							     & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
							   | (1U 
							      == 
							      (3U 
							       & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))))
						        ? 0x62U
						        : 
						       (((((0U 
							    == 
							    (0xfU 
							     & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							   & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)) 
							  & (1U 
							     == 
							     (7U 
							      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							 & ((2U 
							     == 
							     (3U 
							      & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
							    | (3U 
							       == 
							       (3U 
								& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))))
							 ? 0x6aU
							 : 
							((((((0U 
							      == 
							      (0xfU 
							       & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							     & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)) 
							    & (1U 
							       != 
							       (7U 
								& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							   & (4U 
							      != 
							      (7U 
							       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
							  & ((7U 
							      != 
							      (7U 
							       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
							     | ((0x38U 
								 == 
								 (0x3fU 
								  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								| (0x39U 
								   == 
								   (0x3fU 
								    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							  ? 0x142U
							  : 
							 ((((((0U 
							       == 
							       (0xfU 
								& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							      & (8U 
								 == 
								 (0xfU 
								  & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U)))) 
							     & (0U 
								== 
								(3U 
								 & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
							    & (1U 
							       != 
							       (7U 
								& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							   & ((7U 
							       != 
							       (7U 
								& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
							      | ((((0x38U 
								    == 
								    (0x3fU 
								     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								   | (0x39U 
								      == 
								      (0x3fU 
								       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								  | (0x3aU 
								     == 
								     (0x3fU 
								      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								 | (0x3bU 
								    == 
								    (0x3fU 
								     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							   ? 0x13cU
							   : 
							  ((((((0U 
								== 
								(0xfU 
								 & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
							       & (8U 
								  == 
								  (0xfU 
								   & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U)))) 
							      & (0U 
								 != 
								 (3U 
								  & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
							     & (1U 
								!= 
								(7U 
								 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							    & ((7U 
								!= 
								(7U 
								 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
							       | ((0x38U 
								   == 
								   (0x3fU 
								    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								  | (0x39U 
								     == 
								     (0x3fU 
								      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							    ? 0x137U
							    : 
							   (((((((0U 
								  == 
								  (0xfU 
								   & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								 & (~ 
								    VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U))) 
								& (6U 
								   == 
								   (7U 
								    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 9U, 3U)))) 
							       & (3U 
								  != 
								  (3U 
								   & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
							      & (1U 
								 != 
								 (7U 
								  & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
							     & ((7U 
								 != 
								 (7U 
								  & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								| ((0x38U 
								    == 
								    (0x3fU 
								     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								   | (0x39U 
								      == 
								      (0x3fU 
								       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							     ? 0xb8U
							     : 
							    (((((((0U 
								   == 
								   (3U 
								    & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xeU, 2U))) 
								  & (0U 
								     != 
								     (3U 
								      & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 2U)))) 
								 & (1U 
								    != 
								    (7U 
								     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
								& ((7U 
								    != 
								    (7U 
								     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
								   | ((7U 
								       == 
								       (0x3fU 
									& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 6U))) 
								      | (0xfU 
									 == 
									 (0x3fU 
									  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 6U)))))) 
							       & ((1U 
								   != 
								   (3U 
								    & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 2U))) 
								  | (1U 
								     != 
								     (7U 
								      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
							      & ((7U 
								  != 
								  (7U 
								   & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								 | (((((0x38U 
									== 
									(0x3fU 
									 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
								       | (0x39U 
									  == 
									  (0x3fU 
									   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								      | (0x3aU 
									 == 
									 (0x3fU 
									  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								     | (0x3bU 
									== 
									(0x3fU 
									 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								    | (0x3cU 
								       == 
								       (0x3fU 
									& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							      ? 0xe8U
							      : 
							     (((((0U 
								  == 
								  (3U 
								   & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xeU, 2U))) 
								 & ((3U 
								     == 
								     (3U 
								      & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 2U))) 
								    | (2U 
								       == 
								       (3U 
									& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 2U))))) 
								& (1U 
								   == 
								   (7U 
								    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
							       & ((7U 
								   != 
								   (7U 
								    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								  | (((((0x38U 
									 == 
									 (0x3fU 
									  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									| (0x39U 
									   == 
									   (0x3fU 
									    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								       | (0x3aU 
									  == 
									  (0x3fU 
									   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								      | (0x3bU 
									 == 
									 (0x3fU 
									  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								     | (0x3cU 
									== 
									(0x3fU 
									 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
							       ? 0xf0U
							       : 
							      (((((4U 
								   == 
								   (0xfU 
								    & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								  & (1U 
								     != 
								     (7U 
								      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
								 & (((7U 
								      != 
								      (7U 
								       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								     | (0x38U 
									== 
									(0x3fU 
									 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								    | (0x39U 
								       == 
								       (0x3fU 
									& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))) 
								& ((((((0U 
									== 
									(0xfU 
									 & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))) 
								       & (3U 
									  != 
									  (3U 
									   & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
								      | ((2U 
									  == 
									  (0xfU 
									   & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))) 
									 & (3U 
									    != 
									    (3U 
									     & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))))) 
								     | ((4U 
									 == 
									 (0xfU 
									  & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))) 
									& (3U 
									   != 
									   (3U 
									    & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))))) 
								    | ((6U 
									== 
									(0xfU 
									 & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))) 
								       & (3U 
									  != 
									  (3U 
									   & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))))) 
								   | (0x20U 
								      == 
								      (0x3fU 
								       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 6U)))))
							        ? 0x152U
							        : 
							       ((((0x103U 
								   == 
								   (0x3ffU 
								    & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
								  & (1U 
								     != 
								     (7U 
								      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
								 & (((7U 
								      != 
								      (7U 
								       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								     | (0x38U 
									== 
									(0x3fU 
									 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
								    | (0x39U 
								       == 
								       (0x3fU 
									& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))))
								 ? 0x185U
								 : 
								(((((4U 
								     == 
								     (0xfU 
								      & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								    & (6U 
								       == 
								       (7U 
									& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
								   & (1U 
								      != 
								      (7U 
								       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
								  & ((7U 
								      != 
								      (7U 
								       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								     | (((((0x38U 
									    == 
									    (0x3fU 
									     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									   | (0x39U 
									      == 
									      (0x3fU 
									       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									  | (0x3aU 
									     == 
									     (0x3fU 
									      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									 | (0x3bU 
									    == 
									    (0x3fU 
									     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									| (0x3cU 
									   == 
									   (0x3fU 
									    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
								  ? 0x11aU
								  : 
								 (((((4U 
								      == 
								      (0xfU 
								       & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								     & (7U 
									== 
									(7U 
									 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
								    & ((((2U 
									  == 
									  (7U 
									   & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									 | (5U 
									    == 
									    (7U 
									     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									| (6U 
									   == 
									   (7U 
									    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
								       | (7U 
									  == 
									  (7U 
									   & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
								   & ((7U 
								       != 
								       (7U 
									& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								      | ((((0x38U 
									    == 
									    (0x3fU 
									     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									   | (0x39U 
									      == 
									      (0x3fU 
									       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									  | (0x3aU 
									     == 
									     (0x3fU 
									      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									 | (0x3bU 
									    == 
									    (0x3fU 
									     & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
								   ? 0xa2U
								   : 
								  (((((0x113U 
								       == 
								       (0x3ffU 
									& VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
								      | (0x11bU 
									 == 
									 (0x3ffU 
									  & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU)))) 
								     & (1U 
									!= 
									(7U 
									 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
								    & ((7U 
									!= 
									(7U 
									 & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
								       | (((((0x38U 
									      == 
									      (0x3fU 
									       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									     | (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									    | (0x3aU 
									       == 
									       (0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									   | (0x3bU 
									      == 
									      (0x3fU 
									       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									  | (0x3cU 
									     == 
									     (0x3fU 
									      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
								    ? 0x188U
								    : 
								   (((4U 
								      == 
								      (0xfU 
								       & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
								     & ((0x108U 
									 == 
									 (0x1ffU 
									  & VL_SEL_IIII(9,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 9U))) 
									| ((0x11U 
									    == 
									    (0x1fU 
									     & VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 5U))) 
									   & (0U 
									      == 
									      (7U 
									       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))))
								     ? 0x155U
								     : 
								    (((((0x121U 
									 == 
									 (0x3ffU 
									  & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
									& (0U 
									   != 
									   (7U 
									    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
								       & ((((2U 
									     == 
									     (7U 
									      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									    | (5U 
									       == 
									       (7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									   | (6U 
									      == 
									      (7U 
									       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									  | (7U 
									     == 
									     (7U 
									      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
								      & ((7U 
									  != 
									  (7U 
									   & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									 | ((((0x38U 
									       == 
									       (0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									      | (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									     | (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									    | (0x3bU 
									       == 
									       (0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
								      ? 0xa8U
								      : 
								     (((0x91U 
									== 
									(0x1ffU 
									 & VL_SEL_IIII(9,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 9U))) 
								       & (4U 
									  == 
									  (7U 
									   & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))
								       ? 0x83U
								       : 
								      ((((0x91U 
									  == 
									  (0x1ffU 
									   & VL_SEL_IIII(9,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 9U))) 
									 & ((((2U 
									       == 
									       (7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									      | (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									     | (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									    | (7U 
									       == 
									       (7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
									& (((7U 
									     != 
									     (7U 
									      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									    | (0x38U 
									       == 
									       (0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
									   | (0x39U 
									      == 
									      (0x3fU 
									       & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))))
								        ? 0x93U
								        : 
								       (((((0x4aU 
									    == 
									    (0xffU 
									     & VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 8U))) 
									   & (3U 
									      != 
									      (3U 
									       & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
									  & (1U 
									     != 
									     (7U 
									      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									 & ((7U 
									     != 
									     (7U 
									      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									    | ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
									       | (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
									 ? 0x159U
									 : 
									((((0x12bU 
									    == 
									    (0x3ffU 
									     & VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
									   & (1U 
									      != 
									      (7U 
									       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									  & ((7U 
									      != 
									      (7U 
									       & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									     | ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
									  ? 0x14dU
									  : 
									 ((((0x99U 
									     == 
									     (0x1ffU 
									      & VL_SEL_IIII(9,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 7U, 9U))) 
									    & (((((2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (3U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
									       | (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
									   & ((7U 
									       != 
									       (7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
									      | ((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
									   ? 0x74U
									   : 
									  ((0x4e4U 
									    == 
									    (0xfffU 
									     & VL_SEL_IIII(12,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 0xcU)))
									    ? 0x1e1U
									    : 
									   ((0x9caU 
									     == 
									     (0x1fffU 
									      & VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))
									     ? 0x194U
									     : 
									    ((0x9cbU 
									      == 
									      (0x1fffU 
									       & VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))
									      ? 0x1a4U
									      : 
									     ((0x9ccU 
									       == 
									       (0x1fffU 
										& VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))
									       ? 0x18cU
									       : 
									      ((0x9cdU 
										== 
										(0x1fffU 
										& VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 0xdU)))
									        ? 0x191U
									        : 
									       ((0x4e70U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
										 ? 0x1e6U
										 : 
										((0x4e71U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
										 ? 0x1e0U
										 : 
										((0x4e72U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
										 ? 0x1e9U
										 : 
										(((0x4e73U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)) 
										| (0x4e77U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir)))
										 ? 0x1ccU
										 : 
										((0x4e75U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
										 ? 0x1d8U
										 : 
										((0x4e76U 
										== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir))
										 ? 0x1e3U
										 : 
										((((0x13aU 
										== 
										(0x3ffU 
										& VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
										& ((((2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x1c3U
										 : 
										((((0x13bU 
										== 
										(0x3ffU 
										& VL_SEL_IIII(10,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 0xaU))) 
										& ((((2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										| (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x1bbU
										 : 
										(((((5U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (3U 
										!= 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x15dU
										 : 
										(((((5U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (3U 
										!= 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (0U 
										!= 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (1U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))
										 ? 0x160U
										 : 
										(((((5U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (3U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x164U
										 : 
										((((5U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (3U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (1U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))
										 ? 0x177U
										 : 
										(((6U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (1U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))))
										 ? 0x1afU
										 : 
										(((6U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (1U 
										!= 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U, 4U))))
										 ? 0x16bU
										 : 
										(((7U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (~ 
										VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 8U)))
										 ? 0x134U
										 : 
										(((((0xbU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (((0U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (1U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
										| (2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& ((0U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3cU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x107U
										 : 
										((((0xbU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& ((3U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3cU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x114U
										 : 
										((((0xbU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (((4U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
										| (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& (1U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))
										 ? 0xceU
										 : 
										(((((0xbU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (((4U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (5U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
										| (6U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0xf6U
										 : 
										(((((((0xdU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (9U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										| (0xcU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										| (8U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& (((((((((0x11U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U))) 
										| (0x12U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x13U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x15U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x16U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x17U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x19U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x1aU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x1bU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0xfbU
										 : 
										(((((((((0xdU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (9U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										| (0xcU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										| (8U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& (((0U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (1U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
										| (2U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& (((~ 
										VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU)) 
										| (0U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U)))) 
										| (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
										& (VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU) 
										| (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3cU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x100U
										 : 
										(((((0xdU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (9U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& ((3U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))) 
										| (7U 
										== 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 3U))))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3cU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x10dU
										 : 
										(((((0xcU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (8U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& (0x10U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (((0xdU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (9U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& (((0x10U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U))) 
										| (0x14U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U)))) 
										| (0x18U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 4U, 5U))))))
										 ? 0xbdU
										 : 
										(((0xcU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (((0x28U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 6U))) 
										| (0x29U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 6U)))) 
										| (0x31U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 6U)))))
										 ? 0xc6U
										 : 
										((((((0xcU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										| (8U 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U)))) 
										& (3U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3aU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3bU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U)))) 
										| (0x3cU 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0x123U
										 : 
										(((((((0xeU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (~ 
										VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xbU))) 
										& (3U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										& (0U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& (1U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U)))) 
										& ((7U 
										!= 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 3U, 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))) 
										| (0x39U 
										== 
										(0x3fU 
										& VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0U, 6U))))))
										 ? 0xe2U
										 : 
										(((0xeU 
										== 
										(0xfU 
										& VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 0xcU, 4U))) 
										& (((0U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U))) 
										| (1U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))) 
										| (2U 
										== 
										(3U 
										& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__decoder_m.__PVT__ir), 6U, 2U)))))
										 ? 0xd5U
										 : 0x800U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
					     : 0U), 9U, 8U));
}

void Vcpu_ram_uart_sim_decoder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_decoder::_ctor_var_reset\n"); );
    // Body
    __PVT__clock = VL_RAND_RESET_I(1);
    __PVT__reset_n = VL_RAND_RESET_I(1);
    __PVT__supervisor = VL_RAND_RESET_I(1);
    __PVT__ir = VL_RAND_RESET_I(16);
    __PVT__decoder_trap = VL_RAND_RESET_I(8);
    __PVT__decoder_micropc = VL_RAND_RESET_I(9);
    __PVT__decoder_alu = VL_RAND_RESET_I(18);
    __PVT__save_ea = VL_RAND_RESET_I(9);
    __PVT__perform_ea_write = VL_RAND_RESET_I(9);
    __PVT__perform_ea_read = VL_RAND_RESET_I(9);
    __PVT__load_ea = VL_RAND_RESET_I(9);
    __PVT__ea_type = VL_RAND_RESET_I(4);
    __PVT__ea_mod = VL_RAND_RESET_I(3);
    __PVT__ea_reg = VL_RAND_RESET_I(3);
}

void Vcpu_ram_uart_sim_decoder::_configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_decoder::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
