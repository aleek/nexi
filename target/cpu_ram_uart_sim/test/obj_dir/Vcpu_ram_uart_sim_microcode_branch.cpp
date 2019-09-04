// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_ram_uart_sim.h for the primary calling header

#include "Vcpu_ram_uart_sim_microcode_branch.h" // For This
#include "Vcpu_ram_uart_sim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu_ram_uart_sim_microcode_branch) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu_ram_uart_sim_microcode_branch::__Vconfigure(Vcpu_ram_uart_sim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu_ram_uart_sim_microcode_branch::~Vcpu_ram_uart_sim_microcode_branch() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vcpu_ram_uart_sim_microcode_branch::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_microcode_branch::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m__1\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_2 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_2;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_3 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_3;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_1 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_1;
    // ALWAYS at microcode_branch.v:105
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__reset_n) {
	if ((((0xbU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
	      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__prefetch_ir_valid)) 
	     & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__decoder_trap)))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_1 
		= (0x1ffU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_0) 
			     + VL_EXTEND_II(9,4, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))));
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_2 
		= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_1;
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_3 
		= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_2;
	} else {
	    if ((0xfU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control))) {
		if (((0xeU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset)) 
		     & (0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__load_ea)))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_1 
			= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__perform_ea_read;
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_2 
			= (0x1ffU & ((IData)(1U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_0)));
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_3 
			= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_1;
		} else {
		    if (((0xeU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset)) 
			 & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__load_ea)))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_1 
			    = (0x1ffU & ((IData)(1U) 
					 + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_0)));
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_2 
			    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_1;
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_3 
			    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_2;
		    } else {
			if (((0xfU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset)) 
			     & (0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__save_ea)))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_1 
				= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__save_ea;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_2 
				= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_1;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_3 
				= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_2;
			} else {
			    if (((((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset)) 
				     & (0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__load_ea))) 
				    | (2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))) 
				   | (3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))) 
				  | ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset)) 
				     & (0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__save_ea)))) 
				 | (0xbU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset)))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_1 
				    = (0x1ffU & ((IData)(1U) 
						 + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_0)));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_2 
				    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_1;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_3 
				    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_2;
			    } else {
				if ((5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_1 
					= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_2;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_2 
					= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_3;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_3 = 0U;
				} else {
				    if ((0xaU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_1 
					    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_0;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_2 
					    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_1;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_3 
					    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_2;
				    } else {
					if ((0xcU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_1 
						= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_2;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_2 
						= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_3;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_3 = 0U;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_1 = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_2 = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_3 = 0U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_2 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_2;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_3 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_3;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_1 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_1;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_0 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_0;
    // ALWAYS at microcode_branch.v:100
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_0 
	= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__reset_n)
	    ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc)
	    : 0U);
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_0 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__Vdly__micro_pc_0;
}

void Vcpu_ram_uart_sim_microcode_branch::_initial__TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_microcode_branch::_initial__TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m__2\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at microcode_branch.v:53
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_0 = 0U;
}

void Vcpu_ram_uart_sim_microcode_branch::_settle__TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_microcode_branch::_settle__TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m__3\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc 
	= (0x1ffU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__reset_n)
		      ? (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__jmp_address_trap) 
			  | (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__jmp_bus_trap))
			  ? 3U : ((((((((((((((((1U 
						 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
						& (0x10U 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__movem_loop))) 
					       | ((2U 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
						  & (~ 
						     VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__movem_reg), 0U)))) 
					      | ((3U 
						  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
						 & (0U 
						    == 
						    (0x3fU 
						     & VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__operand2, 0U, 6U))))) 
					     | ((4U 
						 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
						& (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__alu_signal)))) 
					    | ((5U 
						== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__alu_mult_div_ready))) 
					   | ((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					      & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__condition)))) 
					  | ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__condition))) 
					 | ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					    & (0xffffU 
					       == (0xffffU 
						   & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__result, 0U, 0x10U))))) 
					| ((9U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					   & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__overflow)))) 
				       | ((0xaU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					  & (~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__ir), 6U)))) 
				      | ((0xbU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__stop_flag))) 
				     | ((0xcU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					& (0U != (0xffU 
						  & VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__ir), 0U, 8U))))) 
				    | (((0xdU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					& (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__trace_flag))) 
				       & (0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__interrupt_mask)))) 
				   | ((0xeU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
				      & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__group_0_flag))))
				   ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_0) 
				      + VL_EXTEND_II(9,4, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset)))
				   : ((((0xbU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__prefetch_ir_valid)) 
				       & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__decoder_trap)))
				       ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__decoder_micropc)
				       : ((((0xdU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					    & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__trace_flag))) 
					   & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__interrupt_mask)))
					   ? 0x35U : 
					  (((0xfU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					    & (9U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset)))
					    ? 0x35U
					    : ((((0xfU 
						  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
						 & (1U 
						    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))) 
						& (0U 
						   != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__load_ea)))
					        ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__load_ea)
					        : (
						   ((0xfU 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
						    & (2U 
						       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset)))
						    ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__perform_ea_read)
						    : 
						   (((0xfU 
						      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
						     & (3U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset)))
						     ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__perform_ea_write)
						     : 
						    ((((0xfU 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
						       & (4U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))) 
						      & (0U 
							 != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__save_ea)))
						      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__save_ea)
						      : 
						     ((((0xfU 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
							& (0xeU 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))) 
						       & (0U 
							  != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__load_ea)))
						       ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__load_ea)
						       : 
						      ((((0xfU 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
							 & (0xeU 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))) 
							& (0U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__load_ea)))
						        ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__perform_ea_read)
						        : 
						       (((0xfU 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
							 & (0xfU 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset)))
							 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__perform_ea_write)
							 : 
							(((0xfU 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
							  & (0xbU 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset)))
							  ? 0x23U
							  : 
							 (((0xfU 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
							   & (5U 
							      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset)))
							   ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_1)
							   : 
							  ((((0xfU 
							      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
							     & (0xdU 
								== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))) 
							    & (0U 
							       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__interrupt_mask)))
							    ? 0x35U
							    : 
							   (((((((0xfU 
								  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
								 & (6U 
								    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))) 
								& (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__finished))) 
							       | (((0xfU 
								    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
								   & (7U 
								      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))) 
								  & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__prefetch_ir_valid)))) 
							      | (((0xfU 
								   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
								  & (8U 
								     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))) 
								 & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__prefetch_ir_valid_32)))) 
							     | ((0xbU 
								 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
								& (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__prefetch_ir_valid))))
							     ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_0)
							     : 
							    ((IData)(1U) 
							     + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_0))))))))))))))))))
		      : 0U));
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_microcode_branch::_combo__TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m__4(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_microcode_branch::_combo__TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m__4\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc 
	= (0x1ffU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__reset_n)
		      ? (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__jmp_address_trap) 
			  | (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__jmp_bus_trap))
			  ? 3U : ((((((((((((((((1U 
						 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
						& (0x10U 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__movem_loop))) 
					       | ((2U 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
						  & (~ 
						     VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__movem_reg), 0U)))) 
					      | ((3U 
						  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
						 & (0U 
						    == 
						    (0x3fU 
						     & VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__operand2, 0U, 6U))))) 
					     | ((4U 
						 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
						& (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__alu_signal)))) 
					    | ((5U 
						== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__alu_mult_div_ready))) 
					   | ((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					      & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__condition)))) 
					  | ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__condition))) 
					 | ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					    & (0xffffU 
					       == (0xffffU 
						   & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__result, 0U, 0x10U))))) 
					| ((9U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					   & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__overflow)))) 
				       | ((0xaU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					  & (~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__ir), 6U)))) 
				      | ((0xbU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__stop_flag))) 
				     | ((0xcU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					& (0U != (0xffU 
						  & VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__ir), 0U, 8U))))) 
				    | (((0xdU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					& (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__trace_flag))) 
				       & (0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__interrupt_mask)))) 
				   | ((0xeU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
				      & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__group_0_flag))))
				   ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_0) 
				      + VL_EXTEND_II(9,4, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset)))
				   : ((((0xbU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__prefetch_ir_valid)) 
				       & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__decoder_trap)))
				       ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__decoder_micropc)
				       : ((((0xdU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					    & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__trace_flag))) 
					   & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__interrupt_mask)))
					   ? 0x35U : 
					  (((0xfU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
					    & (9U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset)))
					    ? 0x35U
					    : ((((0xfU 
						  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
						 & (1U 
						    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))) 
						& (0U 
						   != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__load_ea)))
					        ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__load_ea)
					        : (
						   ((0xfU 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
						    & (2U 
						       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset)))
						    ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__perform_ea_read)
						    : 
						   (((0xfU 
						      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
						     & (3U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset)))
						     ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__perform_ea_write)
						     : 
						    ((((0xfU 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
						       & (4U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))) 
						      & (0U 
							 != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__save_ea)))
						      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__save_ea)
						      : 
						     ((((0xfU 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
							& (0xeU 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))) 
						       & (0U 
							  != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__load_ea)))
						       ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__load_ea)
						       : 
						      ((((0xfU 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
							 & (0xeU 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))) 
							& (0U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__load_ea)))
						        ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__perform_ea_read)
						        : 
						       (((0xfU 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
							 & (0xfU 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset)))
							 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__perform_ea_write)
							 : 
							(((0xfU 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
							  & (0xbU 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset)))
							  ? 0x23U
							  : 
							 (((0xfU 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
							   & (5U 
							      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset)))
							   ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_1)
							   : 
							  ((((0xfU 
							      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
							     & (0xdU 
								== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))) 
							    & (0U 
							       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__interrupt_mask)))
							    ? 0x35U
							    : 
							   (((((((0xfU 
								  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
								 & (6U 
								    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))) 
								& (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__finished))) 
							       | (((0xfU 
								    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
								   & (7U 
								      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))) 
								  & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__prefetch_ir_valid)))) 
							      | (((0xfU 
								   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
								  & (8U 
								     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_offset))) 
								 & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__prefetch_ir_valid_32)))) 
							     | ((0xbU 
								 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__branch_control)) 
								& (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__prefetch_ir_valid))))
							     ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_0)
							     : 
							    ((IData)(1U) 
							     + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m.__PVT__micro_pc_0))))))))))))))))))
		      : 0U));
}

void Vcpu_ram_uart_sim_microcode_branch::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_microcode_branch::_ctor_var_reset\n"); );
    // Body
    __PVT__clock = VL_RAND_RESET_I(1);
    __PVT__reset_n = VL_RAND_RESET_I(1);
    __PVT__movem_loop = VL_RAND_RESET_I(5);
    __PVT__movem_reg = VL_RAND_RESET_I(16);
    __PVT__operand2 = VL_RAND_RESET_I(32);
    __PVT__alu_signal = VL_RAND_RESET_I(1);
    __PVT__alu_mult_div_ready = VL_RAND_RESET_I(1);
    __PVT__condition = VL_RAND_RESET_I(1);
    __PVT__result = VL_RAND_RESET_I(32);
    __PVT__overflow = VL_RAND_RESET_I(1);
    __PVT__stop_flag = VL_RAND_RESET_I(1);
    __PVT__ir = VL_RAND_RESET_I(16);
    __PVT__decoder_trap = VL_RAND_RESET_I(8);
    __PVT__trace_flag = VL_RAND_RESET_I(1);
    __PVT__group_0_flag = VL_RAND_RESET_I(1);
    __PVT__interrupt_mask = VL_RAND_RESET_I(3);
    __PVT__load_ea = VL_RAND_RESET_I(9);
    __PVT__perform_ea_read = VL_RAND_RESET_I(9);
    __PVT__perform_ea_write = VL_RAND_RESET_I(9);
    __PVT__save_ea = VL_RAND_RESET_I(9);
    __PVT__decoder_micropc = VL_RAND_RESET_I(9);
    __PVT__prefetch_ir_valid_32 = VL_RAND_RESET_I(1);
    __PVT__prefetch_ir_valid = VL_RAND_RESET_I(1);
    __PVT__jmp_address_trap = VL_RAND_RESET_I(1);
    __PVT__jmp_bus_trap = VL_RAND_RESET_I(1);
    __PVT__finished = VL_RAND_RESET_I(1);
    __PVT__branch_control = VL_RAND_RESET_I(4);
    __PVT__branch_offset = VL_RAND_RESET_I(4);
    __PVT__micro_pc = VL_RAND_RESET_I(9);
    __PVT__micro_pc_0 = VL_RAND_RESET_I(9);
    __PVT__micro_pc_1 = VL_RAND_RESET_I(9);
    __PVT__micro_pc_2 = VL_RAND_RESET_I(9);
    __PVT__micro_pc_3 = VL_RAND_RESET_I(9);
    __Vdly__micro_pc_0 = VL_RAND_RESET_I(9);
    __Vdly__micro_pc_1 = VL_RAND_RESET_I(9);
    __Vdly__micro_pc_2 = VL_RAND_RESET_I(9);
    __Vdly__micro_pc_3 = VL_RAND_RESET_I(9);
}

void Vcpu_ram_uart_sim_microcode_branch::_configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_microcode_branch::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
