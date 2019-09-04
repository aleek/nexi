// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_ram_uart_sim.h for the primary calling header

#include "Vcpu_ram_uart_sim_condition.h" // For This
#include "Vcpu_ram_uart_sim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu_ram_uart_sim_condition) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu_ram_uart_sim_condition::__Vconfigure(Vcpu_ram_uart_sim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu_ram_uart_sim_condition::~Vcpu_ram_uart_sim_condition() {
}

//--------------------
// Internal Methods

void Vcpu_ram_uart_sim_condition::_settle__TOP__tb_m68k_ram_uart__ao68000_m__condition_m__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_condition::_settle__TOP__tb_m68k_ram_uart__ao68000_m__condition_m__1\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__C 
	= (1U & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__ccr), 0U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V 
	= (1U & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__ccr), 1U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__Z 
	= (1U & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__ccr), 2U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N 
	= (1U & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__ccr), 3U));
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_condition::_combo__TOP__tb_m68k_ram_uart__ao68000_m__condition_m__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_condition::_combo__TOP__tb_m68k_ram_uart__ao68000_m__condition_m__2\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__C 
	= (1U & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__ccr), 0U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V 
	= (1U & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__ccr), 1U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__Z 
	= (1U & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__ccr), 2U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N 
	= (1U & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__ccr), 3U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__condition 
	= ((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond)) 
	   | ((1U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond)) 
	      & ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
		  ? ((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__C)) 
		     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__Z)))
		  : ((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
		      ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__C) 
			 | (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__Z))
		      : ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
			  ? (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__C))
			  : ((5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
			      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__C)
			      : ((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
				  ? (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__Z))
				  : ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
				      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__Z)
				      : ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
					  ? (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V))
					  : ((9U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
					      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V)
					      : ((0xaU 
						  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
						  ? 
						 (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N))
						  : 
						 ((0xbU 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
						   ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N)
						   : 
						  ((0xcU 
						    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
						    ? 
						   (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N) 
						     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V)) 
						    | ((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N)) 
						       & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V))))
						    : 
						   ((0xdU 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
						     ? 
						    (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N) 
						      & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V))) 
						     | ((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N)) 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V)))
						     : 
						    ((0xeU 
						      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
						      ? 
						     ((((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N) 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V)) 
						       & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__Z))) 
						      | (((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N)) 
							  & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V))) 
							 & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__Z))))
						      : 
						     ((0xfU 
						       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond)) 
						      & (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__Z) 
							  | ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N) 
							     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V)))) 
							 | ((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N)) 
							    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V)))))))))))))))))));
}

void Vcpu_ram_uart_sim_condition::_settle__TOP__tb_m68k_ram_uart__ao68000_m__condition_m__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_condition::_settle__TOP__tb_m68k_ram_uart__ao68000_m__condition_m__3\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__condition 
	= ((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond)) 
	   | ((1U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond)) 
	      & ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
		  ? ((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__C)) 
		     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__Z)))
		  : ((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
		      ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__C) 
			 | (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__Z))
		      : ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
			  ? (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__C))
			  : ((5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
			      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__C)
			      : ((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
				  ? (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__Z))
				  : ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
				      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__Z)
				      : ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
					  ? (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V))
					  : ((9U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
					      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V)
					      : ((0xaU 
						  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
						  ? 
						 (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N))
						  : 
						 ((0xbU 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
						   ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N)
						   : 
						  ((0xcU 
						    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
						    ? 
						   (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N) 
						     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V)) 
						    | ((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N)) 
						       & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V))))
						    : 
						   ((0xdU 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
						     ? 
						    (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N) 
						      & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V))) 
						     | ((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N)) 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V)))
						     : 
						    ((0xeU 
						      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond))
						      ? 
						     ((((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N) 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V)) 
						       & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__Z))) 
						      | (((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N)) 
							  & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V))) 
							 & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__Z))))
						      : 
						     ((0xfU 
						       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__cond)) 
						      & (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__Z) 
							  | ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N) 
							     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V)))) 
							 | ((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__N)) 
							    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__condition_m.__PVT__V)))))))))))))))))));
}

void Vcpu_ram_uart_sim_condition::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_condition::_ctor_var_reset\n"); );
    // Body
    __PVT__cond = VL_RAND_RESET_I(4);
    __PVT__ccr = VL_RAND_RESET_I(8);
    __PVT__condition = VL_RAND_RESET_I(1);
    __PVT__C = VL_RAND_RESET_I(1);
    __PVT__V = VL_RAND_RESET_I(1);
    __PVT__Z = VL_RAND_RESET_I(1);
    __PVT__N = VL_RAND_RESET_I(1);
}

void Vcpu_ram_uart_sim_condition::_configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_condition::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
