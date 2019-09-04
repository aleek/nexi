// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_ram_uart_sim.h for the primary calling header

#include "Vcpu_ram_uart_sim_alu.h" // For This
#include "Vcpu_ram_uart_sim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu_ram_uart_sim_alu) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu_ram_uart_sim_alu::__Vconfigure(Vcpu_ram_uart_sim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu_ram_uart_sim_alu::~Vcpu_ram_uart_sim_alu() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vcpu_ram_uart_sim_alu::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_alu::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__1\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__divider 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__divider;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__dividend 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__dividend;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__quotient 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__quotient;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__div_count 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_count;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__interrupt_mask_copy 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__interrupt_mask_copy;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__was_interrupt 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__was_interrupt;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__alu_signal 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_signal;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr;
    // ALWAYS at alu.v:75
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__reset_n) {
	if ((((0x14U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
	      & (8U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 4U)))) 
	     & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_count)))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__div_count = 0x12U;
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__quotient = 0U;
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__dividend 
		= ((1U & ((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__mult_div_sign)) 
			  | (~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))))
		    ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1
		    : VL_NEGATE_I(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1));
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__divider 
		= ((1U & ((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__mult_div_sign)) 
			  | (~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU))))
		    ? VL_CONCAT_III(32,16,16, (0xffffU 
					       & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 0x10U)), 0U)
		    : VL_CONCAT_III(32,16,16, (0xffffU 
					       & VL_NEGATE_I(
							     VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 0x10U))), 0U));
	} else {
	    if ((1U < (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_count))) {
		if ((1U & VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_diff, 0x20U))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__quotient 
			= VL_CONCAT_III(17,16,1, (0xffffU 
						  & VL_SEL_IIII(16,17,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__quotient, 0U, 0x10U)), 0U);
		} else {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__dividend 
			= VL_SEL_IQII(32,33,6,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_diff, 0U, 0x20U);
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__quotient 
			= VL_CONCAT_III(17,16,1, (0xffffU 
						  & VL_SEL_IIII(16,17,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__quotient, 0U, 0x10U)), 1U);
		}
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__divider 
		    = VL_EXTEND_II(32,31, (0x7fffffffU 
					   & VL_SEL_IIII(31,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__divider, 1U, 0x1fU)));
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__div_count 
		    = (0x1fU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_count) 
				- (IData)(1U)));
	    } else {
		if ((((0x14U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
		      & (8U == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 4U)))) 
		     & (1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_count)))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__div_count 
			= (0x1fU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_count) 
				    - (IData)(1U)));
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__div_count = 0U;
    }
    // ALWAYS at alu.v:313
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__reset_n) {
	if (((((((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
		   | (2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) 
		  | (3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) 
		 | (4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) 
		| (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) 
	       | (6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) 
	      | (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) 
	     | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)))) {
	    if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__interrupt_mask_copy 
		    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__interrupt_mask;
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__was_interrupt = 1U;
	    } else {
		if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr 
			= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__was_interrupt)
			    ? VL_CONCAT_III(16,2,14, 
					    VL_EXTEND_II(2,1, 
							 (1U 
							  & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 0xeU))), 
					    VL_CONCAT_III(14,1,13, 1U, 
							  VL_CONCAT_III(13,2,11, 
									(3U 
									 & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 0xbU, 2U)), 
									VL_CONCAT_III(11,3,8, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__interrupt_mask_copy), 
										(0xffU 
										& VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 0U, 8U))))))
			    : VL_CONCAT_III(16,2,14, 
					    VL_EXTEND_II(2,1, 
							 (1U 
							  & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 0xeU))), 
					    VL_CONCAT_III(14,1,13, 1U, 
							  (0x1fffU 
							   & VL_SEL_IIII(13,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 0U, 0xdU)))));
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__was_interrupt = 0U;
		} else {
		    if ((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
			if ((1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U))) {
			    VL_ASSIGNSEL_IIII(8,0x18U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result, 
					      (0xffU 
					       & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 8U)));
			} else {
			    VL_ASSIGNSEL_IIII(8,8U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result, 
					      (0xffU 
					       & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 8U)));
			}
		    } else {
			if ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
			    if ((1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U))) {
				VL_ASSIGNSEL_IIII(8,0x10U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result, 
						  (0xffU 
						   & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 8U)));
			    } else {
				VL_ASSIGNSEL_IIII(8,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result, 
						  (0xffU 
						   & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 8U)));
			    }
			} else {
			    if ((5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
				if ((1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U))) {
				    VL_ASSIGNSEL_IIII(8,8U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result, 
						      (0xffU 
						       & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 8U)));
				}
			    } else {
				if ((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
				    if ((1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U))) {
					VL_ASSIGNSEL_IIII(8,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result, 
							  (0xffU 
							   & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 8U)));
				    }
				} else {
				    if ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
					if ((1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U))) {
					    VL_ASSIGNSEL_IIII(8,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result, 
							      (0xffU 
							       & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x18U, 8U)));
					} else {
					    VL_ASSIGNSEL_IIII(8,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result, 
							      (0xffU 
							       & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 8U, 8U)));
					}
				    } else {
					if ((1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U))) {
					    VL_ASSIGNSEL_IIII(8,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result, 
							      (0xffU 
							       & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x10U, 8U)));
					} else {
					    VL_ASSIGNSEL_IIII(8,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result, 
							      (0xffU 
							       & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 8U)));
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if (((((((((9U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
		       | (0xaU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) 
		      | (0xbU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) 
		     | (0xcU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) 
		    | (0xdU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) 
		   | (0xeU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) 
		  | (0xfU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) 
		 | (0x10U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)))) {
		if ((9U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
		    VL_ASSIGNSEL_IIII(8,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result, 
				      (0xffU & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 8U, 8U)));
		} else {
		    if ((0xaU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
			VL_ASSIGNSEL_IIII(8,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result, 
					  (0xffU & 
					   VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 8U)));
		    } else {
			if ((0xbU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
				= ((1U & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
				    ? VL_CONCAT_III(32,16,16, 
						    (0xffffU 
						     & VL_REPLICATE_IOI(16,1,32,
									(1U 
									 & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)), 0x10U)), 
						    (0xffffU 
						     & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 0x10U)))
				    : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1);
			} else {
			    if ((0xcU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
				    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking;
				VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
						((1U 
						  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
						  ? 
						 (0U 
						  == 
						  (0xffU 
						   & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0U, 8U)))
						  : 
						 ((1U 
						   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
						   ? 
						  (0U 
						   == 
						   (0xffffU 
						    & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0U, 0x10U)))
						   : 
						  (0U 
						   == vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking))));
				VL_ASSIGNBIT_II(1,3U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
						(1U 
						 & ((1U 
						     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
						     ? 
						    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
						     : 
						    ((1U 
						      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
						      ? 
						     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
						      : 
						     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))));
				if ((1U & VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 5U))) {
				    VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
						    (1U 
						     & (((((1U 
							    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							    ? 
							   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
							    : 
							   ((1U 
							     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							     ? 
							    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
							     : 
							    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
							  & (~ 
							     ((1U 
							       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							       ? 
							      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
							       : 
							      ((1U 
								& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							        ? 
							       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
							        : 
							       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))))) 
							 | (((1U 
							      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							      ? 
							     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
							      : 
							     ((1U 
							       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							       ? 
							      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
							       : 
							      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))) 
							    & (~ 
							       ((1U 
								 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								 ? 
								VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
								 : 
								((1U 
								  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								  ? 
								 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
								  : 
								 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU)))))) 
							| (((1U 
							     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							     ? 
							    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
							     : 
							    ((1U 
							      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							      ? 
							     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
							      : 
							     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
							   & ((1U 
							       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							       ? 
							      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
							       : 
							      ((1U 
								& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							        ? 
							       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
							        : 
							       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))))));
				    VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
						    (1U 
						     & ((((~ 
							   ((1U 
							     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							     ? 
							    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
							     : 
							    ((1U 
							      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							      ? 
							     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
							      : 
							     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU)))) 
							  & ((1U 
							      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							      ? 
							     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
							      : 
							     ((1U 
							       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							       ? 
							      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
							       : 
							      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU)))) 
							 & (~ 
							    ((1U 
							      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							      ? 
							     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
							      : 
							     ((1U 
							       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							       ? 
							      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
							       : 
							      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))))) 
							| ((((1U 
							      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							      ? 
							     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
							      : 
							     ((1U 
							       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							       ? 
							      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
							       : 
							      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
							    & (~ 
							       ((1U 
								 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								 ? 
								VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
								 : 
								((1U 
								  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								  ? 
								 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
								  : 
								 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))))) 
							   & ((1U 
							       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							       ? 
							      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
							       : 
							      ((1U 
								& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							        ? 
							       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
							        : 
							       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))))));
				} else {
				    if ((1U & VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 3U))) {
					VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
							(1U 
							 & (((((1U 
								& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							        ? 
							       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
							        : 
							       ((1U 
								 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								 ? 
								VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
								 : 
								VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
							      & ((1U 
								  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								  ? 
								 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
								  : 
								 ((1U 
								   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								   ? 
								  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
								   : 
								  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU)))) 
							     | ((~ 
								 ((1U 
								   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								   ? 
								  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
								   : 
								  ((1U 
								    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								    ? 
								   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
								    : 
								   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))) 
								& ((1U 
								    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								    ? 
								   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
								    : 
								   ((1U 
								     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								     ? 
								    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
								     : 
								    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))))) 
							    | (((1U 
								 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								 ? 
								VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
								 : 
								((1U 
								  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								  ? 
								 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
								  : 
								 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
							       & (~ 
								  ((1U 
								    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								    ? 
								   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
								    : 
								   ((1U 
								     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								     ? 
								    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
								     : 
								    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))))))));
					VL_ASSIGNBIT_II(1,4U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
							(1U 
							 & (((((1U 
								& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							        ? 
							       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
							        : 
							       ((1U 
								 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								 ? 
								VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
								 : 
								VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
							      & ((1U 
								  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								  ? 
								 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
								  : 
								 ((1U 
								   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								   ? 
								  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
								   : 
								  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU)))) 
							     | ((~ 
								 ((1U 
								   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								   ? 
								  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
								   : 
								  ((1U 
								    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								    ? 
								   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
								    : 
								   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))) 
								& ((1U 
								    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								    ? 
								   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
								    : 
								   ((1U 
								     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								     ? 
								    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
								     : 
								    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))))) 
							    | (((1U 
								 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								 ? 
								VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
								 : 
								((1U 
								  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								  ? 
								 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
								  : 
								 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
							       & (~ 
								  ((1U 
								    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								    ? 
								   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
								    : 
								   ((1U 
								     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								     ? 
								    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
								     : 
								    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))))))));
					VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
							(1U 
							 & (((((1U 
								& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							        ? 
							       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
							        : 
							       ((1U 
								 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								 ? 
								VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
								 : 
								VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
							      & ((1U 
								  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								  ? 
								 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
								  : 
								 ((1U 
								   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								   ? 
								  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
								   : 
								  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU)))) 
							     & (~ 
								((1U 
								  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								  ? 
								 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
								  : 
								 ((1U 
								   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								   ? 
								  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
								   : 
								  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))))) 
							    | (((~ 
								 ((1U 
								   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								   ? 
								  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
								   : 
								  ((1U 
								    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								    ? 
								   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
								    : 
								   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU)))) 
								& (~ 
								   ((1U 
								     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								     ? 
								    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
								     : 
								    ((1U 
								      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								      ? 
								     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
								      : 
								     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))))) 
							       & ((1U 
								   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								   ? 
								  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
								   : 
								  ((1U 
								    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								    ? 
								   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
								    : 
								   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))))));
				    } else {
					if ((1U & VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 4U))) {
					    VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
							    (1U 
							     & (((((1U 
								    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								    ? 
								   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
								    : 
								   ((1U 
								     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								     ? 
								    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
								     : 
								    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
								  & (~ 
								     ((1U 
								       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								       ? 
								      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
								       : 
								      ((1U 
									& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								        ? 
								       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
								        : 
								       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))))) 
								 | (((1U 
								      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								      ? 
								     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
								      : 
								     ((1U 
								       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								       ? 
								      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
								       : 
								      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))) 
								    & (~ 
								       ((1U 
									 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									 ? 
									VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
									 : 
									((1U 
									  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									  ? 
									 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
									  : 
									 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU)))))) 
								| (((1U 
								     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								     ? 
								    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
								     : 
								    ((1U 
								      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								      ? 
								     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
								      : 
								     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
								   & ((1U 
								       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								       ? 
								      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
								       : 
								      ((1U 
									& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								        ? 
								       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
								        : 
								       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))))));
					    VL_ASSIGNBIT_II(1,4U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
							    (1U 
							     & (((((1U 
								    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								    ? 
								   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
								    : 
								   ((1U 
								     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								     ? 
								    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
								     : 
								    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
								  & (~ 
								     ((1U 
								       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								       ? 
								      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
								       : 
								      ((1U 
									& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								        ? 
								       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
								        : 
								       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))))) 
								 | (((1U 
								      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								      ? 
								     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
								      : 
								     ((1U 
								       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								       ? 
								      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
								       : 
								      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))) 
								    & (~ 
								       ((1U 
									 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									 ? 
									VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
									 : 
									((1U 
									  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									  ? 
									 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
									  : 
									 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU)))))) 
								| (((1U 
								     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								     ? 
								    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
								     : 
								    ((1U 
								      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								      ? 
								     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
								      : 
								     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
								   & ((1U 
								       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								       ? 
								      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
								       : 
								      ((1U 
									& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								        ? 
								       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
								        : 
								       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))))));
					    VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
							    (1U 
							     & ((((~ 
								   ((1U 
								     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								     ? 
								    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
								     : 
								    ((1U 
								      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								      ? 
								     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
								      : 
								     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU)))) 
								  & ((1U 
								      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								      ? 
								     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
								      : 
								     ((1U 
								       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								       ? 
								      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
								       : 
								      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU)))) 
								 & (~ 
								    ((1U 
								      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								      ? 
								     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
								      : 
								     ((1U 
								       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								       ? 
								      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
								       : 
								      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))))) 
								| ((((1U 
								      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								      ? 
								     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
								      : 
								     ((1U 
								       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								       ? 
								      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
								       : 
								      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
								    & (~ 
								       ((1U 
									 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									 ? 
									VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
									 : 
									((1U 
									  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									  ? 
									 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
									  : 
									 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))))) 
								   & ((1U 
								       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								       ? 
								      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
								       : 
								      ((1U 
									& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								        ? 
								       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
								        : 
								       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))))));
					} else {
					    VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
					    VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
					}
				    }
				}
			    } else {
				if ((0xdU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
					= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking;
				} else {
				    if ((0xeU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
					if ((4U == 
					     (7U & 
					      VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 3U)))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
						= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2;
					    VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
							    (9U 
							     < 
							     (0x3fU 
							      & VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2, 0xeU, 6U))));
					    VL_ASSIGNBIT_II(1,4U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
							    (9U 
							     < 
							     (0x3fU 
							      & VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2, 0xeU, 6U))));
					    VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
							    (1U 
							     & ((~ 
								 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2, 0x1eU)) 
								& VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2, 7U))));
					} else {
					    if ((0U 
						 == 
						 (7U 
						  & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 3U)))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
						    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2;
						VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
								(0x20U 
								 > 
								 (0x3fU 
								  & VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2, 0xeU, 6U))));
						VL_ASSIGNBIT_II(1,4U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
								(0x20U 
								 > 
								 (0x3fU 
								  & VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2, 0xeU, 6U))));
						VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
								(1U 
								 & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2, 0x1eU) 
								    & (~ 
								       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2, 7U)))));
					    } else {
						if (
						    (5U 
						     == 
						     (7U 
						      & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 3U)))) {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
							= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking;
						    VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
								    (1U 
								     & (((((1U 
									    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									    ? 
									   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
									    : 
									   ((1U 
									     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									     ? 
									    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
									     : 
									    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
									  & ((1U 
									      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									      ? 
									     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
									      : 
									     ((1U 
									       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									       ? 
									      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
									       : 
									      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU)))) 
									 | ((~ 
									     ((1U 
									       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									       ? 
									      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
									       : 
									      ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									        ? 
									       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
									        : 
									       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))) 
									    & ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									        ? 
									       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
									        : 
									       ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))))) 
									| (((1U 
									     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									     ? 
									    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
									     : 
									    ((1U 
									      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									      ? 
									     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
									      : 
									     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
									   & (~ 
									      ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									        ? 
									       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
									        : 
									       ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))))))));
						    VL_ASSIGNBIT_II(1,4U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
								    (1U 
								     & (((((1U 
									    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									    ? 
									   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
									    : 
									   ((1U 
									     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									     ? 
									    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
									     : 
									    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
									  & ((1U 
									      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									      ? 
									     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
									      : 
									     ((1U 
									       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									       ? 
									      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
									       : 
									      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU)))) 
									 | ((~ 
									     ((1U 
									       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									       ? 
									      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
									       : 
									      ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									        ? 
									       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
									        : 
									       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))) 
									    & ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									        ? 
									       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
									        : 
									       ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))))) 
									| (((1U 
									     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									     ? 
									    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
									     : 
									    ((1U 
									      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									      ? 
									     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
									      : 
									     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
									   & (~ 
									      ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									        ? 
									       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
									        : 
									       ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))))))));
						    VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
								    (1U 
								     & (((((1U 
									    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									    ? 
									   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
									    : 
									   ((1U 
									     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									     ? 
									    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
									     : 
									    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
									  & ((1U 
									      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									      ? 
									     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
									      : 
									     ((1U 
									       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									       ? 
									      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
									       : 
									      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU)))) 
									 & (~ 
									    ((1U 
									      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									      ? 
									     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
									      : 
									     ((1U 
									       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									       ? 
									      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
									       : 
									      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))))) 
									| (((~ 
									     ((1U 
									       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									       ? 
									      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
									       : 
									      ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									        ? 
									       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
									        : 
									       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU)))) 
									    & (~ 
									       ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))))) 
									   & ((1U 
									       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									       ? 
									      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
									       : 
									      ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									        ? 
									       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
									        : 
									       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))))));
						} else {
						    if (
							(1U 
							 == 
							 (7U 
							  & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 3U)))) {
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
							    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking;
							VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
									(1U 
									 & (((((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									        ? 
									       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
									        : 
									       ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
									      & (~ 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))))) 
									     | (((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))) 
										& (~ 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU)))))) 
									    | (((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
									       & ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))))));
							VL_ASSIGNBIT_II(1,4U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
									(1U 
									 & (((((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									        ? 
									       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
									        : 
									       ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
									      & (~ 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))))) 
									     | (((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))) 
										& (~ 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU)))))) 
									    | (((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
									       & ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))))));
							VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
									(1U 
									 & ((((~ 
									       ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU)))) 
									      & ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU)))) 
									     & (~ 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))))) 
									    | ((((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
										& (~ 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))))) 
									       & ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))))));
						    }
						}
					    }
					}
					VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
							(VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 2U) 
							 & ((1U 
							     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							     ? 
							    (0U 
							     == 
							     (0xffU 
							      & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0U, 8U)))
							     : 
							    ((1U 
							      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							      ? 
							     (0U 
							      == 
							      (0xffffU 
							       & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0U, 0x10U)))
							      : 
							     (0U 
							      == vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking)))));
					VL_ASSIGNBIT_II(1,3U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
							(1U 
							 & ((1U 
							     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							     ? 
							    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
							     : 
							    ((1U 
							      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							      ? 
							     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
							      : 
							     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))));
				    } else {
					if ((0xfU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
						= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking;
					    VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
					    if ((1U 
						 & (VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0xbU) 
						    | VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0xfU)))) {
						VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
								(1U 
								 & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U)));
					    } else {
						VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
					    }
					    VL_ASSIGNBIT_II(1,3U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
							    (1U 
							     & ((1U 
								 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								 ? 
								VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
								 : 
								((1U 
								  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								  ? 
								 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
								  : 
								 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))));
					    VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
							    ((1U 
							      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							      ? 
							     (0U 
							      == 
							      (0xffU 
							       & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0U, 8U)))
							      : 
							     ((1U 
							       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							       ? 
							      (0U 
							       == 
							       (0xffffU 
								& VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0U, 0x10U)))
							       : 
							      (0U 
							       == vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking))));
					} else {
					    if ((1U 
						 & (((VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 8U) 
						      | VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 9U)) 
						     | VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0xaU)) 
						    | VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0xbU)))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
						    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking;
						VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
								(1U 
								 & ((1U 
								     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								     ? 
								    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
								     : 
								    ((1U 
								      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								      ? 
								     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
								      : 
								     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU)))));
						if (
						    (1U 
						     & VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 8U))) {
						    VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
								    (1U 
								     & (VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 1U) 
									| ((1U 
									    & ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									        ? 
									       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
									        : 
									       ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))) 
									   != 
									   (1U 
									    & ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									        ? 
									       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
									        : 
									       ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))))))));
						} else {
						    VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
						}
						if (
						    (1U 
						     & (~ 
							VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0xaU)))) {
						    VL_ASSIGNBIT_II(1,4U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
								    (1U 
								     & ((1U 
									 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									 ? 
									VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
									 : 
									((1U 
									  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									  ? 
									 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
									  : 
									 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU)))));
						}
					    } else {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
						    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking;
						VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
								(1U 
								 & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U)));
						VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
						if (
						    (1U 
						     & (~ 
							VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0xeU)))) {
						    VL_ASSIGNBIT_II(1,4U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
								    (1U 
								     & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U)));
						}
					    }
					    VL_ASSIGNBIT_II(1,3U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
							    (1U 
							     & ((1U 
								 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								 ? 
								VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
								 : 
								((1U 
								  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								  ? 
								 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
								  : 
								 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))));
					    VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
							    ((1U 
							      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							      ? 
							     (0U 
							      == 
							      (0xffU 
							       & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0U, 8U)))
							      : 
							     ((1U 
							       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							       ? 
							      (0U 
							       == 
							       (0xffffU 
								& VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0U, 0x10U)))
							       : 
							      (0U 
							       == vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking))));
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if (((((((((0x11U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
			   | (0x12U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) 
			  | (0x13U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) 
			 | (0x14U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) 
			| (0x15U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) 
		       | (0x16U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) 
		      | (0x17U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) 
		     | (0x18U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)))) {
		    if ((0x11U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
			    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking;
			VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
			VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
			VL_ASSIGNBIT_II(1,3U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
					(1U & ((1U 
						& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
					        ? VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
					        : (
						   (1U 
						    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
						    ? 
						   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
						    : 
						   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))));
			VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
					((1U & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
					  ? (0U == 
					     (0xffU 
					      & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0U, 8U)))
					  : ((1U & 
					      VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
					      ? (0U 
						 == 
						 (0xffffU 
						  & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0U, 0x10U)))
					      : (0U 
						 == vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking))));
		    } else {
			if ((0x12U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
				= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking;
			    if ((0xbU == (0xfU & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 4U)))) {
				VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
						((1U 
						  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
						  ? 
						 (0U 
						  == 
						  (0xffU 
						   & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0U, 8U)))
						  : 
						 ((1U 
						   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
						   ? 
						  (0U 
						   == 
						   (0xffffU 
						    & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0U, 0x10U)))
						   : 
						  (0U 
						   == vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking))));
				VL_ASSIGNBIT_II(1,3U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
						(1U 
						 & ((1U 
						     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
						     ? 
						    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
						     : 
						    ((1U 
						      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
						      ? 
						     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
						      : 
						     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))));
				VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
						(1U 
						 & (((((1U 
							& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
						        ? 
						       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
						        : 
						       ((1U 
							 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							 ? 
							VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
							 : 
							VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
						      & (~ 
							 ((1U 
							   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							   ? 
							  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
							   : 
							  ((1U 
							    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							    ? 
							   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
							    : 
							   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))))) 
						     | (((1U 
							  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							  ? 
							 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
							  : 
							 ((1U 
							   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							   ? 
							  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
							   : 
							  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))) 
							& (~ 
							   ((1U 
							     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							     ? 
							    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
							     : 
							    ((1U 
							      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							      ? 
							     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
							      : 
							     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU)))))) 
						    | (((1U 
							 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							 ? 
							VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
							 : 
							((1U 
							  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							  ? 
							 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
							  : 
							 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
						       & ((1U 
							   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							   ? 
							  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
							   : 
							  ((1U 
							    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							    ? 
							   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
							    : 
							   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))))));
				VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
						(1U 
						 & ((((~ 
						       ((1U 
							 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							 ? 
							VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
							 : 
							((1U 
							  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							  ? 
							 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
							  : 
							 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU)))) 
						      & ((1U 
							  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							  ? 
							 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
							  : 
							 ((1U 
							   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							   ? 
							  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
							   : 
							  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU)))) 
						     & (~ 
							((1U 
							  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							  ? 
							 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
							  : 
							 ((1U 
							   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							   ? 
							  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
							   : 
							  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))))) 
						    | ((((1U 
							  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							  ? 
							 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
							  : 
							 ((1U 
							   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							   ? 
							  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
							   : 
							  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))) 
							& (~ 
							   ((1U 
							     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							     ? 
							    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
							     : 
							    ((1U 
							      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							      ? 
							     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
							      : 
							     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))))) 
						       & ((1U 
							   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
							   ? 
							  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
							   : 
							  ((1U 
							    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
							    ? 
							   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
							    : 
							   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))))));
			    }
			} else {
			    if ((0x13U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
				    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking;
				if ((((0xffffU & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 0x10U)) 
				      != (0xffffU & 
					  VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 0x10U))) 
				     & ((((~ ((1U & 
					       VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
					       ? VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
					       : ((1U 
						   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
						   ? 
						  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
						   : 
						  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU)))) 
					  & ((1U & 
					      VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
					      ? VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
					      : ((1U 
						  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
						  ? 
						 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
						  : 
						 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU)))) 
					 | (((~ ((1U 
						  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
						  ? 
						 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
						  : 
						 ((1U 
						   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
						   ? 
						  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
						   : 
						  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU)))) 
					     & (~ (
						   (1U 
						    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
						    ? 
						   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
						    : 
						   ((1U 
						     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
						     ? 
						    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
						     : 
						    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU))))) 
					    & (~ ((1U 
						   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
						   ? 
						  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
						   : 
						  ((1U 
						    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
						    ? 
						   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
						    : 
						   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))))) 
					| ((((1U & 
					      VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
					      ? VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
					      : ((1U 
						  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
						  ? 
						 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
						  : 
						 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))) 
					    & ((1U 
						& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
					        ? VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 7U)
					        : (
						   (1U 
						    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
						    ? 
						   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)
						    : 
						   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0x1fU)))) 
					   & (~ ((1U 
						  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
						  ? 
						 VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
						  : 
						 ((1U 
						   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
						   ? 
						  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
						   : 
						  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))))))) {
				    VL_ASSIGNBIT_II(1,3U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__alu_signal = 1U;
				} else {
				    if ((1U & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU))) {
					VL_ASSIGNBIT_IO(1,3U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 1U);
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__alu_signal = 1U;
				    } else {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__alu_signal = 0U;
				    }
				}
			    } else {
				if ((0x14U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
				    if (((8U == (0xfU 
						 & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 4U))) 
					 & (0U == (0xffffU 
						   & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 0x10U))))) {
					VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
					VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
					VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
					VL_ASSIGNBIT_II(1,3U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__alu_signal = 1U;
				    } else {
					if (((8U == 
					      (0xfU 
					       & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 4U))) 
					     & (0U 
						== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_count)))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__alu_signal = 0U;
					} else {
					    if (((8U 
						  == 
						  (0xfU 
						   & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 4U))) 
						 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_overflow))) {
						VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
						VL_ASSIGNBIT_IO(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 1U);
						VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
						VL_ASSIGNBIT_IO(1,3U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 1U);
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__alu_signal = 1U;
					    } else {
						if (
						    (8U 
						     == 
						     (0xfU 
						      & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 4U)))) {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
							= 
							VL_CONCAT_III(32,16,16, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_remainder), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_quotient));
						    VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
						    VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
						    VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
								    (0U 
								     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_quotient)));
						    VL_ASSIGNBIT_II(1,3U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
								    (1U 
								     & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_quotient), 0xfU)));
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__alu_signal = 0U;
						} else {
						    if (
							(0xcU 
							 == 
							 (0xfU 
							  & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 4U)))) {
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
							    = 
							    VL_SEL_IQII(32,34,6,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__mult_result, 0U, 0x20U);
							VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
							VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
							VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
									(0U 
									 == 
									 VL_SEL_IQII(32,34,6,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__mult_result, 0U, 0x20U)));
							VL_ASSIGNBIT_II(1,3U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
									(1U 
									 & VL_BITSEL_IQII(1,34,6,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__mult_result, 0x1fU)));
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__alu_signal = 0U;
						    }
						}
					    }
					}
				    }
				} else {
				    if ((0x15U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
					if ((0U != 
					     (7U & 
					      VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 3U, 3U)))) {
					    VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_val);
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
						= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8;
					} else {
					    if ((0U 
						 == 
						 (7U 
						  & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 3U, 3U)))) {
						VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_val);
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
						    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32;
					    }
					}
				    } else {
					if ((0x16U 
					     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
					    VL_ASSIGNSEL_IIII(8,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result, 
							      VL_CONCAT_III(8,1,7, 1U, 
									    (0x7fU 
									     & VL_SEL_IIII(7,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 7U))));
					    VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
					    VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
					    VL_ASSIGNBIT_II(1,3U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
							    (1U 
							     & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)));
					    VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
							    (0U 
							     == 
							     (0xffU 
							      & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 8U))));
					} else {
					    if ((0x17U 
						 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
						if (
						    ((((0U 
							== 
							(0xfU 
							 & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 8U, 4U))) 
						       | (2U 
							  == 
							  (0xfU 
							   & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 8U, 4U)))) 
						      | (4U 
							 == 
							 (0xfU 
							  & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 8U, 4U)))) 
						     | (6U 
							== 
							(0xfU 
							 & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 8U, 4U))))) {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
							= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking;
						} else {
						    if (
							(0x20U 
							 == 
							 (0x3fU 
							  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U, 6U)))) {
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
							    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking;
							VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
									(VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 2U) 
									 & ((1U 
									     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									     ? 
									    (0U 
									     == 
									     (0xffU 
									      & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0U, 8U)))
									     : 
									    ((1U 
									      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									      ? 
									     (0U 
									      == 
									      (0xffffU 
									       & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0U, 0x10U)))
									      : 
									     (0U 
									      == vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking)))));
							VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
									(1U 
									 & (~ 
									    ((0U 
									      == 
									      (0xffU 
									       & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 8U))) 
									     & (~ 
										VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U))))));
							VL_ASSIGNBIT_II(1,4U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
									(1U 
									 & (~ 
									    ((0U 
									      == 
									      (0xffU 
									       & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 8U))) 
									     & (~ 
										VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U))))));
						    } else {
							if (
							    (0x21U 
							     == 
							     (0x3fU 
							      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U, 6U)))) {
							    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
								= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking;
							} else {
							    if (
								(0x22U 
								 == 
								 (0x3fU 
								  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U, 6U)))) {
								vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
								    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking;
							    } else {
								if (
								    (0x23U 
								     == 
								     (0x3fU 
								      & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U, 6U)))) {
								    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
									= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking;
								}
							    }
							}
						    }
						}
						VL_ASSIGNBIT_II(1,3U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
								(1U 
								 & ((1U 
								     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								     ? 
								    VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
								     : 
								    ((1U 
								      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								      ? 
								     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
								      : 
								     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU)))));
						if (
						    ((((2U 
							== 
							(0xfU 
							 & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 8U, 4U))) 
						       | (6U 
							  == 
							  (0xfU 
							   & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 8U, 4U)))) 
						      | (0x21U 
							 == 
							 (0x3fU 
							  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U, 6U)))) 
						     | (0x11U 
							== 
							(0x1fU 
							 & VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 7U, 5U))))) {
						    VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
						    VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 0U);
						    VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
								    ((1U 
								      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
								      ? 
								     (0U 
								      == 
								      (0xffU 
								       & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0U, 8U)))
								      : 
								     ((1U 
								       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
								       ? 
								      (0U 
								       == 
								       (0xffffU 
									& VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0U, 0x10U)))
								       : 
								      (0U 
								       == vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking))));
						} else {
						    if (
							(0U 
							 == 
							 (0xfU 
							  & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 8U, 4U)))) {
							VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
									(1U 
									 & (((1U 
									      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									      ? 
									     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
									      : 
									     ((1U 
									       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									       ? 
									      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
									       : 
									      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))) 
									    | ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									        ? 
									       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
									        : 
									       ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))))));
							VL_ASSIGNBIT_II(1,4U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
									(1U 
									 & (((1U 
									      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									      ? 
									     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
									      : 
									     ((1U 
									       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									       ? 
									      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
									       : 
									      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))) 
									    | ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									        ? 
									       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
									        : 
									       ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))))));
							VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
									(1U 
									 & (((1U 
									      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									      ? 
									     VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
									      : 
									     ((1U 
									       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									       ? 
									      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
									       : 
									      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))) 
									    & ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									        ? 
									       VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
									        : 
									       ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))))));
							VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
									(VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 2U) 
									 & ((1U 
									     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									     ? 
									    (0U 
									     == 
									     (0xffU 
									      & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0U, 8U)))
									     : 
									    ((1U 
									      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									      ? 
									     (0U 
									      == 
									      (0xffffU 
									       & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0U, 0x10U)))
									      : 
									     (0U 
									      == vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking)))));
						    } else {
							if (
							    (4U 
							     == 
							     (0xfU 
							      & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 8U, 4U)))) {
							    VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
									    (1U 
									     & (((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))) 
										| ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))))));
							    VL_ASSIGNBIT_II(1,4U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
									    (1U 
									     & (((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))) 
										| ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))))));
							    VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
									    (1U 
									     & (((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))) 
										& ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 7U)
										 : 
										((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0xfU)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0x1fU))))));
							    VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr, 
									    ((1U 
									      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
									      ? 
									     (0U 
									      == 
									      (0xffU 
									       & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0U, 8U)))
									      : 
									     ((1U 
									       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
									       ? 
									      (0U 
									       == 
									       (0xffffU 
										& VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking, 0U, 0x10U)))
									       : 
									      (0U 
									       == vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking))));
							}
						    }
						}
					    } else {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
						    = 
						    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
						     + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2);
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x19U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
			    = (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
			       - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2);
		    } else {
			if ((0x1aU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr 
				= ((1U & VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0x10U))
				    ? VL_CONCAT_III(16,1,15, 
						    (1U 
						     & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)), 
						    VL_EXTEND_II(15,14, 
								 VL_CONCAT_III(14,1,13, 
									       (1U 
										& VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xdU)), 
									       VL_EXTEND_II(13,11, 
										VL_CONCAT_III(11,3,8, 
										(7U 
										& VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 8U, 3U)), 
										VL_EXTEND_II(8,5, 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 5U))))))))
				    : VL_CONCAT_III(16,8,8, 
						    (0xffU 
						     & VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 8U, 8U)), 
						    VL_EXTEND_II(8,5, 
								 (0x1fU 
								  & VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 5U)))));
			} else {
			    if ((0x1bU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
				    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1;
			    } else {
				if ((0x1cU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result 
					= ((7U == (7U 
						   & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0U, 3U)))
					    ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
					       - (IData)(4U))
					    : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1);
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr = 0x2700U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__alu_signal = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__interrupt_mask_copy = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__was_interrupt = 0U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__divider 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__divider;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__dividend 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__dividend;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__quotient 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__quotient;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__was_interrupt 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__was_interrupt;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__interrupt_mask_copy 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__interrupt_mask_copy;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_signal 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__alu_signal;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_count 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__div_count;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__result;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__Vdly__sr;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_diff 
	= (VL_ULL(0x1ffffffff) & (VL_EXTEND_QI(33,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__dividend) 
				  - VL_EXTEND_QI(33,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__divider)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_mult_div_ready 
	= ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_count)) 
	   | (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_count)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_3_0 
	= (0xfU & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 8U, 4U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_3_0 
	= (0xfU & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 8U, 4U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_19_14a 
	= (0x3fU & ((0x1fU < (0x3fU & VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 8U, 6U)))
		     ? ((IData)(2U) + VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0xeU, 6U))
		     : ((0xfU < (0x3fU & VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 8U, 6U)))
			 ? ((IData)(1U) + VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0xeU, 6U))
			 : VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0xeU, 6U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_19_14a 
	= (0x3fU & ((0x10U > (0x3fU & VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 8U, 6U)))
		     ? (VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0xeU, 6U) 
			- (IData)(2U)) : ((0x20U > 
					   (0x3fU & 
					    VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 8U, 6U)))
					   ? (VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0xeU, 6U) 
					      - (IData)(1U))
					   : VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0xeU, 6U))));
}

void Vcpu_ram_uart_sim_alu::_settle__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_alu::_settle__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__2\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_diff 
	= (VL_ULL(0x1ffffffff) & (VL_EXTEND_QI(33,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__dividend) 
				  - VL_EXTEND_QI(33,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__divider)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_mult_div_ready 
	= ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_count)) 
	   | (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_count)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_3_0 
	= (0xfU & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 8U, 4U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_3_0 
	= (0xfU & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 8U, 4U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_19_14a 
	= (0x3fU & ((0x1fU < (0x3fU & VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 8U, 6U)))
		     ? ((IData)(2U) + VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0xeU, 6U))
		     : ((0xfU < (0x3fU & VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 8U, 6U)))
			 ? ((IData)(1U) + VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0xeU, 6U))
			 : VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0xeU, 6U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_19_14a 
	= (0x3fU & ((0x10U > (0x3fU & VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 8U, 6U)))
		     ? (VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0xeU, 6U) 
			- (IData)(2U)) : ((0x20U > 
					   (0x3fU & 
					    VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 8U, 6U)))
					   ? (VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0xeU, 6U) 
					      - (IData)(1U))
					   : VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0xeU, 6U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_19_14b 
	= (0x3fU & ((9U < (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_19_14a))
		     ? ((IData)(6U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_19_14a))
		     : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_19_14a)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_19_14b 
	= (0x3fU & (((0x20U > (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_19_14a)) 
		     & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0x1fU))
		     ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_19_14a) 
			- (IData)(6U)) : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_19_14a)));
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_alu::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_alu::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__3\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_19_14b 
	= (0x3fU & ((9U < (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_19_14a))
		     ? ((IData)(6U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_19_14a))
		     : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_19_14a)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_19_14b 
	= (0x3fU & (((0x20U > (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_19_14a)) 
		     & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0x1fU))
		     ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_19_14a) 
			- (IData)(6U)) : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_19_14a)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_7_4 
	= (0xfU & VL_SEL_IIII(4,6,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_19_14b), 0U, 4U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_7_4 
	= (0xfU & VL_SEL_IIII(4,6,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_19_14b), 0U, 4U));
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_alu::_combo__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__4(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_alu::_combo__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__4\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__mult_div_sign 
	= (1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 8U));
}

void Vcpu_ram_uart_sim_alu::_settle__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__5(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_alu::_settle__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__5\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__mult_div_sign 
	= (1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 8U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_7_4 
	= (0xfU & VL_SEL_IIII(4,6,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_19_14b), 0U, 4U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_7_4 
	= (0xfU & VL_SEL_IIII(4,6,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_19_14b), 0U, 4U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0a 
	= (0x1fU & ((IData)(0x19U) - VL_EXTEND_II(5,4, 
						  (0xfU 
						   & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 4U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_7_4a 
	= (0x1fU & ((9U < (0xfU & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 4U)))
		     ? ((IData)(0x18U) - VL_EXTEND_II(5,4, 
						      (0xfU 
						       & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 4U, 4U))))
		     : ((IData)(0x19U) - VL_EXTEND_II(5,4, 
						      (0xfU 
						       & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 4U, 4U))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__lbit 
	= (1U & ((((1U & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
		    ? VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
		    : ((1U & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
		        ? VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
		        : VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))) 
		  & VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0xaU)) 
		 | (VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U) 
		    & VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0xbU))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__rbit 
	= (1U & (((((1U & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
		     ? VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
		     : ((1U & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
			 ? VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
			 : VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))) 
		   & VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0xcU)) 
		  | (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U) 
		     & VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0xeU))) 
		 | (VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U) 
		    & VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0xfU))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_val 
	= (1U & (~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 
				  VL_EXTEND_II(5,3, 
					       (7U 
						& VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 3U))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_val 
	= (1U & (~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 
				  (0x1fU & VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD_19_14 
	= (0x3fU & (VL_EXTEND_II(6,4, (0xfU & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 4U, 4U))) 
		    + VL_EXTEND_II(6,4, (0xfU & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 4U, 4U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD_19_14 
	= (0x3fU & (((IData)(0x20U) + VL_EXTEND_II(6,4, 
						   (0xfU 
						    & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 4U, 4U)))) 
		    - VL_EXTEND_II(6,4, (0xfU & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 4U, 4U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_CHK 
	= (0xffffU & (VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 0x10U) 
		      - VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 0x10U)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD_31_23 
	= (0x1ffU & ((VL_EXTEND_II(9,8, (0xffU & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 8U))) 
		      + VL_EXTEND_II(9,8, (0xffU & 
					   VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 8U)))) 
		     + VL_EXTEND_II(9,1, (1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD_31_23 
	= (0x1ffU & ((VL_EXTEND_II(9,8, (0xffU & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 8U))) 
		      - VL_EXTEND_II(9,8, (0xffU & 
					   VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 8U)))) 
		     - VL_EXTEND_II(9,1, (1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD_13_8a 
	= (0x3fU & ((VL_EXTEND_II(6,4, (0xfU & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 4U))) 
		     + VL_EXTEND_II(6,4, (0xfU & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 4U)))) 
		    + VL_EXTEND_II(6,1, (1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD_13_8a 
	= (0x3fU & ((((IData)(0x20U) + VL_EXTEND_II(6,4, 
						    (0xfU 
						     & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 4U)))) 
		     - VL_EXTEND_II(6,4, (0xfU & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 4U)))) 
		    - VL_EXTEND_II(6,1, (1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_remainder 
	= (0xffffU & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU) 
		       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__mult_div_sign))
		       ? VL_NEGATE_I(VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__dividend, 0U, 0x10U))
		       : VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__dividend, 0U, 0x10U)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_overflow 
	= (1U & (VL_BITSEL_IIII(1,17,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__quotient, 0x10U) 
		 | ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__mult_div_sign) 
		    & (((~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU) 
			    ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU))) 
			& VL_BITSEL_IIII(1,17,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__quotient, 0xfU)) 
		       | ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU) 
			   ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)) 
			  & (0x8000U < (0xffffU & VL_SEL_IIII(16,17,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__quotient, 0U, 0x10U))))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_quotient 
	= (0xffffU & (((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU) 
			^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)) 
		       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__mult_div_sign))
		       ? VL_NEGATE_I(VL_SEL_IIII(16,17,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__quotient, 0U, 0x10U))
		       : VL_SEL_IIII(16,17,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__quotient, 0U, 0x10U)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__op1_u2 
	= VL_CONCAT_III(17,1,16, (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU) 
				  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__mult_div_sign)), 
			(0xffffU & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 0x10U)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__op2_u2 
	= VL_CONCAT_III(17,1,16, (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU) 
				  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__mult_div_sign)), 
			(0xffffU & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 0x10U)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2 
	= VL_CONCAT_III(32,12,20, (0xfffU & VL_SEL_IIII(12,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0x14U, 0xcU)), 
			VL_CONCAT_III(20,6,14, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_19_14b), 
				      VL_CONCAT_III(14,6,8, 
						    (0x3fU 
						     & VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 8U, 6U)), 
						    VL_CONCAT_III(8,4,4, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_7_4), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_3_0)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2 
	= VL_CONCAT_III(32,12,20, (0xfffU & VL_SEL_IIII(12,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0x14U, 0xcU)), 
			VL_CONCAT_III(20,6,14, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_19_14b), 
				      VL_CONCAT_III(14,6,8, 
						    (0x3fU 
						     & VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 8U, 6U)), 
						    VL_CONCAT_III(8,4,4, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_7_4), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_3_0)))));
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_alu::_combo__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__6(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_alu::_combo__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__6\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0a 
	= (0x1fU & ((IData)(0x19U) - VL_EXTEND_II(5,4, 
						  (0xfU 
						   & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 4U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_7_4a 
	= (0x1fU & ((9U < (0xfU & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 4U)))
		     ? ((IData)(0x18U) - VL_EXTEND_II(5,4, 
						      (0xfU 
						       & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 4U, 4U))))
		     : ((IData)(0x19U) - VL_EXTEND_II(5,4, 
						      (0xfU 
						       & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 4U, 4U))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__lbit 
	= (1U & ((((1U & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
		    ? VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
		    : ((1U & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
		        ? VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
		        : VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))) 
		  & VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0xaU)) 
		 | (VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U) 
		    & VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0xbU))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__rbit 
	= (1U & (((((1U & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
		     ? VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)
		     : ((1U & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
			 ? VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)
			 : VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))) 
		   & VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0xcU)) 
		  | (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U) 
		     & VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0xeU))) 
		 | (VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U) 
		    & VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0xfU))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_val 
	= (1U & (~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 
				  VL_EXTEND_II(5,3, 
					       (7U 
						& VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 3U))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_val 
	= (1U & (~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 
				  (0x1fU & VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD_19_14 
	= (0x3fU & (VL_EXTEND_II(6,4, (0xfU & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 4U, 4U))) 
		    + VL_EXTEND_II(6,4, (0xfU & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 4U, 4U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD_19_14 
	= (0x3fU & (((IData)(0x20U) + VL_EXTEND_II(6,4, 
						   (0xfU 
						    & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 4U, 4U)))) 
		    - VL_EXTEND_II(6,4, (0xfU & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 4U, 4U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_CHK 
	= (0xffffU & (VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 0x10U) 
		      - VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 0x10U)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD_31_23 
	= (0x1ffU & ((VL_EXTEND_II(9,8, (0xffU & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 8U))) 
		      + VL_EXTEND_II(9,8, (0xffU & 
					   VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 8U)))) 
		     + VL_EXTEND_II(9,1, (1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD_31_23 
	= (0x1ffU & ((VL_EXTEND_II(9,8, (0xffU & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 8U))) 
		      - VL_EXTEND_II(9,8, (0xffU & 
					   VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 8U)))) 
		     - VL_EXTEND_II(9,1, (1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD_13_8a 
	= (0x3fU & ((VL_EXTEND_II(6,4, (0xfU & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 4U))) 
		     + VL_EXTEND_II(6,4, (0xfU & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 4U)))) 
		    + VL_EXTEND_II(6,1, (1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD_13_8a 
	= (0x3fU & ((((IData)(0x20U) + VL_EXTEND_II(6,4, 
						    (0xfU 
						     & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 4U)))) 
		     - VL_EXTEND_II(6,4, (0xfU & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 4U)))) 
		    - VL_EXTEND_II(6,1, (1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_remainder 
	= (0xffffU & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU) 
		       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__mult_div_sign))
		       ? VL_NEGATE_I(VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__dividend, 0U, 0x10U))
		       : VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__dividend, 0U, 0x10U)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_overflow 
	= (1U & (VL_BITSEL_IIII(1,17,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__quotient, 0x10U) 
		 | ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__mult_div_sign) 
		    & (((~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU) 
			    ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU))) 
			& VL_BITSEL_IIII(1,17,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__quotient, 0xfU)) 
		       | ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU) 
			   ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)) 
			  & (0x8000U < (0xffffU & VL_SEL_IIII(16,17,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__quotient, 0U, 0x10U))))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__div_quotient 
	= (0xffffU & (((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU) 
			^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU)) 
		       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__mult_div_sign))
		       ? VL_NEGATE_I(VL_SEL_IIII(16,17,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__quotient, 0U, 0x10U))
		       : VL_SEL_IIII(16,17,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__quotient, 0U, 0x10U)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__op1_u2 
	= VL_CONCAT_III(17,1,16, (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU) 
				  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__mult_div_sign)), 
			(0xffffU & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 0x10U)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__op2_u2 
	= VL_CONCAT_III(17,1,16, (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0xfU) 
				  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__mult_div_sign)), 
			(0xffffU & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 0x10U)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0b 
	= (0xfU & ((((~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U)) 
		     & (9U == (0xfU & VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0a), 0U, 4U)))) 
		    & (9U == (0xfU & VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_7_4a), 0U, 4U))))
		    ? 0U : (((~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U)) 
			     & ((9U == (0xfU & VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0a), 0U, 4U))) 
				| (0xfU == (0xfU & 
					    VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0a), 0U, 4U)))))
			     ? 0U : ((1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U))
				      ? VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0a), 0U, 4U)
				      : ((IData)(1U) 
					 + VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0a), 0U, 4U))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_7_4b 
	= (0xfU & ((((~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U)) 
		     & (9U == (0xfU & VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0a), 0U, 4U)))) 
		    & (9U == (0xfU & VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_7_4a), 0U, 4U))))
		    ? 0U : (((~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U)) 
			     & ((9U == (0xfU & VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0a), 0U, 4U))) 
				| (0xfU == (0xfU & 
					    VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0a), 0U, 4U)))))
			     ? ((IData)(1U) + VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_7_4a), 0U, 4U))
			     : VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_7_4a), 0U, 4U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_bit 
	= ((1U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U, 2U)))
	    ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_val)
	    : (2U != (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U, 2U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit 
	= ((1U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U, 2U)))
	    ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_val)
	    : (2U != (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U, 2U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD_13_8b 
	= (0x3fU & ((9U < (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD_13_8a))
		     ? ((IData)(6U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD_13_8a))
		     : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD_13_8a)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD_13_8b 
	= (0x3fU & ((0x20U > (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD_13_8a))
		     ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD_13_8a) 
			- (IData)(6U)) : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD_13_8a)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__mult_result 
	= (VL_ULL(0x3ffffffff) & VL_MULS_QQQ(34,34,34, 
					     (VL_ULL(0x3ffffffff) 
					      & VL_EXTENDS_QI(34,17, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__op1_u2)), 
					     (VL_ULL(0x3ffffffff) 
					      & VL_EXTENDS_QI(34,17, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__op2_u2))));
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_alu::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__7(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_alu::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__7\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2 
	= VL_CONCAT_III(32,12,20, (0xfffU & VL_SEL_IIII(12,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0x14U, 0xcU)), 
			VL_CONCAT_III(20,6,14, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_19_14b), 
				      VL_CONCAT_III(14,6,8, 
						    (0x3fU 
						     & VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 8U, 6U)), 
						    VL_CONCAT_III(8,4,4, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_7_4), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2_3_0)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2 
	= VL_CONCAT_III(32,12,20, (0xfffU & VL_SEL_IIII(12,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0x14U, 0xcU)), 
			VL_CONCAT_III(20,6,14, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_19_14b), 
				      VL_CONCAT_III(14,6,8, 
						    (0x3fU 
						     & VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 8U, 6U)), 
						    VL_CONCAT_III(8,4,4, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_7_4), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2_3_0)))));
}

void Vcpu_ram_uart_sim_alu::_settle__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__8(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_alu::_settle__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__8\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0b 
	= (0xfU & ((((~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U)) 
		     & (9U == (0xfU & VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0a), 0U, 4U)))) 
		    & (9U == (0xfU & VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_7_4a), 0U, 4U))))
		    ? 0U : (((~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U)) 
			     & ((9U == (0xfU & VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0a), 0U, 4U))) 
				| (0xfU == (0xfU & 
					    VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0a), 0U, 4U)))))
			     ? 0U : ((1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U))
				      ? VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0a), 0U, 4U)
				      : ((IData)(1U) 
					 + VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0a), 0U, 4U))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_7_4b 
	= (0xfU & ((((~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U)) 
		     & (9U == (0xfU & VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0a), 0U, 4U)))) 
		    & (9U == (0xfU & VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_7_4a), 0U, 4U))))
		    ? 0U : (((~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U)) 
			     & ((9U == (0xfU & VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0a), 0U, 4U))) 
				| (0xfU == (0xfU & 
					    VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0a), 0U, 4U)))))
			     ? ((IData)(1U) + VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_7_4a), 0U, 4U))
			     : VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_7_4a), 0U, 4U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_bit 
	= ((1U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U, 2U)))
	    ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_val)
	    : (2U != (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U, 2U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit 
	= ((1U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U, 2U)))
	    ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_val)
	    : (2U != (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U, 2U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD_13_8b 
	= (0x3fU & ((9U < (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD_13_8a))
		     ? ((IData)(6U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD_13_8a))
		     : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD_13_8a)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD_13_8b 
	= (0x3fU & ((0x20U > (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD_13_8a))
		     ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD_13_8a) 
			- (IData)(6U)) : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD_13_8a)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__mult_result 
	= (VL_ULL(0x3ffffffff) & VL_MULS_QQQ(34,34,34, 
					     (VL_ULL(0x3ffffffff) 
					      & VL_EXTENDS_QI(34,17, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__op1_u2)), 
					     (VL_ULL(0x3ffffffff) 
					      & VL_EXTENDS_QI(34,17, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__op2_u2))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8 
	= VL_CONCAT_III(32,24,8, (0xffffffU & VL_SEL_IIII(24,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 8U, 0x18U)), 
			VL_CONCAT_III(8,1,7, (1U & 
					      ((7U 
						== 
						(7U 
						 & VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 3U)))
					        ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_bit)
					        : VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U))), 
				      VL_CONCAT_III(7,1,6, 
						    (1U 
						     & ((6U 
							 == 
							 (7U 
							  & VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 3U)))
							 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_bit)
							 : 
							VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 6U))), 
						    VL_CONCAT_III(6,1,5, 
								  (1U 
								   & ((5U 
								       == 
								       (7U 
									& VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 3U)))
								       ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_bit)
								       : 
								      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 5U))), 
								  VL_CONCAT_III(5,1,4, 
										(1U 
										& ((4U 
										== 
										(7U 
										& VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 3U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 4U))), 
										VL_CONCAT_III(4,1,3, 
										(1U 
										& ((3U 
										== 
										(7U 
										& VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 3U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 3U))), 
										VL_CONCAT_III(3,1,2, 
										(1U 
										& ((2U 
										== 
										(7U 
										& VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 3U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 2U))), 
										VL_CONCAT_III(2,1,1, 
										(1U 
										& ((1U 
										== 
										(7U 
										& VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 3U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 1U))), 
										(1U 
										& ((0U 
										== 
										(7U 
										& VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 3U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U)))))))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32 
	= VL_CONCAT_III(32,1,31, (1U & ((0x1fU == (0x1fU 
						   & VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
					 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
					 : VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))), 
			VL_CONCAT_III(31,1,30, (1U 
						& ((0x1eU 
						    == 
						    (0x1fU 
						     & VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
						    ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
						    : 
						   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1eU))), 
				      VL_CONCAT_III(30,1,29, 
						    (1U 
						     & ((0x1dU 
							 == 
							 (0x1fU 
							  & VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
							 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
							 : 
							VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1dU))), 
						    VL_CONCAT_III(29,1,28, 
								  (1U 
								   & ((0x1cU 
								       == 
								       (0x1fU 
									& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
								       ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
								       : 
								      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1cU))), 
								  VL_CONCAT_III(28,1,27, 
										(1U 
										& ((0x1bU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1bU))), 
										VL_CONCAT_III(27,1,26, 
										(1U 
										& ((0x1aU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1aU))), 
										VL_CONCAT_III(26,1,25, 
										(1U 
										& ((0x19U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x19U))), 
										VL_CONCAT_III(25,1,24, 
										(1U 
										& ((0x18U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x18U))), 
										VL_CONCAT_III(24,1,23, 
										(1U 
										& ((0x17U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x17U))), 
										VL_CONCAT_III(23,1,22, 
										(1U 
										& ((0x16U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x16U))), 
										VL_CONCAT_III(22,1,21, 
										(1U 
										& ((0x15U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x15U))), 
										VL_CONCAT_III(21,1,20, 
										(1U 
										& ((0x14U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x14U))), 
										VL_CONCAT_III(20,1,19, 
										(1U 
										& ((0x13U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x13U))), 
										VL_CONCAT_III(19,1,18, 
										(1U 
										& ((0x12U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x12U))), 
										VL_CONCAT_III(18,1,17, 
										(1U 
										& ((0x11U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x11U))), 
										VL_CONCAT_III(17,1,16, 
										(1U 
										& ((0x10U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x10U))), 
										VL_CONCAT_III(16,1,15, 
										(1U 
										& ((0xfU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU))), 
										VL_CONCAT_III(15,1,14, 
										(1U 
										& ((0xeU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xeU))), 
										VL_CONCAT_III(14,1,13, 
										(1U 
										& ((0xdU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xdU))), 
										VL_CONCAT_III(13,1,12, 
										(1U 
										& ((0xcU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xcU))), 
										VL_CONCAT_III(12,1,11, 
										(1U 
										& ((0xbU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xbU))), 
										VL_CONCAT_III(11,1,10, 
										(1U 
										& ((0xaU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xaU))), 
										VL_CONCAT_III(10,1,9, 
										(1U 
										& ((9U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 9U))), 
										VL_CONCAT_III(9,1,8, 
										(1U 
										& ((8U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 8U))), 
										VL_CONCAT_III(8,1,7, 
										(1U 
										& ((7U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U))), 
										VL_CONCAT_III(7,1,6, 
										(1U 
										& ((6U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 6U))), 
										VL_CONCAT_III(6,1,5, 
										(1U 
										& ((5U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 5U))), 
										VL_CONCAT_III(5,1,4, 
										(1U 
										& ((4U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 4U))), 
										VL_CONCAT_III(4,1,3, 
										(1U 
										& ((3U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 3U))), 
										VL_CONCAT_III(3,1,2, 
										(1U 
										& ((2U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 2U))), 
										VL_CONCAT_III(2,1,1, 
										(1U 
										& ((1U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 1U))), 
										(1U 
										& ((0U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U))))))))))))))))))))))))))))))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking 
	= (((0xcU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
	    & VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0U))
	    ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
	       | vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2)
	    : (((0xcU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
		& VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 1U))
	        ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
		   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2)
	        : (((0xcU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
		    & VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 2U))
		    ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
		       ^ vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2)
		    : (((0xcU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
			& VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 3U))
		        ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
			   + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2)
		        : (((0xcU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
			    & (VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 4U) 
			       | VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 5U)))
			    ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
			       - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2)
			    : (((0xdU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
				& (4U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 3U))))
			        ? VL_CONCAT_III(32,9,23, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD_31_23), 
						VL_CONCAT_III(23,3,20, 
							      (7U 
							       & VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0x14U, 3U)), 
							      VL_CONCAT_III(20,6,14, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD_19_14), 
									    VL_CONCAT_III(14,6,8, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD_13_8b), 
										(0xffU 
										& VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0U, 8U))))))
			        : (((0xdU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
				    & (0U == (7U & 
					      VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 3U))))
				    ? VL_CONCAT_III(32,9,23, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD_31_23), 
						    VL_CONCAT_III(23,3,20, 
								  (7U 
								   & VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0x14U, 3U)), 
								  VL_CONCAT_III(20,6,14, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD_19_14), 
										VL_CONCAT_III(14,6,8, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD_13_8b), 
										(0xffU 
										& VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0U, 8U))))))
				    : (((0xeU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
					& (4U == (7U 
						  & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 3U))))
				        ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2
				        : (((0xeU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
					    & (0U == 
					       (7U 
						& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 3U))))
					    ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2
					    : (((0xeU 
						 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
						& (5U 
						   == 
						   (7U 
						    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 3U))))
					        ? (
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
						    + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2) 
						   + 
						   VL_EXTEND_II(32,1, 
								(1U 
								 & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U))))
					        : (
						   ((0xeU 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
						    & (1U 
						       == 
						       (7U 
							& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 3U))))
						    ? 
						   ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
						     - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2) 
						    - 
						    VL_EXTEND_II(32,1, 
								 (1U 
								  & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U))))
						    : 
						   ((0xfU 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))
						     ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1
						     : 
						    (((0x10U 
						       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
						      & (((VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 8U) 
							   | VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 9U)) 
							  | VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0xaU)) 
							 | VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0xbU)))
						      ? 
						     VL_CONCAT_III(32,31,1, 
								   (0x7fffffffU 
								    & VL_SEL_IIII(31,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 0x1fU)), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__lbit))
						      : 
						     ((0x10U 
						       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))
						       ? 
						      VL_CONCAT_III(32,1,31, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__rbit), 
								    VL_CONCAT_III(31,15,16, 
										(0x7fffU 
										& VL_SEL_IIII(15,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x11U, 0xfU)), 
										VL_CONCAT_III(16,1,15, 
										(1U 
										& ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__rbit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x10U))), 
										VL_CONCAT_III(15,7,8, 
										(0x7fU 
										& VL_SEL_IIII(7,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 9U, 7U)), 
										VL_CONCAT_III(8,1,7, 
										(1U 
										& ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__rbit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 8U))), 
										(0x7fU 
										& VL_SEL_IIII(7,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 1U, 7U)))))))
						       : 
						      ((0x11U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))
						        ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1
						        : 
						       (((0x12U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
							 & VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 6U))
							 ? 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
							 + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2)
							 : 
							((0x12U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
							  - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2)
							  : 
							 ((0x13U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))
							   ? 
							  VL_CONCAT_III(32,16,16, 
									(0xffffU 
									 & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0x10U, 0x10U)), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_CHK))
							   : 
							  (((0x17U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
							    & ((((0U 
								  == 
								  (0xfU 
								   & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 8U, 4U))) 
								 | (2U 
								    == 
								    (0xfU 
								     & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 8U, 4U)))) 
								| (4U 
								   == 
								   (0xfU 
								    & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 8U, 4U)))) 
							       | (6U 
								  == 
								  (0xfU 
								   & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 8U, 4U)))))
							    ? 
							   (VL_NEGATE_I(
									(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
									 & VL_REPLICATE_IOI(32,1,32,
										(1U 
										& (VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xaU) 
										| (~ 
										VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 9U)))), 0x20U))) 
							    - 
							    VL_EXTEND_II(32,1, 
									 (1U 
									  & (((VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U) 
									       & (~ 
										VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xaU))) 
									      & (~ 
										VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 9U))) 
									     | (VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xaU) 
										& VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 9U))))))
							    : 
							   (((0x17U 
							      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
							     & (0x20U 
								== 
								(0x3fU 
								 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U, 6U))))
							     ? 
							    VL_CONCAT_III(32,24,8, 
									  (0xffffffU 
									   & VL_SEL_IIII(24,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 8U, 0x18U)), 
									  VL_CONCAT_III(8,4,4, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_7_4b), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0b)))
							     : 
							    (((0x17U 
							       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
							      & (0x21U 
								 == 
								 (0x3fU 
								  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U, 6U))))
							      ? 
							     VL_CONCAT_III(32,16,16, 
									   (0xffffU 
									    & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 0x10U)), 
									   (0xffffU 
									    & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x10U, 0x10U)))
							      : 
							     (((0x17U 
								== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
							       & (0x22U 
								  == 
								  (0x3fU 
								   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U, 6U))))
							       ? 
							      VL_CONCAT_III(32,16,16, 
									    (0xffffU 
									     & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0x10U, 0x10U)), 
									    VL_CONCAT_III(16,8,8, 
										(0xffU 
										& VL_REPLICATE_IOI(8,1,32,
										(1U 
										& VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)), 8U)), 
										(0xffU 
										& VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 8U))))
							       : 
							      (((0x17U 
								 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
								& (0x23U 
								   == 
								   (0x3fU 
								    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U, 6U))))
							        ? 
							       VL_CONCAT_III(32,16,16, 
									     (0xffffU 
									      & VL_REPLICATE_IOI(16,1,32,
										(1U 
										& VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)), 0x10U)), 
									     (0xffffU 
									      & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 0x10U)))
							        : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result)))))))))))))))))))))));
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_alu::_combo__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__9(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_alu::_combo__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__9\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8 
	= VL_CONCAT_III(32,24,8, (0xffffffU & VL_SEL_IIII(24,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 8U, 0x18U)), 
			VL_CONCAT_III(8,1,7, (1U & 
					      ((7U 
						== 
						(7U 
						 & VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 3U)))
					        ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_bit)
					        : VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U))), 
				      VL_CONCAT_III(7,1,6, 
						    (1U 
						     & ((6U 
							 == 
							 (7U 
							  & VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 3U)))
							 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_bit)
							 : 
							VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 6U))), 
						    VL_CONCAT_III(6,1,5, 
								  (1U 
								   & ((5U 
								       == 
								       (7U 
									& VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 3U)))
								       ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_bit)
								       : 
								      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 5U))), 
								  VL_CONCAT_III(5,1,4, 
										(1U 
										& ((4U 
										== 
										(7U 
										& VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 3U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 4U))), 
										VL_CONCAT_III(4,1,3, 
										(1U 
										& ((3U 
										== 
										(7U 
										& VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 3U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 3U))), 
										VL_CONCAT_III(3,1,2, 
										(1U 
										& ((2U 
										== 
										(7U 
										& VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 3U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 2U))), 
										VL_CONCAT_III(2,1,1, 
										(1U 
										& ((1U 
										== 
										(7U 
										& VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 3U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 1U))), 
										(1U 
										& ((0U 
										== 
										(7U 
										& VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 3U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS8_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U)))))))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32 
	= VL_CONCAT_III(32,1,31, (1U & ((0x1fU == (0x1fU 
						   & VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
					 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
					 : VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1fU))), 
			VL_CONCAT_III(31,1,30, (1U 
						& ((0x1eU 
						    == 
						    (0x1fU 
						     & VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
						    ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
						    : 
						   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1eU))), 
				      VL_CONCAT_III(30,1,29, 
						    (1U 
						     & ((0x1dU 
							 == 
							 (0x1fU 
							  & VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
							 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
							 : 
							VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1dU))), 
						    VL_CONCAT_III(29,1,28, 
								  (1U 
								   & ((0x1cU 
								       == 
								       (0x1fU 
									& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
								       ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
								       : 
								      VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1cU))), 
								  VL_CONCAT_III(28,1,27, 
										(1U 
										& ((0x1bU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1bU))), 
										VL_CONCAT_III(27,1,26, 
										(1U 
										& ((0x1aU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x1aU))), 
										VL_CONCAT_III(26,1,25, 
										(1U 
										& ((0x19U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x19U))), 
										VL_CONCAT_III(25,1,24, 
										(1U 
										& ((0x18U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x18U))), 
										VL_CONCAT_III(24,1,23, 
										(1U 
										& ((0x17U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x17U))), 
										VL_CONCAT_III(23,1,22, 
										(1U 
										& ((0x16U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x16U))), 
										VL_CONCAT_III(22,1,21, 
										(1U 
										& ((0x15U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x15U))), 
										VL_CONCAT_III(21,1,20, 
										(1U 
										& ((0x14U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x14U))), 
										VL_CONCAT_III(20,1,19, 
										(1U 
										& ((0x13U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x13U))), 
										VL_CONCAT_III(19,1,18, 
										(1U 
										& ((0x12U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x12U))), 
										VL_CONCAT_III(18,1,17, 
										(1U 
										& ((0x11U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x11U))), 
										VL_CONCAT_III(17,1,16, 
										(1U 
										& ((0x10U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x10U))), 
										VL_CONCAT_III(16,1,15, 
										(1U 
										& ((0xfU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU))), 
										VL_CONCAT_III(15,1,14, 
										(1U 
										& ((0xeU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xeU))), 
										VL_CONCAT_III(14,1,13, 
										(1U 
										& ((0xdU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xdU))), 
										VL_CONCAT_III(13,1,12, 
										(1U 
										& ((0xcU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xcU))), 
										VL_CONCAT_III(12,1,11, 
										(1U 
										& ((0xbU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xbU))), 
										VL_CONCAT_III(11,1,10, 
										(1U 
										& ((0xaU 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xaU))), 
										VL_CONCAT_III(10,1,9, 
										(1U 
										& ((9U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 9U))), 
										VL_CONCAT_III(9,1,8, 
										(1U 
										& ((8U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 8U))), 
										VL_CONCAT_III(8,1,7, 
										(1U 
										& ((7U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U))), 
										VL_CONCAT_III(7,1,6, 
										(1U 
										& ((6U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 6U))), 
										VL_CONCAT_III(6,1,5, 
										(1U 
										& ((5U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 5U))), 
										VL_CONCAT_III(5,1,4, 
										(1U 
										& ((4U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 4U))), 
										VL_CONCAT_III(4,1,3, 
										(1U 
										& ((3U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 3U))), 
										VL_CONCAT_III(3,1,2, 
										(1U 
										& ((2U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 2U))), 
										VL_CONCAT_III(2,1,1, 
										(1U 
										& ((1U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 1U))), 
										(1U 
										& ((0U 
										== 
										(0x1fU 
										& VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2, 0U, 5U)))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_BITS32_bit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U))))))))))))))))))))))))))))))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_blocking 
	= (((0xcU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
	    & VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0U))
	    ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
	       | vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2)
	    : (((0xcU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
		& VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 1U))
	        ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
		   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2)
	        : (((0xcU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
		    & VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 2U))
		    ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
		       ^ vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2)
		    : (((0xcU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
			& VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 3U))
		        ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
			   + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2)
		        : (((0xcU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
			    & (VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 4U) 
			       | VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 5U)))
			    ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
			       - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2)
			    : (((0xdU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
				& (4U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 3U))))
			        ? VL_CONCAT_III(32,9,23, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD_31_23), 
						VL_CONCAT_III(23,3,20, 
							      (7U 
							       & VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0x14U, 3U)), 
							      VL_CONCAT_III(20,6,14, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD_19_14), 
									    VL_CONCAT_III(14,6,8, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD_13_8b), 
										(0xffU 
										& VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0U, 8U))))))
			        : (((0xdU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
				    & (0U == (7U & 
					      VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 3U))))
				    ? VL_CONCAT_III(32,9,23, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD_31_23), 
						    VL_CONCAT_III(23,3,20, 
								  (7U 
								   & VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0x14U, 3U)), 
								  VL_CONCAT_III(20,6,14, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD_19_14), 
										VL_CONCAT_III(14,6,8, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD_13_8b), 
										(0xffU 
										& VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0U, 8U))))))
				    : (((0xeU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
					& (4U == (7U 
						  & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 3U))))
				        ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_ABCD2
				        : (((0xeU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
					    & (0U == 
					       (7U 
						& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 3U))))
					    ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_SBCD2
					    : (((0xeU 
						 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
						& (5U 
						   == 
						   (7U 
						    & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 3U))))
					        ? (
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
						    + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2) 
						   + 
						   VL_EXTEND_II(32,1, 
								(1U 
								 & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U))))
					        : (
						   ((0xeU 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
						    & (1U 
						       == 
						       (7U 
							& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xcU, 3U))))
						    ? 
						   ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
						     - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2) 
						    - 
						    VL_EXTEND_II(32,1, 
								 (1U 
								  & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U))))
						    : 
						   ((0xfU 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))
						     ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1
						     : 
						    (((0x10U 
						       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
						      & (((VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 8U) 
							   | VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 9U)) 
							  | VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0xaU)) 
							 | VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 0xbU)))
						      ? 
						     VL_CONCAT_III(32,31,1, 
								   (0x7fffffffU 
								    & VL_SEL_IIII(31,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 0x1fU)), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__lbit))
						      : 
						     ((0x10U 
						       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))
						       ? 
						      VL_CONCAT_III(32,1,31, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__rbit), 
								    VL_CONCAT_III(31,15,16, 
										(0x7fffU 
										& VL_SEL_IIII(15,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x11U, 0xfU)), 
										VL_CONCAT_III(16,1,15, 
										(1U 
										& ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 1U))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__rbit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x10U))), 
										VL_CONCAT_III(15,7,8, 
										(0x7fU 
										& VL_SEL_IIII(7,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 9U, 7U)), 
										VL_CONCAT_III(8,1,7, 
										(1U 
										& ((1U 
										& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__size), 0U))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__rbit)
										 : 
										VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 8U))), 
										(0x7fU 
										& VL_SEL_IIII(7,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 1U, 7U)))))))
						       : 
						      ((0x11U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))
						        ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1
						        : 
						       (((0x12U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
							 & VL_BITSEL_IIII(1,18,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__decoder_alu_reg, 6U))
							 ? 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
							 + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2)
							 : 
							((0x12U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
							  - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand2)
							  : 
							 ((0x13U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control))
							   ? 
							  VL_CONCAT_III(32,16,16, 
									(0xffffU 
									 & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0x10U, 0x10U)), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_CHK))
							   : 
							  (((0x17U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
							    & ((((0U 
								  == 
								  (0xfU 
								   & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 8U, 4U))) 
								 | (2U 
								    == 
								    (0xfU 
								     & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 8U, 4U)))) 
								| (4U 
								   == 
								   (0xfU 
								    & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 8U, 4U)))) 
							       | (6U 
								  == 
								  (0xfU 
								   & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 8U, 4U)))))
							    ? 
							   (VL_NEGATE_I(
									(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1 
									 & VL_REPLICATE_IOI(32,1,32,
										(1U 
										& (VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xaU) 
										| (~ 
										VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 9U)))), 0x20U))) 
							    - 
							    VL_EXTEND_II(32,1, 
									 (1U 
									  & (((VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__sr), 4U) 
									       & (~ 
										VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xaU))) 
									      & (~ 
										VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 9U))) 
									     | (VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 0xaU) 
										& VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 9U))))))
							    : 
							   (((0x17U 
							      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
							     & (0x20U 
								== 
								(0x3fU 
								 & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U, 6U))))
							     ? 
							    VL_CONCAT_III(32,24,8, 
									  (0xffffffU 
									   & VL_SEL_IIII(24,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 8U, 0x18U)), 
									  VL_CONCAT_III(8,4,4, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_7_4b), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result_NBCD_3_0b)))
							     : 
							    (((0x17U 
							       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
							      & (0x21U 
								 == 
								 (0x3fU 
								  & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U, 6U))))
							      ? 
							     VL_CONCAT_III(32,16,16, 
									   (0xffffU 
									    & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 0x10U)), 
									   (0xffffU 
									    & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0x10U, 0x10U)))
							      : 
							     (((0x17U 
								== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
							       & (0x22U 
								  == 
								  (0x3fU 
								   & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U, 6U))))
							       ? 
							      VL_CONCAT_III(32,16,16, 
									    (0xffffU 
									     & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result, 0x10U, 0x10U)), 
									    VL_CONCAT_III(16,8,8, 
										(0xffU 
										& VL_REPLICATE_IOI(8,1,32,
										(1U 
										& VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 7U)), 8U)), 
										(0xffU 
										& VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 8U))))
							       : 
							      (((0x17U 
								 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__alu_control)) 
								& (0x23U 
								   == 
								   (0x3fU 
								    & VL_SEL_IIII(6,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__ir), 6U, 6U))))
							        ? 
							       VL_CONCAT_III(32,16,16, 
									     (0xffffU 
									      & VL_REPLICATE_IOI(16,1,32,
										(1U 
										& VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0xfU)), 0x10U)), 
									     (0xffffU 
									      & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__operand1, 0U, 0x10U)))
							        : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__alu_m.__PVT__result)))))))))))))))))))))));
}

void Vcpu_ram_uart_sim_alu::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_alu::_ctor_var_reset\n"); );
    // Body
    __PVT__clock = VL_RAND_RESET_I(1);
    __PVT__reset_n = VL_RAND_RESET_I(1);
    __PVT__address = VL_RAND_RESET_I(32);
    __PVT__ir = VL_RAND_RESET_I(16);
    __PVT__size = VL_RAND_RESET_I(3);
    __PVT__operand1 = VL_RAND_RESET_I(32);
    __PVT__operand2 = VL_RAND_RESET_I(32);
    __PVT__interrupt_mask = VL_RAND_RESET_I(3);
    __PVT__alu_control = VL_RAND_RESET_I(5);
    __PVT__sr = VL_RAND_RESET_I(16);
    __PVT__result = VL_RAND_RESET_I(32);
    __PVT__alu_signal = VL_RAND_RESET_I(1);
    __PVT__alu_mult_div_ready = VL_RAND_RESET_I(1);
    __PVT__decoder_alu_reg = VL_RAND_RESET_I(18);
    __PVT__mult_div_sign = VL_RAND_RESET_I(1);
    __PVT__div_count = VL_RAND_RESET_I(5);
    __PVT__quotient = VL_RAND_RESET_I(17);
    __PVT__dividend = VL_RAND_RESET_I(32);
    __PVT__divider = VL_RAND_RESET_I(32);
    __PVT__div_diff = VL_RAND_RESET_Q(33);
    __PVT__div_overflow = VL_RAND_RESET_I(1);
    __PVT__div_quotient = VL_RAND_RESET_I(16);
    __PVT__div_remainder = VL_RAND_RESET_I(16);
    __PVT__mult_result = VL_RAND_RESET_Q(34);
    __PVT__op1_u2 = VL_RAND_RESET_I(17);
    __PVT__op2_u2 = VL_RAND_RESET_I(17);
    __PVT__result_ABCD_13_8a = VL_RAND_RESET_I(6);
    __PVT__result_ABCD_19_14 = VL_RAND_RESET_I(6);
    __PVT__result_ABCD_31_23 = VL_RAND_RESET_I(9);
    __PVT__result_ABCD_13_8b = VL_RAND_RESET_I(6);
    __PVT__result_SBCD_13_8a = VL_RAND_RESET_I(6);
    __PVT__result_SBCD_19_14 = VL_RAND_RESET_I(6);
    __PVT__result_SBCD_31_23 = VL_RAND_RESET_I(9);
    __PVT__result_SBCD_13_8b = VL_RAND_RESET_I(6);
    __PVT__result_ABCD2_19_14a = VL_RAND_RESET_I(6);
    __PVT__result_ABCD2_19_14b = VL_RAND_RESET_I(6);
    __PVT__result_ABCD2_7_4 = VL_RAND_RESET_I(4);
    __PVT__result_ABCD2_3_0 = VL_RAND_RESET_I(4);
    __PVT__result_ABCD2 = VL_RAND_RESET_I(32);
    __PVT__result_SBCD2_19_14a = VL_RAND_RESET_I(6);
    __PVT__result_SBCD2_19_14b = VL_RAND_RESET_I(6);
    __PVT__result_SBCD2_7_4 = VL_RAND_RESET_I(4);
    __PVT__result_SBCD2_3_0 = VL_RAND_RESET_I(4);
    __PVT__result_SBCD2 = VL_RAND_RESET_I(32);
    __PVT__result_CHK = VL_RAND_RESET_I(16);
    __PVT__result_BITS8_val = VL_RAND_RESET_I(1);
    __PVT__result_BITS8_bit = VL_RAND_RESET_I(1);
    __PVT__result_BITS8 = VL_RAND_RESET_I(32);
    __PVT__result_BITS32_val = VL_RAND_RESET_I(1);
    __PVT__result_BITS32_bit = VL_RAND_RESET_I(1);
    __PVT__result_BITS32 = VL_RAND_RESET_I(32);
    __PVT__result_NBCD_3_0a = VL_RAND_RESET_I(5);
    __PVT__result_NBCD_7_4a = VL_RAND_RESET_I(5);
    __PVT__result_NBCD_3_0b = VL_RAND_RESET_I(4);
    __PVT__result_NBCD_7_4b = VL_RAND_RESET_I(4);
    __PVT__result_blocking = VL_RAND_RESET_I(32);
    __PVT__interrupt_mask_copy = VL_RAND_RESET_I(3);
    __PVT__was_interrupt = VL_RAND_RESET_I(1);
    __PVT__lbit = VL_RAND_RESET_I(1);
    __PVT__rbit = VL_RAND_RESET_I(1);
    __Vdly__div_count = VL_RAND_RESET_I(5);
    __Vdly__quotient = VL_RAND_RESET_I(17);
    __Vdly__dividend = VL_RAND_RESET_I(32);
    __Vdly__divider = VL_RAND_RESET_I(32);
    __Vdly__interrupt_mask_copy = VL_RAND_RESET_I(3);
    __Vdly__was_interrupt = VL_RAND_RESET_I(1);
    __Vdly__sr = VL_RAND_RESET_I(16);
    __Vdly__result = VL_RAND_RESET_I(32);
    __Vdly__alu_signal = VL_RAND_RESET_I(1);
}

void Vcpu_ram_uart_sim_alu::_configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_alu::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
