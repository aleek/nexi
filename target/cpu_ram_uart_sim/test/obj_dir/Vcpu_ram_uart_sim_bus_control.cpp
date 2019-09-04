// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_ram_uart_sim.h for the primary calling header

#include "Vcpu_ram_uart_sim_bus_control.h" // For This
#include "Vcpu_ram_uart_sim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu_ram_uart_sim_bus_control) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu_ram_uart_sim_bus_control::__Vconfigure(Vcpu_ram_uart_sim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu_ram_uart_sim_bus_control::~Vcpu_ram_uart_sim_bus_control() {
}

//--------------------
// Internal Methods

void Vcpu_ram_uart_sim_bus_control::_initial__TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_bus_control::_initial__TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m__1\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at bus_control.v:105
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__BTE_O = 0U;
    // INITIAL at bus_control.v:61
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__reset_o = 0U;
    // INITIAL at bus_control.v:62
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__blocked_o = 0U;
    // INITIAL at bus_control.v:92
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__interrupt_trap_o = 0U;
    // INITIAL at bus_control.v:87
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__jmp_address_trap_o = 0U;
    // INITIAL at bus_control.v:88
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__jmp_bus_trap_o = 0U;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_bus_control::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_bus_control::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m__2\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp1,95,0,3);
    VL_SIGW(__Vtemp2,95,0,3);
    VL_SIGW(__Vtemp3,95,0,3);
    VL_SIGW(__Vtemp4,95,0,3);
    VL_SIGW(__Vtemp5,95,0,3);
    VL_SIGW(__Vtemp6,95,0,3);
    VL_SIGW(__Vtemp7,95,0,3);
    VL_SIGW(__Vtemp8,95,0,3);
    VL_SIGW(__Vtemp9,95,0,3);
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__last_interrupt_mask 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__last_interrupt_mask;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_mask_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__interrupt_mask_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__reset_counter 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__reset_counter;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_80_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_valid_80_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__saved_pc_change 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__saved_pc_change;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fc_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__fc_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CTI_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__CTI_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SGL_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__SGL_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__BLK_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__BLK_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__RMW_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__RMW_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__reset_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__reset_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__blocked_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__blocked_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__data_read_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__data_read_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fault_address_state_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__fault_address_state_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__rw_state_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__rw_state_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fc_state_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__fc_state_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_trap_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__interrupt_trap_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__finished_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__finished_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_32_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_valid_32_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__jmp_address_trap_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__jmp_address_trap_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__jmp_bus_trap_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__jmp_bus_trap_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__WE_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__WE_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__CYC_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SEL_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__SEL_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__DAT_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__STB_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_valid_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__ADR_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ADR_O;
    VL_ASSIGN_W(80,vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_o, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_o);
    // ALWAYS at bus_control.v:158
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__reset_n) {
	if ((((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ipl_i) 
	      > (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ipm_i)) 
	     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__do_interrupt_i)))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_mask_o 
		= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ipl_i;
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__last_interrupt_mask 
		= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__interrupt_mask_o;
	} else {
	    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__do_interrupt_i) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_mask_o 
		    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__last_interrupt_mask;
	    } else {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_mask_o = 0U;
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__last_interrupt_mask = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_mask_o = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__last_interrupt_mask = 0U;
    }
    // ALWAYS at bus_control.v:178
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__reset_n) {
	if (((((((((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state)) 
		   | (1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) 
		  | (2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) 
		 | (3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) 
		| (0xbU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) 
	       | (0xcU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) 
	      | (0xdU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) 
	     | (0xeU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state)))) {
	    if ((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__finished_o = 0U;
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__jmp_address_trap_o = 0U;
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__jmp_bus_trap_o = 0U;
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__reset_o = 0U;
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__blocked_o = 0U;
		if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__do_blocked_i) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__blocked_o = 1U;
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 2U;
		} else {
		    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__do_reset_i) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__reset_o = 1U;
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__reset_counter = 0x7cU;
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 1U;
		    } else {
			if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__do_read_i) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__WE_O = 0U;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fc_o 
				= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__supervisor_i)
				    ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_type_i)
				        ? 6U : 5U) : 
				   ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_type_i)
				     ? 2U : 1U));
			    if (VL_UNLIKELY((1U & (
						   VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U) 
						   & (~ 
						      VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 0U)))))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fault_address_state_o 
				    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__rw_state_o = 1U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fc_state_o 
				    = ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__supervisor_i)
				        ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_type_i)
					    ? 6U : 5U)
				        : ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_type_i)
					    ? 2U : 1U));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_trap_o = 3U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__jmp_address_trap_o = 1U;
				VL_WRITEF("ADDRESS TRAP\n");
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 7U;
			    } else {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 1U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__ADR_O 
				    = (0x3fffffffU 
				       & VL_SEL_IIII(30,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 2U, 0x1eU));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SEL_O 
				    = ((VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 0U) 
					& (0U == (3U 
						  & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))))
				        ? 8U : ((VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 0U) 
						 & (1U 
						    == 
						    (3U 
						     & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))))
						 ? 4U
						 : 
						((VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 0U) 
						  & (2U 
						     == 
						     (3U 
						      & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))))
						  ? 2U
						  : 
						 ((VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 0U) 
						   & (3U 
						      == 
						      (3U 
						       & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))))
						   ? 1U
						   : 
						  ((1U 
						    & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 1U) 
						       & (~ 
							  VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 1U))))
						    ? 0xcU
						    : 
						   ((1U 
						     & ((~ 
							 VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 0U)) 
							& VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 1U)))
						     ? 3U
						     : 0xfU))))));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 1U;
				if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__read_modify_write_i) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SGL_O = 0U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__BLK_O = 0U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__RMW_O = 1U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CTI_O = 7U;
				} else {
				    if (((2U == (3U 
						 & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))) 
					 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 2U))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SGL_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__BLK_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__RMW_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CTI_O = 2U;
				    } else {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SGL_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__BLK_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__RMW_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CTI_O = 7U;
				    }
				}
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 4U;
			    }
			} else {
			    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__do_write_i) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__WE_O = 1U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fc_o 
				    = ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__supervisor_i)
				        ? 5U : 1U);
				if (VL_UNLIKELY((1U 
						 & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U) 
						    & (~ 
						       VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 0U)))))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fault_address_state_o 
					= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__rw_state_o = 0U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fc_state_o 
					= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__supervisor_i)
					    ? 5U : 1U);
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_trap_o = 3U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__jmp_address_trap_o = 1U;
				    VL_WRITEF("ADDRESS TRAP\n");
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 7U;
				} else {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 1U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__ADR_O 
					= (0x3fffffffU 
					   & VL_SEL_IIII(30,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 2U, 0x1eU));
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 1U;
				    if (((2U == (3U 
						 & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))) 
					 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 2U))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__DAT_O 
					    = VL_EXTEND_II(32,16, 
							   (0xffffU 
							    & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__data_write_i, 0x10U, 0x10U)));
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SEL_O = 3U;
				    } else {
					if (((0U == 
					      (3U & 
					       VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))) 
					     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 2U))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__DAT_O 
						= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__data_write_i;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SEL_O = 0xfU;
					} else {
					    if (((2U 
						  == 
						  (3U 
						   & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))) 
						 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 1U))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__DAT_O 
						    = 
						    VL_EXTEND_II(32,16, 
								 (0xffffU 
								  & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__data_write_i, 0U, 0x10U)));
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SEL_O = 3U;
					    } else {
						if (
						    ((0U 
						      == 
						      (3U 
						       & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))) 
						     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 1U))) {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__DAT_O 
							= 
							VL_CONCAT_III(32,16,16, 
								      (0xffffU 
								       & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__data_write_i, 0U, 0x10U)), 0U);
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SEL_O = 0xcU;
						} else {
						    if (
							((3U 
							  == 
							  (3U 
							   & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))) 
							 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 0U))) {
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__DAT_O 
							    = 
							    VL_EXTEND_II(32,8, 
									 (0xffU 
									  & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__data_write_i, 0U, 8U)));
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SEL_O = 1U;
						    } else {
							if (
							    ((2U 
							      == 
							      (3U 
							       & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))) 
							     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 0U))) {
							    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__DAT_O 
								= 
								VL_CONCAT_III(32,24,8, 
									      VL_EXTEND_II(24,8, 
										(0xffU 
										& VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__data_write_i, 0U, 8U))), 0U);
							    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SEL_O = 2U;
							} else {
							    if (
								((1U 
								  == 
								  (3U 
								   & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))) 
								 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 0U))) {
								vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__DAT_O 
								    = 
								    VL_CONCAT_III(32,16,16, 
										VL_EXTEND_II(16,8, 
										(0xffU 
										& VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__data_write_i, 0U, 8U))), 0U);
								vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SEL_O = 4U;
							    } else {
								if (
								    ((0U 
								      == 
								      (3U 
								       & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))) 
								     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 0U))) {
								    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__DAT_O 
									= 
									VL_CONCAT_III(32,8,24, 
										(0xffU 
										& VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__data_write_i, 0U, 8U)), 0U);
								    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SEL_O = 8U;
								}
							    }
							}
						    }
						}
					    }
					}
				    }
				    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__read_modify_write_i) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SGL_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__BLK_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__RMW_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CTI_O = 7U;
				    } else {
					if (((2U == 
					      (3U & 
					       VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))) 
					     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 2U))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SGL_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__BLK_O = 1U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__RMW_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CTI_O = 2U;
					} else {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SGL_O = 1U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__BLK_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__RMW_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CTI_O = 7U;
					}
				    }
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 8U;
				}
			    } else {
				if ((1U & ((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_valid_o)) 
					   | (0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_change_i))))) {
				    if ((1U & (((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_valid_o)) 
						| (2U 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_change_i))) 
					       | (3U 
						  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_change_i))))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_32_o = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_o = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_80_o = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 0xbU;
				    } else {
					if (((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_valid_80_o)) 
					     & (1U 
						== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_change_i)))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_32_o = 1U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_o = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_80_o = 0U;
					    VL_CONCAT_WQI(80,64,16, __Vtemp1, 
							  VL_SEL_QWII(64,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_o, 0U, 0x40U), 0U);
					    VL_ASSIGN_W(80,vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_o, __Vtemp1);
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 0xbU;
					} else {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_32_o = 1U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_o = 1U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_80_o = 0U;
					    VL_CONCAT_WQI(80,64,16, __Vtemp2, 
							  VL_SEL_QWII(64,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_o, 0U, 0x40U), 0U);
					    VL_ASSIGN_W(80,vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_o, __Vtemp2);
					}
				    }
				} else {
				    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__do_interrupt_i) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__ADR_O 
					    = VL_CONCAT_III(30,27,3, 0x7ffffffU, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__last_interrupt_mask));
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SEL_O = 0xfU;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__WE_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SGL_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__BLK_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__RMW_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CTI_O = 7U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fc_o = 7U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 3U;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__reset_counter 
			= (0xffU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__reset_counter) 
				    - (IData)(1U)));
		    if ((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__reset_counter))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__finished_o = 1U;
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 7U;
		    }
		} else {
		    if ((2U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) {
			if ((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) {
			    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ACK_I) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_trap_o 
				    = (0xffU & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I, 0U, 8U));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__finished_o = 1U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 7U;
			    } else {
				if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__RTY_I) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_trap_o 
					= (0xffU & 
					   ((IData)(0x18U) 
					    + VL_EXTEND_II(8,3, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__interrupt_mask_o))));
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__finished_o = 1U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 7U;
				} else {
				    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ERR_I) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_trap_o = 0x18U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__finished_o = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 7U;
				    }
				}
			    }
			} else {
			    if ((0xbU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__WE_O = 0U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fc_o 
				    = ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__supervisor_i)
				        ? 6U : 2U);
				if (VL_UNLIKELY((1U 
						 & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_i, 0U)))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_32_o = 1U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_o = 1U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_80_o = 1U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fault_address_state_o 
					= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_i;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__rw_state_o = 1U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fc_state_o 
					= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__supervisor_i)
					    ? 6U : 2U);
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_trap_o = 3U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__jmp_address_trap_o = 1U;
				    VL_WRITEF("ADDRESS TRAP\n");
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 7U;
				} else {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 1U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__ADR_O 
					= (0x3fffffffU 
					   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_valid_32_o)
					       ? VL_SEL_IIII(30,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_i_plus_6, 2U, 0x1eU)
					       : VL_SEL_IIII(30,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_i, 2U, 0x1eU)));
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SEL_O 
					= (((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_valid_32_o)) 
					    & (2U == 
					       (3U 
						& VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_i, 0U, 2U))))
					    ? 3U : 0xfU);
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 1U;
				    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_valid_32_o) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SGL_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__BLK_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__RMW_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CTI_O = 7U;
				    } else {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SGL_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__BLK_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__RMW_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CTI_O = 2U;
				    }
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__saved_pc_change 
					= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_change_i;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_32_o = 0U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 0xcU;
				}
			    } else {
				if ((0xcU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) {
				    if ((0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_change_i))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__saved_pc_change 
					    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_change_i;
				    }
				    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ACK_I) {
					if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__CTI_O))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__ADR_O 
						= (0x3fffffffU 
						   & VL_SEL_IIII(30,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_i_plus_4, 2U, 0x1eU));
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SEL_O = 0xfU;
					    if ((2U 
						 == 
						 (3U 
						  & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_i, 0U, 2U)))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SGL_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__BLK_O = 1U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__RMW_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CTI_O = 2U;
					    } else {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SGL_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__BLK_O = 1U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__RMW_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CTI_O = 7U;
					    }
					    if ((2U 
						 == 
						 (3U 
						  & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_i, 0U, 2U)))) {
						VL_CONCAT_WIQ(80,16,64, __Vtemp3, 
							      (0xffffU 
							       & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I, 0U, 0x10U)), VL_ULL(0));
						VL_ASSIGN_W(80,vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_o, __Vtemp3);
					    } else {
						VL_CONCAT_WIQ(80,32,48, __Vtemp4, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I, VL_ULL(0));
						VL_ASSIGN_W(80,vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_o, __Vtemp4);
					    }
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 0xeU;
					} else {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
					    if ((((
						   (2U 
						    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__saved_pc_change)) 
						   | (3U 
						      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__saved_pc_change))) 
						  | (2U 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_change_i))) 
						 | (3U 
						    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_change_i)))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_32_o = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_o = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_80_o = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 0xbU;
					    } else {
						if (
						    ((1U 
						      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__saved_pc_change)) 
						     | (1U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_change_i)))) {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_32_o = 1U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_o = 1U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_80_o = 0U;
						    VL_CONCAT_WQI(80,64,16, __Vtemp5, 
								  VL_CONCAT_QII(64,32,32, 
										VL_SEL_IWII(32,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_o, 0x20U, 0x20U), vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I), 0U);
						    VL_ASSIGN_W(80,vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_o, __Vtemp5);
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 0U;
						} else {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_32_o = 1U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_o = 1U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_80_o = 1U;
						    VL_CONCAT_WQI(80,48,32, __Vtemp6, 
								  (VL_ULL(0xffffffffffff) 
								   & VL_SEL_QWII(48,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_o, 0x20U, 0x30U)), vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I);
						    VL_ASSIGN_W(80,vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_o, __Vtemp6);
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 0U;
						}
					    }
					}
				    } else {
					if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__RTY_I) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 0xdU;
					} else {
					    if (VL_UNLIKELY(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ERR_I)) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
						VL_WRITEF("BUS TRAP\n");
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fault_address_state_o 
						    = 
						    VL_CONCAT_III(32,30,2, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ADR_O, 0U);
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__rw_state_o 
						    = 
						    (1U 
						     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__WE_O)));
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fc_state_o 
						    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__fc_o;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_trap_o = 2U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__jmp_bus_trap_o = 1U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 7U;
					    }
					}
				    }
				} else {
				    if ((0xdU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 0xcU;
				    } else {
					if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ACK_I) {
					    if ((2U 
						 == 
						 (3U 
						  & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_i, 0U, 2U)))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__ADR_O 
						    = 
						    (0x3fffffffU 
						     & VL_SEL_IIII(30,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_i_plus_6, 2U, 0x1eU));
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SEL_O = 0xfU;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SGL_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__BLK_O = 1U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__RMW_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CTI_O = 7U;
						VL_CONCAT_WIQ(80,16,64, __Vtemp7, 
							      (0xffffU 
							       & VL_SEL_IWII(16,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_o, 0x40U, 0x10U)), 
							      VL_CONCAT_QII(64,32,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I, 0U));
						VL_ASSIGN_W(80,vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_o, __Vtemp7);
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 0x10U;
					    } else {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
						VL_CONCAT_WQI(80,64,16, __Vtemp8, 
							      VL_CONCAT_QII(64,32,32, 
									    VL_SEL_IWII(32,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_o, 0x30U, 0x20U), vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I), 0U);
						VL_ASSIGN_W(80,vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_o, __Vtemp8);
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_32_o = 1U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_o = 1U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_80_o = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 0U;
					    }
					} else {
					    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__RTY_I) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 0xfU;
					    } else {
						if (VL_UNLIKELY(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ERR_I)) {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fault_address_state_o 
							= 
							VL_CONCAT_III(32,30,2, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ADR_O, 0U);
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__rw_state_o 
							= 
							(1U 
							 & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__WE_O)));
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fc_state_o 
							= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__fc_o;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_trap_o = 2U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__jmp_bus_trap_o = 1U;
						    VL_WRITEF("BUS TRAP\n");
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 7U;
						}
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
	    if (((((((((0xfU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state)) 
		       | (0x10U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) 
		      | (0x11U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) 
		     | (4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) 
		    | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) 
		   | (6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) 
		  | (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) 
		 | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state)))) {
		if ((0xfU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 1U;
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 1U;
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 0xeU;
		} else {
		    if ((0x10U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) {
			if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ACK_I) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
			    VL_CONCAT_WQI(80,48,32, __Vtemp9, 
					  (VL_ULL(0xffffffffffff) 
					   & VL_SEL_QWII(48,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_o, 0x20U, 0x30U)), vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I);
			    VL_ASSIGN_W(80,vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_o, __Vtemp9);
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_32_o = 1U;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_o = 1U;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_80_o = 1U;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 0U;
			} else {
			    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__RTY_I) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 0x11U;
			    } else {
				if (VL_UNLIKELY(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ERR_I)) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fault_address_state_o 
					= VL_CONCAT_III(32,30,2, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ADR_O, 0U);
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__rw_state_o 
					= (1U & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__WE_O)));
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fc_state_o 
					= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__fc_o;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_trap_o = 2U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__jmp_bus_trap_o = 1U;
				    VL_WRITEF("BUS TRAP\n");
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 7U;
				}
			    }
			}
		    } else {
			if ((0x11U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 1U;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 1U;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 0x10U;
			} else {
			    if ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) {
				if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ACK_I) {
				    if (((2U == (3U 
						 & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))) 
					 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 2U))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__ADR_O 
					    = (0x3fffffffU 
					       & VL_SEL_IIII(30,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i_plus_4, 2U, 0x1eU));
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SEL_O = 0xcU;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CTI_O = 7U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__data_read_o 
					    = VL_CONCAT_III(32,16,16, 
							    (0xffffU 
							     & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I, 0U, 0x10U)), 0U);
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 5U;
				    } else {
					if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__read_modify_write_i) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 1U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
					} else {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
					}
					if (((0U == 
					      (3U & 
					       VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))) 
					     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 2U))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__data_read_o 
						= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I;
					} else {
					    if (((2U 
						  == 
						  (3U 
						   & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))) 
						 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 1U))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__data_read_o 
						    = 
						    VL_CONCAT_III(32,16,16, 
								  (0xffffU 
								   & VL_REPLICATE_IOI(16,1,32,
										(1U 
										& VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I, 0xfU)), 0x10U)), 
								  (0xffffU 
								   & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I, 0U, 0x10U)));
					    } else {
						if (
						    ((0U 
						      == 
						      (3U 
						       & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))) 
						     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 1U))) {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__data_read_o 
							= 
							VL_CONCAT_III(32,16,16, 
								      (0xffffU 
								       & VL_REPLICATE_IOI(16,1,32,
										(1U 
										& VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I, 0x1fU)), 0x10U)), 
								      (0xffffU 
								       & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I, 0x10U, 0x10U)));
						} else {
						    if (
							((3U 
							  == 
							  (3U 
							   & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))) 
							 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 0U))) {
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__data_read_o 
							    = 
							    VL_CONCAT_III(32,24,8, 
									  (0xffffffU 
									   & VL_REPLICATE_IOI(24,1,32,
										(1U 
										& VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I, 7U)), 0x18U)), 
									  (0xffU 
									   & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I, 0U, 8U)));
						    } else {
							if (
							    ((2U 
							      == 
							      (3U 
							       & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))) 
							     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 0U))) {
							    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__data_read_o 
								= 
								VL_CONCAT_III(32,24,8, 
									      (0xffffffU 
									       & VL_REPLICATE_IOI(24,1,32,
										(1U 
										& VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I, 0xfU)), 0x18U)), 
									      (0xffU 
									       & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I, 8U, 8U)));
							} else {
							    if (
								((1U 
								  == 
								  (3U 
								   & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))) 
								 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 0U))) {
								vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__data_read_o 
								    = 
								    VL_CONCAT_III(32,24,8, 
										(0xffffffU 
										& VL_REPLICATE_IOI(24,1,32,
										(1U 
										& VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I, 0x17U)), 0x18U)), 
										(0xffU 
										& VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I, 0x10U, 8U)));
							    } else {
								if (
								    ((0U 
								      == 
								      (3U 
								       & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))) 
								     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 0U))) {
								    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__data_read_o 
									= 
									VL_CONCAT_III(32,24,8, 
										(0xffffffU 
										& VL_REPLICATE_IOI(24,1,32,
										(1U 
										& VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I, 0x1fU)), 0x18U)), 
										(0xffU 
										& VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I, 0x18U, 8U)));
								}
							    }
							}
						    }
						}
					    }
					}
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__finished_o = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 7U;
				    }
				} else {
				    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__RTY_I) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 0U;
				    } else {
					if (VL_UNLIKELY(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ERR_I)) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fault_address_state_o 
						= VL_CONCAT_III(32,30,2, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ADR_O, 0U);
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__rw_state_o 
						= (1U 
						   & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__WE_O)));
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fc_state_o 
						= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__fc_o;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_trap_o = 2U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__jmp_bus_trap_o = 1U;
					    VL_WRITEF("BUS TRAP\n");
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 7U;
					}
				    }
				}
			    } else {
				if ((5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) {
				    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ACK_I) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__data_read_o 
					    = VL_CONCAT_III(32,16,16, 
							    (0xffffU 
							     & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__data_read_o, 0x10U, 0x10U)), 
							    (0xffffU 
							     & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_I, 0x10U, 0x10U)));
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__finished_o = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 7U;
				    } else {
					if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__RTY_I) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 6U;
					} else {
					    if (VL_UNLIKELY(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ERR_I)) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fault_address_state_o 
						    = 
						    VL_CONCAT_III(32,30,2, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ADR_O, 0U);
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__rw_state_o 
						    = 
						    (1U 
						     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__WE_O)));
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fc_state_o 
						    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__fc_o;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_trap_o = 2U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__jmp_bus_trap_o = 1U;
						VL_WRITEF("BUS TRAP\n");
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 7U;
					    }
					}
				    }
				} else {
				    if ((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 5U;
				    } else {
					if ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__jmp_address_trap_o = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__jmp_bus_trap_o = 0U;
					    if ((1U 
						 & ((((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__do_read_i)) 
						      & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__do_write_i))) 
						     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__do_interrupt_i))) 
						    & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__do_reset_i))))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__finished_o = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 0U;
					    }
					} else {
					    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ACK_I) {
						if (
						    ((2U 
						      == 
						      (3U 
						       & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i, 0U, 2U))) 
						     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__size_i), 2U))) {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__ADR_O 
							= 
							(0x3fffffffU 
							 & VL_SEL_IIII(30,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i_plus_4, 2U, 0x1eU));
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__DAT_O 
							= 
							VL_CONCAT_III(32,16,16, 
								      (0xffffU 
								       & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__data_write_i, 0U, 0x10U)), 0U);
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SEL_O = 0xcU;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CTI_O = 7U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 9U;
						} else {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__finished_o = 1U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 7U;
						}
					    } else {
						if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__RTY_I) {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 0U;
						} else {
						    if (VL_UNLIKELY(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ERR_I)) {
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fault_address_state_o 
							    = 
							    VL_CONCAT_III(32,30,2, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ADR_O, 0U);
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__rw_state_o 
							    = 
							    (1U 
							     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__WE_O)));
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fc_state_o 
							    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__fc_o;
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_trap_o = 2U;
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__jmp_bus_trap_o = 1U;
							VL_WRITEF("BUS TRAP\n");
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 7U;
						    }
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
		if ((9U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) {
		    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ACK_I) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__finished_o = 1U;
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 7U;
		    } else {
			if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__RTY_I) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 0xaU;
			} else {
			    if (VL_UNLIKELY(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ERR_I)) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fault_address_state_o 
				    = VL_CONCAT_III(32,30,2, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ADR_O, 0U);
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__rw_state_o 
				    = (1U & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__WE_O)));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fc_state_o 
				    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__fc_o;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_trap_o = 2U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__jmp_bus_trap_o = 1U;
				VL_WRITEF("BUS TRAP\n");
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 7U;
			    }
			}
		    }
		} else {
		    if ((0xaU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 1U;
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 1U;
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 9U;
		    }
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_trap_o = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_o = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_32_o = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_80_o = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__jmp_address_trap_o = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__jmp_bus_trap_o = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__ADR_O = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__DAT_O = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SEL_O = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__WE_O = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SGL_O = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__BLK_O = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__RMW_O = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CTI_O = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fc_o = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__reset_o = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__blocked_o = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__data_read_o = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__finished_o = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__rw_state_o = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fc_state_o = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fault_address_state_o = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__saved_pc_change = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__reset_counter = 0U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__current_state 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__current_state;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__reset_counter 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__reset_counter;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__last_interrupt_mask 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__last_interrupt_mask;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_valid_80_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_80_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__saved_pc_change 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__saved_pc_change;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__CTI_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CTI_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__fc_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fc_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__SGL_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SGL_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__BLK_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__BLK_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__RMW_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__RMW_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__reset_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__reset_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__blocked_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__blocked_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__data_read_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__data_read_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__fault_address_state_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fault_address_state_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__rw_state_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__rw_state_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__fc_state_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__fc_state_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__interrupt_trap_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_trap_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__finished_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__finished_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__jmp_address_trap_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__jmp_address_trap_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__jmp_bus_trap_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__jmp_bus_trap_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_valid_32_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_32_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__WE_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__WE_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__CYC_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__CYC_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__SEL_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__SEL_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__DAT_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__DAT_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__STB_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__STB_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_valid_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_valid_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__interrupt_mask_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__interrupt_mask_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__ADR_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__ADR_O;
    VL_ASSIGN_W(80,vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_o, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__Vdly__prefetch_ir_o);
}

void Vcpu_ram_uart_sim_bus_control::_initial__TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_bus_control::_initial__TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m__3\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at bus_control.v:79
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_valid_80_o = 0U;
    // INITIAL at bus_control.v:115
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__saved_pc_change = 0U;
    // INITIAL at bus_control.v:77
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_valid_32_o = 0U;
    // INITIAL at bus_control.v:93
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__interrupt_mask_o = 0U;
    // INITIAL at bus_control.v:78
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__prefetch_ir_valid_o = 0U;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_bus_control::_combo__TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m__4(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_bus_control::_combo__TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m__4\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i_plus_4 
	= ((IData)(4U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i);
}

void Vcpu_ram_uart_sim_bus_control::_settle__TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m__5(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_bus_control::_settle__TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m__5\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i_plus_4 
	= ((IData)(4U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__address_i);
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_bus_control::_combo__TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m__6(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_bus_control::_combo__TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m__6\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_i_plus_6 
	= ((IData)(6U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_i);
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_i_plus_4 
	= ((IData)(4U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_i);
}

void Vcpu_ram_uart_sim_bus_control::_settle__TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m__7(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_bus_control::_settle__TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m__7\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_i_plus_6 
	= ((IData)(6U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_i);
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_i_plus_4 
	= ((IData)(4U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m.__PVT__pc_i);
}

void Vcpu_ram_uart_sim_bus_control::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_bus_control::_ctor_var_reset\n"); );
    // Body
    __PVT__CLK_I = VL_RAND_RESET_I(1);
    __PVT__reset_n = VL_RAND_RESET_I(1);
    __PVT__CYC_O = VL_RAND_RESET_I(1);
    __PVT__ADR_O = VL_RAND_RESET_I(30);
    __PVT__DAT_O = VL_RAND_RESET_I(32);
    __PVT__DAT_I = VL_RAND_RESET_I(32);
    __PVT__SEL_O = VL_RAND_RESET_I(4);
    __PVT__STB_O = VL_RAND_RESET_I(1);
    __PVT__WE_O = VL_RAND_RESET_I(1);
    __PVT__ACK_I = VL_RAND_RESET_I(1);
    __PVT__ERR_I = VL_RAND_RESET_I(1);
    __PVT__RTY_I = VL_RAND_RESET_I(1);
    __PVT__SGL_O = VL_RAND_RESET_I(1);
    __PVT__BLK_O = VL_RAND_RESET_I(1);
    __PVT__RMW_O = VL_RAND_RESET_I(1);
    __PVT__CTI_O = VL_RAND_RESET_I(3);
    __PVT__BTE_O = VL_RAND_RESET_I(2);
    __PVT__fc_o = VL_RAND_RESET_I(3);
    __PVT__ipl_i = VL_RAND_RESET_I(3);
    __PVT__reset_o = VL_RAND_RESET_I(1);
    __PVT__blocked_o = VL_RAND_RESET_I(1);
    __PVT__supervisor_i = VL_RAND_RESET_I(1);
    __PVT__ipm_i = VL_RAND_RESET_I(3);
    __PVT__size_i = VL_RAND_RESET_I(3);
    __PVT__address_i = VL_RAND_RESET_I(32);
    __PVT__address_type_i = VL_RAND_RESET_I(1);
    __PVT__read_modify_write_i = VL_RAND_RESET_I(1);
    __PVT__data_write_i = VL_RAND_RESET_I(32);
    __PVT__data_read_o = VL_RAND_RESET_I(32);
    __PVT__pc_i = VL_RAND_RESET_I(32);
    __PVT__pc_change_i = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(80,__PVT__prefetch_ir_o);
    __PVT__prefetch_ir_valid_32_o = VL_RAND_RESET_I(1);
    __PVT__prefetch_ir_valid_o = VL_RAND_RESET_I(1);
    __PVT__prefetch_ir_valid_80_o = VL_RAND_RESET_I(1);
    __PVT__do_reset_i = VL_RAND_RESET_I(1);
    __PVT__do_blocked_i = VL_RAND_RESET_I(1);
    __PVT__do_read_i = VL_RAND_RESET_I(1);
    __PVT__do_write_i = VL_RAND_RESET_I(1);
    __PVT__do_interrupt_i = VL_RAND_RESET_I(1);
    __PVT__jmp_address_trap_o = VL_RAND_RESET_I(1);
    __PVT__jmp_bus_trap_o = VL_RAND_RESET_I(1);
    __PVT__finished_o = VL_RAND_RESET_I(1);
    __PVT__interrupt_trap_o = VL_RAND_RESET_I(8);
    __PVT__interrupt_mask_o = VL_RAND_RESET_I(3);
    __PVT__rw_state_o = VL_RAND_RESET_I(1);
    __PVT__fc_state_o = VL_RAND_RESET_I(3);
    __PVT__fault_address_state_o = VL_RAND_RESET_I(32);
    __PVT__pc_i_plus_6 = VL_RAND_RESET_I(32);
    __PVT__pc_i_plus_4 = VL_RAND_RESET_I(32);
    __PVT__address_i_plus_4 = VL_RAND_RESET_I(32);
    __PVT__saved_pc_change = VL_RAND_RESET_I(2);
    __PVT__current_state = VL_RAND_RESET_I(5);
    __PVT__reset_counter = VL_RAND_RESET_I(8);
    __PVT__last_interrupt_mask = VL_RAND_RESET_I(3);
    __Vdly__interrupt_mask_o = VL_RAND_RESET_I(3);
    __Vdly__last_interrupt_mask = VL_RAND_RESET_I(3);
    __Vdly__finished_o = VL_RAND_RESET_I(1);
    __Vdly__jmp_address_trap_o = VL_RAND_RESET_I(1);
    __Vdly__jmp_bus_trap_o = VL_RAND_RESET_I(1);
    __Vdly__reset_o = VL_RAND_RESET_I(1);
    __Vdly__blocked_o = VL_RAND_RESET_I(1);
    __Vdly__current_state = VL_RAND_RESET_I(5);
    __Vdly__reset_counter = VL_RAND_RESET_I(8);
    __Vdly__WE_O = VL_RAND_RESET_I(1);
    __Vdly__fc_o = VL_RAND_RESET_I(3);
    __Vdly__fault_address_state_o = VL_RAND_RESET_I(32);
    __Vdly__rw_state_o = VL_RAND_RESET_I(1);
    __Vdly__fc_state_o = VL_RAND_RESET_I(3);
    __Vdly__interrupt_trap_o = VL_RAND_RESET_I(8);
    __Vdly__CYC_O = VL_RAND_RESET_I(1);
    __Vdly__ADR_O = VL_RAND_RESET_I(30);
    __Vdly__SEL_O = VL_RAND_RESET_I(4);
    __Vdly__STB_O = VL_RAND_RESET_I(1);
    __Vdly__SGL_O = VL_RAND_RESET_I(1);
    __Vdly__BLK_O = VL_RAND_RESET_I(1);
    __Vdly__RMW_O = VL_RAND_RESET_I(1);
    __Vdly__CTI_O = VL_RAND_RESET_I(3);
    __Vdly__DAT_O = VL_RAND_RESET_I(32);
    __Vdly__prefetch_ir_valid_32_o = VL_RAND_RESET_I(1);
    __Vdly__prefetch_ir_valid_o = VL_RAND_RESET_I(1);
    __Vdly__prefetch_ir_valid_80_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80,__Vdly__prefetch_ir_o);
    __Vdly__saved_pc_change = VL_RAND_RESET_I(2);
    __Vdly__data_read_o = VL_RAND_RESET_I(32);
}

void Vcpu_ram_uart_sim_bus_control::_configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_bus_control::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
